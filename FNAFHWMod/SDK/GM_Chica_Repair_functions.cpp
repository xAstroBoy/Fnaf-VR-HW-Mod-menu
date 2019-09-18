
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

// Function GM_Chica_Repair.GM_Chica_Repair_C.CheckNumberOfHits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGM_Chica_Repair_C::CheckNumberOfHits(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.CheckNumberOfHits");

	AGM_Chica_Repair_C_CheckNumberOfHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.UserConstructionScript");

	AGM_Chica_Repair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaTossed
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::PizzaTossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaTossed");

	AGM_Chica_Repair_C_PizzaTossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.ArmFixed
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::ArmFixed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ArmFixed");

	AGM_Chica_Repair_C_ArmFixed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.ChicaOpened
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::ChicaOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ChicaOpened");

	AGM_Chica_Repair_C_ChicaOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.BugsRemoved
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::BugsRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.BugsRemoved");

	AGM_Chica_Repair_C_BugsRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.HandFixed
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::HandFixed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.HandFixed");

	AGM_Chica_Repair_C_HandFixed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.PlateFixed
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::PlateFixed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PlateFixed");

	AGM_Chica_Repair_C_PlateFixed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.CupcakeFixed
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::CupcakeFixed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.CupcakeFixed");

	AGM_Chica_Repair_C_CupcakeFixed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.KillPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpScareList>*   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Chica_Repair_C::KillPlayer(TEnumAsByte<EJumpScareList>* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.KillPlayer");

	AGM_Chica_Repair_C_KillPlayer_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGM_Chica_Repair_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ReceiveBeginPlay");

	AGM_Chica_Repair_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaAte
// (BlueprintCallable, BlueprintEvent)

void AGM_Chica_Repair_C::PizzaAte()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaAte");

	AGM_Chica_Repair_C_PizzaAte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Chica_Repair.GM_Chica_Repair_C.ExecuteUbergraph_GM_Chica_Repair
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Chica_Repair_C::ExecuteUbergraph_GM_Chica_Repair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ExecuteUbergraph_GM_Chica_Repair");

	AGM_Chica_Repair_C_ExecuteUbergraph_GM_Chica_Repair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
