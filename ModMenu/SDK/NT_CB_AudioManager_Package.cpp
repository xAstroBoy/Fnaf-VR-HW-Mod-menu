/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "NT_CB_AudioManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundFile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANT_CB_AudioManager_C::TriggerSoloSound(class USoundBase* SoundFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound");
		
		ANT_CB_AudioManager_C_TriggerSoloSound_Params params {};
		params.SoundFile = SoundFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANT_CB_AudioManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay");
		
		ANT_CB_AudioManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANT_CB_AudioManager_C::TriggerSound2D(class USoundBase* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D");
		
		ANT_CB_AudioManager_C_TriggerSound2D_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANT_CB_AudioManager_C::StopSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound");
		
		ANT_CB_AudioManager_C_StopSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANT_CB_AudioManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick");
		
		ANT_CB_AudioManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANT_CB_AudioManager_C::ExecuteUbergraph_NT_CB_AudioManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager");
		
		ANT_CB_AudioManager_C_ExecuteUbergraph_NT_CB_AudioManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANT_CB_AudioManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANT_CB_AudioManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NT_CB_AudioManager.NT_CB_AudioManager_C");
		return ptr;
	}

}


