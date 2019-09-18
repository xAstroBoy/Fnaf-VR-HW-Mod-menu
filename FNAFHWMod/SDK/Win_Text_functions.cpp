
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

// Function Win_Text.Win_Text_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWin_Text_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.UserConstructionScript");

	AWin_Text_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Win_Text.Win_Text_C.Repair_Freddy_Win
// (BlueprintCallable, BlueprintEvent)

void AWin_Text_C::Repair_Freddy_Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.Repair_Freddy_Win");

	AWin_Text_C_Repair_Freddy_Win_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Win_Text.Win_Text_C.PlayerWon
// (BlueprintCallable, BlueprintEvent)

void AWin_Text_C::PlayerWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.PlayerWon");

	AWin_Text_C_PlayerWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Win_Text.Win_Text_C.ExecuteUbergraph_Win_Text
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWin_Text_C::ExecuteUbergraph_Win_Text(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.ExecuteUbergraph_Win_Text");

	AWin_Text_C_ExecuteUbergraph_Win_Text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
