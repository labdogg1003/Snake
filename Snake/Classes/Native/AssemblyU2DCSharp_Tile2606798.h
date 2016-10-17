#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2606798  : public MonoBehaviour_t667441552
{
public:
	// System.Single Tile::dropTimer
	float ___dropTimer_2;
	// System.Single Tile::dropMultiplier
	float ___dropMultiplier_3;
	// System.Single Tile::dropMultOffset
	float ___dropMultOffset_4;
	// System.Single Tile::baseWaitTime
	float ___baseWaitTime_5;
	// System.Single Tile::baseReturnTime
	float ___baseReturnTime_6;
	// System.Single Tile::pelletOffset
	float ___pelletOffset_7;
	// System.Single Tile::returnTime
	float ___returnTime_8;
	// System.Single Tile::waitTime
	float ___waitTime_9;
	// UnityEngine.Vector3 Tile::startingPosition
	Vector3_t4282066566  ___startingPosition_10;
	// UnityEngine.Vector3 Tile::pelletLocation
	Vector3_t4282066566  ___pelletLocation_11;
	// UnityEngine.Rigidbody Tile::rigidBody
	Rigidbody_t3346577219 * ___rigidBody_12;

public:
	inline static int32_t get_offset_of_dropTimer_2() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___dropTimer_2)); }
	inline float get_dropTimer_2() const { return ___dropTimer_2; }
	inline float* get_address_of_dropTimer_2() { return &___dropTimer_2; }
	inline void set_dropTimer_2(float value)
	{
		___dropTimer_2 = value;
	}

	inline static int32_t get_offset_of_dropMultiplier_3() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___dropMultiplier_3)); }
	inline float get_dropMultiplier_3() const { return ___dropMultiplier_3; }
	inline float* get_address_of_dropMultiplier_3() { return &___dropMultiplier_3; }
	inline void set_dropMultiplier_3(float value)
	{
		___dropMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_dropMultOffset_4() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___dropMultOffset_4)); }
	inline float get_dropMultOffset_4() const { return ___dropMultOffset_4; }
	inline float* get_address_of_dropMultOffset_4() { return &___dropMultOffset_4; }
	inline void set_dropMultOffset_4(float value)
	{
		___dropMultOffset_4 = value;
	}

	inline static int32_t get_offset_of_baseWaitTime_5() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___baseWaitTime_5)); }
	inline float get_baseWaitTime_5() const { return ___baseWaitTime_5; }
	inline float* get_address_of_baseWaitTime_5() { return &___baseWaitTime_5; }
	inline void set_baseWaitTime_5(float value)
	{
		___baseWaitTime_5 = value;
	}

	inline static int32_t get_offset_of_baseReturnTime_6() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___baseReturnTime_6)); }
	inline float get_baseReturnTime_6() const { return ___baseReturnTime_6; }
	inline float* get_address_of_baseReturnTime_6() { return &___baseReturnTime_6; }
	inline void set_baseReturnTime_6(float value)
	{
		___baseReturnTime_6 = value;
	}

	inline static int32_t get_offset_of_pelletOffset_7() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___pelletOffset_7)); }
	inline float get_pelletOffset_7() const { return ___pelletOffset_7; }
	inline float* get_address_of_pelletOffset_7() { return &___pelletOffset_7; }
	inline void set_pelletOffset_7(float value)
	{
		___pelletOffset_7 = value;
	}

	inline static int32_t get_offset_of_returnTime_8() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___returnTime_8)); }
	inline float get_returnTime_8() const { return ___returnTime_8; }
	inline float* get_address_of_returnTime_8() { return &___returnTime_8; }
	inline void set_returnTime_8(float value)
	{
		___returnTime_8 = value;
	}

	inline static int32_t get_offset_of_waitTime_9() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___waitTime_9)); }
	inline float get_waitTime_9() const { return ___waitTime_9; }
	inline float* get_address_of_waitTime_9() { return &___waitTime_9; }
	inline void set_waitTime_9(float value)
	{
		___waitTime_9 = value;
	}

	inline static int32_t get_offset_of_startingPosition_10() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___startingPosition_10)); }
	inline Vector3_t4282066566  get_startingPosition_10() const { return ___startingPosition_10; }
	inline Vector3_t4282066566 * get_address_of_startingPosition_10() { return &___startingPosition_10; }
	inline void set_startingPosition_10(Vector3_t4282066566  value)
	{
		___startingPosition_10 = value;
	}

	inline static int32_t get_offset_of_pelletLocation_11() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___pelletLocation_11)); }
	inline Vector3_t4282066566  get_pelletLocation_11() const { return ___pelletLocation_11; }
	inline Vector3_t4282066566 * get_address_of_pelletLocation_11() { return &___pelletLocation_11; }
	inline void set_pelletLocation_11(Vector3_t4282066566  value)
	{
		___pelletLocation_11 = value;
	}

	inline static int32_t get_offset_of_rigidBody_12() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___rigidBody_12)); }
	inline Rigidbody_t3346577219 * get_rigidBody_12() const { return ___rigidBody_12; }
	inline Rigidbody_t3346577219 ** get_address_of_rigidBody_12() { return &___rigidBody_12; }
	inline void set_rigidBody_12(Rigidbody_t3346577219 * value)
	{
		___rigidBody_12 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
