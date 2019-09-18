
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

// Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptGrab
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

void ABedroomClosetDoor_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptGrab");

	ABedroomClosetDoor_C_AttemptGrab_Params params;
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


// Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABedroomClosetDoor_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.AttemptRelease");

	ABedroomClosetDoor_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.StopInterpAngle
// (Public, BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoor_C::StopInterpAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.StopInterpAngle");

	ABedroomClosetDoor_C_StopInterpAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.SetInterpAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InterpAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::SetInterpAngle(float InterpAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.SetInterpAngle");

	ABedroomClosetDoor_C_SetInterpAngle_Params params;
	params.InterpAngle = InterpAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.GetCurrentAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DoorAngle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::GetCurrentAngle(float* DoorAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.GetCurrentAngle");

	ABedroomClosetDoor_C_GetCurrentAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorAngle != nullptr)
		*DoorAngle = params.DoorAngle;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.IsDoorHeld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DoorIsHeld                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::IsDoorHeld(bool* DoorIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.IsDoorHeld");

	ABedroomClosetDoor_C_IsDoorHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoorIsHeld != nullptr)
		*DoorIsHeld = params.DoorIsHeld;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.SetAngle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DesiredAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::SetAngle(float DesiredAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.SetAngle");

	ABedroomClosetDoor_C_SetAngle_Params params;
	params.DesiredAngle = DesiredAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.SetupDoorAngles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoor_C::SetupDoorAngles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.SetupDoorAngles");

	ABedroomClosetDoor_C_SetupDoorAngles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.UserConstructionScript");

	ABedroomClosetDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.ReceiveTick");

	ABedroomClosetDoor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRGrabbed");

	ABedroomClosetDoor_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABedroomClosetDoor_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.OnVRReleased");

	ABedroomClosetDoor_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.ExecuteUbergraph_BedroomClosetDoor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::ExecuteUbergraph_BedroomClosetDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.ExecuteUbergraph_BedroomClosetDoor");

	ABedroomClosetDoor_C_ExecuteUbergraph_BedroomClosetDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor.BedroomClosetDoor_C.DoorAngleChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABedroomClosetDoor_C*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_C::DoorAngleChange__DelegateSignature(float DoorAngle, class ABedroomClosetDoor_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor.BedroomClosetDoor_C.DoorAngleChange__DelegateSignature");

	ABedroomClosetDoor_C_DoorAngleChange__DelegateSignature_Params params;
	params.DoorAngle = DoorAngle;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
