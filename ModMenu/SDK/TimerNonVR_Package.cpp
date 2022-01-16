/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "TimerNonVR_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TimerNonVR.TimerNonVR_C.Time
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FText UTimerNonVR_C::Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimerNonVR.TimerNonVR_C.Time");
		
		UTimerNonVR_C_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTimerNonVR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimerNonVR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TimerNonVR.TimerNonVR_C");
		return ptr;
	}

}


