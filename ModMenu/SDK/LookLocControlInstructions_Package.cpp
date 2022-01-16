/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "LookLocControlInstructions_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LookLocControlInstructions.LookLocControlInstructions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULookLocControlInstructions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookLocControlInstructions.LookLocControlInstructions_C.Construct");
		
		ULookLocControlInstructions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LookLocControlInstructions.LookLocControlInstructions_C.ExecuteUbergraph_LookLocControlInstructions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULookLocControlInstructions_C::ExecuteUbergraph_LookLocControlInstructions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookLocControlInstructions.LookLocControlInstructions_C.ExecuteUbergraph_LookLocControlInstructions");
		
		ULookLocControlInstructions_C_ExecuteUbergraph_LookLocControlInstructions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULookLocControlInstructions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookLocControlInstructions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LookLocControlInstructions.LookLocControlInstructions_C");
		return ptr;
	}

}


