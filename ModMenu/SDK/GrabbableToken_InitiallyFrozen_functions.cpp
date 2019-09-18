
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

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::AttemptGrab(class ASWGVRCharacter** Grabber, EVRHandType* Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptGrab");

	AGrabbableToken_InitiallyFrozen_C_AttemptGrab_Params params;
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


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrabbableToken_InitiallyFrozen_C::AttemptRelease(class ASWGVRCharacter** Grabber, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptRelease");

	AGrabbableToken_InitiallyFrozen_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrabbableToken_InitiallyFrozen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.UserConstructionScript");

	AGrabbableToken_InitiallyFrozen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentBegin");

	AGrabbableToken_InitiallyFrozen_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentEnd");

	AGrabbableToken_InitiallyFrozen_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrabbableToken_InitiallyFrozen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ReceiveBeginPlay");

	AGrabbableToken_InitiallyFrozen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverBegin");

	AGrabbableToken_InitiallyFrozen_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverEnd");

	AGrabbableToken_InitiallyFrozen_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ExecuteUbergraph_GrabbableToken_InitiallyFrozen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbableToken_InitiallyFrozen_C::ExecuteUbergraph_GrabbableToken_InitiallyFrozen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ExecuteUbergraph_GrabbableToken_InitiallyFrozen");

	AGrabbableToken_InitiallyFrozen_C_ExecuteUbergraph_GrabbableToken_InitiallyFrozen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGrabbableToken_InitiallyFrozen_C::Released__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Released__DelegateSignature");

	AGrabbableToken_InitiallyFrozen_C_Released__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Grabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGrabbableToken_InitiallyFrozen_C::Grabbed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Grabbed__DelegateSignature");

	AGrabbableToken_InitiallyFrozen_C_Grabbed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
