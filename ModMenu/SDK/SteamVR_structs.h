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
	 * Enum SteamVR.ESteamVRTrackedDeviceType
	 */
	enum class SteamVR_ESteamVRTrackedDeviceType : uint8_t
	{
		ESteamVRTrackedDeviceType__Controller                    = 0,
		ESteamVRTrackedDeviceType__TrackingReference             = 1,
		ESteamVRTrackedDeviceType__Other                         = 2,
		ESteamVRTrackedDeviceType__Invalid                       = 3,
		ESteamVRTrackedDeviceType__ESteamVRTrackedDeviceType_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
