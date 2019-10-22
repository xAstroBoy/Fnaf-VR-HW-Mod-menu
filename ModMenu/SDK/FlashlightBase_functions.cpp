
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

// Function FlashlightBase.FlashlightBase_C.IsValidActorForVisionTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.IsValidActorForVisionTest");

	AFlashlightBase_C_IsValidActorForVisionTest_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function FlashlightBase.FlashlightBase_C.AttemptGrab
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

void AFlashlightBase_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.AttemptGrab");

	AFlashlightBase_C_AttemptGrab_Params params;
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


// Function FlashlightBase.FlashlightBase_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlashlightBase_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.AttemptRelease");

	AFlashlightBase_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FlashlightBase.FlashlightBase_C.GetGrabber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::GetGrabber(class ASWGVRCharacter** Grabber)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.GetGrabber");

	AFlashlightBase_C_GetGrabber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grabber != nullptr)
		*Grabber = params.Grabber;
}


// Function FlashlightBase.FlashlightBase_C.GetIsOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::GetIsOn(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.GetIsOn");

	AFlashlightBase_C_GetIsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function FlashlightBase.FlashlightBase_C.ToggleFlashlight
// (Public, BlueprintCallable, BlueprintEvent)

void AFlashlightBase_C::ToggleFlashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.ToggleFlashlight");

	AFlashlightBase_C_ToggleFlashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFlashlightBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.UserConstructionScript");

	AFlashlightBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFlashlightBase_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRReleased");

	AFlashlightBase_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature");

	AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature");

	AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRInteract");

	AFlashlightBase_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnVRGrabbed");

	AFlashlightBase_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.ExecuteUbergraph_FlashlightBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::ExecuteUbergraph_FlashlightBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.ExecuteUbergraph_FlashlightBase");

	AFlashlightBase_C_ExecuteUbergraph_FlashlightBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlashlightBase.FlashlightBase_C.OnFlashlightStatusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlashLightOn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlightBase_C::OnFlashlightStatusChanged__DelegateSignature(bool FlashLightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashlightBase.FlashlightBase_C.OnFlashlightStatusChanged__DelegateSignature");

	AFlashlightBase_C_OnFlashlightStatusChanged__DelegateSignature_Params params;
	params.FlashLightOn = FlashLightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
