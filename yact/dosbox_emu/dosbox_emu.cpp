// dosbox_emu.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


#include <windows.h>
#include <stdarg.h>
#include "dosbox.h"
#include "debug.h"
#include "cpu.h"
#include "video.h"
#include "pic.h"
#include "cpu.h"
#include "callback.h"
#include "inout.h"
#include "mixer.h"
#include "dos_inc.h"
#include "setup.h"
#include "cross.h"
#include "programs.h"
#include "support.h"
#include "mapper.h"
#include "dbcontrol.h"
#include "paging.h"
#include <stdarg.h>
#include <classes.h>
#include <peldr.h>
#include <util.h>
#define EMU_EXPORT __declspec(dllexport)
#include <x86emul.h>
#include <callbacks.h>
#ifdef _DEBUG
#include <crtdbg.h>
#endif
#ifndef _ARM_
//#include <D:\Program Files (x86)\Visual Leak Detector\include\vld.h>
#endif

static LoopHandler * loop;
Bitu PIC_IRQCheck=0;
Bitu PIC_Ticks=0;
Config * control=0;

typedef DWORD __fastcall func(DWORD*);

void GFX_SetTitle(Bit32s cycles ,Bits frameskip,bool paused)
{
//	printf("cycles=%d, frameskip=%d, paused=%d\n",cycles,frameskip,paused);
}

void MAPPER_AddHandler(MAPPER_Handler * handler,MapKeys key,Bitu mods,char const * const eventname,char const * const buttonname)
{
}

PhysPt GetFSBase()
{
	return (PhysPt)PeLdrGetCurrentTeb();
}

bool DoOut=false;

static Bitu Normal_Loop(void) {
	Bits ret;
	while (CPU_Cycles>0) {
#ifdef _DEBUG
		if(DoOut)
		{
			printf("EIP=%08X: %02X %02X %02X %02X - EAX=%08X, EBX=%08X, ECX=%08X, EDX=%08X, ESI=%08X, EDI=%08X, EBP=%08X, ESP=%08X\n",reg_eip,((BYTE*)reg_eip)[0],((BYTE*)reg_eip)[1],((BYTE*)reg_eip)[2],((BYTE*)reg_eip)[3],reg_eax,reg_ebx,reg_ecx,reg_edx,reg_esi,reg_edi,reg_ebp,reg_esp);
			LogPrint("EIP=%08X: %02X %02X %02X %02X - EAX=%08X, EBX=%08X, ECX=%08X, EDX=%08X, ESI=%08X, EDI=%08X, EBP=%08X, ESP=%08X\n",reg_eip,((BYTE*)reg_eip)[0],((BYTE*)reg_eip)[1],((BYTE*)reg_eip)[2],((BYTE*)reg_eip)[3],reg_eax,reg_ebx,reg_ecx,reg_edx,reg_esi,reg_edi,reg_ebp,reg_esp);
		}
#endif

		ret=(*cpudecoder)();
		if (GCC_UNLIKELY(ret<0)) return 1;
		if (ret>0) {
			Bitu blah=(*CallBack_Handlers[ret])();
			if (GCC_UNLIKELY(blah)) return blah;
		}
	}
	return 0;
}

void DOSBOX_SetNormalLoop() {
        loop=Normal_Loop;
}

void GFX_ShowMsg(char const *fmt,...)
{
	va_list va;
	va_start(va,fmt);
	vprintf(fmt,va);
}

void IO_WriteB(Bitu port,Bitu val) {
	printf("WriteB %d to %d\n",val,port);
}
void IO_WriteW(Bitu port,Bitu val) {
	printf("WriteW %d to %d\n",val,port);
}
void IO_WriteD(Bitu port,Bitu val) {
	printf("WriteD %d to %d\n",val,port);
}

Bitu IO_ReadB(Bitu port) {
	printf("ReadB %d\n",port);
	return 0;
}
Bitu IO_ReadW(Bitu port) {
	printf("ReadW %d\n",port);
	return 0;
}

DWORD GetHookAddress(char* Dll, char*FuncName)
{
	char DllPath[1024];
	char Buff[1024];
	strcpy(DllPath,PeLdrGetSystemDirectoryA());
	int tmp=strlen(DllPath);
	strcpy(DllPath+tmp-2,"NT\\");
	strcat(DllPath,Dll);
	if((DWORD)FuncName>65545)
	{
#ifdef _ARM_
		sprintf(Buff,"yact_%s",FuncName);
#else
		sprintf(Buff,"@yact_%s@4",FuncName);
#endif
	} else
	{
#ifdef _ARM_
		sprintf(Buff,"yact_Ord%",(int)FuncName);
#else
		sprintf(Buff,"@yact_Ord%d4",(int)FuncName);
#endif
	}
	HMODULE H=LoadLibraryA(DllPath);
	if(H==0)
	{
#ifdef _DEBUG
		printf("Error %d loading '%s'\n",GetLastError(),Dll);
#endif
		LogErr("Error %d loading '%s'\n",GetLastError(),Dll);
	}
#ifdef _DEBUG
	LogPrint("Binding %s from %s\n",Buff,Dll);
#endif
	DWORD R=(DWORD)GetProcAddress(H,Buff);
	return R;
}

