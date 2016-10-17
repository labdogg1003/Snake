#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteOutline
struct  SpriteOutline_t2118915485  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color SpriteOutline::color
	Color_t4194546905  ___color_2;
	// UnityEngine.SpriteRenderer SpriteOutline::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_3;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(SpriteOutline_t2118915485, ___color_2)); }
	inline Color_t4194546905  get_color_2() const { return ___color_2; }
	inline Color_t4194546905 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t4194546905  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_3() { return static_cast<int32_t>(offsetof(SpriteOutline_t2118915485, ___spriteRenderer_3)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_3() const { return ___spriteRenderer_3; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_3() { return &___spriteRenderer_3; }
	inline void set_spriteRenderer_3(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
