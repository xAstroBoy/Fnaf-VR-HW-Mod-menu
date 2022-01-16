/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "VirusCountdown_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function VirusCountdown.VirusCountdown_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVirusCountdown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VirusCountdown.VirusCountdown_C.Construct");
		
		UVirusCountdown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function VirusCountdown.VirusCountdown_C.ExecuteUbergraph_VirusCountdown
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVirusCountdown_C::ExecuteUbergraph_VirusCountdown(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VirusCountdown.VirusCountdown_C.ExecuteUbergraph_VirusCountdown");
		
		UVirusCountdown_C_ExecuteUbergraph_VirusCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVirusCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirusCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VirusCountdown.VirusCountdown_C");
		return ptr;
	}

}


