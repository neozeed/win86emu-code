#include "dllstub_def.h"

static const char DLL_NAME[]="version.nt.dll";

DEFINE_FUNC4(GetFileVersionInfoA)
DEFINE_FUNC2(GetFileVersionInfoSizeA)
DEFINE_FUNC2(GetFileVersionInfoSizeW)
DEFINE_FUNC4(GetFileVersionInfoW)
DEFINE_FUNC8(VerFindFileA)
DEFINE_FUNC8(VerFindFileW)
DEFINE_FUNC8(VerInstallFileA)
DEFINE_FUNC8(VerInstallFileW)
DEFINE_FUNC4(VerQueryValueA)
//DEFINE_FUNC6(VerQueryValueIndexA)
//DEFINE_FUNC6(VerQueryValueIndexW)
DEFINE_FUNC4(VerQueryValueW)
DEFINE_FUNC3(VerLanguageNameA)
DEFINE_FUNC3(VerLanguageNameW)
