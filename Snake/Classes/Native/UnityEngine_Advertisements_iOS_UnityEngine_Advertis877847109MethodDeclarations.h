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

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t877847109;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m78553266 (unityAdsDidFinish_t877847109 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m941600034 (unityAdsDidFinish_t877847109 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsDidFinish_BeginInvoke_m143713961 (unityAdsDidFinish_t877847109 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidFinish_EndInvoke_m969030594 (unityAdsDidFinish_t877847109 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
