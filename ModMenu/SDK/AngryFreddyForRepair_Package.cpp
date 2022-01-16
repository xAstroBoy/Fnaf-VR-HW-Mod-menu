/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "AngryFreddyForRepair_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AngryFreddyForRepair.AngryFreddyForRepair_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAngryFreddyForRepair_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.ReceiveTick");
		
		AAngryFreddyForRepair_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AngryFreddyForRepair.AngryFreddyForRepair_C.StartAnger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAngryFreddyForRepair_C::StartAnger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.StartAnger");
		
		AAngryFreddyForRepair_C_StartAnger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AngryFreddyForRepair.AngryFreddyForRepair_C.EndAnger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAngryFreddyForRepair_C::EndAnger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.EndAnger");
		
		AAngryFreddyForRepair_C_EndAnger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AngryFreddyForRepair.AngryFreddyForRepair_C.Stop Audio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAngryFreddyForRepair_C::Stop_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.Stop Audio");
		
		AAngryFreddyForRepair_C_Stop_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function AngryFreddyForRepair.AngryFreddyForRepair_C.ExecuteUbergraph_AngryFreddyForRepair
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAngryFreddyForRepair_C::ExecuteUbergraph_AngryFreddyForRepair(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.ExecuteUbergraph_AngryFreddyForRepair");
		
		AAngryFreddyForRepair_C_ExecuteUbergraph_AngryFreddyForRepair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAngryFreddyForRepair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAngryFreddyForRepair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AngryFreddyForRepair.AngryFreddyForRepair_C");
		return ptr;
	}

}


