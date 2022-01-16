/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Win_Text_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Win_Text.Win_Text_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWin_Text_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.Timeline_0__FinishedFunc");
		
		AWin_Text_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Win_Text.Win_Text_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AWin_Text_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.Timeline_0__UpdateFunc");
		
		AWin_Text_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Win_Text.Win_Text_C.Repair_Freddy_Win
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWin_Text_C::Repair_Freddy_Win()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.Repair_Freddy_Win");
		
		AWin_Text_C_Repair_Freddy_Win_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Win_Text.Win_Text_C.PlayerWon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWin_Text_C::PlayerWon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.PlayerWon");
		
		AWin_Text_C_PlayerWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Win_Text.Win_Text_C.ExecuteUbergraph_Win_Text
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWin_Text_C::ExecuteUbergraph_Win_Text(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Win_Text.Win_Text_C.ExecuteUbergraph_Win_Text");
		
		AWin_Text_C_ExecuteUbergraph_Win_Text_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWin_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWin_Text_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Win_Text.Win_Text_C");
		return ptr;
	}

}


