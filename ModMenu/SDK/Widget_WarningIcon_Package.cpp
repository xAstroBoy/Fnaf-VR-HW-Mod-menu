/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Widget_WarningIcon_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Widget_WarningIcon.Widget_WarningIcon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_WarningIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WarningIcon.Widget_WarningIcon_C.Construct");
		
		UWidget_WarningIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Widget_WarningIcon.Widget_WarningIcon_C.ExecuteUbergraph_Widget_WarningIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_WarningIcon_C::ExecuteUbergraph_Widget_WarningIcon(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_WarningIcon.Widget_WarningIcon_C.ExecuteUbergraph_Widget_WarningIcon");
		
		UWidget_WarningIcon_C_ExecuteUbergraph_Widget_WarningIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWidget_WarningIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_WarningIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WarningIcon.Widget_WarningIcon_C");
		return ptr;
	}

}


