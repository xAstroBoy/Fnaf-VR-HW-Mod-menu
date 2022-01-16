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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover
	 */
	struct UIFlashLightInteractible_C_OnFlashLightEndHover_Params
	{
	public:
		class AFlashlight_Battery_C*                               Flashlight;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover
	 */
	struct UIFlashLightInteractible_C_OnFlashLightBeginHover_Params
	{
	public:
		class AFlashlight_Battery_C*                               Flashlight;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
