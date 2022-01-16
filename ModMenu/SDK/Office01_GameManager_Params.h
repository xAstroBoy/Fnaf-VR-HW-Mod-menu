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
	 * Function Office01_GameManager.Office01_GameManager_C.PlayFoxySound
	 */
	struct AOffice01_GameManager_C_PlayFoxySound_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.PlayCircusSound
	 */
	struct AOffice01_GameManager_C_PlayCircusSound_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.PlayFreddieKitchenSounds
	 */
	struct AOffice01_GameManager_C_PlayFreddieKitchenSounds_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.PlayChicaKitchenSounds
	 */
	struct AOffice01_GameManager_C_PlayChicaKitchenSounds_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.DecremenPowerUsage
	 */
	struct AOffice01_GameManager_C_DecremenPowerUsage_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.IncrementPowerUsage
	 */
	struct AOffice01_GameManager_C_IncrementPowerUsage_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.ReceiveBeginPlay
	 */
	struct AOffice01_GameManager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.ReceiveTick
	 */
	struct AOffice01_GameManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.CheckDoorStates
	 */
	struct AOffice01_GameManager_C_CheckDoorStates_Params
	{
	public:
		Office01_Doors_EOffice01_Doors                             DoorList;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.FoxyKnockingAtTheDoor
	 */
	struct AOffice01_GameManager_C_FoxyKnockingAtTheDoor_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.Player Looking at kitchen
	 */
	struct AOffice01_GameManager_C_Player_Looking_at_kitchen_Params
	{
	public:
		bool                                                       False;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.CheckCollisionsOnHoverBlocks
	 */
	struct AOffice01_GameManager_C_CheckCollisionsOnHoverBlocks_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.ExecuteUbergraph_Office01_GameManager
	 */
	struct AOffice01_GameManager_C_ExecuteUbergraph_Office01_GameManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.NonVR_DoorTraceBlock__DelegateSignature
	 */
	struct AOffice01_GameManager_C_NonVR_DoorTraceBlock__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Circus__DelegateSignature
	 */
	struct AOffice01_GameManager_C_RoomSounds_Circus__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Foxy__DelegateSignature
	 */
	struct AOffice01_GameManager_C_RoomSounds_Foxy__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Freddy__DelegateSignature
	 */
	struct AOffice01_GameManager_C_KitchenSounds_Freddy__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Chica__DelegateSignature
	 */
	struct AOffice01_GameManager_C_KitchenSounds_Chica__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.CheckDoorLights__DelegateSignature
	 */
	struct AOffice01_GameManager_C_CheckDoorLights__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.TriggerPowerOutage__DelegateSignature
	 */
	struct AOffice01_GameManager_C_TriggerPowerOutage__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.DisableDoorInteraction__DelegateSignature
	 */
	struct AOffice01_GameManager_C_DisableDoorInteraction__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.CheckDoorForLightSound__DelegateSignature
	 */
	struct AOffice01_GameManager_C_CheckDoorForLightSound__DelegateSignature_Params
	{
	};

	/**
	 * Function Office01_GameManager.Office01_GameManager_C.FreddySongTimer__DelegateSignature
	 */
	struct AOffice01_GameManager_C_FreddySongTimer__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
