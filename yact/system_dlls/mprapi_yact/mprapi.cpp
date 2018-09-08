#include "dllyact_def.h"

DEFINE_FUNC2(CompressPhoneNumber)
DEFINE_FUNC1(MprAdminBufferFree)
DEFINE_FUNC2(MprAdminConnectionClearStats)
DEFINE_FUNC7(MprAdminConnectionEnum)
DEFINE_FUNC4(MprAdminConnectionGetInfo)
DEFINE_FUNC3(MprAdminConnectionRemoveQuarantine)
DEFINE_FUNC2(MprAdminDeregisterConnectionNotification)
DEFINE_FUNC4(MprAdminDeviceEnum)
DEFINE_FUNC3(MprAdminEstablishDomainRasServer)
DEFINE_FUNC2(MprAdminGetErrorString)
DEFINE_FUNC3(MprAdminGetPDCServer)
DEFINE_FUNC4(MprAdminInterfaceConnect)
DEFINE_FUNC4(MprAdminInterfaceCreate)
DEFINE_FUNC2(MprAdminInterfaceDelete)
DEFINE_FUNC5(MprAdminInterfaceDeviceGetInfo)
DEFINE_FUNC5(MprAdminInterfaceDeviceSetInfo)
DEFINE_FUNC2(MprAdminInterfaceDisconnect)
DEFINE_FUNC7(MprAdminInterfaceEnum)
DEFINE_FUNC5(MprAdminInterfaceGetCredentials)
DEFINE_FUNC4(MprAdminInterfaceGetCredentialsEx)
DEFINE_FUNC4(MprAdminInterfaceGetHandle)
DEFINE_FUNC4(MprAdminInterfaceGetInfo)
DEFINE_FUNC4(MprAdminInterfaceQueryUpdateResult)
DEFINE_FUNC5(MprAdminInterfaceSetCredentials)
DEFINE_FUNC4(MprAdminInterfaceSetCredentialsEx)
DEFINE_FUNC4(MprAdminInterfaceSetInfo)
DEFINE_FUNC5(MprAdminInterfaceTransportAdd)
DEFINE_FUNC5(MprAdminInterfaceTransportGetInfo)
DEFINE_FUNC3(MprAdminInterfaceTransportRemove)
DEFINE_FUNC5(MprAdminInterfaceTransportSetInfo)
DEFINE_FUNC2(MprAdminInterfaceUpdatePhonebookInfo)
DEFINE_FUNC4(MprAdminInterfaceUpdateRoutes)
DEFINE_FUNC3(MprAdminIsDomainRasServer)
DEFINE_FUNC1(MprAdminIsServiceRunning)
DEFINE_FUNC1(MprAdminMIBBufferFree)
DEFINE_FUNC5(MprAdminMIBEntryCreate)
DEFINE_FUNC5(MprAdminMIBEntryDelete)
DEFINE_FUNC7(MprAdminMIBEntryGet)
DEFINE_FUNC7(MprAdminMIBEntryGetFirst)
DEFINE_FUNC7(MprAdminMIBEntryGetNext)
DEFINE_FUNC5(MprAdminMIBEntrySet)
DEFINE_FUNC2(MprAdminMIBServerConnect)
DEFINE_FUNC1(MprAdminMIBServerDisconnect)
DEFINE_FUNC2(MprAdminPortClearStats)
DEFINE_FUNC2(MprAdminPortDisconnect)
DEFINE_FUNC8(MprAdminPortEnum)
DEFINE_FUNC4(MprAdminPortGetInfo)
DEFINE_FUNC2(MprAdminPortReset)
DEFINE_FUNC2(MprAdminRegisterConnectionNotification)
DEFINE_FUNC3(MprAdminSendUserMessage)
DEFINE_FUNC2(MprAdminServerConnect)
DEFINE_FUNC1(MprAdminServerDisconnect)
DEFINE_FUNC3(MprAdminServerGetCredentials)
DEFINE_FUNC3(MprAdminServerGetInfo)
DEFINE_FUNC3(MprAdminServerSetCredentials)
DEFINE_FUNC3(MprAdminServerSetInfo)
DEFINE_FUNC8(MprAdminTransportCreate)
DEFINE_FUNC6(MprAdminTransportGetInfo)
DEFINE_FUNC6(MprAdminTransportSetInfo)
DEFINE_FUNC4(MprAdminUserGetInfo)
DEFINE_FUNC4(MprAdminUserSetInfo)
DEFINE_FUNC1(MprConfigBufferFree)
DEFINE_FUNC4(MprConfigGetFriendlyName)
DEFINE_FUNC4(MprConfigGetGuidName)
DEFINE_FUNC4(MprConfigInterfaceCreate)
DEFINE_FUNC2(MprConfigInterfaceDelete)
DEFINE_FUNC7(MprConfigInterfaceEnum)
DEFINE_FUNC3(MprConfigInterfaceGetHandle)
DEFINE_FUNC5(MprConfigInterfaceGetInfo)
DEFINE_FUNC4(MprConfigInterfaceSetInfo)
DEFINE_FUNC7(MprConfigInterfaceTransportAdd)
DEFINE_FUNC8(MprConfigInterfaceTransportEnum)
DEFINE_FUNC4(MprConfigInterfaceTransportGetHandle)
DEFINE_FUNC5(MprConfigInterfaceTransportGetInfo)
DEFINE_FUNC3(MprConfigInterfaceTransportRemove)
DEFINE_FUNC5(MprConfigInterfaceTransportSetInfo)
DEFINE_FUNC2(MprConfigServerBackup)
DEFINE_FUNC2(MprConfigServerConnect)
DEFINE_FUNC1(MprConfigServerDisconnect)
DEFINE_FUNC3(MprConfigServerGetInfo)
DEFINE_FUNC2(MprConfigServerInstall)
DEFINE_FUNC1(MprConfigServerRefresh)
DEFINE_FUNC2(MprConfigServerRestore)
DEFINE_FUNC9(MprConfigTransportCreate)
DEFINE_FUNC2(MprConfigTransportDelete)
DEFINE_FUNC7(MprConfigTransportEnum)
DEFINE_FUNC3(MprConfigTransportGetHandle)
DEFINE_FUNC7(MprConfigTransportGetInfo)
DEFINE_FUNC7(MprConfigTransportSetInfo)
//DEFINE_FUNC2(MprDomainQueryAccess)
DEFINE_FUNC3(MprDomainQueryRasServer)
DEFINE_FUNC3(MprDomainRegisterRasServer)
//DEFINE_FUNC2(MprDomainSetAccess)
DEFINE_FUNC3(MprGetUsrParams)
DEFINE_FUNC6(MprInfoBlockAdd)
DEFINE_FUNC5(MprInfoBlockFind)
DEFINE_FUNC1(MprInfoBlockQuerySize)
DEFINE_FUNC3(MprInfoBlockRemove)
DEFINE_FUNC6(MprInfoBlockSet)
DEFINE_FUNC2(MprInfoCreate)
DEFINE_FUNC1(MprInfoDelete)
DEFINE_FUNC2(MprInfoDuplicate)
DEFINE_FUNC2(MprInfoRemoveAll)
DEFINE_FUNC1(MprPortSetUsage)
/*DEFINE_FUNC2(MprSetupIpInIpInterfaceFriendlyNameCreate)
DEFINE_FUNC2(MprSetupIpInIpInterfaceFriendlyNameDelete)
DEFINE_FUNC3(MprSetupIpInIpInterfaceFriendlyNameEnum)
DEFINE_FUNC1(MprSetupIpInIpInterfaceFriendlyNameFree)
DEFINE_FUNC2(RasAdminConnectionClearStats)
DEFINE_FUNC7(RasAdminConnectionEnum)
DEFINE_FUNC4(RasAdminConnectionGetInfo)
DEFINE_FUNC3(RasAdminGetErrorString)
DEFINE_FUNC2(RasAdminPortClearStats)
DEFINE_FUNC2(RasAdminPortDisconnect)
DEFINE_FUNC8(RasAdminPortEnum)
DEFINE_FUNC4(RasAdminPortGetInfo)
DEFINE_FUNC2(RasAdminPortReset)
DEFINE_FUNC3(RasAdminUserGetInfo)
DEFINE_FUNC3(RasAdminUserSetInfo)*/
DEFINE_FUNC2(RasPrivilegeAndCallBackNumber)
