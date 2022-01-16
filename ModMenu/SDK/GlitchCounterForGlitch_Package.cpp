/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "GlitchCounterForGlitch_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.SlideTextFro2Digits
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlitchCounterForGlitch_C::SlideTextFro2Digits(int Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.SlideTextFro2Digits");
		
		UGlitchCounterForGlitch_C_SlideTextFro2Digits_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.ScrollCounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ToWhere                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlitchCounterForGlitch_C::ScrollCounter(int ToWhere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.ScrollCounter");
		
		UGlitchCounterForGlitch_C_ScrollCounter_Params params {};
		params.ToWhere = ToWhere;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGlitchCounterForGlitch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.Construct");
		
		UGlitchCounterForGlitch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.ExecuteUbergraph_GlitchCounterForGlitch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlitchCounterForGlitch_C::ExecuteUbergraph_GlitchCounterForGlitch(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlitchCounterForGlitch.GlitchCounterForGlitch_C.ExecuteUbergraph_GlitchCounterForGlitch");
		
		UGlitchCounterForGlitch_C_ExecuteUbergraph_GlitchCounterForGlitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlitchCounterForGlitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitchCounterForGlitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlitchCounterForGlitch.GlitchCounterForGlitch_C");
		return ptr;
	}

}


