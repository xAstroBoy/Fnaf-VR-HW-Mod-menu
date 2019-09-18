
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

// Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.TriggerPullWidget
// (BlueprintCallable, BlueprintEvent)

void UInstructions_SpringBonnie_C::TriggerPullWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.TriggerPullWidget");

	UInstructions_SpringBonnie_C_TriggerPullWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_SpringBonnie_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.Construct");

	UInstructions_SpringBonnie_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_SpringBonnie_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.OnControllerTrackingChanged");

	UInstructions_SpringBonnie_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.ExecuteUbergraph_Instructions_SpringBonnie
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_SpringBonnie_C::ExecuteUbergraph_Instructions_SpringBonnie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_SpringBonnie.Instructions_SpringBonnie_C.ExecuteUbergraph_Instructions_SpringBonnie");

	UInstructions_SpringBonnie_C_ExecuteUbergraph_Instructions_SpringBonnie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
