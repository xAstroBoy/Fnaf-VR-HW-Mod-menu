
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

// Function Floor_Flashlight.Floor_Flashlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFloor_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Flashlight.Floor_Flashlight_C.UserConstructionScript");

	AFloor_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Flashlight.Floor_Flashlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFloor_Flashlight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Flashlight.Floor_Flashlight_C.ReceiveBeginPlay");

	AFloor_Flashlight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Flashlight.Floor_Flashlight_C.ExecuteUbergraph_Floor_Flashlight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Flashlight_C::ExecuteUbergraph_Floor_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Flashlight.Floor_Flashlight_C.ExecuteUbergraph_Floor_Flashlight");

	AFloor_Flashlight_C_ExecuteUbergraph_Floor_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
