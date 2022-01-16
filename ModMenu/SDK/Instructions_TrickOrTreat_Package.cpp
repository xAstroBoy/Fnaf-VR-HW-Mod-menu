/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Instructions_TrickOrTreat_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInstructions_TrickOrTreat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.Construct");
		
		UInstructions_TrickOrTreat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.OnControllerTrackingChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_TrickOrTreat_C::OnControllerTrackingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.OnControllerTrackingChanged");
		
		UInstructions_TrickOrTreat_C_OnControllerTrackingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.ExecuteUbergraph_Instructions_TrickOrTreat
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstructions_TrickOrTreat_C::ExecuteUbergraph_Instructions_TrickOrTreat(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_TrickOrTreat.Instructions_TrickOrTreat_C.ExecuteUbergraph_Instructions_TrickOrTreat");
		
		UInstructions_TrickOrTreat_C_ExecuteUbergraph_Instructions_TrickOrTreat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_TrickOrTreat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_TrickOrTreat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_TrickOrTreat.Instructions_TrickOrTreat_C");
		return ptr;
	}

}


