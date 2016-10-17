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

// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t3379526518;
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

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m946797667 (unityAdsReady_t3379526518 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m3566793637 (unityAdsReady_t3379526518 * __this, String_t* ___placementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsReady_BeginInvoke_m3151639218 (unityAdsReady_t3379526518 * __this, String_t* ___placementId0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsReady_EndInvoke_m4095612915 (unityAdsReady_t3379526518 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
