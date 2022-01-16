/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office01_GameManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.PlayFoxySound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::PlayFoxySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayFoxySound");
		
		AOffice01_GameManager_C_PlayFoxySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.PlayCircusSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::PlayCircusSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayCircusSound");
		
		AOffice01_GameManager_C_PlayCircusSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.PlayFreddieKitchenSounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::PlayFreddieKitchenSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayFreddieKitchenSounds");
		
		AOffice01_GameManager_C_PlayFreddieKitchenSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.PlayChicaKitchenSounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::PlayChicaKitchenSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.PlayChicaKitchenSounds");
		
		AOffice01_GameManager_C_PlayChicaKitchenSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.DecremenPowerUsage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::DecremenPowerUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.DecremenPowerUsage");
		
		AOffice01_GameManager_C_DecremenPowerUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.IncrementPowerUsage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::IncrementPowerUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.IncrementPowerUsage");
		
		AOffice01_GameManager_C_IncrementPowerUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ReceiveBeginPlay");
		
		AOffice01_GameManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_GameManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ReceiveTick");
		
		AOffice01_GameManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.CheckDoorStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Office01_Doors_EOffice01_Doors                     DoorList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_GameManager_C::CheckDoorStates(Office01_Doors_EOffice01_Doors DoorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorStates");
		
		AOffice01_GameManager_C_CheckDoorStates_Params params {};
		params.DoorList = DoorList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.FoxyKnockingAtTheDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::FoxyKnockingAtTheDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.FoxyKnockingAtTheDoor");
		
		AOffice01_GameManager_C_FoxyKnockingAtTheDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.Player Looking at kitchen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               False                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice01_GameManager_C::Player_Looking_at_kitchen(bool False)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.Player Looking at kitchen");
		
		AOffice01_GameManager_C_Player_Looking_at_kitchen_Params params {};
		params.False = False;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.CheckCollisionsOnHoverBlocks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::CheckCollisionsOnHoverBlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckCollisionsOnHoverBlocks");
		
		AOffice01_GameManager_C_CheckCollisionsOnHoverBlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.ExecuteUbergraph_Office01_GameManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_GameManager_C::ExecuteUbergraph_Office01_GameManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.ExecuteUbergraph_Office01_GameManager");
		
		AOffice01_GameManager_C_ExecuteUbergraph_Office01_GameManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.NonVR_DoorTraceBlock__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::NonVR_DoorTraceBlock__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.NonVR_DoorTraceBlock__DelegateSignature");
		
		AOffice01_GameManager_C_NonVR_DoorTraceBlock__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Circus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::RoomSounds_Circus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Circus__DelegateSignature");
		
		AOffice01_GameManager_C_RoomSounds_Circus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Foxy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::RoomSounds_Foxy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.RoomSounds_Foxy__DelegateSignature");
		
		AOffice01_GameManager_C_RoomSounds_Foxy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Freddy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::KitchenSounds_Freddy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Freddy__DelegateSignature");
		
		AOffice01_GameManager_C_KitchenSounds_Freddy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Chica__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::KitchenSounds_Chica__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.KitchenSounds_Chica__DelegateSignature");
		
		AOffice01_GameManager_C_KitchenSounds_Chica__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.CheckDoorLights__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::CheckDoorLights__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorLights__DelegateSignature");
		
		AOffice01_GameManager_C_CheckDoorLights__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.TriggerPowerOutage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::TriggerPowerOutage__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.TriggerPowerOutage__DelegateSignature");
		
		AOffice01_GameManager_C_TriggerPowerOutage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.DisableDoorInteraction__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::DisableDoorInteraction__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.DisableDoorInteraction__DelegateSignature");
		
		AOffice01_GameManager_C_DisableDoorInteraction__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.CheckDoorForLightSound__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::CheckDoorForLightSound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.CheckDoorForLightSound__DelegateSignature");
		
		AOffice01_GameManager_C_CheckDoorForLightSound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_GameManager.Office01_GameManager_C.FreddySongTimer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_GameManager_C::FreddySongTimer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_GameManager.Office01_GameManager_C.FreddySongTimer__DelegateSignature");
		
		AOffice01_GameManager_C_FreddySongTimer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_GameManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_GameManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_GameManager.Office01_GameManager_C");
		return ptr;
	}

}


