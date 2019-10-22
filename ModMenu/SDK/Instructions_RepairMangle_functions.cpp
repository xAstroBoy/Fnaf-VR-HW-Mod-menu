
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

// Function Instructions_RepairMangle.Instructions_RepairMangle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_RepairMangle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.Construct");

	UInstructions_RepairMangle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_RepairMangle.Instructions_RepairMangle_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_RepairMangle_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.OnControllerTrackingChanged");

	UInstructions_RepairMangle_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_RepairMangle.Instructions_RepairMangle_C.ExecuteUbergraph_Instructions_RepairMangle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_RepairMangle_C::ExecuteUbergraph_Instructions_RepairMangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.ExecuteUbergraph_Instructions_RepairMangle");

	UInstructions_RepairMangle_C_ExecuteUbergraph_Instructions_RepairMangle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
