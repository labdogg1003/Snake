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
// Tile[]
struct TileU5BU5D_t4211174971;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UIManager
struct UIManager_t1861242489;
// gameManager
struct gameManager_t701720411;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameManager
struct  gameManager_t701720411  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 gameManager::score
	int32_t ___score_2;
	// UnityEngine.UI.Text gameManager::txtScore
	Text_t9039225 * ___txtScore_3;
	// Tile[] gameManager::tiles
	TileU5BU5D_t4211174971* ___tiles_4;
	// UnityEngine.GameObject gameManager::pellet
	GameObject_t3674682005 * ___pellet_5;
	// System.Boolean gameManager::paused
	bool ___paused_6;
	// System.Single gameManager::seconds
	float ___seconds_7;
	// System.Single gameManager::minutes
	float ___minutes_8;
	// System.Single gameManager::hours
	float ___hours_9;
	// UnityEngine.UI.Text gameManager::lblTime
	Text_t9039225 * ___lblTime_10;
	// UIManager gameManager::_uiManager
	UIManager_t1861242489 * ____uiManager_11;
	// UnityEngine.GameObject gameManager::endGameUI
	GameObject_t3674682005 * ___endGameUI_12;
	// System.Int32 gameManager::targetFrameRate
	int32_t ___targetFrameRate_13;
	// System.Boolean gameManager::died
	bool ___died_14;
	// System.Boolean gameManager::limitQuality
	bool ___limitQuality_15;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_txtScore_3() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___txtScore_3)); }
	inline Text_t9039225 * get_txtScore_3() const { return ___txtScore_3; }
	inline Text_t9039225 ** get_address_of_txtScore_3() { return &___txtScore_3; }
	inline void set_txtScore_3(Text_t9039225 * value)
	{
		___txtScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_3, value);
	}

	inline static int32_t get_offset_of_tiles_4() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___tiles_4)); }
	inline TileU5BU5D_t4211174971* get_tiles_4() const { return ___tiles_4; }
	inline TileU5BU5D_t4211174971** get_address_of_tiles_4() { return &___tiles_4; }
	inline void set_tiles_4(TileU5BU5D_t4211174971* value)
	{
		___tiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_4, value);
	}

	inline static int32_t get_offset_of_pellet_5() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___pellet_5)); }
	inline GameObject_t3674682005 * get_pellet_5() const { return ___pellet_5; }
	inline GameObject_t3674682005 ** get_address_of_pellet_5() { return &___pellet_5; }
	inline void set_pellet_5(GameObject_t3674682005 * value)
	{
		___pellet_5 = value;
		Il2CppCodeGenWriteBarrier(&___pellet_5, value);
	}

	inline static int32_t get_offset_of_paused_6() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___paused_6)); }
	inline bool get_paused_6() const { return ___paused_6; }
	inline bool* get_address_of_paused_6() { return &___paused_6; }
	inline void set_paused_6(bool value)
	{
		___paused_6 = value;
	}

	inline static int32_t get_offset_of_seconds_7() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___seconds_7)); }
	inline float get_seconds_7() const { return ___seconds_7; }
	inline float* get_address_of_seconds_7() { return &___seconds_7; }
	inline void set_seconds_7(float value)
	{
		___seconds_7 = value;
	}

	inline static int32_t get_offset_of_minutes_8() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___minutes_8)); }
	inline float get_minutes_8() const { return ___minutes_8; }
	inline float* get_address_of_minutes_8() { return &___minutes_8; }
	inline void set_minutes_8(float value)
	{
		___minutes_8 = value;
	}

	inline static int32_t get_offset_of_hours_9() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___hours_9)); }
	inline float get_hours_9() const { return ___hours_9; }
	inline float* get_address_of_hours_9() { return &___hours_9; }
	inline void set_hours_9(float value)
	{
		___hours_9 = value;
	}

	inline static int32_t get_offset_of_lblTime_10() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___lblTime_10)); }
	inline Text_t9039225 * get_lblTime_10() const { return ___lblTime_10; }
	inline Text_t9039225 ** get_address_of_lblTime_10() { return &___lblTime_10; }
	inline void set_lblTime_10(Text_t9039225 * value)
	{
		___lblTime_10 = value;
		Il2CppCodeGenWriteBarrier(&___lblTime_10, value);
	}

	inline static int32_t get_offset_of__uiManager_11() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ____uiManager_11)); }
	inline UIManager_t1861242489 * get__uiManager_11() const { return ____uiManager_11; }
	inline UIManager_t1861242489 ** get_address_of__uiManager_11() { return &____uiManager_11; }
	inline void set__uiManager_11(UIManager_t1861242489 * value)
	{
		____uiManager_11 = value;
		Il2CppCodeGenWriteBarrier(&____uiManager_11, value);
	}

	inline static int32_t get_offset_of_endGameUI_12() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___endGameUI_12)); }
	inline GameObject_t3674682005 * get_endGameUI_12() const { return ___endGameUI_12; }
	inline GameObject_t3674682005 ** get_address_of_endGameUI_12() { return &___endGameUI_12; }
	inline void set_endGameUI_12(GameObject_t3674682005 * value)
	{
		___endGameUI_12 = value;
		Il2CppCodeGenWriteBarrier(&___endGameUI_12, value);
	}

	inline static int32_t get_offset_of_targetFrameRate_13() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___targetFrameRate_13)); }
	inline int32_t get_targetFrameRate_13() const { return ___targetFrameRate_13; }
	inline int32_t* get_address_of_targetFrameRate_13() { return &___targetFrameRate_13; }
	inline void set_targetFrameRate_13(int32_t value)
	{
		___targetFrameRate_13 = value;
	}

	inline static int32_t get_offset_of_died_14() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___died_14)); }
	inline bool get_died_14() const { return ___died_14; }
	inline bool* get_address_of_died_14() { return &___died_14; }
	inline void set_died_14(bool value)
	{
		___died_14 = value;
	}

	inline static int32_t get_offset_of_limitQuality_15() { return static_cast<int32_t>(offsetof(gameManager_t701720411, ___limitQuality_15)); }
	inline bool get_limitQuality_15() const { return ___limitQuality_15; }
	inline bool* get_address_of_limitQuality_15() { return &___limitQuality_15; }
	inline void set_limitQuality_15(bool value)
	{
		___limitQuality_15 = value;
	}
};

struct gameManager_t701720411_StaticFields
{
public:
	// gameManager gameManager::<Instance>k__BackingField
	gameManager_t701720411 * ___U3CInstanceU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(gameManager_t701720411_StaticFields, ___U3CInstanceU3Ek__BackingField_16)); }
	inline gameManager_t701720411 * get_U3CInstanceU3Ek__BackingField_16() const { return ___U3CInstanceU3Ek__BackingField_16; }
	inline gameManager_t701720411 ** get_address_of_U3CInstanceU3Ek__BackingField_16() { return &___U3CInstanceU3Ek__BackingField_16; }
	inline void set_U3CInstanceU3Ek__BackingField_16(gameManager_t701720411 * value)
	{
		___U3CInstanceU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
