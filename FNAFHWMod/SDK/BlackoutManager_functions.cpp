
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

// Function BlackoutManager.BlackoutManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABlackoutManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackoutManager.BlackoutManager_C.UserConstructionScript");

	ABlackoutManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackoutManager.BlackoutManager_C.Blackout
// (BlueprintCallable, BlueprintEvent)

void ABlackoutManager_C::Blackout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackoutManager.BlackoutManager_C.Blackout");

	ABlackoutManager_C_Blackout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackoutManager.BlackoutManager_C.ExecuteUbergraph_BlackoutManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlackoutManager_C::ExecuteUbergraph_BlackoutManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackoutManager.BlackoutManager_C.ExecuteUbergraph_BlackoutManager");

	ABlackoutManager_C_ExecuteUbergraph_BlackoutManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
