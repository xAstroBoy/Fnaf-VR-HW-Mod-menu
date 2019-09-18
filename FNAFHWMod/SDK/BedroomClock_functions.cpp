
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

// Function BedroomClock.BedroomClock_C.UpdatesClock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClock_C::UpdatesClock(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.UpdatesClock");

	ABedroomClock_C_UpdatesClock_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClock.BedroomClock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroomClock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.UserConstructionScript");

	ABedroomClock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClock.BedroomClock_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClock_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.ReceiveTick");

	ABedroomClock_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClock.BedroomClock_C.TimeOver
// (BlueprintCallable, BlueprintEvent)

void ABedroomClock_C::TimeOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.TimeOver");

	ABedroomClock_C_TimeOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClock.BedroomClock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABedroomClock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.ReceiveBeginPlay");

	ABedroomClock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClock.BedroomClock_C.ExecuteUbergraph_BedroomClock
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClock_C::ExecuteUbergraph_BedroomClock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClock.BedroomClock_C.ExecuteUbergraph_BedroomClock");

	ABedroomClock_C_ExecuteUbergraph_BedroomClock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
