
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

// Function Flashlight_Battery.Flashlight_Battery_C.AttemptGrab
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

void AFlashlight_Battery_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.AttemptGrab");

	AFlashlight_Battery_C_AttemptGrab_Params params;
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


// Function Flashlight_Battery.Flashlight_Battery_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFlashlight_Battery_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.AttemptRelease");

	AFlashlight_Battery_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Flashlight Ref
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlashLight_Power_C*     Flash_Light_Power              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlashlight_Battery_C::Flashlight_Ref(class UFlashLight_Power_C** Flash_Light_Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Flashlight Ref");

	AFlashlight_Battery_C_Flashlight_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flash_Light_Power != nullptr)
		*Flash_Light_Power = params.Flash_Light_Power;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Motion Controller Pawn Ref
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* AsMotion_Controller_Pawn       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::Motion_Controller_Pawn_Ref(class ASaul_MotionControllerPawn_C** AsMotion_Controller_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Motion Controller Pawn Ref");

	AFlashlight_Battery_C_Motion_Controller_Pawn_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsMotion_Controller_Pawn != nullptr)
		*AsMotion_Controller_Pawn = params.AsMotion_Controller_Pawn;
}


// Function Flashlight_Battery.Flashlight_Battery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.UserConstructionScript");

	AFlashlight_Battery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Dyling_Flashlight_Flicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__FinishedFunc");

	AFlashlight_Battery_C_Dyling_Flashlight_Flicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Dyling_Flashlight_Flicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__UpdateFunc");

	AFlashlight_Battery_C_Dyling_Flashlight_Flicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__FinishedFunc");

	AFlashlight_Battery_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__UpdateFunc");

	AFlashlight_Battery_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::FredHead_LightFlicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__FinishedFunc");

	AFlashlight_Battery_C_FredHead_LightFlicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::FredHead_LightFlicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__UpdateFunc");

	AFlashlight_Battery_C_FredHead_LightFlicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__ToggleLight__EventFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::FredHead_LightFlicker__ToggleLight__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__ToggleLight__EventFunc");

	AFlashlight_Battery_C_FredHead_LightFlicker__ToggleLight__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Light_Flicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__FinishedFunc");

	AFlashlight_Battery_C_Light_Flicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Light_Flicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__UpdateFunc");

	AFlashlight_Battery_C_Light_Flicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Flicker01Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__FinishedFunc");

	AFlashlight_Battery_C_Flicker01Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Flicker01Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__UpdateFunc");

	AFlashlight_Battery_C_Flicker01Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__FinishedFunc");

	AFlashlight_Battery_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__UpdateFunc");

	AFlashlight_Battery_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__FinishedFunc");

	AFlashlight_Battery_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__UpdateFunc");

	AFlashlight_Battery_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__FinishedFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::PostprocessTransition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__FinishedFunc");

	AFlashlight_Battery_C_PostprocessTransition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__UpdateFunc
// (BlueprintEvent)

void AFlashlight_Battery_C::PostprocessTransition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__UpdateFunc");

	AFlashlight_Battery_C_PostprocessTransition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFlashlight_Battery_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Pickup");

	AFlashlight_Battery_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Drop");

	AFlashlight_Battery_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRInteract");

	AFlashlight_Battery_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverBegin");

	AFlashlight_Battery_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentBegin");

	AFlashlight_Battery_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentEnd");

	AFlashlight_Battery_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverEnd");

	AFlashlight_Battery_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRGrabbed");

	AFlashlight_Battery_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFlashlight_Battery_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.OnVRReleased");

	AFlashlight_Battery_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.ReceiveTick");

	AFlashlight_Battery_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFlashlight_Battery_C::BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFlashlight_Battery_C_BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Flashlight_Battery.Flashlight_Battery_C.Flashlight On?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::Flashlight_On_(bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Flashlight On?");

	AFlashlight_Battery_C_Flashlight_On__Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFlashlight_Battery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.ReceiveBeginPlay");

	AFlashlight_Battery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Can Win
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::Can_Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Can Win");

	AFlashlight_Battery_C_Can_Win_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Fate is Sealed (RIP)
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::Fate_is_Sealed__RIP_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Fate is Sealed (RIP)");

	AFlashlight_Battery_C_Fate_is_Sealed__RIP__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOff
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::FlickerLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOff");

	AFlashlight_Battery_C_FlickerLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOn
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::FlickerLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOn");

	AFlashlight_Battery_C_FlickerLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_Flicker
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::FredHead_Flicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FredHead_Flicker");

	AFlashlight_Battery_C_FredHead_Flicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Toggle Flicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerDead                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::Toggle_Flicker(bool IsPlayerDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Toggle Flicker");

	AFlashlight_Battery_C_Toggle_Flicker_Params params;
	params.IsPlayerDead = IsPlayerDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.PCBFlicker_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetNewTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::PCBFlicker_01(bool Reverse, bool SetNewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.PCBFlicker_01");

	AFlashlight_Battery_C_PCBFlicker_01_Params params;
	params.Reverse = Reverse;
	params.SetNewTime = SetNewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FuntimeFreddyFlicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerDead                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::FuntimeFreddyFlicker(bool IsPlayerDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FuntimeFreddyFlicker");

	AFlashlight_Battery_C_FuntimeFreddyFlicker_Params params;
	params.IsPlayerDead = IsPlayerDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.FinaleNightmareWeightTransition
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::FinaleNightmareWeightTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.FinaleNightmareWeightTransition");

	AFlashlight_Battery_C_FinaleNightmareWeightTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.ResetWeightTransition
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::ResetWeightTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.ResetWeightTransition");

	AFlashlight_Battery_C_ResetWeightTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.SetRadialForce
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::SetRadialForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.SetRadialForce");

	AFlashlight_Battery_C_SetRadialForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.Disable Collider
// (BlueprintCallable, BlueprintEvent)

void AFlashlight_Battery_C::Disable_Collider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.Disable Collider");

	AFlashlight_Battery_C_Disable_Collider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flashlight_Battery.Flashlight_Battery_C.ExecuteUbergraph_Flashlight_Battery
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFlashlight_Battery_C::ExecuteUbergraph_Flashlight_Battery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flashlight_Battery.Flashlight_Battery_C.ExecuteUbergraph_Flashlight_Battery");

	AFlashlight_Battery_C_ExecuteUbergraph_Flashlight_Battery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
