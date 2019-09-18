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

// Function MPController.MPController_C.UserConstructionScript
struct AMPController_C_UserConstructionScript_Params
{
};

// Function MPController.MPController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
struct AMPController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPController.MPController_C.Action_K2Node_InputActionEvent_1
struct AMPController_C_Action_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPController.MPController_C.ActivatePlayer
struct AMPController_C_ActivatePlayer_Params
{
};

// Function MPController.MPController_C.InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2
struct AMPController_C_InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPController.MPController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
struct AMPController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPController.MPController_C.ExecuteUbergraph_MPController
struct AMPController_C_ExecuteUbergraph_MPController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
