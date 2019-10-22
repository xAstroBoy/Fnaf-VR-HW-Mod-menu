
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

// Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_FoxyDarkRide_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.Construct");

	UInstructions_FoxyDarkRide_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_FoxyDarkRide_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.OnControllerTrackingChanged");

	UInstructions_FoxyDarkRide_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.ExecuteUbergraph_Instructions_FoxyDarkRide
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_FoxyDarkRide_C::ExecuteUbergraph_Instructions_FoxyDarkRide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_FoxyDarkRide.Instructions_FoxyDarkRide_C.ExecuteUbergraph_Instructions_FoxyDarkRide");

	UInstructions_FoxyDarkRide_C_ExecuteUbergraph_Instructions_FoxyDarkRide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
