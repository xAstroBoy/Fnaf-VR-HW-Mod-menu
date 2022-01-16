/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ChicaRepairAudioManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.TriggerInstructions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepairAudioManager_C::TriggerInstructions(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.TriggerInstructions");
		
		AChicaRepairAudioManager_C_TriggerInstructions_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChicaRepairAudioManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveBeginPlay");
		
		AChicaRepairAudioManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.FindCupcake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepairAudioManager_C::FindCupcake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.FindCupcake");
		
		AChicaRepairAudioManager_C_FindCupcake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepairAudioManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ReceiveTick");
		
		AChicaRepairAudioManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Eat pizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepairAudioManager_C::Eat_pizza()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Eat pizza");
		
		AChicaRepairAudioManager_C_Eat_pizza_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Stop Audio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepairAudioManager_C::Stop_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.Stop Audio");
		
		AChicaRepairAudioManager_C_Stop_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ExecuteUbergraph_ChicaRepairAudioManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepairAudioManager_C::ExecuteUbergraph_ChicaRepairAudioManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepairAudioManager.ChicaRepairAudioManager_C.ExecuteUbergraph_ChicaRepairAudioManager");
		
		AChicaRepairAudioManager_C_ExecuteUbergraph_ChicaRepairAudioManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaRepairAudioManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaRepairAudioManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRepairAudioManager.ChicaRepairAudioManager_C");
		return ptr;
	}

}


