#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// CameraFollow
struct CameraFollow_t3148844886;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Direction1041377119.h"
#include "AssemblyU2DCSharp_CachedInput2672964520.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// snake
struct  snake_t109578560  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> snake::bodyParts
	List_1_t747900261 * ___bodyParts_2;
	// UnityEngine.Vector3 snake::orientation
	Vector3_t4282066566  ___orientation_3;
	// System.Single snake::snakeSpeed
	float ___snakeSpeed_4;
	// System.Int32 snake::frame
	int32_t ___frame_5;
	// System.Int32 snake::triggerCount
	int32_t ___triggerCount_6;
	// System.Single snake::tailStartingScale
	float ___tailStartingScale_7;
	// Direction snake::direction
	int32_t ___direction_8;
	// Direction snake::lastInput
	int32_t ___lastInput_9;
	// CachedInput snake::cachedInput
	int32_t ___cachedInput_10;
	// UnityEngine.Vector3 snake::lastKnownPosition
	Vector3_t4282066566  ___lastKnownPosition_11;
	// System.Int32 snake::maxLength
	int32_t ___maxLength_12;
	// UnityEngine.GameObject snake::snakeBody
	GameObject_t3674682005 * ___snakeBody_13;
	// System.Boolean snake::died
	bool ___died_14;
	// CameraFollow snake::follow
	CameraFollow_t3148844886 * ___follow_15;
	// System.Single snake::fingerStartTime
	float ___fingerStartTime_16;
	// UnityEngine.Vector2 snake::fingerStartPos
	Vector2_t4282066565  ___fingerStartPos_17;
	// System.Boolean snake::isSwipe
	bool ___isSwipe_18;
	// System.Single snake::minSwipeDist
	float ___minSwipeDist_19;
	// System.Single snake::maxSwipeTime
	float ___maxSwipeTime_20;

