/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Timer_BP_Base_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.SetTimeOnWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Base_C::SetTimeOnWidget(int Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.SetTimeOnWidget");
		
		ATimer_BP_Base_C_SetTimeOnWidget_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.Time Ref
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Timer_hit_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATimer_BP_Base_C::Time_Ref(bool* Timer_hit_0)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Time Ref");
		
		ATimer_BP_Base_C_Time_Ref_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Timer_hit_0 != nullptr)
			*Timer_hit_0 = params.Timer_hit_0;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick");
		
		ATimer_BP_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Base_C::Pause_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer");
		
		ATimer_BP_Base_C_Pause_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.Set Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Set_Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Base_C::Set_Timer(int Set_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Set Timer");
		
		ATimer_BP_Base_C_Set_Timer_Params params {};
		params.Set_Time = Set_Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.Start Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Base_C::Start_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Start Timer");
		
		ATimer_BP_Base_C_Start_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimer_BP_Base_C::ExecuteUbergraph_Timer_BP_Base(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base");
		
		ATimer_BP_Base_C_ExecuteUbergraph_Timer_BP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATimer_BP_Base_C::Timer_Ended__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature");
		
		ATimer_BP_Base_C_Timer_Ended__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATimer_BP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimer_BP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Timer_BP_Base.Timer_BP_Base_C");
		return ptr;
	}

}


