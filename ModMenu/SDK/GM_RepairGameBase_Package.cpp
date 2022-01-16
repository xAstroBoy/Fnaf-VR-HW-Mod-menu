/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "GM_RepairGameBase_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_RepairGameBase.GM_RepairGameBase_C.KillPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		JumpScareList_EJumpScareList                       Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_RepairGameBase_C::KillPlayer(JumpScareList_EJumpScareList Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.KillPlayer");
		
		AGM_RepairGameBase_C_KillPlayer_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_RepairGameBase.GM_RepairGameBase_C.LevelDefeat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_RepairGameBase_C::LevelDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.LevelDefeat");
		
		AGM_RepairGameBase_C_LevelDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_RepairGameBase.GM_RepairGameBase_C.LevelVictory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGM_RepairGameBase_C::LevelVictory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.LevelVictory");
		
		AGM_RepairGameBase_C_LevelVictory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GM_RepairGameBase.GM_RepairGameBase_C.ExecuteUbergraph_GM_RepairGameBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_RepairGameBase_C::ExecuteUbergraph_GM_RepairGameBase(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_RepairGameBase.GM_RepairGameBase_C.ExecuteUbergraph_GM_RepairGameBase");
		
		AGM_RepairGameBase_C_ExecuteUbergraph_GM_RepairGameBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGM_RepairGameBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_RepairGameBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_RepairGameBase.GM_RepairGameBase_C");
		return ptr;
	}

}


