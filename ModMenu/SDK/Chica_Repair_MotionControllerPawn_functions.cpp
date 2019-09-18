
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

// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.IsValidActorForVisionTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChica_Repair_MotionControllerPawn_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.IsValidActorForVisionTest");

	AChica_Repair_MotionControllerPawn_C_IsValidActorForVisionTest_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChica_Repair_MotionControllerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.UserConstructionScript");

	AChica_Repair_MotionControllerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChica_Repair_MotionControllerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ReceiveBeginPlay");

	AChica_Repair_MotionControllerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChica_Repair_MotionControllerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature");

	AChica_Repair_MotionControllerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChica_Repair_MotionControllerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature");

	AChica_Repair_MotionControllerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ExecuteUbergraph_Chica_Repair_MotionControllerPawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChica_Repair_MotionControllerPawn_C::ExecuteUbergraph_Chica_Repair_MotionControllerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ExecuteUbergraph_Chica_Repair_MotionControllerPawn");

	AChica_Repair_MotionControllerPawn_C_ExecuteUbergraph_Chica_Repair_MotionControllerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
