/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Vent_Repair_Power_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Vent_Repair_Power.Vent_Repair_Power_C.Get_Vent_Repair_Power_Meter_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UVent_Repair_Power_C::Get_Vent_Repair_Power_Meter_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vent_Repair_Power.Vent_Repair_Power_C.Get_Vent_Repair_Power_Meter_Percent_1");
		
		UVent_Repair_Power_C_Get_Vent_Repair_Power_Meter_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVent_Repair_Power_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVent_Repair_Power_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Vent_Repair_Power.Vent_Repair_Power_C");
		return ptr;
	}

}


