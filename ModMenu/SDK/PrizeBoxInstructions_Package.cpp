/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PrizeBoxInstructions_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PrizeBoxInstructions.PrizeBoxInstructions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPrizeBoxInstructions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeBoxInstructions.PrizeBoxInstructions_C.Construct");
		
		UPrizeBoxInstructions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PrizeBoxInstructions.PrizeBoxInstructions_C.ExecuteUbergraph_PrizeBoxInstructions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrizeBoxInstructions_C::ExecuteUbergraph_PrizeBoxInstructions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeBoxInstructions.PrizeBoxInstructions_C.ExecuteUbergraph_PrizeBoxInstructions");
		
		UPrizeBoxInstructions_C_ExecuteUbergraph_PrizeBoxInstructions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPrizeBoxInstructions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrizeBoxInstructions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PrizeBoxInstructions.PrizeBoxInstructions_C");
		return ptr;
	}

}


