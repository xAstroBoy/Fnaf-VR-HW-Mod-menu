
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

// Function Guitar_Tune.Guitar_Tune_C.AttemptGrab
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

void AGuitar_Tune_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.AttemptGrab");

	AGuitar_Tune_C_AttemptGrab_Params params;
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


// Function Guitar_Tune.Guitar_Tune_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGuitar_Tune_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.AttemptRelease");

	AGuitar_Tune_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Guitar_Tune.Guitar_Tune_C.ToggleCorrectSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayCorrectSound               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         CorrectSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGuitar_Tune_C::ToggleCorrectSound(bool PlayCorrectSound, class UAudioComponent* CorrectSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.ToggleCorrectSound");

	AGuitar_Tune_C_ToggleCorrectSound_Params params;
	params.PlayCorrectSound = PlayCorrectSound;
	params.CorrectSound = CorrectSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.RotateTuner
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotateValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          Tune_Mesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::RotateTuner(float RotateValue, class UMeshComponent* Tune_Mesh, float* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.RotateTuner");

	AGuitar_Tune_C_RotateTuner_Params params;
	params.RotateValue = RotateValue;
	params.Tune_Mesh = Tune_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Guitar_Tune.Guitar_Tune_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.UserConstructionScript");

	AGuitar_Tune_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGuitar_Tune_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.Pickup");

	AGuitar_Tune_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.Drop");

	AGuitar_Tune_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRInteract");

	AGuitar_Tune_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRHoverBegin");

	AGuitar_Tune_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentBegin");

	AGuitar_Tune_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentEnd");

	AGuitar_Tune_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRHoverEnd");

	AGuitar_Tune_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRGrabbed");

	AGuitar_Tune_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGuitar_Tune_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.OnVRReleased");

	AGuitar_Tune_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGuitar_Tune_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.ReceiveBeginPlay");

	AGuitar_Tune_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.Play Music Cue
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::Play_Music_Cue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.Play Music Cue");

	AGuitar_Tune_C_Play_Music_Cue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.0Grabbed
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::_0Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.0Grabbed");

	AGuitar_Tune_C__0Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.1Grabbed
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::_1Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.1Grabbed");

	AGuitar_Tune_C__1Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.2Grabbed
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::_2Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.2Grabbed");

	AGuitar_Tune_C__2Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.3Grabbed
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::_3Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.3Grabbed");

	AGuitar_Tune_C__3Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.4Grabbed
// (BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::_4Grabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.4Grabbed");

	AGuitar_Tune_C__4Grabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.ExecuteUbergraph_Guitar_Tune
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGuitar_Tune_C::ExecuteUbergraph_Guitar_Tune(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.ExecuteUbergraph_Guitar_Tune");

	AGuitar_Tune_C_ExecuteUbergraph_Guitar_Tune_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Guitar_Tune.Guitar_Tune_C.FeedbackTest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGuitar_Tune_C::FeedbackTest__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Guitar_Tune.Guitar_Tune_C.FeedbackTest__DelegateSignature");

	AGuitar_Tune_C_FeedbackTest__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
