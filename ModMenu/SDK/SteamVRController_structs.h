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
	 * Enum SteamVRController.ESteamVRTouchDPadMapping
	 */
	enum class SteamVRController_ESteamVRTouchDPadMapping : uint8_t
	{
		ESteamVRTouchDPadMapping__FaceButtons                  = 0,
		ESteamVRTouchDPadMapping__ThumbstickDirections         = 1,
		ESteamVRTouchDPadMapping__Disabled                     = 2,
		ESteamVRTouchDPadMapping__ESteamVRTouchDPadMapping_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
