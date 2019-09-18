
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

// Function Spotlight_Flicker.Spotlight_Flicker_C.ToggleVisiblity
// (Public, BlueprintCallable, BlueprintEvent)

void ASpotlight_Flicker_C::ToggleVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ToggleVisiblity");

	ASpotlight_Flicker_C_ToggleVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spotlight_Flicker.Spotlight_Flicker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpotlight_Flicker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.UserConstructionScript");

	ASpotlight_Flicker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spotlight_Flicker.Spotlight_Flicker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpotlight_Flicker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ReceiveBeginPlay");

	ASpotlight_Flicker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spotlight_Flicker.Spotlight_Flicker_C.ExecuteUbergraph_Spotlight_Flicker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpotlight_Flicker_C::ExecuteUbergraph_Spotlight_Flicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ExecuteUbergraph_Spotlight_Flicker");

	ASpotlight_Flicker_C_ExecuteUbergraph_Spotlight_Flicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
