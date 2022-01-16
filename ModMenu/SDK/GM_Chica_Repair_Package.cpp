/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "GM_Chica_Repair_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.CheckNumberOfHits
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Chica_Repair_C::CheckNumberOfHits(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.CheckNumberOfHits");
		
		AGM_Chica_Repair_C_CheckNumberOfHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaTossed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::PizzaTossed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaTossed");
		
		AGM_Chica_Repair_C_PizzaTossed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.ArmFixed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::ArmFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ArmFixed");
		
		AGM_Chica_Repair_C_ArmFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.ChicaOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::ChicaOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ChicaOpened");
		
		AGM_Chica_Repair_C_ChicaOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.BugsRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::BugsRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.BugsRemoved");
		
		AGM_Chica_Repair_C_BugsRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.HandFixed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::HandFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.HandFixed");
		
		AGM_Chica_Repair_C_HandFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.PlateFixed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::PlateFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PlateFixed");
		
		AGM_Chica_Repair_C_PlateFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.CupcakeFixed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::CupcakeFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.CupcakeFixed");
		
		AGM_Chica_Repair_C_CupcakeFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.KillPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		JumpScareList_EJumpScareList                       Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Chica_Repair_C::KillPlayer(JumpScareList_EJumpScareList Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.KillPlayer");
		
		AGM_Chica_Repair_C_KillPlayer_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ReceiveBeginPlay");
		
		AGM_Chica_Repair_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaAte
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_Chica_Repair_C::PizzaAte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.PizzaAte");
		
		AGM_Chica_Repair_C_PizzaAte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_Chica_Repair.GM_Chica_Repair_C.ExecuteUbergraph_GM_Chica_Repair
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Chica_Repair_C::ExecuteUbergraph_GM_Chica_Repair(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Chica_Repair.GM_Chica_Repair_C.ExecuteUbergraph_GM_Chica_Repair");
		
		AGM_Chica_Repair_C_ExecuteUbergraph_GM_Chica_Repair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGM_Chica_Repair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Chica_Repair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Chica_Repair.GM_Chica_Repair_C");
		return ptr;
	}

}


