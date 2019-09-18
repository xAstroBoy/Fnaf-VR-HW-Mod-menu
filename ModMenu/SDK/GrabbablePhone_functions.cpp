
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

// Function GrabbablePhone.GrabbablePhone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrabbablePhone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.UserConstructionScript");

	AGrabbablePhone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbablePhone.GrabbablePhone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrabbablePhone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.ReceiveBeginPlay");

	AGrabbablePhone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbablePhone.GrabbablePhone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbablePhone_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.ReceiveTick");

	AGrabbablePhone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbablePhone.GrabbablePhone_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbablePhone_C::OnVRGrabbed(class ASWGVRCharacter** Grabber, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.OnVRGrabbed");

	AGrabbablePhone_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbablePhone.GrabbablePhone_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGrabbablePhone_C::OnVRReleased(class ASWGVRCharacter** Grabber, EVRHandType* Hand, struct FVector* ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.OnVRReleased");

	AGrabbablePhone_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrabbablePhone.GrabbablePhone_C.ExecuteUbergraph_GrabbablePhone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrabbablePhone_C::ExecuteUbergraph_GrabbablePhone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrabbablePhone.GrabbablePhone_C.ExecuteUbergraph_GrabbablePhone");

	AGrabbablePhone_C_ExecuteUbergraph_GrabbablePhone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
