/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "OfficeVictory_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeVictory.OfficeVictory_C.NewFunction_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOfficeVictory_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.NewFunction_1");
		
		UOfficeVictory_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeVictory.OfficeVictory_C.VictorySequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOfficeVictory_C::VictorySequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.VictorySequence");
		
		UOfficeVictory_C_VictorySequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function OfficeVictory.OfficeVictory_C.ExecuteUbergraph_OfficeVictory
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOfficeVictory_C::ExecuteUbergraph_OfficeVictory(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OfficeVictory.OfficeVictory_C.ExecuteUbergraph_OfficeVictory");
		
		UOfficeVictory_C_ExecuteUbergraph_OfficeVictory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOfficeVictory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOfficeVictory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OfficeVictory.OfficeVictory_C");
		return ptr;
	}

}


