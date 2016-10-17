#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Advertisements.iOS.Platform
struct Platform_t2669516521;
// System.String
struct String_t;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t3379526518;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1828781590;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t1841754224;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t877847109;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3926255831;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t2431652500;
// UnityEngine.Advertisements.MetaData
struct MetaData_t1620599167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti3379526518.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti1828781590.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti1841754224.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Advertis877847109.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti1620599167.h"

// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m2490843800 (Platform_t2669516521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsInitialize_m1888672850 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsShow(System.String)
extern "C"  void Platform_UnityAdsShow_m893215806 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsIsReady(System.String)
extern "C"  bool Platform_UnityAdsIsReady_m1333158990 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsGetVersion()
extern "C"  String_t* Platform_UnityAdsGetVersion_m3684692070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsSetMetaData_m870818034 (Il2CppObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsSetReadyCallback_m1785527631 (Il2CppObject * __this /* static, unused */, unityAdsReady_t3379526518 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsSetDidErrorCallback_m1435499285 (Il2CppObject * __this /* static, unused */, unityAdsDidError_t1828781590 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsSetDidStartCallback_m3524216789 (Il2CppObject * __this /* static, unused */, unityAdsDidStart_t1841754224 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsSetDidFinishCallback_m1150696881 (Il2CppObject * __this /* static, unused */, unityAdsDidFinish_t877847109 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m2006499748 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m2006499748(char* ___placementId0);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m3485125278 (Il2CppObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m3485125278(int64_t ___rawError0, char* ___message1);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m2725460568 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m2725460568(char* ___placementId0);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m3784101891 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m3784101891(char* ___placementId0, int64_t ___rawShowResult1);
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m4063023967 (Platform_t2669516521 * __this, EventHandler_1_t3926255831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m2312456504 (Platform_t2669516521 * __this, EventHandler_1_t3926255831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m3901819471 (Platform_t2669516521 * __this, EventHandler_1_t2431652500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m938700264 (Platform_t2669516521 * __this, EventHandler_1_t2431652500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
extern "C"  String_t* Platform_get_version_m3574503592 (Platform_t2669516521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m3353702711 (Platform_t2669516521 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m4165974131 (Platform_t2669516521 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
extern "C"  void Platform_Show_m2499668537 (Platform_t2669516521 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m685318611 (Platform_t2669516521 * __this, MetaData_t1620599167 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
