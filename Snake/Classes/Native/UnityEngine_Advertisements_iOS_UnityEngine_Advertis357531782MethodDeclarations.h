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

// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t357531782;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3926255831;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t2431652500;
// System.String
struct String_t;
// UnityEngine.Advertisements.MetaData
struct MetaData_t1620599167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti1620599167.h"

// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m3583092434 (UnsupportedPlatform_t357531782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnStart_m833803289 (UnsupportedPlatform_t357531782 * __this, EventHandler_1_t3926255831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnStart_m3571701310 (UnsupportedPlatform_t357531782 * __this, EventHandler_1_t3926255831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnFinish_m1587135625 (UnsupportedPlatform_t357531782 * __this, EventHandler_1_t2431652500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnFinish_m4187148654 (UnsupportedPlatform_t357531782 * __this, EventHandler_1_t2431652500 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
extern "C"  String_t* UnsupportedPlatform_get_version_m4260603196 (UnsupportedPlatform_t357531782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern "C"  void UnsupportedPlatform_Initialize_m3554278461 (UnsupportedPlatform_t357531782 * __this, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
extern "C"  bool UnsupportedPlatform_IsReady_m3537974585 (UnsupportedPlatform_t357531782 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
extern "C"  void UnsupportedPlatform_Show_m928106355 (UnsupportedPlatform_t357531782 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void UnsupportedPlatform_SetMetaData_m2729264857 (UnsupportedPlatform_t357531782 * __this, MetaData_t1620599167 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
