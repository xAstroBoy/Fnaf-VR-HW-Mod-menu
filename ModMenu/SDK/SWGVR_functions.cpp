
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

// Function SWGVR.SWGGrabbable.OnVRReleased
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USWGGrabbable::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGGrabbable.OnVRReleased");

	USWGGrabbable_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGGrabbable.OnVRGrabbed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGGrabbable::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGGrabbable.OnVRGrabbed");

	USWGGrabbable_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGGrabbable.AttemptRelease
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USWGGrabbable::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGGrabbable.AttemptRelease");

	USWGGrabbable_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGGrabbable.AttemptGrab
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USWGGrabbable::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGGrabbable.AttemptGrab");

	USWGGrabbable_AttemptGrab_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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


// Function SWGVR.SWGVRCharacter.StopFrameCounters
// (Final, Native, Public, BlueprintCallable)

void ASWGVRCharacter::StopFrameCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.StopFrameCounters");

	ASWGVRCharacter_StopFrameCounters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.StartFrameCounters
// (Final, Native, Public, BlueprintCallable)

void ASWGVRCharacter::StartFrameCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.StartFrameCounters");

	ASWGVRCharacter_StartFrameCounters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.SetVRModeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::SetVRModeEnabled(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.SetVRModeEnabled");

	ASWGVRCharacter_SetVRModeEnabled_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.SetHeldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewOffset                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::SetHeldOffset(EVRHandType Hand, const struct FVector& NewOffset, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.SetHeldOffset");

	ASWGVRCharacter_SetHeldOffset_Params params;
	params.Hand = Hand;
	params.NewOffset = NewOffset;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.ReleaseGrabbable
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideVelocity              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::ReleaseGrabbable(class AActor* Grabbable, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.ReleaseGrabbable");

	ASWGVRCharacter_ReleaseGrabbable_Params params;
	params.Grabbable = Grabbable;
	params.bForce = bForce;
	params.bOverrideVelocity = bOverrideVelocity;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.ReleaseAll
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideVelocity              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::ReleaseAll(EVRHandType Hand, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.ReleaseAll");

	ASWGVRCharacter_ReleaseAll_Params params;
	params.Hand = Hand;
	params.bForce = bForce;
	params.bOverrideVelocity = bOverrideVelocity;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.ProcessInterpolatedGrab
// (Native, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              AttachmentTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHeldGrabbableInfo      ActorGrabbablePair             (Parm, OutParm, ReferenceParm)
// class AActor*                  HeldActor                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::ProcessInterpolatedGrab(const struct FTransform& AttachmentTransform, class AActor* HeldActor, EVRHandType Hand, struct FHeldGrabbableInfo* ActorGrabbablePair)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.ProcessInterpolatedGrab");

	ASWGVRCharacter_ProcessInterpolatedGrab_Params params;
	params.AttachmentTransform = AttachmentTransform;
	params.HeldActor = HeldActor;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorGrabbablePair != nullptr)
		*ActorGrabbablePair = params.ActorGrabbablePair;
}


// Function SWGVR.SWGVRCharacter.OnTrackedControllerChanged
// (Native, Event, Protected, BlueprintEvent)

void ASWGVRCharacter::OnTrackedControllerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnTrackedControllerChanged");

	ASWGVRCharacter_OnTrackedControllerChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnRightEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnRightEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnRightEndOverlap");

	ASWGVRCharacter_OnRightEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnRightBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASWGVRCharacter::OnRightBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnRightBeginOverlap");

	ASWGVRCharacter_OnRightBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnRelease
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnRelease(class AActor* Grabbable, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnRelease");

	ASWGVRCharacter_OnRelease_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnLeftEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnLeftEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnLeftEndOverlap");

	ASWGVRCharacter_OnLeftEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnLeftBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASWGVRCharacter::OnLeftBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnLeftBeginOverlap");

	ASWGVRCharacter_OnLeftBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnHeldActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnHeldActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnHeldActorDestroyed");

	ASWGVRCharacter_OnHeldActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnGrabHoverEnd
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnGrabHoverEnd(class AActor* Grabbable, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnGrabHoverEnd");

	ASWGVRCharacter_OnGrabHoverEnd_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnGrabHoverBegin
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnGrabHoverBegin(class AActor* Grabbable, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnGrabHoverBegin");

	ASWGVRCharacter_OnGrabHoverBegin_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.OnGrab
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::OnGrab(class AActor* Grabbable, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.OnGrab");

	ASWGVRCharacter_OnGrab_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.IsUsingPad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASWGVRCharacter::IsUsingPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.IsUsingPad");

	ASWGVRCharacter_IsUsingPad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.IsInVRMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASWGVRCharacter::IsInVRMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.IsInVRMode");

	ASWGVRCharacter_IsInVRMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GrabGrabbable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Grabbable                      (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::GrabGrabbable(class AActor* Grabbable, EVRHandType Hand, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GrabGrabbable");

	ASWGVRCharacter_GrabGrabbable_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRCharacter.GetPadTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASWGVRCharacter::GetPadTrackingSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetPadTrackingSource");

	ASWGVRCharacter_GetPadTrackingSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GetHeldOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector ASWGVRCharacter::GetHeldOffset(EVRHandType Hand, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetHeldOffset");

	ASWGVRCharacter_GetHeldOffset_Params params;
	params.Hand = Hand;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GetHandInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FMotionControllerInfo   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FMotionControllerInfo ASWGVRCharacter::GetHandInfo(EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetHandInfo");

	ASWGVRCharacter_GetHandInfo_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GetHandForPad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVRHandType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVRHandType ASWGVRCharacter::GetHandForPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetHandForPad");

	ASWGVRCharacter_GetHandForPad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GetHandAttachPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ASWGVRCharacter::GetHandAttachPoint(EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetHandAttachPoint");

	ASWGVRCharacter_GetHandAttachPoint_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.GetGrabbableInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  HeldActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHeldGrabbableInfo      ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FHeldGrabbableInfo ASWGVRCharacter::GetGrabbableInfo(class AActor* HeldActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.GetGrabbableInfo");

	ASWGVRCharacter_GetGrabbableInfo_Params params;
	params.HeldActor = HeldActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SWGVR.SWGVRCharacter.AddHeldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditiveValue                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASWGVRCharacter::AddHeldOffset(EVRHandType Hand, const struct FVector& AdditiveValue, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRCharacter.AddHeldOffset");

	ASWGVRCharacter_AddHeldOffset_Params params;
	params.Hand = Hand;
	params.AdditiveValue = AdditiveValue;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRHoverReceiver.OnVRHoverEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGVRHoverReceiver::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRHoverReceiver.OnVRHoverEnd");

	USWGVRHoverReceiver_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGVRHoverReceiver::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentEnd");

	USWGVRHoverReceiver_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGVRHoverReceiver::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentBegin");

	USWGVRHoverReceiver_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRHoverReceiver.OnVRHoverBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGVRHoverReceiver::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRHoverReceiver.OnVRHoverBegin");

	USWGVRHoverReceiver_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SWGVR.SWGVRInteractive.OnVRInteract
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void USWGVRInteractive::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function SWGVR.SWGVRInteractive.OnVRInteract");

	USWGVRInteractive_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
