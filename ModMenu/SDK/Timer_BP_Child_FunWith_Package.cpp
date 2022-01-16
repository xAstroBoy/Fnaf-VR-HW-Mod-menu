/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Timer_BP_Child_FunWith_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Fade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::Fade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Fade__FinishedFunc");
		
		ATimer_BP_Child_FunWith_C_Fade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Fade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::Fade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Fade__UpdateFunc");
		
		ATimer_BP_Child_FunWith_C_Fade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ReceiveBeginPlay");
		
		ATimer_BP_Child_FunWith_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Timer hit 0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::Timer_hit_0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Timer hit 0");
		
		ATimer_BP_Child_FunWith_C_Timer_hit_0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.SetTimeOnWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Child_FunWith_C::SetTimeOnWidget(int Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.SetTimeOnWidget");
		
		ATimer_BP_Child_FunWith_C_SetTimeOnWidget_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Pause Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::Pause_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Pause Timer");
		
		ATimer_BP_Child_FunWith_C_Pause_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Player Killed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Child_FunWith_C::Player_Killed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Player Killed");
		
		ATimer_BP_Child_FunWith_C_Player_Killed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ExecuteUbergraph_Timer_BP_Child_FunWith
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Child_FunWith_C::ExecuteUbergraph_Timer_BP_Child_FunWith(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ExecuteUbergraph_Timer_BP_Child_FunWith");
		
		ATimer_BP_Child_FunWith_C_ExecuteUbergraph_Timer_BP_Child_FunWith_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATimer_BP_Child_FunWith_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimer_BP_Child_FunWith_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C");
		return ptr;
	}

}