Bitu IO_ReadD(Bitu port) {
	if(port==0xe5)
	{
		DWORD *Param=(DWORD*)reg_eax;
		DWORD Func=*(DWORD*)(reg_eip-4);

		if((0x80000000&Func)==0)
		{
			Func=0x80000000|(DWORD)GetHookAddress(((char**)Func)[0],((char**)Func)[1]);
			if(0x80000000==Func)
			{
				Func=*(DWORD*)(reg_eip-4);
				char *Dll=((char**)Func)[0];
				char *Name=((char**)Func)[1];
#ifdef _DEBUG
				printf("Func %s not found in %s\n",Name,Dll);
#endif
				LogErr("Func %s not found in %s\n",Name,Dll);
				Func=0x80000000;
			}
			*(DWORD*)(reg_eip-4)=Func;
		}

		int tmp=0;
		if(0x80000000==Func)
#ifndef _DEBUG
			goto Skip;
#else
			exit(0);
#endif
		__try {
			tmp=((func*)(0x7fffffff&Func))(Param);
		} __except(EXCEPTION_EXECUTE_HANDLER)
		{
#ifdef _DEBUG
			LogInfo("Exception in callback!");
#endif
		}
Skip:
		reg_eax=tmp;
	}
	return reg_eax;
}

void DOSBOX_RunMachine(void){
	puts("Error: DOSBOX_RunMachine called");
	ExitProcess(1);
}

static void DOSBOX_RealInit(Section * sec) {
	Section_prop * section=static_cast<Section_prop *>(sec);

	DOSBOX_SetNormalLoop();
}

void CPU_Init(Section* sec);
void FPU_Init(Section*);

static DWORD Addr=0;
static DWORD P1=0;
static DWORD P2=0;
static DWORD P3=0;
static DWORD P4=0;

