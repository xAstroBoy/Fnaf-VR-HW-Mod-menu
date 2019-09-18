
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

// Function MPAIController.MPAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPAIController.MPAIController_C.UserConstructionScript");

	AMPAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPAIController.MPAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPAIController.MPAIController_C.ReceiveBeginPlay");

	AMPAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPAIController.MPAIController_C.ChangeFlashLightStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInFlashLight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPAIController_C::ChangeFlashLightStatus(bool IsInFlashLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPAIController.MPAIController_C.ChangeFlashLightStatus");

	AMPAIController_C_ChangeFlashLightStatus_Params params;
	params.IsInFlashLight = IsInFlashLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPAIController.MPAIController_C.ChangePlayerVisStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInPlayerVis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPAIController_C::ChangePlayerVisStatus(bool IsInPlayerVis)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPAIController.MPAIController_C.ChangePlayerVisStatus");

	AMPAIController_C_ChangePlayerVisStatus_Params params;
	params.IsInPlayerVis = IsInPlayerVis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPAIController.MPAIController_C.ExecuteUbergraph_MPAIController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPAIController_C::ExecuteUbergraph_MPAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPAIController.MPAIController_C.ExecuteUbergraph_MPAIController");

	AMPAIController_C_ExecuteUbergraph_MPAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
