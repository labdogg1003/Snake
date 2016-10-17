#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;
// AdManager
struct AdManager_t3461832170;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdManager
struct  AdManager_t3461832170  : public MonoBehaviour_t667441552
{
public:
	// System.String AdManager::gameID
	String_t* ___gameID_2;
	// System.Boolean AdManager::enableTestMode
	bool ___enableTestMode_3;
	// UnityEngine.Coroutine AdManager::AdRoutine
	Coroutine_t3621161934 * ___AdRoutine_4;

public:
	inline static int32_t get_offset_of_gameID_2() { return static_cast<int32_t>(offsetof(AdManager_t3461832170, ___gameID_2)); }
	inline String_t* get_gameID_2() const { return ___gameID_2; }
	inline String_t** get_address_of_gameID_2() { return &___gameID_2; }
	inline void set_gameID_2(String_t* value)
	{
		___gameID_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameID_2, value);
	}

	inline static int32_t get_offset_of_enableTestMode_3() { return static_cast<int32_t>(offsetof(AdManager_t3461832170, ___enableTestMode_3)); }
	inline bool get_enableTestMode_3() const { return ___enableTestMode_3; }
	inline bool* get_address_of_enableTestMode_3() { return &___enableTestMode_3; }
	inline void set_enableTestMode_3(bool value)
	{
		___enableTestMode_3 = value;
	}

	inline static int32_t get_offset_of_AdRoutine_4() { return static_cast<int32_t>(offsetof(AdManager_t3461832170, ___AdRoutine_4)); }
	inline Coroutine_t3621161934 * get_AdRoutine_4() const { return ___AdRoutine_4; }
	inline Coroutine_t3621161934 ** get_address_of_AdRoutine_4() { return &___AdRoutine_4; }
	inline void set_AdRoutine_4(Coroutine_t3621161934 * value)
	{
		___AdRoutine_4 = value;
		Il2CppCodeGenWriteBarrier(&___AdRoutine_4, value);
	}
};

struct AdManager_t3461832170_StaticFields
{
public:
	// AdManager AdManager::<Instance>k__BackingField
	AdManager_t3461832170 * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdManager_t3461832170_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline AdManager_t3461832170 * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline AdManager_t3461832170 ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(AdManager_t3461832170 * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
