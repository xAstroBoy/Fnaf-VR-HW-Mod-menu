/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPVRPlayer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPVRPlayer.MPVRPlayer_C.Get Flash Light
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFlashlightBase_C*                           Flashlight                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPVRPlayer_C::Get_Flash_Light(class AFlashlightBase_C** Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.Get Flash Light");
		
		AMPVRPlayer_C_Get_Flash_Light_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Flashlight != nullptr)
			*Flashlight = params.Flashlight;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMPVRPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay");
		
		AMPVRPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FlashLightOn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMPVRPlayer_C::OnFlashlightChanged(bool FlashLightOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged");
		
		AMPVRPlayer_C_OnFlashlightChanged_Params params {};
		params.FlashLightOn = FlashLightOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMPVRPlayer_C::ExecuteUbergraph_MPVRPlayer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer");
		
		AMPVRPlayer_C_ExecuteUbergraph_MPVRPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPVRPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPVRPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPVRPlayer.MPVRPlayer_C");
		return ptr;
	}

}


