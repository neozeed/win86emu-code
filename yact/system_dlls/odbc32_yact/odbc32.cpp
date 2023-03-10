#include "dllyact_def.h"

DEFINE_FUNC0(CloseODBCPerfData)
DEFINE_FUNC4(CollectODBCPerfData)
DEFINE_FUNC2(CursorLibLockDbc)
DEFINE_FUNC2(CursorLibLockDesc)
DEFINE_FUNC2(CursorLibLockStmt)
DEFINE_FUNC3(CursorLibTransact)
DEFINE_FUNC3(LockHandle)
/*DEFINE_FUNC0(MpHeapAlloc)
DEFINE_FUNC0(MpHeapCompact)
DEFINE_FUNC0(MpHeapCreate)
DEFINE_FUNC0(MpHeapDestroy)
DEFINE_FUNC0(MpHeapFree)
DEFINE_FUNC0(MpHeapReAlloc)
DEFINE_FUNC0(MpHeapSize)
DEFINE_FUNC0(MpHeapValidate)*/
DEFINE_FUNC0(ODBCGetTryWaitValue)
DEFINE_FUNC9(ODBCInternalConnectW)
DEFINE_FUNC1(ODBCQualifyFileDSNW)
DEFINE_FUNC1(ODBCSetTryWaitValue)
//DEFINE_FUNC0(ODBCSharedPerfMon)
//DEFINE_FUNC0(ODBCSharedTraceFlag)
//DEFINE_FUNC0(ODBCSharedVSFlag)
DEFINE_FUNC1(OpenODBCPerfData)
DEFINE_FUNC1(PostComponentError)
DEFINE_FUNC1(PostODBCComponentError)
DEFINE_FUNC4(PostODBCError)
DEFINE_FUNC2(SQLAllocConnect)
DEFINE_FUNC1(SQLAllocEnv)
DEFINE_FUNC3(SQLAllocHandle)
DEFINE_FUNC3(SQLAllocHandleStd)
DEFINE_FUNC2(SQLAllocStmt)
DEFINE_FUNC6(SQLBindCol)
DEFINE_FUNC8(SQLBindParam)
DEFINE_FUNC10(SQLBindParameter)
DEFINE_FUNC6(SQLBrowseConnect)
DEFINE_FUNC6(SQLBrowseConnectA)
DEFINE_FUNC6(SQLBrowseConnectW)
DEFINE_FUNC2(SQLBulkOperations)
DEFINE_FUNC1(SQLCancel)
DEFINE_FUNC1(SQLCloseCursor)
DEFINE_FUNC7(SQLColAttribute)
DEFINE_FUNC7(SQLColAttributeA)
DEFINE_FUNC7(SQLColAttributeW)
DEFINE_FUNC7(SQLColAttributes)
DEFINE_FUNC7(SQLColAttributesA)
DEFINE_FUNC7(SQLColAttributesW)
DEFINE_FUNC9(SQLColumnPrivileges)
DEFINE_FUNC9(SQLColumnPrivilegesA)
DEFINE_FUNC9(SQLColumnPrivilegesW)
DEFINE_FUNC9(SQLColumns)
DEFINE_FUNC9(SQLColumnsA)
DEFINE_FUNC9(SQLColumnsW)
DEFINE_FUNC7(SQLConnect)
DEFINE_FUNC7(SQLConnectA)
DEFINE_FUNC7(SQLConnectW)
DEFINE_FUNC2(SQLCopyDesc)
DEFINE_FUNC8(SQLDataSources)
DEFINE_FUNC8(SQLDataSourcesA)
DEFINE_FUNC8(SQLDataSourcesW)
DEFINE_FUNC9(SQLDescribeCol)
DEFINE_FUNC9(SQLDescribeColA)
DEFINE_FUNC9(SQLDescribeColW)
DEFINE_FUNC6(SQLDescribeParam)
DEFINE_FUNC1(SQLDisconnect)
DEFINE_FUNC8(SQLDriverConnect)
DEFINE_FUNC8(SQLDriverConnectA)
DEFINE_FUNC8(SQLDriverConnectW)
DEFINE_FUNC8(SQLDrivers)
DEFINE_FUNC8(SQLDriversA)
DEFINE_FUNC8(SQLDriversW)
DEFINE_FUNC3(SQLEndTran)
DEFINE_FUNC8(SQLError)
DEFINE_FUNC8(SQLErrorA)
DEFINE_FUNC8(SQLErrorW)
DEFINE_FUNC3(SQLExecDirect)
DEFINE_FUNC3(SQLExecDirectA)
DEFINE_FUNC3(SQLExecDirectW)
DEFINE_FUNC1(SQLExecute)
DEFINE_FUNC5(SQLExtendedFetch)
DEFINE_FUNC1(SQLFetch)
DEFINE_FUNC3(SQLFetchScroll)
DEFINE_FUNC13(SQLForeignKeys)
DEFINE_FUNC13(SQLForeignKeysA)
DEFINE_FUNC13(SQLForeignKeysW)
DEFINE_FUNC1(SQLFreeConnect)
DEFINE_FUNC1(SQLFreeEnv)
DEFINE_FUNC2(SQLFreeHandle)
DEFINE_FUNC2(SQLFreeStmt)
DEFINE_FUNC5(SQLGetConnectAttr)
DEFINE_FUNC5(SQLGetConnectAttrA)
DEFINE_FUNC5(SQLGetConnectAttrW)
DEFINE_FUNC3(SQLGetConnectOption)
DEFINE_FUNC3(SQLGetConnectOptionA)
DEFINE_FUNC3(SQLGetConnectOptionW)
DEFINE_FUNC4(SQLGetCursorName)
DEFINE_FUNC4(SQLGetCursorNameA)
DEFINE_FUNC4(SQLGetCursorNameW)
DEFINE_FUNC6(SQLGetData)
DEFINE_FUNC6(SQLGetDescField)
DEFINE_FUNC6(SQLGetDescFieldA)
DEFINE_FUNC6(SQLGetDescFieldW)
DEFINE_FUNC11(SQLGetDescRec)
DEFINE_FUNC11(SQLGetDescRecA)
DEFINE_FUNC11(SQLGetDescRecW)
DEFINE_FUNC7(SQLGetDiagField)
DEFINE_FUNC7(SQLGetDiagFieldA)
DEFINE_FUNC7(SQLGetDiagFieldW)
DEFINE_FUNC8(SQLGetDiagRec)
DEFINE_FUNC8(SQLGetDiagRecA)
DEFINE_FUNC8(SQLGetDiagRecW)
DEFINE_FUNC5(SQLGetEnvAttr)
DEFINE_FUNC3(SQLGetFunctions)
DEFINE_FUNC5(SQLGetInfo)
DEFINE_FUNC5(SQLGetInfoA)
DEFINE_FUNC5(SQLGetInfoW)
DEFINE_FUNC5(SQLGetStmtAttr)
DEFINE_FUNC5(SQLGetStmtAttrA)
DEFINE_FUNC5(SQLGetStmtAttrW)
DEFINE_FUNC3(SQLGetStmtOption)
DEFINE_FUNC2(SQLGetTypeInfo)
DEFINE_FUNC2(SQLGetTypeInfoA)
DEFINE_FUNC2(SQLGetTypeInfoW)
DEFINE_FUNC1(SQLMoreResults)
DEFINE_FUNC6(SQLNativeSql)
DEFINE_FUNC6(SQLNativeSqlA)
DEFINE_FUNC6(SQLNativeSqlW)
DEFINE_FUNC2(SQLNumParams)
DEFINE_FUNC2(SQLNumResultCols)
DEFINE_FUNC2(SQLParamData)
DEFINE_FUNC3(SQLParamOptions)
DEFINE_FUNC3(SQLPrepare)
DEFINE_FUNC3(SQLPrepareA)
DEFINE_FUNC3(SQLPrepareW)
DEFINE_FUNC7(SQLPrimaryKeys)
DEFINE_FUNC7(SQLPrimaryKeysA)
DEFINE_FUNC7(SQLPrimaryKeysW)
DEFINE_FUNC9(SQLProcedureColumns)
DEFINE_FUNC9(SQLProcedureColumnsA)
DEFINE_FUNC9(SQLProcedureColumnsW)
DEFINE_FUNC7(SQLProcedures)
DEFINE_FUNC7(SQLProceduresA)
DEFINE_FUNC7(SQLProceduresW)
DEFINE_FUNC3(SQLPutData)
DEFINE_FUNC2(SQLRowCount)
DEFINE_FUNC4(SQLSetConnectAttr)
DEFINE_FUNC4(SQLSetConnectAttrA)
DEFINE_FUNC4(SQLSetConnectAttrW)
DEFINE_FUNC3(SQLSetConnectOption)
DEFINE_FUNC3(SQLSetConnectOptionA)
DEFINE_FUNC3(SQLSetConnectOptionW)
DEFINE_FUNC3(SQLSetCursorName)
DEFINE_FUNC3(SQLSetCursorNameA)
DEFINE_FUNC3(SQLSetCursorNameW)
DEFINE_FUNC5(SQLSetDescField)
DEFINE_FUNC5(SQLSetDescFieldA)
DEFINE_FUNC5(SQLSetDescFieldW)
DEFINE_FUNC10(SQLSetDescRec)
DEFINE_FUNC4(SQLSetEnvAttr)
DEFINE_FUNC8(SQLSetParam)
DEFINE_FUNC4(SQLSetPos)
DEFINE_FUNC4(SQLSetScrollOptions)
DEFINE_FUNC4(SQLSetStmtAttr)
DEFINE_FUNC4(SQLSetStmtAttrA)
DEFINE_FUNC4(SQLSetStmtAttrW)
DEFINE_FUNC3(SQLSetStmtOption)
DEFINE_FUNC10(SQLSpecialColumns)
DEFINE_FUNC10(SQLSpecialColumnsA)
DEFINE_FUNC10(SQLSpecialColumnsW)
DEFINE_FUNC9(SQLStatistics)
DEFINE_FUNC9(SQLStatisticsA)
DEFINE_FUNC9(SQLStatisticsW)
DEFINE_FUNC7(SQLTablePrivileges)
DEFINE_FUNC7(SQLTablePrivilegesA)
DEFINE_FUNC7(SQLTablePrivilegesW)
DEFINE_FUNC9(SQLTables)
DEFINE_FUNC9(SQLTablesA)
DEFINE_FUNC9(SQLTablesW)
DEFINE_FUNC3(SQLTransact)
DEFINE_FUNC2(SearchStatusCode)
DEFINE_FUNC1(VFreeErrors)
DEFINE_FUNC6(VRetrieveDriverErrorsRowCol)
DEFINE_FUNC2(ValidateErrorQueue)
//DEFINE_FUNC0(g_hHeapMalloc)
