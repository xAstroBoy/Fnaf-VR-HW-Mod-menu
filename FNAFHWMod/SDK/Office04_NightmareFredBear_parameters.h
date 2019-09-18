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

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBear_ResetWaitTimer
struct AOffice04_NightmareFredBear_C_FredBear_ResetWaitTimer_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_MoveReset
struct AOffice04_NightmareFredBear_C_Fredbear_MoveReset_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_Breathing
struct AOffice04_NightmareFredBear_C_Fredbear_Breathing_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredbearInteractionTimer
struct AOffice04_NightmareFredBear_C_FredbearInteractionTimer_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicReset
struct AOffice04_NightmareFredBear_C_FredBearMechanicReset_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicChange
struct AOffice04_NightmareFredBear_C_FredBearMechanicChange_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.CountBeforeSwitchUp
struct AOffice04_NightmareFredBear_C_CountBeforeSwitchUp_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.GetRoomLocationName
struct AOffice04_NightmareFredBear_C_GetRoomLocationName_Params
{
	struct FName*                                      RoomType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARoomInfo_Bp_C*                              RoomInfo_Bp;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WhatIsCurrentRoom;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FindAdjacentRoom
struct AOffice04_NightmareFredBear_C_FindAdjacentRoom_Params
{
	class ARoomInfo_Bp_C*                              Room_to_Check;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.UserConstructionScript
struct AOffice04_NightmareFredBear_C_UserConstructionScript_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__FinishedFunc
struct AOffice04_NightmareFredBear_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__UpdateFunc
struct AOffice04_NightmareFredBear_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveBeginPlay
struct AOffice04_NightmareFredBear_C_ReceiveBeginPlay_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveTick
struct AOffice04_NightmareFredBear_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.MoveAi
struct AOffice04_NightmareFredBear_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.PickNextRoom
struct AOffice04_NightmareFredBear_C_PickNextRoom_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetLightJump
struct AOffice04_NightmareFredBear_C_ResetLightJump_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.TurnOnEyeEmissive
struct AOffice04_NightmareFredBear_C_TurnOnEyeEmissive_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetClosetDoOnce
struct AOffice04_NightmareFredBear_C_ResetClosetDoOnce_Params
{
};

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ExecuteUbergraph_Office04_NightmareFredBear
struct AOffice04_NightmareFredBear_C_ExecuteUbergraph_Office04_NightmareFredBear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
