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

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition
struct AOffice01_AiBase_BP_C_ResetPosition_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.UserConstructionScript
struct AOffice01_AiBase_BP_C_UserConstructionScript_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc
struct AOffice01_AiBase_BP_C_CameraFadeFlicker__FinishedFunc_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc
struct AOffice01_AiBase_BP_C_CameraFadeFlicker__UpdateFunc_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick
struct AOffice01_AiBase_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone
struct AOffice01_AiBase_BP_C_ReachedKillZone_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay
struct AOffice01_AiBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound
struct AOffice01_AiBase_BP_C_TriggerLightSound_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi
struct AOffice01_AiBase_BP_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor
struct AOffice01_AiBase_BP_C_ResetAudioTriggerForDoor_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare
struct AOffice01_AiBase_BP_C_TESTINGONLY_ForceJumpscare_Params
{
};

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP
struct AOffice01_AiBase_BP_C_ExecuteUbergraph_Office01_AiBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
