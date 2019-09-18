
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

// Function GM_RepairGameBase.GM_RepairGameBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGM_RepairGameBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.UserConstructionScript");

	AGM_RepairGameBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_RepairGameBase.GM_RepairGameBase_C.KillPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpScareList>    Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_RepairGameBase_C::KillPlayer(TEnumAsByte<EJumpScareList> Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.KillPlayer");

	AGM_RepairGameBase_C_KillPlayer_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_RepairGameBase.GM_RepairGameBase_C.LevelDefeat
// (BlueprintCallable, BlueprintEvent)

void AGM_RepairGameBase_C::LevelDefeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.LevelDefeat");

	AGM_RepairGameBase_C_LevelDefeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_RepairGameBase.GM_RepairGameBase_C.LevelVictory
// (BlueprintCallable, BlueprintEvent)

void AGM_RepairGameBase_C::LevelVictory()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.LevelVictory");

	AGM_RepairGameBase_C_LevelVictory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_RepairGameBase.GM_RepairGameBase_C.ExecuteUbergraph_GM_RepairGameBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_RepairGameBase_C::ExecuteUbergraph_GM_RepairGameBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.ExecuteUbergraph_GM_RepairGameBase");

	AGM_RepairGameBase_C_ExecuteUbergraph_GM_RepairGameBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
