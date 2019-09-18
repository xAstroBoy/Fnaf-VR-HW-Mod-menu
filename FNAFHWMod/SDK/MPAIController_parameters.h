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

// Function MPAIController.MPAIController_C.UserConstructionScript
struct AMPAIController_C_UserConstructionScript_Params
{
};

// Function MPAIController.MPAIController_C.ReceiveBeginPlay
struct AMPAIController_C_ReceiveBeginPlay_Params
{
};

// Function MPAIController.MPAIController_C.ChangeFlashLightStatus
struct AMPAIController_C_ChangeFlashLightStatus_Params
{
	bool                                               IsInFlashLight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPAIController.MPAIController_C.ChangePlayerVisStatus
struct AMPAIController_C_ChangePlayerVisStatus_Params
{
	bool                                               IsInPlayerVis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPAIController.MPAIController_C.ExecuteUbergraph_MPAIController
struct AMPAIController_C_ExecuteUbergraph_MPAIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
