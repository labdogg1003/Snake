#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UIManager
struct UIManager_t1861242489;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIManager_UIState2436712647.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1861242489  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UIManager::mainMenu
	GameObject_t3674682005 * ___mainMenu_2;
	// UnityEngine.GameObject UIManager::inGame
	GameObject_t3674682005 * ___inGame_3;
	// UnityEngine.GameObject UIManager::endScreen
	GameObject_t3674682005 * ___endScreen_4;
	// UIManager/UIState UIManager::gameState
	int32_t ___gameState_5;
	// UnityEngine.GameObject UIManager::mainCamera
	GameObject_t3674682005 * ___mainCamera_6;
	// UnityEngine.UI.Text UIManager::lblBest
	Text_t9039225 * ___lblBest_7;
	// UnityEngine.UI.Text UIManager::lblScore
	Text_t9039225 * ___lblScore_8;
	// UnityEngine.UI.Text UIManager::lblScoreEndGame
	Text_t9039225 * ___lblScoreEndGame_9;
	// System.Int32 UIManager::highScore
	int32_t ___highScore_10;
	// UnityEngine.UI.Button UIManager::btnPause
	Button_t3896396478 * ___btnPause_11;
	// UnityEngine.Sprite UIManager::play
	Sprite_t3199167241 * ___play_12;
	// UnityEngine.Sprite UIManager::pause
	Sprite_t3199167241 * ___pause_13;

public:
	inline static int32_t get_offset_of_mainMenu_2() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___mainMenu_2)); }
	inline GameObject_t3674682005 * get_mainMenu_2() const { return ___mainMenu_2; }
	inline GameObject_t3674682005 ** get_address_of_mainMenu_2() { return &___mainMenu_2; }
	inline void set_mainMenu_2(GameObject_t3674682005 * value)
	{
		___mainMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_2, value);
	}

	inline static int32_t get_offset_of_inGame_3() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___inGame_3)); }
	inline GameObject_t3674682005 * get_inGame_3() const { return ___inGame_3; }
	inline GameObject_t3674682005 ** get_address_of_inGame_3() { return &___inGame_3; }
	inline void set_inGame_3(GameObject_t3674682005 * value)
	{
		___inGame_3 = value;
		Il2CppCodeGenWriteBarrier(&___inGame_3, value);
	}

	inline static int32_t get_offset_of_endScreen_4() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___endScreen_4)); }
	inline GameObject_t3674682005 * get_endScreen_4() const { return ___endScreen_4; }
	inline GameObject_t3674682005 ** get_address_of_endScreen_4() { return &___endScreen_4; }
	inline void set_endScreen_4(GameObject_t3674682005 * value)
	{
		___endScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___endScreen_4, value);
	}

	inline static int32_t get_offset_of_gameState_5() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___gameState_5)); }
	inline int32_t get_gameState_5() const { return ___gameState_5; }
	inline int32_t* get_address_of_gameState_5() { return &___gameState_5; }
	inline void set_gameState_5(int32_t value)
	{
		___gameState_5 = value;
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___mainCamera_6)); }
	inline GameObject_t3674682005 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(GameObject_t3674682005 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_6, value);
	}

	inline static int32_t get_offset_of_lblBest_7() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___lblBest_7)); }
	inline Text_t9039225 * get_lblBest_7() const { return ___lblBest_7; }
	inline Text_t9039225 ** get_address_of_lblBest_7() { return &___lblBest_7; }
	inline void set_lblBest_7(Text_t9039225 * value)
	{
		___lblBest_7 = value;
		Il2CppCodeGenWriteBarrier(&___lblBest_7, value);
	}

	inline static int32_t get_offset_of_lblScore_8() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___lblScore_8)); }
	inline Text_t9039225 * get_lblScore_8() const { return ___lblScore_8; }
	inline Text_t9039225 ** get_address_of_lblScore_8() { return &___lblScore_8; }
	inline void set_lblScore_8(Text_t9039225 * value)
	{
		___lblScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___lblScore_8, value);
	}

	inline static int32_t get_offset_of_lblScoreEndGame_9() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___lblScoreEndGame_9)); }
	inline Text_t9039225 * get_lblScoreEndGame_9() const { return ___lblScoreEndGame_9; }
	inline Text_t9039225 ** get_address_of_lblScoreEndGame_9() { return &___lblScoreEndGame_9; }
	inline void set_lblScoreEndGame_9(Text_t9039225 * value)
	{
		___lblScoreEndGame_9 = value;
		Il2CppCodeGenWriteBarrier(&___lblScoreEndGame_9, value);
	}

	inline static int32_t get_offset_of_highScore_10() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___highScore_10)); }
	inline int32_t get_highScore_10() const { return ___highScore_10; }
	inline int32_t* get_address_of_highScore_10() { return &___highScore_10; }
	inline void set_highScore_10(int32_t value)
	{
		___highScore_10 = value;
	}

	inline static int32_t get_offset_of_btnPause_11() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___btnPause_11)); }
	inline Button_t3896396478 * get_btnPause_11() const { return ___btnPause_11; }
	inline Button_t3896396478 ** get_address_of_btnPause_11() { return &___btnPause_11; }
	inline void set_btnPause_11(Button_t3896396478 * value)
	{
		___btnPause_11 = value;
		Il2CppCodeGenWriteBarrier(&___btnPause_11, value);
	}

	inline static int32_t get_offset_of_play_12() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___play_12)); }
	inline Sprite_t3199167241 * get_play_12() const { return ___play_12; }
	inline Sprite_t3199167241 ** get_address_of_play_12() { return &___play_12; }
	inline void set_play_12(Sprite_t3199167241 * value)
	{
		___play_12 = value;
		Il2CppCodeGenWriteBarrier(&___play_12, value);
	}

	inline static int32_t get_offset_of_pause_13() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___pause_13)); }
	inline Sprite_t3199167241 * get_pause_13() const { return ___pause_13; }
	inline Sprite_t3199167241 ** get_address_of_pause_13() { return &___pause_13; }
	inline void set_pause_13(Sprite_t3199167241 * value)
	{
		___pause_13 = value;
		Il2CppCodeGenWriteBarrier(&___pause_13, value);
	}
};

struct UIManager_t1861242489_StaticFields
{
public:
	// UIManager UIManager::<Instance>k__BackingField
	UIManager_t1861242489 * ___U3CInstanceU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(UIManager_t1861242489_StaticFields, ___U3CInstanceU3Ek__BackingField_14)); }
	inline UIManager_t1861242489 * get_U3CInstanceU3Ek__BackingField_14() const { return ___U3CInstanceU3Ek__BackingField_14; }
	inline UIManager_t1861242489 ** get_address_of_U3CInstanceU3Ek__BackingField_14() { return &___U3CInstanceU3Ek__BackingField_14; }
	inline void set_U3CInstanceU3Ek__BackingField_14(UIManager_t1861242489 * value)
	{
		___U3CInstanceU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
