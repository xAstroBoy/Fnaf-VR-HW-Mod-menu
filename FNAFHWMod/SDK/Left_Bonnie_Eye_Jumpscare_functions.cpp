
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

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptGrab
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

void ALeft_Bonnie_Eye_Jumpscare_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptGrab");

	ALeft_Bonnie_Eye_Jumpscare_C_AttemptGrab_Params params;
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


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALeft_Bonnie_Eye_Jumpscare_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptRelease");

	ALeft_Bonnie_Eye_Jumpscare_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_Jumpscare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.UserConstructionScript");

	ALeft_Bonnie_Eye_Jumpscare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Pickup");

	ALeft_Bonnie_Eye_Jumpscare_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_Jumpscare_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Drop");

	ALeft_Bonnie_Eye_Jumpscare_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRInteract");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverBegin");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentBegin");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentEnd");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverEnd");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRGrabbed");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRReleased");

	ALeft_Bonnie_Eye_Jumpscare_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALeft_Bonnie_Eye_Jumpscare_C::ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare");

	ALeft_Bonnie_Eye_Jumpscare_C_ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.FeedbackTest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALeft_Bonnie_Eye_Jumpscare_C::FeedbackTest__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.FeedbackTest__DelegateSignature");

	ALeft_Bonnie_Eye_Jumpscare_C_FeedbackTest__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
