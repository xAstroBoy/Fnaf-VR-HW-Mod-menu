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

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForAnimatronicCatagory
struct AOffice02_AiBase_BP_C_CheckForAnimatronicCatagory_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveBackToStarting
struct AOffice02_AiBase_BP_C_MoveBackToStarting_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckForMaskType
struct AOffice02_AiBase_BP_C_CheckForMaskType_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.CheckLightFixture
struct AOffice02_AiBase_BP_C_CheckLightFixture_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.UserConstructionScript
struct AOffice02_AiBase_BP_C_UserConstructionScript_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReceiveTick
struct AOffice02_AiBase_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ResetDoOnceNodes
struct AOffice02_AiBase_BP_C_ResetDoOnceNodes_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ReachedKillZone
struct AOffice02_AiBase_BP_C_ReachedKillZone_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.MoveAi
struct AOffice02_AiBase_BP_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ForcedJumpScare
struct AOffice02_AiBase_BP_C_ForcedJumpScare_Params
{
};

// Function Office02_AiBase_BP.Office02_AiBase_BP_C.ExecuteUbergraph_Office02_AiBase_BP
struct AOffice02_AiBase_BP_C_ExecuteUbergraph_Office02_AiBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
