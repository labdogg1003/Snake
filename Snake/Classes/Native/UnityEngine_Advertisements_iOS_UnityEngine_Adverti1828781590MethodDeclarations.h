﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1828781590;
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

// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m66978791 (unityAdsDidError_t1828781590 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m3876300111 (unityAdsDidError_t1828781590 * __this, int64_t ___rawError0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * unityAdsDidError_BeginInvoke_m1857949550 (unityAdsDidError_t1828781590 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidError_EndInvoke_m1548058999 (unityAdsDidError_t1828781590 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
