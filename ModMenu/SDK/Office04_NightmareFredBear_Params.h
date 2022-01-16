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
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBear_ResetWaitTimer
	 */
	struct AOffice04_NightmareFredBear_C_FredBear_ResetWaitTimer_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_MoveReset
	 */
	struct AOffice04_NightmareFredBear_C_Fredbear_MoveReset_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_Breathing
	 */
	struct AOffice04_NightmareFredBear_C_Fredbear_Breathing_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredbearInteractionTimer
	 */
	struct AOffice04_NightmareFredBear_C_FredbearInteractionTimer_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicReset
	 */
	struct AOffice04_NightmareFredBear_C_FredBearMechanicReset_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicChange
	 */
	struct AOffice04_NightmareFredBear_C_FredBearMechanicChange_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.CountBeforeSwitchUp
	 */
	struct AOffice04_NightmareFredBear_C_CountBeforeSwitchUp_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.GetRoomLocationName
	 */
	struct AOffice04_NightmareFredBear_C_GetRoomLocationName_Params
	{
	public:
		class FName                                                RoomType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomInfo_Bp;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                WhatIsCurrentRoom;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FindAdjacentRoom
	 */
	struct AOffice04_NightmareFredBear_C_FindAdjacentRoom_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room_to_Check;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__FinishedFunc
	 */
	struct AOffice04_NightmareFredBear_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__UpdateFunc
	 */
	struct AOffice04_NightmareFredBear_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveBeginPlay
	 */
	struct AOffice04_NightmareFredBear_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveTick
	 */
	struct AOffice04_NightmareFredBear_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.MoveAi
	 */
	struct AOffice04_NightmareFredBear_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.PickNextRoom
	 */
	struct AOffice04_NightmareFredBear_C_PickNextRoom_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetLightJump
	 */
	struct AOffice04_NightmareFredBear_C_ResetLightJump_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.TurnOnEyeEmissive
	 */
	struct AOffice04_NightmareFredBear_C_TurnOnEyeEmissive_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetClosetDoOnce
	 */
	struct AOffice04_NightmareFredBear_C_ResetClosetDoOnce_Params
	{
	};

	/**
	 * Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ExecuteUbergraph_Office04_NightmareFredBear
	 */
	struct AOffice04_NightmareFredBear_C_ExecuteUbergraph_Office04_NightmareFredBear_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
