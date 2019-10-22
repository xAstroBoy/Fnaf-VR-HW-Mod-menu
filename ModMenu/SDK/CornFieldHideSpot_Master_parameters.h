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

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.GetHideLocationAndRotation
struct ACornFieldHideSpot_Master_C_GetHideLocationAndRotation_Params
{
	float                                              Return_Value_Z__Yaw_;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HideWorldLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.UserConstructionScript
struct ACornFieldHideSpot_Master_C_UserConstructionScript_Params
{
};

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ReceiveBeginPlay
struct ACornFieldHideSpot_Master_C_ReceiveBeginPlay_Params
{
};

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionEnter
struct ACornFieldHideSpot_Master_C_OnPlayerVisionEnter_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.OnPlayerVisionExit
struct ACornFieldHideSpot_Master_C_OnPlayerVisionExit_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CornFieldHideSpot_Master.CornFieldHideSpot_Master_C.ExecuteUbergraph_CornFieldHideSpot_Master
struct ACornFieldHideSpot_Master_C_ExecuteUbergraph_CornFieldHideSpot_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