public:
	inline static int32_t get_offset_of_bodyParts_2() { return static_cast<int32_t>(offsetof(snake_t109578560, ___bodyParts_2)); }
	inline List_1_t747900261 * get_bodyParts_2() const { return ___bodyParts_2; }
	inline List_1_t747900261 ** get_address_of_bodyParts_2() { return &___bodyParts_2; }
	inline void set_bodyParts_2(List_1_t747900261 * value)
	{
		___bodyParts_2 = value;
		Il2CppCodeGenWriteBarrier(&___bodyParts_2, value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(snake_t109578560, ___orientation_3)); }
	inline Vector3_t4282066566  get_orientation_3() const { return ___orientation_3; }
	inline Vector3_t4282066566 * get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(Vector3_t4282066566  value)
	{
		___orientation_3 = value;
	}

	inline static int32_t get_offset_of_snakeSpeed_4() { return static_cast<int32_t>(offsetof(snake_t109578560, ___snakeSpeed_4)); }
	inline float get_snakeSpeed_4() const { return ___snakeSpeed_4; }
	inline float* get_address_of_snakeSpeed_4() { return &___snakeSpeed_4; }
	inline void set_snakeSpeed_4(float value)
	{
		___snakeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_frame_5() { return static_cast<int32_t>(offsetof(snake_t109578560, ___frame_5)); }
	inline int32_t get_frame_5() const { return ___frame_5; }
	inline int32_t* get_address_of_frame_5() { return &___frame_5; }
	inline void set_frame_5(int32_t value)
	{
		___frame_5 = value;
	}

	inline static int32_t get_offset_of_triggerCount_6() { return static_cast<int32_t>(offsetof(snake_t109578560, ___triggerCount_6)); }
	inline int32_t get_triggerCount_6() const { return ___triggerCount_6; }
	inline int32_t* get_address_of_triggerCount_6() { return &___triggerCount_6; }
	inline void set_triggerCount_6(int32_t value)
	{
		___triggerCount_6 = value;
	}

	inline static int32_t get_offset_of_tailStartingScale_7() { return static_cast<int32_t>(offsetof(snake_t109578560, ___tailStartingScale_7)); }
	inline float get_tailStartingScale_7() const { return ___tailStartingScale_7; }
	inline float* get_address_of_tailStartingScale_7() { return &___tailStartingScale_7; }
	inline void set_tailStartingScale_7(float value)
	{
		___tailStartingScale_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(snake_t109578560, ___direction_8)); }
	inline int32_t get_direction_8() const { return ___direction_8; }
	inline int32_t* get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(int32_t value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_lastInput_9() { return static_cast<int32_t>(offsetof(snake_t109578560, ___lastInput_9)); }
	inline int32_t get_lastInput_9() const { return ___lastInput_9; }
	inline int32_t* get_address_of_lastInput_9() { return &___lastInput_9; }
	inline void set_lastInput_9(int32_t value)
	{
		___lastInput_9 = value;
	}

	inline static int32_t get_offset_of_cachedInput_10() { return static_cast<int32_t>(offsetof(snake_t109578560, ___cachedInput_10)); }
	inline int32_t get_cachedInput_10() const { return ___cachedInput_10; }
	inline int32_t* get_address_of_cachedInput_10() { return &___cachedInput_10; }
	inline void set_cachedInput_10(int32_t value)
	{
		___cachedInput_10 = value;
	}

	inline static int32_t get_offset_of_lastKnownPosition_11() { return static_cast<int32_t>(offsetof(snake_t109578560, ___lastKnownPosition_11)); }
	inline Vector3_t4282066566  get_lastKnownPosition_11() const { return ___lastKnownPosition_11; }
	inline Vector3_t4282066566 * get_address_of_lastKnownPosition_11() { return &___lastKnownPosition_11; }
	inline void set_lastKnownPosition_11(Vector3_t4282066566  value)
	{
		___lastKnownPosition_11 = value;
	}

	inline static int32_t get_offset_of_maxLength_12() { return static_cast<int32_t>(offsetof(snake_t109578560, ___maxLength_12)); }
	inline int32_t get_maxLength_12() const { return ___maxLength_12; }
	inline int32_t* get_address_of_maxLength_12() { return &___maxLength_12; }
	inline void set_maxLength_12(int32_t value)
	{
		___maxLength_12 = value;
	}

	inline static int32_t get_offset_of_snakeBody_13() { return static_cast<int32_t>(offsetof(snake_t109578560, ___snakeBody_13)); }
	inline GameObject_t3674682005 * get_snakeBody_13() const { return ___snakeBody_13; }
	inline GameObject_t3674682005 ** get_address_of_snakeBody_13() { return &___snakeBody_13; }
	inline void set_snakeBody_13(GameObject_t3674682005 * value)
	{
		___snakeBody_13 = value;
		Il2CppCodeGenWriteBarrier(&___snakeBody_13, value);
	}

	inline static int32_t get_offset_of_died_14() { return static_cast<int32_t>(offsetof(snake_t109578560, ___died_14)); }
	inline bool get_died_14() const { return ___died_14; }
	inline bool* get_address_of_died_14() { return &___died_14; }
	inline void set_died_14(bool value)
	{
		___died_14 = value;
	}

	inline static int32_t get_offset_of_follow_15() { return static_cast<int32_t>(offsetof(snake_t109578560, ___follow_15)); }
	inline CameraFollow_t3148844886 * get_follow_15() const { return ___follow_15; }
	inline CameraFollow_t3148844886 ** get_address_of_follow_15() { return &___follow_15; }
	inline void set_follow_15(CameraFollow_t3148844886 * value)
	{
		___follow_15 = value;
		Il2CppCodeGenWriteBarrier(&___follow_15, value);
	}

	inline static int32_t get_offset_of_fingerStartTime_16() { return static_cast<int32_t>(offsetof(snake_t109578560, ___fingerStartTime_16)); }
	inline float get_fingerStartTime_16() const { return ___fingerStartTime_16; }
	inline float* get_address_of_fingerStartTime_16() { return &___fingerStartTime_16; }
	inline void set_fingerStartTime_16(float value)
	{
		___fingerStartTime_16 = value;
	}

	inline static int32_t get_offset_of_fingerStartPos_17() { return static_cast<int32_t>(offsetof(snake_t109578560, ___fingerStartPos_17)); }
	inline Vector2_t4282066565  get_fingerStartPos_17() const { return ___fingerStartPos_17; }
	inline Vector2_t4282066565 * get_address_of_fingerStartPos_17() { return &___fingerStartPos_17; }
	inline void set_fingerStartPos_17(Vector2_t4282066565  value)
	{
		___fingerStartPos_17 = value;
	}

	inline static int32_t get_offset_of_isSwipe_18() { return static_cast<int32_t>(offsetof(snake_t109578560, ___isSwipe_18)); }
	inline bool get_isSwipe_18() const { return ___isSwipe_18; }
	inline bool* get_address_of_isSwipe_18() { return &___isSwipe_18; }
	inline void set_isSwipe_18(bool value)
	{
		___isSwipe_18 = value;
	}

	inline static int32_t get_offset_of_minSwipeDist_19() { return static_cast<int32_t>(offsetof(snake_t109578560, ___minSwipeDist_19)); }
	inline float get_minSwipeDist_19() const { return ___minSwipeDist_19; }
	inline float* get_address_of_minSwipeDist_19() { return &___minSwipeDist_19; }
	inline void set_minSwipeDist_19(float value)
	{
		___minSwipeDist_19 = value;
	}

	inline static int32_t get_offset_of_maxSwipeTime_20() { return static_cast<int32_t>(offsetof(snake_t109578560, ___maxSwipeTime_20)); }
	inline float get_maxSwipeTime_20() const { return ___maxSwipeTime_20; }
	inline float* get_address_of_maxSwipeTime_20() { return &___maxSwipeTime_20; }
	inline void set_maxSwipeTime_20(float value)
	{
		___maxSwipeTime_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
