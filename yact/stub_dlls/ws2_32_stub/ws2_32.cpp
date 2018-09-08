#include "dllstub_def.h"

static const char DLL_NAME[]="ws2_32.nt.dll";

DEFINE_FUNC1(FreeAddrInfoEx)
DEFINE_FUNC1(FreeAddrInfoExW)
DEFINE_FUNC1(FreeAddrInfoW)
DEFINE_FUNC10(GetAddrInfoExA)
DEFINE_FUNC10(GetAddrInfoExW)
DEFINE_FUNC4(GetAddrInfoW)
DEFINE_FUNC7(GetNameInfoW)
DEFINE_FUNC4(InetNtopW)
DEFINE_FUNC3(InetPtonW)
DEFINE_FUNC12(SetAddrInfoExA)
DEFINE_FUNC12(SetAddrInfoExW)
DEFINE_FUNC0(WEP)
DEFINE_FUNC5(WPUCompleteOverlappedRequest)
DEFINE_FUNC5(WSAAccept)
DEFINE_FUNC5(WSAAddressToStringA)
DEFINE_FUNC5(WSAAddressToStringW)
DEFINE_FUNC2(WSAAdvertiseProvider)
DEFINE_FUNC_ORD7(WSAAsyncGetHostByAddr,102)
DEFINE_FUNC_ORD5(WSAAsyncGetHostByName,103)
DEFINE_FUNC_ORD5(WSAAsyncGetProtoByName,105)
DEFINE_FUNC_ORD5(WSAAsyncGetProtoByNumber,104)
DEFINE_FUNC_ORD6(WSAAsyncGetServByName,107)
DEFINE_FUNC_ORD6(WSAAsyncGetServByPort,106)
DEFINE_FUNC_ORD4(WSAAsyncSelect,101)
DEFINE_FUNC_ORD1(WSACancelAsyncRequest,108)
DEFINE_FUNC_ORD0(WSACancelBlockingCall,113)
DEFINE_FUNC_ORD0(WSACleanup,116)
DEFINE_FUNC1(WSACloseEvent)
DEFINE_FUNC7(WSAConnect)
DEFINE_FUNC8(WSAConnectByList)
DEFINE_FUNC9(WSAConnectByNameA)
DEFINE_FUNC9(WSAConnectByNameW)
DEFINE_FUNC0(WSACreateEvent)
DEFINE_FUNC3(WSADuplicateSocketA)
DEFINE_FUNC3(WSADuplicateSocketW)
DEFINE_FUNC2(WSAEnumNameSpaceProvidersA)
DEFINE_FUNC2(WSAEnumNameSpaceProvidersExA)
DEFINE_FUNC2(WSAEnumNameSpaceProvidersExW)
DEFINE_FUNC2(WSAEnumNameSpaceProvidersW)
DEFINE_FUNC3(WSAEnumNetworkEvents)
DEFINE_FUNC3(WSAEnumProtocolsA)
DEFINE_FUNC3(WSAEnumProtocolsW)
DEFINE_FUNC3(WSAEventSelect)
DEFINE_FUNC_ORD0(WSAGetLastError,111)
DEFINE_FUNC5(WSAGetOverlappedResult)
DEFINE_FUNC3(WSAGetQOSByName)
DEFINE_FUNC4(WSAGetServiceClassInfoA)
DEFINE_FUNC4(WSAGetServiceClassInfoW)
DEFINE_FUNC3(WSAGetServiceClassNameByClassIdA)
DEFINE_FUNC3(WSAGetServiceClassNameByClassIdW)
DEFINE_FUNC3(WSAHtonl)
DEFINE_FUNC3(WSAHtons)
DEFINE_FUNC1(WSAInstallServiceClassA)
DEFINE_FUNC1(WSAInstallServiceClassW)
DEFINE_FUNC9(WSAIoctl)
DEFINE_FUNC_ORD0(WSAIsBlocking,114)
DEFINE_FUNC8(WSAJoinLeaf)
DEFINE_FUNC3(WSALookupServiceBeginA)
DEFINE_FUNC3(WSALookupServiceBeginW)
DEFINE_FUNC1(WSALookupServiceEnd)
DEFINE_FUNC4(WSALookupServiceNextA)
DEFINE_FUNC4(WSALookupServiceNextW)
DEFINE_FUNC8(WSANSPIoctl)
DEFINE_FUNC3(WSANtohl)
DEFINE_FUNC3(WSANtohs)
DEFINE_FUNC3(WSAPoll)
DEFINE_FUNC2(WSAProviderCompleteAsyncCall)
DEFINE_FUNC3(WSAProviderConfigChange)
DEFINE_FUNC7(WSARecv)
DEFINE_FUNC2(WSARecvDisconnect)
DEFINE_FUNC9(WSARecvFrom)
DEFINE_FUNC1(WSARemoveServiceClass)
DEFINE_FUNC1(WSAResetEvent)
DEFINE_FUNC7(WSASend)
DEFINE_FUNC2(WSASendDisconnect)
DEFINE_FUNC6(WSASendMsg)
DEFINE_FUNC9(WSASendTo)
DEFINE_FUNC_ORD1(WSASetBlockingHook,109)
DEFINE_FUNC1(WSASetEvent)
DEFINE_FUNC_ORD1(WSASetLastError,112)
DEFINE_FUNC3(WSASetServiceA)
DEFINE_FUNC3(WSASetServiceW)
DEFINE_FUNC6(WSASocketA)
DEFINE_FUNC6(WSASocketW)
DEFINE_FUNC_ORD2(WSAStartup,115)
DEFINE_FUNC5(WSAStringToAddressA)
DEFINE_FUNC5(WSAStringToAddressW)
DEFINE_FUNC1(WSAUnadvertiseProvider)
DEFINE_FUNC_ORD0(WSAUnhookBlockingHook,110)
DEFINE_FUNC5(WSAWaitForMultipleEvents)
DEFINE_FUNC1(WSApSetPostRoutine)
DEFINE_FUNC2(WSCDeinstallProvider)
DEFINE_FUNC2(WSCEnableNSProvider)
DEFINE_FUNC4(WSCEnumProtocols)
DEFINE_FUNC6(WSCGetApplicationCategory)
DEFINE_FUNC6(WSCGetProviderInfo)
DEFINE_FUNC4(WSCGetProviderPath)
DEFINE_FUNC5(WSCInstallNameSpace)
DEFINE_FUNC6(WSCInstallNameSpaceEx)
DEFINE_FUNC5(WSCInstallProvider)
DEFINE_FUNC8(WSCInstallProviderAndChains)
DEFINE_FUNC7(WSCSetApplicationCategory)
DEFINE_FUNC6(WSCSetProviderInfo)
DEFINE_FUNC1(WSCUnInstallNameSpace)
DEFINE_FUNC5(WSCUpdateProvider)
DEFINE_FUNC2(WSCWriteNameSpaceOrder)
DEFINE_FUNC2(WSCWriteProviderOrder)
DEFINE_FUNC1(WahCloseApcHelper)
DEFINE_FUNC1(WahCloseHandleHelper)
DEFINE_FUNC1(WahCloseNotificationHandleHelper)
DEFINE_FUNC2(WahCloseSocketHandle)
DEFINE_FUNC2(WahCloseThread)
DEFINE_FUNC5(WahCompleteRequest)
DEFINE_FUNC1(WahCreateHandleContextTable)
DEFINE_FUNC2(WahCreateNotificationHandle)
DEFINE_FUNC2(WahCreateSocketHandle)
DEFINE_FUNC1(WahDestroyHandleContextTable)
DEFINE_FUNC0(WahDisableNonIFSHandleSupport)
DEFINE_FUNC0(WahEnableNonIFSHandleSupport)
DEFINE_FUNC3(WahEnumerateHandleContexts)
DEFINE_FUNC2(WahInsertHandleContext)
DEFINE_FUNC1(WahNotifyAllProcesses)
DEFINE_FUNC1(WahOpenApcHelper)
DEFINE_FUNC2(WahOpenCurrentThread)
DEFINE_FUNC1(WahOpenHandleHelper)
DEFINE_FUNC1(WahOpenNotificationHandleHelper)
DEFINE_FUNC4(WahQueueUserApc)
DEFINE_FUNC2(WahReferenceContextByHandle)
DEFINE_FUNC2(WahRemoveHandleContext)
DEFINE_FUNC4(WahWaitForNotification)
DEFINE_FUNC2(WahWriteLSPEvent)
DEFINE_FUNC_ORD2(__WSAFDIsSet,151)
DEFINE_FUNC_ORD3(accept,1)
DEFINE_FUNC_ORD3(bind,2)
DEFINE_FUNC_ORD1(closesocket,3)
DEFINE_FUNC_ORD3(connect,4)
DEFINE_FUNC1(freeaddrinfo)
DEFINE_FUNC4(getaddrinfo)
DEFINE_FUNC_ORD3(gethostbyaddr,51)
DEFINE_FUNC_ORD1(gethostbyname,52)
DEFINE_FUNC_ORD2(gethostname,57)
DEFINE_FUNC7(getnameinfo)
DEFINE_FUNC_ORD3(getpeername,5)
DEFINE_FUNC_ORD1(getprotobyname,53)
DEFINE_FUNC_ORD1(getprotobynumber,54)
DEFINE_FUNC_ORD2(getservbyname,55)
DEFINE_FUNC_ORD2(getservbyport,56)
DEFINE_FUNC_ORD3(getsockname,6)
DEFINE_FUNC_ORD5(getsockopt,7)
DEFINE_FUNC_ORD1(htonl,8)
DEFINE_FUNC_ORD1(htons,9)
DEFINE_FUNC_ORD1(inet_addr,11)
DEFINE_FUNC_ORD1(inet_ntoa,12)
DEFINE_FUNC4(inet_ntop)
DEFINE_FUNC3(inet_pton) 
DEFINE_FUNC_ORD3(ioctlsocket,10)
DEFINE_FUNC_ORD2(listen,13)
DEFINE_FUNC_ORD1(ntohl,14)
DEFINE_FUNC_ORD1(ntohs,15)
DEFINE_FUNC_ORD4(recv,16)
DEFINE_FUNC_ORD6(recvfrom,17)
DEFINE_FUNC_ORD5(select,18)
DEFINE_FUNC_ORD4(send,19)
DEFINE_FUNC_ORD6(sendto,20)
DEFINE_FUNC_ORD5(setsockopt,21)
DEFINE_FUNC_ORD2(shutdown,22)
DEFINE_FUNC_ORD3(socket,23)
