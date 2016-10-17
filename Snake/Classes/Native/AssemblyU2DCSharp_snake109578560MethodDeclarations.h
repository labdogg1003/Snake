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

// snake
struct snake_t109578560;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void snake::.ctor()
extern "C"  void snake__ctor_m2713987115 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::Awake()
extern "C"  void snake_Awake_m2951592334 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::Start()
extern "C"  void snake_Start_m1661124907 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::Update()
extern "C"  void snake_Update_m4256084034 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator snake::Follow(UnityEngine.Vector3)
extern "C"  Il2CppObject * snake_Follow_m1691356855 (snake_t109578560 * __this, Vector3_t4282066566  ___lastKnownPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::OnTriggerEnter()
extern "C"  void snake_OnTriggerEnter_m1798801784 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::OnTriggerExit()
extern "C"  void snake_OnTriggerExit_m2560797472 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::move()
extern "C"  void snake_move_m1763767082 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean snake::checkForMove()
extern "C"  bool snake_checkForMove_m2972993271 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator snake::die()
extern "C"  Il2CppObject * snake_die_m821798449 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::lockCamera()
extern "C"  void snake_lockCamera_m3766186441 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean snake::checkWholeNumber(System.Single)
extern "C"  bool snake_checkWholeNumber_m680177070 (snake_t109578560 * __this, float ___myFloat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::cacheInput()
extern "C"  void snake_cacheInput_m2459006209 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean snake::IsApproximately(System.Single,System.Single)
extern "C"  bool snake_IsApproximately_m1355409916 (snake_t109578560 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean snake::IsApproximately(System.Single,System.Single,System.Single)
extern "C"  bool snake_IsApproximately_m3795143649 (snake_t109578560 * __this, float ___a0, float ___b1, float ___tolerance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void snake_OnCollisionEnter_m776568313 (snake_t109578560 * __this, Collision_t2494107688 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean snake::canAddBodyPart()
extern "C"  bool snake_canAddBodyPart_m3089795435 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void snake::scaleBodyParts()
extern "C"  void snake_scaleBodyParts_m2574867661 (snake_t109578560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
