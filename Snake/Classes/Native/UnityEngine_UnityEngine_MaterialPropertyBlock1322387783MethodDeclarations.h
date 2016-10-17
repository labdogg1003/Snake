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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock1322387783.h"

// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C"  void MaterialPropertyBlock__ctor_m2730424616 (MaterialPropertyBlock_t1322387783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::InitBlock()
extern "C"  void MaterialPropertyBlock_InitBlock_m863070691 (MaterialPropertyBlock_t1322387783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::DestroyBlock()
extern "C"  void MaterialPropertyBlock_DestroyBlock_m3380306959 (MaterialPropertyBlock_t1322387783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::Finalize()
extern "C"  void MaterialPropertyBlock_Finalize_m4091590202 (MaterialPropertyBlock_t1322387783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.String,System.Single)
extern "C"  void MaterialPropertyBlock_SetFloat_m2974916209 (MaterialPropertyBlock_t1322387783 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
extern "C"  void MaterialPropertyBlock_SetFloat_m1897010476 (MaterialPropertyBlock_t1322387783 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_SetColor_m2503099333 (MaterialPropertyBlock_t1322387783 * __this, String_t* ___name0, Color_t4194546905  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_SetColor_m1736386094 (MaterialPropertyBlock_t1322387783 * __this, int32_t ___nameID0, Color_t4194546905  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::INTERNAL_CALL_SetColor(UnityEngine.MaterialPropertyBlock,System.Int32,UnityEngine.Color&)
extern "C"  void MaterialPropertyBlock_INTERNAL_CALL_SetColor_m2507266801 (Il2CppObject * __this /* static, unused */, MaterialPropertyBlock_t1322387783 * ___self0, int32_t ___nameID1, Color_t4194546905 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
