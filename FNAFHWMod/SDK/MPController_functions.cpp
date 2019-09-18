
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MPController.MPController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.UserConstructionScript");

	AMPController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMPController_C::InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2");

	AMPController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.Action_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMPController_C::Action_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.Action_K2Node_InputActionEvent_1");

	AMPController_C_Action_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.ActivatePlayer
// (BlueprintCallable, BlueprintEvent)

void AMPController_C::ActivatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.ActivatePlayer");

	AMPController_C_ActivatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPController_C::InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2");

	AMPController_C_InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPController_C::InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1");

	AMPController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPController.MPController_C.ExecuteUbergraph_MPController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPController_C::ExecuteUbergraph_MPController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPController.MPController_C.ExecuteUbergraph_MPController");

	AMPController_C_ExecuteUbergraph_MPController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
