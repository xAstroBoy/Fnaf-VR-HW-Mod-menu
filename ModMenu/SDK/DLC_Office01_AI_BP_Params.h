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
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom
	 */
	struct ADLC_Office01_AI_BP_C_FindLowerAssignedRoom_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      RandomRoom;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      RoomLocation;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed
	 */
	struct ADLC_Office01_AI_BP_C_AdjustAnimationSpeed_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition
	 */
	struct ADLC_Office01_AI_BP_C_ResetPosition_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom
	 */
	struct ADLC_Office01_AI_BP_C_SendToHiddenRoom_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom
	 */
	struct ADLC_Office01_AI_BP_C_FindPreviousRoom_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      RoomToCheck;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed
	 */
	struct ADLC_Office01_AI_BP_C_BeingFlashed_Params
	{
	public:
		bool                                                       AttackingDoor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick
	 */
	struct ADLC_Office01_AI_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom
	 */
	struct ADLC_Office01_AI_BP_C_PickNextRoom_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay
	 */
	struct ADLC_Office01_AI_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone
	 */
	struct ADLC_Office01_AI_BP_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash
	 */
	struct ADLC_Office01_AI_BP_C_CaughtByFlash_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched
	 */
	struct ADLC_Office01_AI_BP_C_CheckBeingWatched_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger
	 */
	struct ADLC_Office01_AI_BP_C_RoomDelayTrigger_Params
	{
	};

	/**
	 * Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP
	 */
	struct ADLC_Office01_AI_BP_C_ExecuteUbergraph_DLC_Office01_AI_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
