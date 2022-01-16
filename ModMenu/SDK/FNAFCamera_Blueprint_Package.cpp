/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FNAFCamera_Blueprint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFNAFCamera_Blueprint_C::GetEnableState(bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState");
		
		AFNAFCamera_Blueprint_C_GetEnableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFNAFCamera_Blueprint_C::DisableCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam");
		
		AFNAFCamera_Blueprint_C_DisableCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFNAFCamera_Blueprint_C::EnableCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam");
		
		AFNAFCamera_Blueprint_C_EnableCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFNAFCamera_Blueprint_C::RotateCamera(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera");
		
		AFNAFCamera_Blueprint_C_RotateCamera_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFNAFCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick");
		
		AFNAFCamera_Blueprint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFCamera_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay");
		
		AFNAFCamera_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFNAFCamera_Blueprint_C::ExecuteUbergraph_FNAFCamera_Blueprint(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint");
		
		AFNAFCamera_Blueprint_C_ExecuteUbergraph_FNAFCamera_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFCamera_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFCamera_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFCamera_Blueprint.FNAFCamera_Blueprint_C");
		return ptr;
	}

}


