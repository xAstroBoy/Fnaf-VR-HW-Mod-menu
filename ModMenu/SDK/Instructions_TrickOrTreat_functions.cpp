
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

// Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_TrickOrTreat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.Construct");

	UInstructions_TrickOrTreat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_TrickOrTreat_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.OnControllerTrackingChanged");

	UInstructions_TrickOrTreat_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.ExecuteUbergraph_Instructions_TrickOrTreat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_TrickOrTreat_C::ExecuteUbergraph_Instructions_TrickOrTreat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.ExecuteUbergraph_Instructions_TrickOrTreat");

	UInstructions_TrickOrTreat_C_ExecuteUbergraph_Instructions_TrickOrTreat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
