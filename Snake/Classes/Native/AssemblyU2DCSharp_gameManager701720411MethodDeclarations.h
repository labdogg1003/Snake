#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// gameManager
struct gameManager_t701720411;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_gameManager701720411.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void gameManager::.ctor()
extern "C"  void gameManager__ctor_m3914803824 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// gameManager gameManager::get_Instance()
extern "C"  gameManager_t701720411 * gameManager_get_Instance_m1060059930 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::set_Instance(gameManager)
extern "C"  void gameManager_set_Instance_m2255177489 (Il2CppObject * __this /* static, unused */, gameManager_t701720411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Awake()
extern "C"  void gameManager_Awake_m4152409043 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Start()
extern "C"  void gameManager_Start_m2861941616 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::Update()
extern "C"  void gameManager_Update_m2826696349 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::updateUI()
extern "C"  void gameManager_updateUI_m43768081 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::increaseScore()
extern "C"  void gameManager_increaseScore_m3879389214 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::SetTileSpeed()
extern "C"  void gameManager_SetTileSpeed_m2021669899 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::respawnPellet(UnityEngine.GameObject)
extern "C"  void gameManager_respawnPellet_m2770669714 (gameManager_t701720411 * __this, GameObject_t3674682005 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator gameManager::startGame()
extern "C"  Il2CppObject * gameManager_startGame_m3430118890 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator gameManager::endGame()
extern "C"  Il2CppObject * gameManager_endGame_m4069479651 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::pauseGame(System.Boolean)
extern "C"  void gameManager_pauseGame_m3782594861 (gameManager_t701720411 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean gameManager::pauseGame()
extern "C"  bool gameManager_pauseGame_m2495890666 (gameManager_t701720411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameManager::StoreHighscore(System.Int32)
extern "C"  void gameManager_StoreHighscore_m826094708 (gameManager_t701720411 * __this, int32_t ___newHighscore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
