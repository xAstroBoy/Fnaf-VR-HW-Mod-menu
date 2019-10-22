
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

// Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_PumpkinPatch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.Construct");

	UInstructions_PumpkinPatch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_PumpkinPatch_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.OnControllerTrackingChanged");

	UInstructions_PumpkinPatch_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.ExecuteUbergraph_Instructions_PumpkinPatch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_PumpkinPatch_C::ExecuteUbergraph_Instructions_PumpkinPatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_PumpkinPatch.Instructions_PumpkinPatch_C.ExecuteUbergraph_Instructions_PumpkinPatch");

	UInstructions_PumpkinPatch_C_ExecuteUbergraph_Instructions_PumpkinPatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
