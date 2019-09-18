
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

// Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptGrab
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

void ABedroom_Door_BP_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptGrab");

	ABedroom_Door_BP_C_AttemptGrab_Params params;
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


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABedroom_Door_BP_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.AttemptRelease");

	ABedroom_Door_BP_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetRequiredDoorRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AngleDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::GetRequiredDoorRotation(float* DeltaAngle, float* AngleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetRequiredDoorRotation");

	ABedroom_Door_BP_C_GetRequiredDoorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaAngle != nullptr)
		*DeltaAngle = params.DeltaAngle;
	if (AngleDirection != nullptr)
		*AngleDirection = params.AngleDirection;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetDoorRotationToPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaAngle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AngleDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::GetDoorRotationToPoint(const struct FVector& WorldPosition, float* DeltaAngle, float* AngleDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.GetDoorRotationToPoint");

	ABedroom_Door_BP_C_GetDoorRotationToPoint_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaAngle != nullptr)
		*DeltaAngle = params.DeltaAngle;
	if (AngleDirection != nullptr)
		*AngleDirection = params.AngleDirection;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Button_Held
// (Public, BlueprintCallable, BlueprintEvent)

void ABedroom_Door_BP_C::Button_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.Button_Held");

	ABedroom_Door_BP_C_Button_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Clear timer
// (Public, BlueprintCallable, BlueprintEvent)

void ABedroom_Door_BP_C::Clear_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.Clear timer");

	ABedroom_Door_BP_C_Clear_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.Move BTN
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::Move_BTN(float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.Move BTN");

	ABedroom_Door_BP_C_Move_BTN_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroom_Door_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.UserConstructionScript");

	ABedroom_Door_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRGrabbed");

	ABedroom_Door_BP_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABedroom_Door_BP_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.OnVRReleased");

	ABedroom_Door_BP_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveTick");

	ABedroom_Door_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABedroom_Door_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.ReceiveBeginPlay");

	ABedroom_Door_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bedroom_Door_BP.Bedroom_Door_BP_C.ExecuteUbergraph_Bedroom_Door_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroom_Door_BP_C::ExecuteUbergraph_Bedroom_Door_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bedroom_Door_BP.Bedroom_Door_BP_C.ExecuteUbergraph_Bedroom_Door_BP");

	ABedroom_Door_BP_C_ExecuteUbergraph_Bedroom_Door_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
