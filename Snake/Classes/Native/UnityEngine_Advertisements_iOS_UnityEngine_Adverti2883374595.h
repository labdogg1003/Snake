#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.IPlatform
struct IPlatform_t1873265530;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3926255831;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t2431652500;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_Advertisements_iOS_UnityEngine_Advertis625286177.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t2883374595  : public Il2CppObject
{
public:

public:
};

struct Advertisement_t2883374595_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	Il2CppObject * ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_2;
	// UnityEngine.Advertisements.Advertisement/DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache0
	EventHandler_1_t3926255831 * ___U3CU3Ef__amU24cache0_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache1
	EventHandler_1_t2431652500 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___s_Platform_1)); }
	inline Il2CppObject * get_s_Platform_1() const { return ___s_Platform_1; }
	inline Il2CppObject ** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(Il2CppObject * value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_Platform_1, value);
	}

	inline static int32_t get_offset_of_s_Showing_2() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___s_Showing_2)); }
	inline bool get_s_Showing_2() const { return ___s_Showing_2; }
	inline bool* get_address_of_s_Showing_2() { return &___s_Showing_2; }
	inline void set_s_Showing_2(bool value)
	{
		___s_Showing_2 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_3() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___s_DebugLevel_3)); }
	inline int32_t get_s_DebugLevel_3() const { return ___s_DebugLevel_3; }
	inline int32_t* get_address_of_s_DebugLevel_3() { return &___s_DebugLevel_3; }
	inline void set_s_DebugLevel_3(int32_t value)
	{
		___s_DebugLevel_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline EventHandler_1_t3926255831 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline EventHandler_1_t3926255831 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(EventHandler_1_t3926255831 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(Advertisement_t2883374595_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline EventHandler_1_t2431652500 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline EventHandler_1_t2431652500 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(EventHandler_1_t2431652500 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
