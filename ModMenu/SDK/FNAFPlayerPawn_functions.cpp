
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

// Function FNAFPlayerPawn.FNAFPlayerPawn_C.IsValidActorForVisionTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.IsValidActorForVisionTest");

	AFNAFPlayerPawn_C_IsValidActorForVisionTest_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.SetupVisionDetector
// (Public, BlueprintCallable, BlueprintEvent)

void AFNAFPlayerPawn_C::SetupVisionDetector()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.SetupVisionDetector");

	AFNAFPlayerPawn_C_SetupVisionDetector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnHand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                HandClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::SpawnHand(EControllerHand HandClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnHand");

	AFNAFPlayerPawn_C_SpawnHand_Params params;
	params.HandClass = HandClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnBothHands
// (Public, BlueprintCallable, BlueprintEvent)

void AFNAFPlayerPawn_C::SpawnBothHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnBothHands");

	AFNAFPlayerPawn_C_SpawnBothHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFNAFPlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.UserConstructionScript");

	AFNAFPlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFNAFPlayerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveBeginPlay");

	AFNAFPlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFNAFPlayerPawn_C::BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFNAFPlayerPawn_C_BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AFNAFPlayerPawn_C_BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveTick");

	AFNAFPlayerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature");

	AFNAFPlayerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature");

	AFNAFPlayerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFPlayerPawn.FNAFPlayerPawn_C.ExecuteUbergraph_FNAFPlayerPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFPlayerPawn_C::ExecuteUbergraph_FNAFPlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFPlayerPawn.FNAFPlayerPawn_C.ExecuteUbergraph_FNAFPlayerPawn");

	AFNAFPlayerPawn_C_ExecuteUbergraph_FNAFPlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
