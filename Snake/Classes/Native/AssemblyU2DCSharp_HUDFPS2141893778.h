#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HUDFPS
struct  HUDFPS_t2141893778  : public MonoBehaviour_t667441552
{
public:
	// System.Single HUDFPS::updateInterval
	float ___updateInterval_2;
	// UnityEngine.UI.Text HUDFPS::guiText
	Text_t9039225 * ___guiText_3;
	// System.Single HUDFPS::accum
	float ___accum_4;
	// System.Int32 HUDFPS::frames
	int32_t ___frames_5;
	// System.Single HUDFPS::timeleft
	float ___timeleft_6;

public:
	inline static int32_t get_offset_of_updateInterval_2() { return static_cast<int32_t>(offsetof(HUDFPS_t2141893778, ___updateInterval_2)); }
	inline float get_updateInterval_2() const { return ___updateInterval_2; }
	inline float* get_address_of_updateInterval_2() { return &___updateInterval_2; }
	inline void set_updateInterval_2(float value)
	{
		___updateInterval_2 = value;
	}

	inline static int32_t get_offset_of_guiText_3() { return static_cast<int32_t>(offsetof(HUDFPS_t2141893778, ___guiText_3)); }
	inline Text_t9039225 * get_guiText_3() const { return ___guiText_3; }
	inline Text_t9039225 ** get_address_of_guiText_3() { return &___guiText_3; }
	inline void set_guiText_3(Text_t9039225 * value)
	{
		___guiText_3 = value;
		Il2CppCodeGenWriteBarrier(&___guiText_3, value);
	}

	inline static int32_t get_offset_of_accum_4() { return static_cast<int32_t>(offsetof(HUDFPS_t2141893778, ___accum_4)); }
	inline float get_accum_4() const { return ___accum_4; }
	inline float* get_address_of_accum_4() { return &___accum_4; }
	inline void set_accum_4(float value)
	{
		___accum_4 = value;
	}

	inline static int32_t get_offset_of_frames_5() { return static_cast<int32_t>(offsetof(HUDFPS_t2141893778, ___frames_5)); }
	inline int32_t get_frames_5() const { return ___frames_5; }
	inline int32_t* get_address_of_frames_5() { return &___frames_5; }
	inline void set_frames_5(int32_t value)
	{
		___frames_5 = value;
	}

	inline static int32_t get_offset_of_timeleft_6() { return static_cast<int32_t>(offsetof(HUDFPS_t2141893778, ___timeleft_6)); }
	inline float get_timeleft_6() const { return ___timeleft_6; }
	inline float* get_address_of_timeleft_6() { return &___timeleft_6; }
	inline void set_timeleft_6(float value)
	{
		___timeleft_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
