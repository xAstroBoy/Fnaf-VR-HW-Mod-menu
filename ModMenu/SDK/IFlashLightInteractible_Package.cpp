/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "IFlashLightInteractible_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlight_Battery_C*                       Flashlight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIFlashLightInteractible_C::OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightEndHover");
		
		UIFlashLightInteractible_C_OnFlashLightEndHover_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlight_Battery_C*                       Flashlight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIFlashLightInteractible_C::OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IFlashLightInteractible.IFlashLightInteractible_C.OnFlashLightBeginHover");
		
		UIFlashLightInteractible_C_OnFlashLightBeginHover_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UIFlashLightInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIFlashLightInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IFlashLightInteractible.IFlashLightInteractible_C");
		return ptr;
	}

}


