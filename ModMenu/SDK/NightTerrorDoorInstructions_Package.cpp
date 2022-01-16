/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NightTerrorDoorInstructions_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNightTerrorDoorInstructions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.Construct");
		
		UNightTerrorDoorInstructions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.ExecuteUbergraph_NightTerrorDoorInstructions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNightTerrorDoorInstructions_C::ExecuteUbergraph_NightTerrorDoorInstructions(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.ExecuteUbergraph_NightTerrorDoorInstructions");
		
		UNightTerrorDoorInstructions_C_ExecuteUbergraph_NightTerrorDoorInstructions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNightTerrorDoorInstructions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNightTerrorDoorInstructions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NightTerrorDoorInstructions.NightTerrorDoorInstructions_C");
		return ptr;
	}

}


