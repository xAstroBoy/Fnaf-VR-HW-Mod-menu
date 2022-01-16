/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ButtonIcon_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Button And State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ControllerButtonsEnum_EControllerButtonsEnum       Button                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonIcon_C::Change_Button_And_State(bool Is_Pressed, ControllerButtonsEnum_EControllerButtonsEnum Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button And State");
		
		UButtonIcon_C_Change_Button_And_State_Params params {};
		params.Is_Pressed = Is_Pressed;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Button
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ControllerButtonsEnum_EControllerButtonsEnum       Controller_Button                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HaloOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonIcon_C::Change_Button(ControllerButtonsEnum_EControllerButtonsEnum Controller_Button, float HaloOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button");
		
		UButtonIcon_C_Change_Button_Params params {};
		params.Controller_Button = Controller_Button;
		params.HaloOpacity = HaloOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Button State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButtonIcon_C::Change_Button_State(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button State");
		
		UButtonIcon_C_Change_Button_State_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UButtonIcon_C::OnControllerDeviceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged");
		
		UButtonIcon_C_OnControllerDeviceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButtonIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.PreConstruct");
		
		UButtonIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Controller Overrides
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UButtonIcon_C::Change_Controller_Overrides(TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Controller Overrides");
		
		UButtonIcon_C_Change_Controller_Overrides_Params params {};
		params.ControllerTypeOverrides = ControllerTypeOverrides;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HaloOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonIcon_C::Change_Button_Halo_Opacity(float HaloOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity");
		
		UButtonIcon_C_Change_Button_Halo_Opacity_Params params {};
		params.HaloOpacity = HaloOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HaloOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Is_Pressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ControllerButtonsEnum_EControllerButtonsEnum       Button                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonIcon_C::Change_Button_State_and_Halo_Opacity(float HaloOpacity, bool Is_Pressed, ControllerButtonsEnum_EControllerButtonsEnum Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity");
		
		UButtonIcon_C_Change_Button_State_and_Halo_Opacity_Params params {};
		params.HaloOpacity = HaloOpacity;
		params.Is_Pressed = Is_Pressed;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.UpdateDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UButtonIcon_C::UpdateDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.UpdateDisplay");
		
		UButtonIcon_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UButtonIcon_C::ExecuteUbergraph_ButtonIcon(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon");
		
		UButtonIcon_C_ExecuteUbergraph_ButtonIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UButtonIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonIcon.ButtonIcon_C");
		return ptr;
	}

}


