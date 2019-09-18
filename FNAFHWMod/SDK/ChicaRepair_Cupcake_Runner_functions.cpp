
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

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptGrab");

	AChicaRepair_Cupcake_Runner_C_AttemptGrab_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canGrab != nullptr)
		*canGrab = params.canGrab;
	if (SnapType != nullptr)
		*SnapType = params.SnapType;
	if (snapLocation != nullptr)
		*snapLocation = params.snapLocation;
	if (snapRotation != nullptr)
		*snapRotation = params.snapRotation;
	if (AttachmentOffsetLocation != nullptr)
		*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
	if (AttachmentOffsetRotation != nullptr)
		*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChicaRepair_Cupcake_Runner_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptRelease");

	AChicaRepair_Cupcake_Runner_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.CheckAttachCupcake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::CheckAttachCupcake(class USceneComponent* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.CheckAttachCupcake");

	AChicaRepair_Cupcake_Runner_C_CheckAttachCupcake_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.MoveToRandomLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AChicaRepair_Cupcake_Runner_C::MoveToRandomLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.MoveToRandomLocation");

	AChicaRepair_Cupcake_Runner_C_MoveToRandomLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChicaRepair_Cupcake_Runner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.UserConstructionScript");

	AChicaRepair_Cupcake_Runner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveTick");

	AChicaRepair_Cupcake_Runner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionExit");

	AChicaRepair_Cupcake_Runner_C_OnPlayerVisionExit_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChicaRepair_Cupcake_Runner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveBeginPlay");

	AChicaRepair_Cupcake_Runner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFNAFPlayerPawn_C*       PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionEnter");

	AChicaRepair_Cupcake_Runner_C_OnPlayerVisionEnter_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AChicaRepair_Cupcake_Runner_C_BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRGrabbed");

	AChicaRepair_Cupcake_Runner_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRReleased");

	AChicaRepair_Cupcake_Runner_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ExecuteUbergraph_ChicaRepair_Cupcake_Runner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Cupcake_Runner_C::ExecuteUbergraph_ChicaRepair_Cupcake_Runner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ExecuteUbergraph_ChicaRepair_Cupcake_Runner");

	AChicaRepair_Cupcake_Runner_C_ExecuteUbergraph_ChicaRepair_Cupcake_Runner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
