/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Spotlight_Flicker_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Spotlight_Flicker.Spotlight_Flicker_C.ToggleVisiblity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpotlight_Flicker_C::ToggleVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ToggleVisiblity");
		
		ASpotlight_Flicker_C_ToggleVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Spotlight_Flicker.Spotlight_Flicker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpotlight_Flicker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.UserConstructionScript");
		
		ASpotlight_Flicker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Spotlight_Flicker.Spotlight_Flicker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASpotlight_Flicker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ReceiveBeginPlay");
		
		ASpotlight_Flicker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Spotlight_Flicker.Spotlight_Flicker_C.ExecuteUbergraph_Spotlight_Flicker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpotlight_Flicker_C::ExecuteUbergraph_Spotlight_Flicker(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spotlight_Flicker.Spotlight_Flicker_C.ExecuteUbergraph_Spotlight_Flicker");
		
		ASpotlight_Flicker_C_ExecuteUbergraph_Spotlight_Flicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASpotlight_Flicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpotlight_Flicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Spotlight_Flicker.Spotlight_Flicker_C");
		return ptr;
	}

}


