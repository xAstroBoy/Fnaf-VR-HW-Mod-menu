/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Main_Menu_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.SetReftoHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_BP_MotionController_C*                 Refto                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::SetReftoHand(class ASaul_BP_MotionController_C* Refto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.SetReftoHand");
		
		UMain_Menu_C_SetReftoHand_Params params {};
		params.Refto = Refto;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ChangeSelectedLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Selected_Level_Index                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::ChangeSelectedLevel(int Selected_Level_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeSelectedLevel");
		
		UMain_Menu_C_ChangeSelectedLevel_Params params {};
		params.Selected_Level_Index = Selected_Level_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.UpdateTickStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::UpdateTickStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateTickStatus");
		
		UMain_Menu_C_UpdateTickStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::UpdateGameTypeDisplays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays");
		
		UMain_Menu_C_UpdateGameTypeDisplays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.IncrementSelectedLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::IncrementSelectedLevel(int Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.IncrementSelectedLevel");
		
		UMain_Menu_C_IncrementSelectedLevel_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.GatherGameLevels
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::GatherGameLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.GatherGameLevels");
		
		UMain_Menu_C_GatherGameLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.UpdateLevelButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::UpdateLevelButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateLevelButtons");
		
		UMain_Menu_C_UpdateLevelButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ChangeGameMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::ChangeGameMode(int Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeGameMode");
		
		UMain_Menu_C_ChangeGameMode_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.LoadSelectedLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::LoadSelectedLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.LoadSelectedLevel");
		
		UMain_Menu_C_LoadSelectedLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMain_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Construct");
		
		UMain_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Enter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Enter");
		
		UMain_Menu_C_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Up");
		
		UMain_Menu_C_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Down");
		
		UMain_Menu_C_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Left");
		
		UMain_Menu_C_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Right");
		
		UMain_Menu_C_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.AnyButtonPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::AnyButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.AnyButtonPress");
		
		UMain_Menu_C_AnyButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.UpdateCoinDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::UpdateCoinDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateCoinDisplay");
		
		UMain_Menu_C_UpdateCoinDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::OnNightmareModeSwitched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched");
		
		UMain_Menu_C_OnNightmareModeSwitched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ActivateScreenPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::ActivateScreenPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ActivateScreenPressed");
		
		UMain_Menu_C_ActivateScreenPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMain_Menu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMain_Menu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.OnConfirmComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::OnConfirmComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnConfirmComplete");
		
		UMain_Menu_C_OnConfirmComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMain_Menu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PreConstruct");
		
		UMain_Menu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ChangeDLCType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EFNAFDLCType                               DLCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::ChangeDLCType(freddys_EFNAFDLCType DLCType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeDLCType");
		
		UMain_Menu_C_ChangeDLCType_Params params {};
		params.DLCType = DLCType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.PageLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::PageLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PageLeft");
		
		UMain_Menu_C_PageLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.PageRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::PageRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PageRight");
		
		UMain_Menu_C_PageRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Setup Level Buttons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMain_Menu_C::Setup_Level_Buttons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Setup Level Buttons");
		
		UMain_Menu_C_Setup_Level_Buttons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                SelectedLevelIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::OnLevelClickedWithMouse(int SelectedLevelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse");
		
		UMain_Menu_C_OnLevelClickedWithMouse_Params params {};
		params.SelectedLevelIndex = SelectedLevelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::ExecuteUbergraph_Main_Menu(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu");
		
		UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMain_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMain_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Main_Menu.Main_Menu_C");
		return ptr;
	}

}


