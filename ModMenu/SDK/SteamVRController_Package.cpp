/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "SteamVRController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0067E3A0
	 * 		Name   -> Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		SteamVRController_ESteamVRTouchDPadMapping         NewMapping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRControllerLibrary::STATIC_SetTouchDPadMapping(SteamVRController_ESteamVRTouchDPadMapping NewMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping");
		
		USteamVRControllerLibrary_SetTouchDPadMapping_Params params {};
		params.NewMapping = NewMapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USteamVRControllerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRControllerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamVRController.SteamVRControllerLibrary");
		return ptr;
	}

}


