
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

// Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_HallwayCrawl_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.Construct");

	UInstructions_HallwayCrawl_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_HallwayCrawl_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.OnControllerTrackingChanged");

	UInstructions_HallwayCrawl_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.ExecuteUbergraph_Instructions_HallwayCrawl
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_HallwayCrawl_C::ExecuteUbergraph_Instructions_HallwayCrawl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_HallwayCrawl.Instructions_HallwayCrawl_C.ExecuteUbergraph_Instructions_HallwayCrawl");

	UInstructions_HallwayCrawl_C_ExecuteUbergraph_Instructions_HallwayCrawl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
