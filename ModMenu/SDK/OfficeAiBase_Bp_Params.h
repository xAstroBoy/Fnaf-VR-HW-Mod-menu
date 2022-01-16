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
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange
	 */
	struct AOfficeAiBase_Bp_C_SetActivationTimeRange_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi
	 */
	struct AOfficeAiBase_Bp_C_PlayerWatchingAi_Params
	{
	public:
		float                                                      Delta_Time;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaitMoveTimer;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimerCap;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsThereTimeCap;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MoveTimer;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom
	 */
	struct AOfficeAiBase_Bp_C_CanEnterRoom_Params
	{
	public:
		struct FOfficeRoomTransition_Struct                        TransitionInfo;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomBP;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEnterRoom;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump
	 */
	struct AOfficeAiBase_Bp_C_OnAnimJump_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove
	 */
	struct AOfficeAiBase_Bp_C_FinishMove_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove
	 */
	struct AOfficeAiBase_Bp_C_StartingMove_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      PrevRoom;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      PrevLoc;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName
	 */
	struct AOfficeAiBase_Bp_C_GetCurrentLocationName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName
	 */
	struct AOfficeAiBase_Bp_C_GetCurrentRoomName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo
	 */
	struct AOfficeAiBase_Bp_C_CollectNextRoomInfo_Params
	{
	public:
		TMap<class ARoomInfo_Bp_C*, int>                           AllRoomChances;                                          // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor)
		int                                                        TotalOfRoomChance;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer
	 */
	struct AOfficeAiBase_Bp_C_ResetMoveTimer_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition
	 */
	struct AOfficeAiBase_Bp_C_Temp_Office02_MaskTransition_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef
	 */
	struct AOfficeAiBase_Bp_C_SetJumpScareRef_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef
	 */
	struct AOfficeAiBase_Bp_C_GetJumpScareRef_Params
	{
	public:
		class AJumpScare_C*                                        Ref_Jumpscare_Bp;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone
	 */
	struct AOfficeAiBase_Bp_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom
	 */
	struct AOfficeAiBase_Bp_C_GetRandomLocationForRoom_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      RoomLocation;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager
	 */
	struct AOfficeAiBase_Bp_C_GetOfficeManager_Params
	{
	public:
		class AOffice_BaseGamemanager_C*                           OfficeManager;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom
	 */
	struct AOfficeAiBase_Bp_C_PickNextRoom_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner
	 */
	struct AOfficeAiBase_Bp_C_NotifyLocationOwner_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic
	 */
	struct AOfficeAiBase_Bp_C_PlayerLookLogic_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi
	 */
	struct AOfficeAiBase_Bp_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer
	 */
	struct AOfficeAiBase_Bp_C_UpdateTimer_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName
	 */
	struct AOfficeAiBase_Bp_C_GetRoomLocationName_Params
	{
	public:
		class FName                                                RoomType;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomInfo_Bp;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                WhatIsCurrentRoom;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript
	 */
	struct AOfficeAiBase_Bp_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay
	 */
	struct AOfficeAiBase_Bp_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick
	 */
	struct AOfficeAiBase_Bp_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi
	 */
	struct AOfficeAiBase_Bp_C_EventDisableAi_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights
	 */
	struct AOfficeAiBase_Bp_C_FlickerAssignedLights_Params
	{
	};

	/**
	 * Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp
	 */
	struct AOfficeAiBase_Bp_C_ExecuteUbergraph_OfficeAiBase_Bp_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
