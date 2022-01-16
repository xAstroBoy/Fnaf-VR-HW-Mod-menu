#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SWGPlatformUtil.ESWGPlatform
	 */
	enum class SWGPlatformUtil_ESWGPlatform : uint8_t
	{
		ESWGPlatform__Steam            = 0,
		ESWGPlatform__Oculus           = 1,
		ESWGPlatform__PS4              = 2,
		ESWGPlatform__Switch           = 3,
		ESWGPlatform__ESWGPlatform_MAX = 4
	};

	/**
	 * Enum SWGPlatformUtil.ESWGEditor
	 */
	enum class SWGPlatformUtil_ESWGEditor : uint8_t
	{
		ESWGEditor__InEditor       = 0,
		ESWGEditor__NotInEditor    = 1,
		ESWGEditor__ESWGEditor_MAX = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