void* AllocStack(int Size)
{
	DWORD Tmp;
	void *Ptr=VirtualAlloc(0,Size,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
	if(Ptr==0)
		return 0;

#ifdef _DEBUG
	memset(Ptr,0xbe,Size);
	VirtualProtect(Ptr,PeLdrGetPageSize(),PAGE_READWRITE|PAGE_GUARD,&Tmp);
#endif
	return Ptr;
}

void FreeStack(void *Ptr)
{
	VirtualFree(Ptr,0,MEM_RELEASE);
}

CList StackList;
void ReuseStack(void *Ptr)
{
	StackList.AddHead(Ptr);
}

const int CPUC=1000000;
EMU_EXPORT DWORD EmuExecute(DWORD Addr, int NParams,...)	// max 100 params
{
	cpu.code.big=true;
	cpu.stack.big=true;
	cpu.stack.mask=0xffffffff;
	cpu.stack.notmask=0;

#define my_reg_esp cpu_regs.regs[REGI_SP].dword[DW_INDEX]
#define my_reg_eax cpu_regs.regs[REGI_AX].dword[DW_INDEX]
#define my_reg_eip cpu_regs.ip.dword[DW_INDEX]

	my_reg_eip = (DWORD)Addr;
	void *Stack=StackList.GetHead();
	if(Stack==0)
		Stack=AllocStack(EMU_STACK_SIZE);
	CbCallAtThreadExit(ReuseStack,Stack);

	my_reg_esp = EMU_STACK_SIZE-128+(DWORD)Stack;
	*(DWORD*)my_reg_esp=CbReturnToHost();

	va_list args;
	va_start(args,NParams);

	for(int i=0; i<NParams; i++)
		((DWORD*)my_reg_esp)[i+1]=va_arg(args,int);

	DWORD *TEB=(DWORD*)PeLdrGetCurrentTeb();
	TEB[1]=my_reg_esp;	// Fill stack top and size for Borland
	TEB[2]=EMU_STACK_SIZE;

    Bitu ret;
	Segs.phys[4]=GetFSBase();			// for dyngen 
	do {
		CPU_Cycles=CPUC;
        ret=(*loop)();

		if(CbIsReturnToHost(my_reg_eip))
			break;
    } while (!ret);

	CbRemoveCallAtThreadExit(ReuseStack,Stack);
	ReuseStack(Stack);

	return my_reg_eax;
}

void SHELL_Init() {
	EmuExecute(Addr, 4,P1,P2,P3,P4);
}

void PAGING_Init(Section * sec);
void MEM_Init(Section * sec);

void DOSBOX_Init(void) {
	Section_prop * secprop;
	Prop_int* Pint;
	Prop_string* Pstring;
	Prop_multival_remain* Pmulti_remain;
	char dbcore[1024]=
#ifdef _ARM_
		"dynamic";
#else
		"simple";
#endif
	CfgGetString("DosboxCore", dbcore, 1024);

	secprop=control->AddSection_prop("dosbox",&DOSBOX_RealInit);
	secprop=control->AddSection_prop("cpu",&CPU_Init,true);//done
	const char* cores[] = { "auto",
#if (C_DYNAMIC_X86) || (C_DYNREC)
		"dynamic",
#endif
		"full", "normal", "simple",0 };
	Pstring = secprop->Add_string("core",Property::Changeable::WhenIdle,dbcore);
	Pstring->Set_values(cores);
	const char* cputype_values[] = { "auto", "386", "386_slow", "486_slow", "pentium_slow", "386_prefetch", 0};
	Pstring = secprop->Add_string("cputype",Property::Changeable::Always,"auto");
	Pstring->Set_values(cputype_values);
	Pmulti_remain = secprop->Add_multiremain("cycles",Property::Changeable::Always," ");
	const char* cyclest[] = { "auto","fixed","max","%u",0 };
	Pstring = Pmulti_remain->GetSection()->Add_string("type",Property::Changeable::Always,"auto");
	Pmulti_remain->SetValue("auto");
	Pstring->Set_values(cyclest);
	Pstring = Pmulti_remain->GetSection()->Add_string("parameters",Property::Changeable::Always,"");
	Pint = secprop->Add_int("cycleup",Property::Changeable::Always,10);
	Pint->SetMinMax(1,1000000);
	Pint = secprop->Add_int("cycledown",Property::Changeable::Always,20);
	Pint->SetMinMax(1,1000000);
	secprop->AddInitFunction(&FPU_Init);
	secprop->AddInitFunction(&MEM_Init);
	secprop->AddInitFunction(&PAGING_Init);

	control->SetStartUp(&SHELL_Init);
}

/*
int _tmain(int argc, _TCHAR* argv[])
{
    CommandLine com_line(argc,argv);
    Config myconf(&com_line);
    control=&myconf;	
	DOSBOX_Init();
	control->Init();
	control->StartUp();
	return 0;
}
*/

static void Emulate(DWORD addr, DWORD _P1,DWORD _P2,DWORD _P3,DWORD _P4)
{
	char *argv[]={"program.exe",0};
	Addr=addr;
	P1=_P1;
	P2=_P2;
	P3=_P3;
	P4=_P4;
    static CommandLine com_line(1,argv);
    static Config myconf(&com_line);
    control=&myconf;	
	DOSBOX_Init();
	control->Init();
	control->StartUp();
}

#if 0
CSet Counters;
bool volatile DumpProfiler=false;
bool ForEachFunc(unsigned int Idx, void *Data, void *Param)
{
	if(Data)
		LogInfo("%08X - %d\n",Idx,Data);
	return true;
}

HANDLE ProfThread=0;
DWORD WINAPI Profiler(
  _In_  LPVOID lpParameter
)
{
	CONTEXT Ctx;
	while(1)
	{
		SuspendThread(ProfThread);
		Ctx.ContextFlags=CONTEXT_CONTROL;
		GetThreadContext(ProfThread,&Ctx);
		ResumeThread(ProfThread);
		Counters.Set(Ctx.Pc,(void*)(1+(DWORD)Counters.Get(Ctx.Pc)));
		if(DumpProfiler)
		{
			Counters.ForEach(ForEachFunc,0);
			DumpProfiler=false;
		}
		Sleep(20);
	}
}

void InitProfiler()
{
	DuplicateHandle(GetCurrentProcess(),GetCurrentThread(),GetCurrentProcess(),&ProfThread,0,FALSE,DUPLICATE_SAME_ACCESS);
	CreateThread(0,0,Profiler,0,0,0);
}
#endif

EMU_EXPORT BOOL EmuInitialize(void)
{
	static bool Initialized=false;
	if(Initialized)
		return true;
	Initialized=true;
#if 0 //def _DEBUG
   _CrtSetDbgFlag (
      _CRTDBG_ALLOC_MEM_DF |
      _CRTDBG_LEAK_CHECK_DF);
   _CrtSetReportMode ( _CRT_ERROR,
      _CRTDBG_MODE_DEBUG);
#endif 
//	InitProfiler();
	Emulate((DWORD)"\xC3",0,0,0,0);
	return true;
}
