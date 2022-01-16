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
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight
	 */
	struct APlayerPawn_Headlight_C_Flicker_Flashlight_Params
	{
	public:
		bool                                                       Flicker_Light;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker
	 */
	struct APlayerPawn_Headlight_C_Toggle_Flicker_Params
	{
	public:
		bool                                                       Enable_Collision;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TurnOffLightAfterFlicker;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light
	 */
	struct APlayerPawn_Headlight_C_Toggle_Light_Params
	{
	public:
		bool                                                       Power_On;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick
	 */
	struct APlayerPawn_Headlight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker
	 */
	struct APlayerPawn_Headlight_C_Heavy_Flicker_Params
	{
	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay
	 */
	struct APlayerPawn_Headlight_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight
	 */
	struct APlayerPawn_Headlight_C_ExecuteUbergraph_PlayerPawn_Headlight_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature
	 */
	struct APlayerPawn_Headlight_C_LightTriggered__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
