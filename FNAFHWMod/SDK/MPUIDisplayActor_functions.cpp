
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

// Function MPUIDisplayActor.MPUIDisplayActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMPUIDisplayActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIDisplayActor.MPUIDisplayActor_C.UserConstructionScript");

	AMPUIDisplayActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMPUIDisplayActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveBeginPlay");

	AMPUIDisplayActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPUIDisplayActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveTick");

	AMPUIDisplayActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MPUIDisplayActor.MPUIDisplayActor_C.ExecuteUbergraph_MPUIDisplayActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMPUIDisplayActor_C::ExecuteUbergraph_MPUIDisplayActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MPUIDisplayActor.MPUIDisplayActor_C.ExecuteUbergraph_MPUIDisplayActor");

	AMPUIDisplayActor_C_ExecuteUbergraph_MPUIDisplayActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
