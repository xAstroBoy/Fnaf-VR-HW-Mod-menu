/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "NonVR_Office_TurnUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNonVR_Office_TurnUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.PreConstruct");
		
		UNonVR_Office_TurnUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.LookUIVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNonVR_Office_TurnUI_C::LookUIVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.LookUIVisibility");
		
		UNonVR_Office_TurnUI_C_LookUIVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.On Controller Updated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNonVR_Office_TurnUI_C::On_Controller_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.On Controller Updated");
		
		UNonVR_Office_TurnUI_C_On_Controller_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.ExecuteUbergraph_NonVR_Office_TurnUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNonVR_Office_TurnUI_C::ExecuteUbergraph_NonVR_Office_TurnUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.ExecuteUbergraph_NonVR_Office_TurnUI");
		
		UNonVR_Office_TurnUI_C_ExecuteUbergraph_NonVR_Office_TurnUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNonVR_Office_TurnUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNonVR_Office_TurnUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NonVR_Office_TurnUI.NonVR_Office_TurnUI_C");
		return ptr;
	}

}


