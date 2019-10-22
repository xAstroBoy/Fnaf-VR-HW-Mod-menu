
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

// Function DrawerHandle.DrawerHandle_C.AttemptGrab
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

void ADrawerHandle_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.AttemptGrab");

	ADrawerHandle_C_AttemptGrab_Params params;
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


// Function DrawerHandle.DrawerHandle_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADrawerHandle_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.AttemptRelease");

	ADrawerHandle_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrawerHandle.DrawerHandle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADrawerHandle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.UserConstructionScript");

	ADrawerHandle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRHoverComponentBegin");

	ADrawerHandle_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRHoverComponentEnd");

	ADrawerHandle_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRInteract");

	ADrawerHandle_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADrawerHandle_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRReleased");

	ADrawerHandle_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRGrabbed");

	ADrawerHandle_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.ReceiveTick");

	ADrawerHandle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADrawerHandle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.ReceiveBeginPlay");

	ADrawerHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRHoverBegin");

	ADrawerHandle_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.OnVRHoverEnd");

	ADrawerHandle_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.ExecuteUbergraph_DrawerHandle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::ExecuteUbergraph_DrawerHandle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.ExecuteUbergraph_DrawerHandle");

	ADrawerHandle_C_ExecuteUbergraph_DrawerHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.Grabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ADrawerHandle_C::Grabbed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.Grabbed__DelegateSignature");

	ADrawerHandle_C_Grabbed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrawerHandle.DrawerHandle_C.HoverChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enter                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawerHandle_C::HoverChanged__DelegateSignature(bool Enter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrawerHandle.DrawerHandle_C.HoverChanged__DelegateSignature");

	ADrawerHandle_C_HoverChanged__DelegateSignature_Params params;
	params.Enter = Enter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
