/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "IngameMenu_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.FreeHandFromMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::FreeHandFromMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.FreeHandFromMenu");
		
		UIngameMenu_C_FreeHandFromMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.SubMenuMoveSettingselector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIngameMenu_C::SubMenuMoveSettingselector(bool Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.SubMenuMoveSettingselector");
		
		UIngameMenu_C_SubMenuMoveSettingselector_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ToggleMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::ToggleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ToggleMenu");
		
		UIngameMenu_C_ToggleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.QuitSubMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::QuitSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitSubMenu");
		
		UIngameMenu_C_QuitSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.RestartSubMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::RestartSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartSubMenu");
		
		UIngameMenu_C_RestartSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.MainMenuMoveSettingSelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Down                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIngameMenu_C::MainMenuMoveSettingSelector(bool Down)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.MainMenuMoveSettingSelector");
		
		UIngameMenu_C_MainMenuMoveSettingSelector_Params params {};
		params.Down = Down;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ClearSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::ClearSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ClearSelected");
		
		UIngameMenu_C_ClearSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ResumeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::ResumeSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ResumeSelected");
		
		UIngameMenu_C_ResumeSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.RestartSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::RestartSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartSelected");
		
		UIngameMenu_C_RestartSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.QuitSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::QuitSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitSelected");
		
		UIngameMenu_C_QuitSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_Enter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Enter");
		
		UIngameMenu_C_PauseMenu_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Up");
		
		UIngameMenu_C_PauseMenu_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Down");
		
		UIngameMenu_C_PauseMenu_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_AnyButtonClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_AnyButtonClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_AnyButtonClick");
		
		UIngameMenu_C_PauseMenu_AnyButtonClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.YesSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::YesSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.YesSelected");
		
		UIngameMenu_C_YesSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.NoSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::NoSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.NoSelected");
		
		UIngameMenu_C_NoSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Left");
		
		UIngameMenu_C_PauseMenu_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.PauseMenu_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::PauseMenu_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Right");
		
		UIngameMenu_C_PauseMenu_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.CancelButton_Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::CancelButton_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.CancelButton_Clicked");
		
		UIngameMenu_C_CancelButton_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ConfirmButton_Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::ConfirmButton_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ConfirmButton_Clicked");
		
		UIngameMenu_C_ConfirmButton_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ResumeButton_Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::ResumeButton_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ResumeButton_Clicked");
		
		UIngameMenu_C_ResumeButton_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.RestartButton_Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::RestartButton_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartButton_Clicked");
		
		UIngameMenu_C_RestartButton_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.QuitButton_Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UIngameMenu_C::QuitButton_Clicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitButton_Clicked");
		
		UIngameMenu_C_QuitButton_Clicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UIngameMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.Construct");
		
		UIngameMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIngameMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.Tick");
		
		UIngameMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESUME_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESUME_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESUME_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESUME_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESUME_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESUME_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIngameMenu_C::BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UIngameMenu_C_BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UIngameMenu_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.OnMouseEnter");
		
		UIngameMenu_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function IngameMenu.IngameMenu_C.ExecuteUbergraph_IngameMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIngameMenu_C::ExecuteUbergraph_IngameMenu(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ExecuteUbergraph_IngameMenu");
		
		UIngameMenu_C_ExecuteUbergraph_IngameMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UIngameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIngameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IngameMenu.IngameMenu_C");
		return ptr;
	}

}


