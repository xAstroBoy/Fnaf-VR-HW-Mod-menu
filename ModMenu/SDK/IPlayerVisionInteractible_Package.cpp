/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "IPlayerVisionInteractible_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFNAFPlayerPawn_C*                           PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIPlayerVisionInteractible_C::OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionExit");
		
		UIPlayerVisionInteractible_C_OnPlayerVisionExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFNAFPlayerPawn_C*                           PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIPlayerVisionInteractible_C::OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IPlayerVisionInteractible.IPlayerVisionInteractible_C.OnPlayerVisionEnter");
		
		UIPlayerVisionInteractible_C_OnPlayerVisionEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UIPlayerVisionInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIPlayerVisionInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IPlayerVisionInteractible.IPlayerVisionInteractible_C");
		return ptr;
	}

}


