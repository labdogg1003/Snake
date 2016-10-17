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

// Tile
struct Tile_t2606798;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Tile::.ctor()
extern "C"  void Tile__ctor_m2580515725 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::Awake()
extern "C"  void Tile_Awake_m2818120944 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::Update()
extern "C"  void Tile_Update_m118470944 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Tile::DropTile()
extern "C"  Il2CppObject * Tile_DropTile_m3433871964 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Tile_OnTriggerEnter_m309774091 (Tile_t2606798 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::OnTriggerExit(UnityEngine.Collider)
extern "C"  void Tile_OnTriggerExit_m1738125623 (Tile_t2606798 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Tile::FadeOut(UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * Tile_FadeOut_m1155006473 (Tile_t2606798 * __this, Vector3_t4282066566  ___position0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::increaseDropMultiplier()
extern "C"  void Tile_increaseDropMultiplier_m1354506985 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::increaseTimers()
extern "C"  void Tile_increaseTimers_m2013362983 (Tile_t2606798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
