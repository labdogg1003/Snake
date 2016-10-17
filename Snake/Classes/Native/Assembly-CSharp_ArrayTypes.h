#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Tile
struct Tile_t2606798;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Tile2606798.h"

#pragma once
// Tile[]
struct TileU5BU5D_t4211174971  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Tile_t2606798 * m_Items[1];

public:
	inline Tile_t2606798 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tile_t2606798 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tile_t2606798 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
