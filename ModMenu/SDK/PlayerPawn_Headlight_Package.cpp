/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "PlayerPawn_Headlight_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Flicker_Light                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_Headlight_C::Flicker_Flashlight(bool Flicker_Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight");
		
		APlayerPawn_Headlight_C_Flicker_Flashlight_Params params {};
		params.Flicker_Light = Flicker_Light;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable_Collision                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TurnOffLightAfterFlicker                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_Headlight_C::Toggle_Flicker(bool Enable_Collision, bool TurnOffLightAfterFlicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker");
		
		APlayerPawn_Headlight_C_Toggle_Flicker_Params params {};
		params.Enable_Collision = Enable_Collision;
		params.TurnOffLightAfterFlicker = TurnOffLightAfterFlicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Power_On                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_Headlight_C::Toggle_Light(bool Power_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light");
		
		APlayerPawn_Headlight_C_Toggle_Light_Params params {};
		params.Power_On = Power_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_Headlight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick");
		
		APlayerPawn_Headlight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawn_Headlight_C::Heavy_Flicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker");
		
		APlayerPawn_Headlight_C_Heavy_Flicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlayerPawn_Headlight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay");
		
		APlayerPawn_Headlight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_Headlight_C::ExecuteUbergraph_PlayerPawn_Headlight(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight");
		
		APlayerPawn_Headlight_C_ExecuteUbergraph_PlayerPawn_Headlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawn_Headlight_C::LightTriggered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature");
		
		APlayerPawn_Headlight_C_LightTriggered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerPawn_Headlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawn_Headlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C");
		return ptr;
	}

}


