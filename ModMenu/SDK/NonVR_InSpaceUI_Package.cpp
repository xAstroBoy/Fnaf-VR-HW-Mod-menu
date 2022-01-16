/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NonVR_InSpaceUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANonVR_InSpaceUI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay");
		
		ANonVR_InSpaceUI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ControllerButtonsEnum_EControllerButtonsEnum       Controller_Button                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANonVR_InSpaceUI_C::Change_Button(ControllerButtonsEnum_EControllerButtonsEnum Controller_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button");
		
		ANonVR_InSpaceUI_C_Change_Button_Params params {};
		params.Controller_Button = Controller_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANonVR_InSpaceUI_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick");
		
		ANonVR_InSpaceUI_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANonVR_InSpaceUI_C::Setup_Controller_Display()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display");
		
		ANonVR_InSpaceUI_C_Setup_Controller_Display_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANonVR_InSpaceUI_C::ExecuteUbergraph_NonVR_InSpaceUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI");
		
		ANonVR_InSpaceUI_C_ExecuteUbergraph_NonVR_InSpaceUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANonVR_InSpaceUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANonVR_InSpaceUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NonVR_InSpaceUI.NonVR_InSpaceUI_C");
		return ptr;
	}

}


