#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[5] = 
{
	{ 207, 0,  0 } /*tableIndex: 0 */,
	{ 208, 0,  1 } /*tableIndex: 1 */,
	{ 209, 0,  2 } /*tableIndex: 2 */,
	{ 210, 0,  3 } /*tableIndex: 3 */,
	{ 211, 0,  4 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"handler",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[16] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0 } /* 0x06000004 System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult) */,
	{ 1, 1 } /* 0x06000006 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 2, 1 } /* 0x06000007 System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 3, 1 } /* 0x06000008 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 0, 0 } /* 0x0600000B System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.RemoteConfigSettings::Finalize() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.RemoteConfigSettings::Destroy() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr) */,
	{ 4, 1 } /* 0x06000010 System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[67] = 
{
	{ 13896, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0, 0 } /* seqPointIndex: 0 */,
	{ 13896, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1, 0 } /* seqPointIndex: 1 */,
	{ 13896, -1, 1, 26, 26, 9, -1, 0, kSequencePointKind_Normal, 0, 2, 0 } /* seqPointIndex: 2 */,
	{ 13896, -1, 1, 27, 27, 13, -1, 1, kSequencePointKind_Normal, 0, 3, 0 } /* seqPointIndex: 3 */,
	{ 13896, -1, 1, 28, 28, 13, -1, 7, kSequencePointKind_Normal, 0, 4, 0 } /* seqPointIndex: 4 */,
	{ 13896, -1, 1, 29, 29, 17, -1, 13, kSequencePointKind_Normal, 0, 5, 0 } /* seqPointIndex: 5 */,
	{ 13896, -1, 1, 29, 29, 17, -1, 18, kSequencePointKind_Normal, 0, 6, 0 } /* seqPointIndex: 6 */,
	{ 13896, -1, 1, 30, 30, 9, -1, 23, kSequencePointKind_Normal, 0, 7, 0 } /* seqPointIndex: 7 */,
	{ 13896, -1, 1, 29, 29, 17, -1, 18, kSequencePointKind_StepOut, 0, 8, 0 } /* seqPointIndex: 8 */,
	{ 13901, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9, 0 } /* seqPointIndex: 9 */,
	{ 13901, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10, 0 } /* seqPointIndex: 10 */,
	{ 13901, -1, 2, 25, 25, 9, -1, 0, kSequencePointKind_Normal, 0, 11, 0 } /* seqPointIndex: 11 */,
	{ 13901, -1, 2, 26, 26, 13, -1, 1, kSequencePointKind_Normal, 0, 12, 0 } /* seqPointIndex: 12 */,
	{ 13901, -1, 2, 27, 27, 13, -1, 7, kSequencePointKind_Normal, 0, 13, 0 } /* seqPointIndex: 13 */,
	{ 13901, -1, 2, 28, 28, 17, -1, 13, kSequencePointKind_Normal, 0, 14, 0 } /* seqPointIndex: 14 */,
	{ 13901, -1, 2, 28, 28, 17, -1, 14, kSequencePointKind_Normal, 0, 15, 0 } /* seqPointIndex: 15 */,
	{ 13901, -1, 2, 29, 29, 9, -1, 19, kSequencePointKind_Normal, 0, 16, 0 } /* seqPointIndex: 16 */,
	{ 13901, -1, 2, 28, 28, 17, -1, 14, kSequencePointKind_StepOut, 0, 17, 0 } /* seqPointIndex: 17 */,
	{ 13902, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18, 0 } /* seqPointIndex: 18 */,
	{ 13902, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19, 0 } /* seqPointIndex: 19 */,
	{ 13902, -1, 2, 33, 33, 9, -1, 0, kSequencePointKind_Normal, 0, 20, 0 } /* seqPointIndex: 20 */,
	{ 13902, -1, 2, 34, 34, 13, -1, 1, kSequencePointKind_Normal, 0, 21, 0 } /* seqPointIndex: 21 */,
	{ 13902, -1, 2, 35, 35, 13, -1, 7, kSequencePointKind_Normal, 0, 22, 0 } /* seqPointIndex: 22 */,
	{ 13902, -1, 2, 36, 36, 17, -1, 13, kSequencePointKind_Normal, 0, 23, 0 } /* seqPointIndex: 23 */,
	{ 13902, -1, 2, 36, 36, 17, -1, 14, kSequencePointKind_Normal, 0, 24, 0 } /* seqPointIndex: 24 */,
	{ 13902, -1, 2, 37, 37, 9, -1, 19, kSequencePointKind_Normal, 0, 25, 0 } /* seqPointIndex: 25 */,
	{ 13902, -1, 2, 36, 36, 17, -1, 14, kSequencePointKind_StepOut, 0, 26, 0 } /* seqPointIndex: 26 */,
	{ 13903, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27, 0 } /* seqPointIndex: 27 */,
	{ 13903, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28, 0 } /* seqPointIndex: 28 */,
	{ 13903, -1, 2, 41, 41, 9, -1, 0, kSequencePointKind_Normal, 0, 29, 0 } /* seqPointIndex: 29 */,
	{ 13903, -1, 2, 42, 42, 13, -1, 1, kSequencePointKind_Normal, 0, 30, 0 } /* seqPointIndex: 30 */,
	{ 13903, -1, 2, 43, 43, 13, -1, 7, kSequencePointKind_Normal, 0, 31, 0 } /* seqPointIndex: 31 */,
	{ 13903, -1, 2, 44, 44, 17, -1, 13, kSequencePointKind_Normal, 0, 32, 0 } /* seqPointIndex: 32 */,
	{ 13903, -1, 2, 44, 44, 17, -1, 17, kSequencePointKind_Normal, 0, 33, 0 } /* seqPointIndex: 33 */,
	{ 13903, -1, 2, 45, 45, 9, -1, 22, kSequencePointKind_Normal, 0, 34, 0 } /* seqPointIndex: 34 */,
	{ 13903, -1, 2, 44, 44, 17, -1, 17, kSequencePointKind_StepOut, 0, 35, 0 } /* seqPointIndex: 35 */,
	{ 13908, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36, 0 } /* seqPointIndex: 36 */,
	{ 13908, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37, 0 } /* seqPointIndex: 37 */,
	{ 13908, -1, 2, 152, 152, 9, -1, 0, kSequencePointKind_Normal, 0, 38, 0 } /* seqPointIndex: 38 */,
	{ 13908, -1, 2, 153, 153, 13, -1, 1, kSequencePointKind_Normal, 0, 39, 1 } /* seqPointIndex: 39 */,
	{ 13908, -1, 2, 153, 153, 13, -1, 2, kSequencePointKind_Normal, 0, 40, 1 } /* seqPointIndex: 40 */,
	{ 13908, -1, 2, 151, 151, 10, -1, 13, kSequencePointKind_Normal, 0, 41, 0 } /* seqPointIndex: 41 */,
	{ 13908, -1, 2, 154, 154, 9, -1, 19, kSequencePointKind_Normal, 0, 42, 0 } /* seqPointIndex: 42 */,
	{ 13908, -1, 2, 153, 153, 13, -1, 2, kSequencePointKind_StepOut, 0, 43, 1 } /* seqPointIndex: 43 */,
	{ 13908, -1, 2, 151, 151, 10, -1, 13, kSequencePointKind_StepOut, 0, 44, 0 } /* seqPointIndex: 44 */,
	{ 13909, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45, 0 } /* seqPointIndex: 45 */,
	{ 13909, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46, 0 } /* seqPointIndex: 46 */,
	{ 13909, -1, 2, 157, 157, 9, -1, 0, kSequencePointKind_Normal, 0, 47, 0 } /* seqPointIndex: 47 */,
	{ 13909, -1, 2, 158, 158, 13, -1, 1, kSequencePointKind_Normal, 0, 48, 0 } /* seqPointIndex: 48 */,
	{ 13909, -1, 2, 158, 158, 17, -1, 12, kSequencePointKind_Normal, 0, 49, 0 } /* seqPointIndex: 49 */,
	{ 13909, -1, 2, 159, 159, 13, -1, 22, kSequencePointKind_Normal, 0, 50, 0 } /* seqPointIndex: 50 */,
	{ 13909, -1, 2, 160, 160, 17, -1, 23, kSequencePointKind_Normal, 0, 51, 0 } /* seqPointIndex: 51 */,
	{ 13909, -1, 2, 160, 160, 17, -1, 29, kSequencePointKind_Normal, 0, 52, 0 } /* seqPointIndex: 52 */,
	{ 13909, -1, 2, 161, 161, 17, -1, 34, kSequencePointKind_Normal, 0, 53, 0 } /* seqPointIndex: 53 */,
	{ 13909, -1, 2, 162, 162, 13, -1, 45, kSequencePointKind_Normal, 0, 54, 0 } /* seqPointIndex: 54 */,
	{ 13909, -1, 2, 163, 163, 9, -1, 46, kSequencePointKind_Normal, 0, 55, 0 } /* seqPointIndex: 55 */,
	{ 13909, -1, 2, 158, 158, 17, -1, 12, kSequencePointKind_StepOut, 0, 56, 0 } /* seqPointIndex: 56 */,
	{ 13909, -1, 2, 160, 160, 17, -1, 29, kSequencePointKind_StepOut, 0, 57, 0 } /* seqPointIndex: 57 */,
	{ 13911, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 58, 0 } /* seqPointIndex: 58 */,
	{ 13911, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 59, 0 } /* seqPointIndex: 59 */,
	{ 13911, -1, 2, 177, 177, 9, -1, 0, kSequencePointKind_Normal, 0, 60, 0 } /* seqPointIndex: 60 */,
	{ 13911, -1, 2, 178, 178, 13, -1, 1, kSequencePointKind_Normal, 0, 61, 0 } /* seqPointIndex: 61 */,
	{ 13911, -1, 2, 179, 179, 13, -1, 8, kSequencePointKind_Normal, 0, 62, 0 } /* seqPointIndex: 62 */,
	{ 13911, -1, 2, 180, 180, 17, -1, 14, kSequencePointKind_Normal, 0, 63, 0 } /* seqPointIndex: 63 */,
	{ 13911, -1, 2, 180, 180, 17, -1, 16, kSequencePointKind_Normal, 0, 64, 0 } /* seqPointIndex: 64 */,
	{ 13911, -1, 2, 181, 181, 9, -1, 21, kSequencePointKind_Normal, 0, 65, 0 } /* seqPointIndex: 65 */,
	{ 13911, -1, 2, 180, 180, 17, -1, 16, kSequencePointKind_StepOut, 0, 66, 0 } /* seqPointIndex: 66 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[1] = { { 0, 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\Public\\AnalyticsSessionInfo.bindings.cs", { 105, 91, 174, 103, 121, 255, 188, 44, 17, 58, 181, 200, 111, 26, 150, 197} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\RemoteSettings\\RemoteSettings.bindings.cs", { 218, 243, 29, 103, 76, 196, 18, 44, 147, 115, 151, 215, 182, 201, 7, 39} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 2449, 1 },
	{ 2451, 2 },
	{ 2453, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[5] = 
{
	{ 0, 24 },
	{ 0, 20 },
	{ 0, 20 },
	{ 0, 23 },
	{ 0, 22 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[16] = 
{
	{ 24, 0, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult) */,
	{ 20, 1, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 20, 2, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 23, 3, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteConfigSettings::Finalize() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteConfigSettings::Destroy() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr) */,
	{ 22, 4, 1 } /* System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	67,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityAnalyticsModule,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
