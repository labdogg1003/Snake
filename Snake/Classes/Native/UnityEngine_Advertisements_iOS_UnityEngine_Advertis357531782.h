#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t2431652500;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnsupportedPlatform
struct  UnsupportedPlatform_t357531782  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.UnsupportedPlatform::OnFinish
	EventHandler_1_t2431652500 * ___OnFinish_0;

public:
	inline static int32_t get_offset_of_OnFinish_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_t357531782, ___OnFinish_0)); }
	inline EventHandler_1_t2431652500 * get_OnFinish_0() const { return ___OnFinish_0; }
	inline EventHandler_1_t2431652500 ** get_address_of_OnFinish_0() { return &___OnFinish_0; }
	inline void set_OnFinish_0(EventHandler_1_t2431652500 * value)
	{
		___OnFinish_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
