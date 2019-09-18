#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange
struct AOfficeAiBase_Bp_C_SetActivationTimeRange_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi
struct AOfficeAiBase_Bp_C_PlayerWatchingAi_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitMoveTimer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimerCap;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsThereTimeCap;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MoveTimer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom
struct AOfficeAiBase_Bp_C_CanEnterRoom_Params
{
	struct FOfficeRoomTransition_Struct                TransitionInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARoomInfo_Bp_C*                              RoomBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump
struct AOfficeAiBase_Bp_C_OnAnimJump_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove
struct AOfficeAiBase_Bp_C_FinishMove_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove
struct AOfficeAiBase_Bp_C_StartingMove_Params
{
	class ARoomInfo_Bp_C*                              PrevRoom;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C*                              PrevLoc;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName
struct AOfficeAiBase_Bp_C_GetCurrentLocationName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName
struct AOfficeAiBase_Bp_C_GetCurrentRoomName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo
struct AOfficeAiBase_Bp_C_CollectNextRoomInfo_Params
{
	TMap<class ARoomInfo_Bp_C*, int>                   AllRoomChances;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                TotalOfRoomChance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer
struct AOfficeAiBase_Bp_C_ResetMoveTimer_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition
struct AOfficeAiBase_Bp_C_Temp_Office02_MaskTransition_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef
struct AOfficeAiBase_Bp_C_SetJumpScareRef_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef
struct AOfficeAiBase_Bp_C_GetJumpScareRef_Params
{
	class AJumpScare_C*                                Ref_Jumpscare_Bp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone
struct AOfficeAiBase_Bp_C_ReachedKillZone_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom
struct AOfficeAiBase_Bp_C_GetRandomLocationForRoom_Params
{
	class ARoomInfo_Bp_C*                              Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C*                              RoomLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager
struct AOfficeAiBase_Bp_C_GetOfficeManager_Params
{
	class AOffice_BaseGamemanager_C*                   OfficeManager;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom
struct AOfficeAiBase_Bp_C_PickNextRoom_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner
struct AOfficeAiBase_Bp_C_NotifyLocationOwner_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic
struct AOfficeAiBase_Bp_C_PlayerLookLogic_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi
struct AOfficeAiBase_Bp_C_MoveAi_Params
{
	class ARoomInfo_Bp_C*                              Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C*                              Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer
struct AOfficeAiBase_Bp_C_UpdateTimer_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName
struct AOfficeAiBase_Bp_C_GetRoomLocationName_Params
{
	struct FName                                       RoomType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARoomInfo_Bp_C*                              RoomInfo_Bp;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WhatIsCurrentRoom;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript
struct AOfficeAiBase_Bp_C_UserConstructionScript_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay
struct AOfficeAiBase_Bp_C_ReceiveBeginPlay_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick
struct AOfficeAiBase_Bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi
struct AOfficeAiBase_Bp_C_EventDisableAi_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights
struct AOfficeAiBase_Bp_C_FlickerAssignedLights_Params
{
};

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp
struct AOfficeAiBase_Bp_C_ExecuteUbergraph_OfficeAiBase_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
