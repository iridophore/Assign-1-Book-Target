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
	{ 186, 0,  0 } /*tableIndex: 0 */,
	{ 188, 0,  1 } /*tableIndex: 1 */,
	{ 189, 1,  1 } /*tableIndex: 2 */,
	{ 191, 0,  4 } /*tableIndex: 3 */,
	{ 192, 0,  5 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"callback",
	"eventBufferPtr",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[10] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*) */,
	{ 0, 0 } /* 0x06000003 System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor() */,
	{ 0, 1 } /* 0x06000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType) */,
	{ 1, 2 } /* 0x06000007 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr) */,
	{ 3, 1 } /* 0x06000008 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String) */,
	{ 4, 1 } /* 0x06000009 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[51] = 
{
	{ 13590, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0, 0 } /* seqPointIndex: 0 */,
	{ 13590, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1, 0 } /* seqPointIndex: 1 */,
	{ 13590, -1, 1, 94, 94, 9, -1, 0, kSequencePointKind_Normal, 0, 2, 0 } /* seqPointIndex: 2 */,
	{ 13590, -1, 1, 97, 97, 13, -1, 1, kSequencePointKind_Normal, 0, 3, 0 } /* seqPointIndex: 3 */,
	{ 13590, -1, 1, 97, 97, 13, -1, 2, kSequencePointKind_Normal, 0, 4, 0 } /* seqPointIndex: 4 */,
	{ 13590, -1, 1, 98, 98, 9, -1, 7, kSequencePointKind_Normal, 0, 5, 0 } /* seqPointIndex: 5 */,
	{ 13590, -1, 1, 97, 97, 13, -1, 2, kSequencePointKind_StepOut, 0, 6, 0 } /* seqPointIndex: 6 */,
	{ 13591, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 7, 0 } /* seqPointIndex: 7 */,
	{ 13591, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 8, 0 } /* seqPointIndex: 8 */,
	{ 13591, -1, 1, 102, 102, 9, -1, 0, kSequencePointKind_Normal, 0, 9, 0 } /* seqPointIndex: 9 */,
	{ 13591, -1, 1, 103, 103, 13, -1, 1, kSequencePointKind_Normal, 0, 10, 0 } /* seqPointIndex: 10 */,
	{ 13591, -1, 1, 104, 104, 13, -1, 7, kSequencePointKind_Normal, 0, 11, 0 } /* seqPointIndex: 11 */,
	{ 13591, -1, 1, 105, 105, 17, -1, 13, kSequencePointKind_Normal, 0, 12, 0 } /* seqPointIndex: 12 */,
	{ 13591, -1, 1, 105, 105, 17, -1, 15, kSequencePointKind_Normal, 0, 13, 0 } /* seqPointIndex: 13 */,
	{ 13591, -1, 1, 106, 106, 9, -1, 20, kSequencePointKind_Normal, 0, 14, 0 } /* seqPointIndex: 14 */,
	{ 13591, -1, 1, 105, 105, 17, -1, 15, kSequencePointKind_StepOut, 0, 15, 0 } /* seqPointIndex: 15 */,
	{ 13592, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16, 0 } /* seqPointIndex: 16 */,
	{ 13592, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17, 0 } /* seqPointIndex: 17 */,
	{ 13592, -1, 1, 110, 110, 9, -1, 0, kSequencePointKind_Normal, 0, 18, 0 } /* seqPointIndex: 18 */,
	{ 13592, -1, 1, 111, 111, 13, -1, 1, kSequencePointKind_Normal, 0, 19, 0 } /* seqPointIndex: 19 */,
	{ 13592, -1, 1, 112, 112, 13, -1, 7, kSequencePointKind_Normal, 0, 20, 0 } /* seqPointIndex: 20 */,
	{ 13592, -1, 1, 112, 112, 71, -1, 9, kSequencePointKind_Normal, 0, 21, 0 } /* seqPointIndex: 21 */,
	{ 13592, -1, 1, 113, 113, 13, -1, 15, kSequencePointKind_Normal, 0, 22, 0 } /* seqPointIndex: 22 */,
	{ 13592, -1, 1, 114, 114, 13, -1, 21, kSequencePointKind_Normal, 0, 23, 0 } /* seqPointIndex: 23 */,
	{ 13592, -1, 1, 115, 115, 17, -1, 22, kSequencePointKind_Normal, 0, 24, 0 } /* seqPointIndex: 24 */,
	{ 13592, -1, 1, 116, 116, 17, -1, 29, kSequencePointKind_Normal, 0, 25, 0 } /* seqPointIndex: 25 */,
	{ 13592, -1, 1, 117, 117, 13, -1, 36, kSequencePointKind_Normal, 0, 26, 0 } /* seqPointIndex: 26 */,
	{ 13592, -1, 1, 119, 119, 13, -1, 42, kSequencePointKind_Normal, 0, 27, 0 } /* seqPointIndex: 27 */,
	{ 13592, -1, 1, 120, 120, 17, -1, 43, kSequencePointKind_Normal, 0, 28, 0 } /* seqPointIndex: 28 */,
	{ 13592, -1, 1, 120, 120, 17, -1, 46, kSequencePointKind_Normal, 0, 29, 0 } /* seqPointIndex: 29 */,
	{ 13592, -1, 1, 121, 121, 13, -1, 51, kSequencePointKind_Normal, 0, 30, 0 } /* seqPointIndex: 30 */,
	{ 13592, -1, 1, 122, 122, 9, -1, 52, kSequencePointKind_Normal, 0, 31, 0 } /* seqPointIndex: 31 */,
	{ 13592, -1, 1, 112, 112, 71, -1, 9, kSequencePointKind_StepOut, 0, 32, 0 } /* seqPointIndex: 32 */,
	{ 13592, -1, 1, 120, 120, 17, -1, 46, kSequencePointKind_StepOut, 0, 33, 0 } /* seqPointIndex: 33 */,
	{ 13593, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34, 0 } /* seqPointIndex: 34 */,
	{ 13593, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35, 0 } /* seqPointIndex: 35 */,
	{ 13593, -1, 1, 126, 126, 9, -1, 0, kSequencePointKind_Normal, 0, 36, 0 } /* seqPointIndex: 36 */,
	{ 13593, -1, 1, 127, 127, 13, -1, 1, kSequencePointKind_Normal, 0, 37, 0 } /* seqPointIndex: 37 */,
	{ 13593, -1, 1, 128, 128, 13, -1, 7, kSequencePointKind_Normal, 0, 38, 0 } /* seqPointIndex: 38 */,
	{ 13593, -1, 1, 129, 129, 17, -1, 13, kSequencePointKind_Normal, 0, 39, 0 } /* seqPointIndex: 39 */,
	{ 13593, -1, 1, 129, 129, 17, -1, 16, kSequencePointKind_Normal, 0, 40, 0 } /* seqPointIndex: 40 */,
	{ 13593, -1, 1, 130, 130, 9, -1, 21, kSequencePointKind_Normal, 0, 41, 0 } /* seqPointIndex: 41 */,
	{ 13593, -1, 1, 129, 129, 17, -1, 16, kSequencePointKind_StepOut, 0, 42, 0 } /* seqPointIndex: 42 */,
	{ 13594, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 43, 0 } /* seqPointIndex: 43 */,
	{ 13594, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 44, 0 } /* seqPointIndex: 44 */,
	{ 13594, -1, 1, 134, 134, 9, -1, 0, kSequencePointKind_Normal, 0, 45, 0 } /* seqPointIndex: 45 */,
	{ 13594, -1, 1, 135, 135, 13, -1, 1, kSequencePointKind_Normal, 0, 46, 0 } /* seqPointIndex: 46 */,
	{ 13594, -1, 1, 136, 136, 13, -1, 7, kSequencePointKind_Normal, 0, 47, 0 } /* seqPointIndex: 47 */,
	{ 13594, -1, 1, 136, 136, 41, -1, 16, kSequencePointKind_Normal, 0, 48, 0 } /* seqPointIndex: 48 */,
	{ 13594, -1, 1, 137, 137, 9, -1, 28, kSequencePointKind_Normal, 0, 49, 0 } /* seqPointIndex: 49 */,
	{ 13594, -1, 1, 136, 136, 41, -1, 16, kSequencePointKind_StepOut, 0, 50, 0 } /* seqPointIndex: 50 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[1] = { { 0, 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\Input\\Private\\Input.cs", { 123, 20, 222, 186, 185, 61, 222, 242, 212, 48, 43, 97, 221, 136, 245, 106} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 2380, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[6] = 
{
	{ 0, 21 },
	{ 0, 53 },
	{ 21, 36 },
	{ 42, 51 },
	{ 0, 22 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[10] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor() */,
	{ 21, 0, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType) */,
	{ 53, 1, 3 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr) */,
	{ 22, 4, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String) */,
	{ 29, 5, 1 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	51,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_InputModule,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
