/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Loading_NonVR_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.TestingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoading_NonVR_C::TestingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.TestingEvent");
		
		ULoading_NonVR_C_TestingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoading_NonVR_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Reset");
		
		ULoading_NonVR_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.SequenceEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoading_NonVR_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.SequenceEvent_1");
		
		ULoading_NonVR_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoading_NonVR_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Construct");
		
		ULoading_NonVR_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoading_NonVR_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Update");
		
		ULoading_NonVR_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.ResetDoOnce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoading_NonVR_C::ResetDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.ResetDoOnce");
		
		ULoading_NonVR_C_ResetDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Loading_NonVR.Loading_NonVR_C.ExecuteUbergraph_Loading_NonVR
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoading_NonVR_C::ExecuteUbergraph_Loading_NonVR(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.ExecuteUbergraph_Loading_NonVR");
		
		ULoading_NonVR_C_ExecuteUbergraph_Loading_NonVR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoading_NonVR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoading_NonVR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Loading_NonVR.Loading_NonVR_C");
		return ptr;
	}

}


