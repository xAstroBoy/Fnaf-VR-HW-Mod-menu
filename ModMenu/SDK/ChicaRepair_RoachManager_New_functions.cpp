
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

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptGrab
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

void AChicaRepair_RoachManager_New_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptGrab");

	AChicaRepair_RoachManager_New_C_AttemptGrab_Params params;
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


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChicaRepair_RoachManager_New_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptRelease");

	AChicaRepair_RoachManager_New_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.RemoveClosestRoach
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RoachRemoved                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::RemoveClosestRoach(EVRHandType Hand, bool* RoachRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.RemoveClosestRoach");

	AChicaRepair_RoachManager_New_C_RemoveClosestRoach_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoachRemoved != nullptr)
		*RoachRemoved = params.RoachRemoved;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.UserConstructionScript");

	AChicaRepair_RoachManager_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__FinishedFunc
// (BlueprintEvent)

void AChicaRepair_RoachManager_New_C::ForceAplicator__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__FinishedFunc");

	AChicaRepair_RoachManager_New_C_ForceAplicator__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__UpdateFunc
// (BlueprintEvent)

void AChicaRepair_RoachManager_New_C::ForceAplicator__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__UpdateFunc");

	AChicaRepair_RoachManager_New_C_ForceAplicator__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentBegin");

	AChicaRepair_RoachManager_New_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentEnd");

	AChicaRepair_RoachManager_New_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRGrabbed");

	AChicaRepair_RoachManager_New_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRReleased");

	AChicaRepair_RoachManager_New_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.SpawnRoach
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::SpawnRoach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.SpawnRoach");

	AChicaRepair_RoachManager_New_C_SpawnRoach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveBeginPlay");

	AChicaRepair_RoachManager_New_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.CleanRoaches
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::CleanRoaches()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.CleanRoaches");

	AChicaRepair_RoachManager_New_C_CleanRoaches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.BeginRoachInfestation
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::BeginRoachInfestation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.BeginRoachInfestation");

	AChicaRepair_RoachManager_New_C_BeginRoachInfestation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveTick");

	AChicaRepair_RoachManager_New_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.StopSound
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_RoachManager_New_C::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.StopSound");

	AChicaRepair_RoachManager_New_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.GrabAttempt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::GrabAttempt(EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.GrabAttempt");

	AChicaRepair_RoachManager_New_C_GrabAttempt_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverBegin");

	AChicaRepair_RoachManager_New_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverEnd");

	AChicaRepair_RoachManager_New_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ExecuteUbergraph_ChicaRepair_RoachManager_New
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_RoachManager_New_C::ExecuteUbergraph_ChicaRepair_RoachManager_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ExecuteUbergraph_ChicaRepair_RoachManager_New");

	AChicaRepair_RoachManager_New_C_ExecuteUbergraph_ChicaRepair_RoachManager_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
