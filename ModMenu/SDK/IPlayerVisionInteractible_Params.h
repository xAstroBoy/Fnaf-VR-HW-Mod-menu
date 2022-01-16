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
	 * Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit
	 */
	struct UIPlayerVisionInteractible_C_OnPlayerVisionExit_Params
	{
	public:
		class AFNAFPlayerPawn_C*                                   PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter
	 */
	struct UIPlayerVisionInteractible_C_OnPlayerVisionEnter_Params
	{
	public:
		class AFNAFPlayerPawn_C*                                   PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
