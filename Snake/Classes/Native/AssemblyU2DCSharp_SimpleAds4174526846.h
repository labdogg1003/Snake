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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleAds
struct  SimpleAds_t4174526846  : public MonoBehaviour_t667441552
{
public:
	// System.String SimpleAds::gameId
	String_t* ___gameId_2;
	// System.Boolean SimpleAds::enableTestMode
	bool ___enableTestMode_3;

public:
	inline static int32_t get_offset_of_gameId_2() { return static_cast<int32_t>(offsetof(SimpleAds_t4174526846, ___gameId_2)); }
	inline String_t* get_gameId_2() const { return ___gameId_2; }
	inline String_t** get_address_of_gameId_2() { return &___gameId_2; }
	inline void set_gameId_2(String_t* value)
	{
		___gameId_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameId_2, value);
	}

	inline static int32_t get_offset_of_enableTestMode_3() { return static_cast<int32_t>(offsetof(SimpleAds_t4174526846, ___enableTestMode_3)); }
	inline bool get_enableTestMode_3() const { return ___enableTestMode_3; }
	inline bool* get_address_of_enableTestMode_3() { return &___enableTestMode_3; }
	inline void set_enableTestMode_3(bool value)
	{
		___enableTestMode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
