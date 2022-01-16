/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BlackoutManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BlackoutManager.BlackoutManager_C.Blackout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABlackoutManager_C::Blackout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackoutManager.BlackoutManager_C.Blackout");
		
		ABlackoutManager_C_Blackout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BlackoutManager.BlackoutManager_C.ExecuteUbergraph_BlackoutManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABlackoutManager_C::ExecuteUbergraph_BlackoutManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackoutManager.BlackoutManager_C.ExecuteUbergraph_BlackoutManager");
		
		ABlackoutManager_C_ExecuteUbergraph_BlackoutManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABlackoutManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlackoutManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BlackoutManager.BlackoutManager_C");
		return ptr;
	}

}


