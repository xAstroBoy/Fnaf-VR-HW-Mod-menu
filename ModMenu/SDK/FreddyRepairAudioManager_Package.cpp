/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "FreddyRepairAudioManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.TriggerInstructions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyRepairAudioManager_C::TriggerInstructions(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.TriggerInstructions");
		
		AFreddyRepairAudioManager_C_TriggerInstructions_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFreddyRepairAudioManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ReceiveBeginPlay");
		
		AFreddyRepairAudioManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.Stop Audio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFreddyRepairAudioManager_C::Stop_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.Stop Audio");
		
		AFreddyRepairAudioManager_C_Stop_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ExecuteUbergraph_FreddyRepairAudioManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyRepairAudioManager_C::ExecuteUbergraph_FreddyRepairAudioManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ExecuteUbergraph_FreddyRepairAudioManager");
		
		AFreddyRepairAudioManager_C_ExecuteUbergraph_FreddyRepairAudioManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddyRepairAudioManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyRepairAudioManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyRepairAudioManager.FreddyRepairAudioManager_C");
		return ptr;
	}

}


