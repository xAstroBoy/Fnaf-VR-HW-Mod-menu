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
	 * Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision
	 */
	struct AOffice04_GameManager_C_CheckLightBoxCollision_Params
	{
	public:
		class AOffice04_LightCollider_C*                           LightCollider;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision
	 */
	struct AOffice04_GameManager_C_EnableLightBoxCollision_Params
	{
	public:
		bool                                                       Enable_Collision;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AOffice04_LightCollider_C*                           Light_Collider;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions
	 */
	struct AOffice04_GameManager_C_GetRoomTransitions_Params
	{
	public:
		class FName                                                Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FOfficeRoomTransition_Struct>                RoomTransitions;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor
	 */
	struct AOffice04_GameManager_C_PlayerAtDoor_Params
	{
	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.StartGame
	 */
	struct AOffice04_GameManager_C_StartGame_Params
	{
	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.ReceiveTick
	 */
	struct AOffice04_GameManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.FlashlightHit
	 */
	struct AOffice04_GameManager_C_FlashlightHit_Params
	{
	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.EventStartClock
	 */
	struct AOffice04_GameManager_C_EventStartClock_Params
	{
	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager
	 */
	struct AOffice04_GameManager_C_ExecuteUbergraph_Office04_GameManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature
	 */
	struct AOffice04_GameManager_C_OnFlashlightHit__DelegateSignature_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
