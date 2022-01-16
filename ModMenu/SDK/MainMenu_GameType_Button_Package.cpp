/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MainMenu_GameType_Button_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMainMenu_GameType_Button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.PreConstruct");
		
		UMainMenu_GameType_Button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMainMenu_GameType_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.Construct");
		
		UMainMenu_GameType_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnBeginHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMenu_GameType_Button_C::OnBeginHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnBeginHover");
		
		UMainMenu_GameType_Button_C_OnBeginHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnEndHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMenu_GameType_Button_C::OnEndHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnEndHover");
		
		UMainMenu_GameType_Button_C_OnEndHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.ExecuteUbergraph_MainMenu_GameType_Button
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_GameType_Button_C::ExecuteUbergraph_MainMenu_GameType_Button(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.ExecuteUbergraph_MainMenu_GameType_Button");
		
		UMainMenu_GameType_Button_C_ExecuteUbergraph_MainMenu_GameType_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnGameModeClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetComponent*                            GameMode_Button                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMenu_GameType_Button_C::OnGameModeClicked__DelegateSignature(class UWidgetComponent* GameMode_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnGameModeClicked__DelegateSignature");
		
		UMainMenu_GameType_Button_C_OnGameModeClicked__DelegateSignature_Params params {};
		params.GameMode_Button = GameMode_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMainMenu_GameType_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainMenu_GameType_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenu_GameType_Button.MainMenu_GameType_Button_C");
		return ptr;
	}

}


