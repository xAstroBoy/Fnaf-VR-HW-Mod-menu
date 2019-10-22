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

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom
struct ADLC_Office01_AI_BP_C_FindLowerAssignedRoom_Params
{
	class ARoomInfo_Bp_C*                              RandomRoom;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C*                              RoomLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed
struct ADLC_Office01_AI_BP_C_AdjustAnimationSpeed_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition
struct ADLC_Office01_AI_BP_C_ResetPosition_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom
struct ADLC_Office01_AI_BP_C_SendToHiddenRoom_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom
struct ADLC_Office01_AI_BP_C_FindPreviousRoom_Params
{
	class ARoomInfo_Bp_C*                              RoomToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed
struct ADLC_Office01_AI_BP_C_BeingFlashed_Params
{
	bool                                               AttackingDoor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.UserConstructionScript
struct ADLC_Office01_AI_BP_C_UserConstructionScript_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick
struct ADLC_Office01_AI_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom
struct ADLC_Office01_AI_BP_C_PickNextRoom_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay
struct ADLC_Office01_AI_BP_C_ReceiveBeginPlay_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone
struct ADLC_Office01_AI_BP_C_ReachedKillZone_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash
struct ADLC_Office01_AI_BP_C_CaughtByFlash_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched
struct ADLC_Office01_AI_BP_C_CheckBeingWatched_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger
struct ADLC_Office01_AI_BP_C_RoomDelayTrigger_Params
{
};

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP
struct ADLC_Office01_AI_BP_C_ExecuteUbergraph_DLC_Office01_AI_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
