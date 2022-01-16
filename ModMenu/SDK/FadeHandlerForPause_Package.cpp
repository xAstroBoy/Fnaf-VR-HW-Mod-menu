/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FadeHandlerForPause_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FadeHandlerForPause.FadeHandlerForPause_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFadeHandlerForPause_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.ReceiveTick");
		
		AFadeHandlerForPause_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FadeHandlerForPause.FadeHandlerForPause_C.ExecuteUbergraph_FadeHandlerForPause
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFadeHandlerForPause_C::ExecuteUbergraph_FadeHandlerForPause(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.ExecuteUbergraph_FadeHandlerForPause");
		
		AFadeHandlerForPause_C_ExecuteUbergraph_FadeHandlerForPause_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FadeHandlerForPause.FadeHandlerForPause_C.OnTimerUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AFadeHandlerForPause_C::OnTimerUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.OnTimerUp__DelegateSignature");
		
		AFadeHandlerForPause_C_OnTimerUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFadeHandlerForPause_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFadeHandlerForPause_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FadeHandlerForPause.FadeHandlerForPause_C");
		return ptr;
	}

}


