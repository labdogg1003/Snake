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

// UnityEngine.Advertisements.IPlatform
struct IPlatform_t1873265530;
// System.String
struct String_t;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t4227685023;
// UnityEngine.Advertisements.MetaData
struct MetaData_t1620599167;
// System.Object
struct Il2CppObject;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t3781305285;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t2286701954;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti4227685023.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti1620599167.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti3781305285.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Adverti2286701954.h"

// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::GetPlatform()
extern "C"  Il2CppObject * Advertisement_GetPlatform_m3685882278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m297291892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m3875792663 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m3443784287 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C"  bool Advertisement_get_isShowing_m3860617381 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m1685470088 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m3463058170 (Il2CppObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m833294668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m3134327094 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m61983212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m2028848152 (Il2CppObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t4227685023 * ___showOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m1699565718 (Il2CppObject * __this /* static, unused */, MetaData_t1620599167 * ___metaData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m3185134040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__0(System.Object,UnityEngine.Advertisements.StartEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__0_m2356971102 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, StartEventArgs_t3781305285 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__1_m2998226812 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, FinishEventArgs_t2286701954 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
