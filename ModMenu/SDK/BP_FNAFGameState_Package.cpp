/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BP_FNAFGameState_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	freddys_EGLGameState ABP_FNAFGameState_C::GetGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GetGameState");
		
		ABP_FNAFGameState_C_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FNAFGameState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.ReceiveBeginPlay");
		
		ABP_FNAFGameState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FNAFGameState_C::OnVictoryCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.OnVictoryCondition");
		
		ABP_FNAFGameState_C_OnVictoryCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLGameState                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FNAFGameState_C::SetGameState(freddys_EGLGameState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.SetGameState");
		
		ABP_FNAFGameState_C_SetGameState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLVictoryState                            victory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FNAFGameState_C::SetVictoryCondition(freddys_EGLVictoryState victory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.SetVictoryCondition");
		
		ABP_FNAFGameState_C_SetVictoryCondition_Params params {};
		params.victory = victory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FNAFGameState_C::ExecuteUbergraph_BP_FNAFGameState(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.ExecuteUbergraph_BP_FNAFGameState");
		
		ABP_FNAFGameState_C_ExecuteUbergraph_BP_FNAFGameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FNAFGameState_C::GamePreLossMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreLossMode__DelegateSignature");
		
		ABP_FNAFGameState_C_GamePreLossMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FNAFGameState_C::GamePreVictoryMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GamePreVictoryMode__DelegateSignature");
		
		ABP_FNAFGameState_C_GamePreVictoryMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLVictoryState                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FNAFGameState_C::WinConditionChanged__DelegateSignature(freddys_EGLVictoryState NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.WinConditionChanged__DelegateSignature");
		
		ABP_FNAFGameState_C_WinConditionChanged__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLGameState                               GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FNAFGameState_C::GameStateChanged__DelegateSignature(freddys_EGLGameState GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FNAFGameState.BP_FNAFGameState_C.GameStateChanged__DelegateSignature");
		
		ABP_FNAFGameState_C_GameStateChanged__DelegateSignature_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_FNAFGameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FNAFGameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FNAFGameState.BP_FNAFGameState_C");
		return ptr;
	}

}


