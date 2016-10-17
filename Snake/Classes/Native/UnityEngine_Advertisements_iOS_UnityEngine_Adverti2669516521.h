#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.iOS.Platform
struct Platform_t2669516521;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_t4152484200;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2942839990;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3926255831;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t2431652500;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t2389300721;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t3379526518;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1828781590;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t1841754224;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t877847109;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t2669516521  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_t2942839990 * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t3926255831 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t2431652500 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t2389300721 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t2669516521, ___OnReady_2)); }
	inline EventHandler_1_t2942839990 * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_t2942839990 ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_t2942839990 * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnReady_2, value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t2669516521, ___OnStart_3)); }
	inline EventHandler_1_t3926255831 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t3926255831 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t3926255831 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnStart_3, value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t2669516521, ___OnFinish_4)); }
	inline EventHandler_1_t2431652500 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t2431652500 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t2431652500 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_4, value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t2669516521, ___OnError_5)); }
	inline EventHandler_1_t2389300721 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t2389300721 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t2389300721 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_5, value);
	}
};

struct Platform_t2669516521_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t2669516521 * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_t4152484200 * ___s_CallbackExecutor_1;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsReady UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache0
	unityAdsReady_t3379526518 * ___U3CU3Ef__mgU24cache0_6;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache1
	unityAdsDidError_t1828781590 * ___U3CU3Ef__mgU24cache1_7;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache2
	unityAdsDidStart_t1841754224 * ___U3CU3Ef__mgU24cache2_8;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache3
	unityAdsDidFinish_t877847109 * ___U3CU3Ef__mgU24cache3_9;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___s_Instance_0)); }
	inline Platform_t2669516521 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t2669516521 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t2669516521 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_t4152484200 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_t4152484200 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_t4152484200 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_CallbackExecutor_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline unityAdsReady_t3379526518 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline unityAdsReady_t3379526518 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(unityAdsReady_t3379526518 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline unityAdsDidError_t1828781590 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline unityAdsDidError_t1828781590 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(unityAdsDidError_t1828781590 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline unityAdsDidStart_t1841754224 * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline unityAdsDidStart_t1841754224 ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(unityAdsDidStart_t1841754224 * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(Platform_t2669516521_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline unityAdsDidFinish_t877847109 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline unityAdsDidFinish_t877847109 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(unityAdsDidFinish_t877847109 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
