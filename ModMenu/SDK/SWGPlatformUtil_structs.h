#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SWGPlatformUtil.ESWGPlatform
enum class ESWGPlatform : uint8_t
{
	ESWGPlatform__Steam            = 0,
	ESWGPlatform__Oculus           = 1,
	ESWGPlatform__PS4              = 2,
	ESWGPlatform__ESWGPlatform_MAX = 3
};


// Enum SWGPlatformUtil.ESWGEditor
enum class ESWGEditor : uint8_t
{
	ESWGEditor__InEditor           = 0,
	ESWGEditor__NotInEditor        = 1,
	ESWGEditor__ESWGEditor_MAX     = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
