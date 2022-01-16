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
	 * Function MPUIGame.MPUIGame_C.UpdateVision
	 */
	struct UMPUIGame_C_UpdateVision_Params
	{
	public:
		class UWidget*                                             ConeWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPUIGame.MPUIGame_C.UpdateFlashlightVision
	 */
	struct UMPUIGame_C_UpdateFlashlightVision_Params
	{
	};

	/**
	 * Function MPUIGame.MPUIGame_C.ChangeLightState
	 */
	struct UMPUIGame_C_ChangeLightState_Params
	{
	public:
		bool                                                       LightOn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPUIGame.MPUIGame_C.UpdatePlayerVision
	 */
	struct UMPUIGame_C_UpdatePlayerVision_Params
	{
	};

	/**
	 * Function MPUIGame.MPUIGame_C.UpdateCharacterLocations
	 */
	struct UMPUIGame_C_UpdateCharacterLocations_Params
	{
	};

	/**
	 * Function MPUIGame.MPUIGame_C.SetupCharacter
	 */
	struct UMPUIGame_C_SetupCharacter_Params
	{
	public:
		class AMPFreddyPawnBase_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPUIGame.MPUIGame_C.Construct
	 */
	struct UMPUIGame_C_Construct_Params
	{
	};

	/**
	 * Function MPUIGame.MPUIGame_C.UpdateLight
	 */
	struct UMPUIGame_C_UpdateLight_Params
	{
	public:
		class AActor*                                              LightActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPUIGame.MPUIGame_C.Tick
	 */
	struct UMPUIGame_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPUIGame.MPUIGame_C.ExecuteUbergraph_MPUIGame
	 */
	struct UMPUIGame_C_ExecuteUbergraph_MPUIGame_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
