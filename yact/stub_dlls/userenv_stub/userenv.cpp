#include "dllstub_def.h"

static const char DLL_NAME[]="userenv.nt.dll";

DEFINE_FUNC3(CreateEnvironmentBlock)
DEFINE_FUNC1(DestroyEnvironmentBlock)
DEFINE_FUNC4(ExpandEnvironmentStringsForUserA)
DEFINE_FUNC4(ExpandEnvironmentStringsForUserW)
DEFINE_FUNC2(GetAllUsersProfileDirectoryA)
DEFINE_FUNC2(GetAllUsersProfileDirectoryW)
DEFINE_FUNC2(GetDefaultUserProfileDirectoryA)
DEFINE_FUNC2(GetDefaultUserProfileDirectoryW)
DEFINE_FUNC1(GetProfileType)
DEFINE_FUNC2(GetProfilesDirectoryA)
DEFINE_FUNC2(GetProfilesDirectoryW)
DEFINE_FUNC3(GetUserProfileDirectoryA)
DEFINE_FUNC3(GetUserProfileDirectoryW)
DEFINE_FUNC2(LoadUserProfileA)
DEFINE_FUNC2(LoadUserProfileW)
DEFINE_FUNC2(RegisterGPNotification)
DEFINE_FUNC2(UnloadUserProfile)
DEFINE_FUNC1(UnregisterGPNotification)
