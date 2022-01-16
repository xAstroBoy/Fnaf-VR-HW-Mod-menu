/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "MainMenu_LevelButton_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMenu_LevelButton_C::OnBeginHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight");
		
		UMainMenu_LevelButton_C_OnBeginHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMenu_LevelButton_C::OnEndHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight");
		
		UMainMenu_LevelButton_C_OnEndHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  LevelImage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLevelUnlocked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainMenu_LevelButton_C::Initialize_SubGame_Box(const class FText& LevelName, class UTexture2D* LevelImage, bool IsLevelUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box");
		
		UMainMenu_LevelButton_C_Initialize_SubGame_Box_Params params {};
		params.LevelName = LevelName;
		params.LevelImage = LevelImage;
		params.IsLevelUnlocked = IsLevelUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMenu_LevelButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainMenu_LevelButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct");
		
		UMainMenu_LevelButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMenu_LevelButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_LevelButton_C::ExecuteUbergraph_MainMenu_LevelButton(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton");
		
		UMainMenu_LevelButton_C_ExecuteUbergraph_MainMenu_LevelButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                SelectedLevelIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_LevelButton_C::OnLevelButtonHovered__DelegateSignature(int SelectedLevelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature");
		
		UMainMenu_LevelButton_C_OnLevelButtonHovered__DelegateSignature_Params params {};
		params.SelectedLevelIndex = SelectedLevelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                SelectedLevelIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_LevelButton_C::OnLevelButtonClicked__DelegateSignature(int SelectedLevelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature");
		
		UMainMenu_LevelButton_C_OnLevelButtonClicked__DelegateSignature_Params params {};
		params.SelectedLevelIndex = SelectedLevelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMainMenu_LevelButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainMenu_LevelButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu_LevelButton.MainMenu_LevelButton_C");
		return ptr;
	}

}


