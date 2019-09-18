
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function IngameMenu.IngameMenu_C.SubMenuMoveSettingselector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenu_C::SubMenuMoveSettingselector(bool Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.SubMenuMoveSettingselector");

	UIngameMenu_C_SubMenuMoveSettingselector_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ToggleMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ToggleMenu");

	UIngameMenu_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.QuitSubMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::QuitSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitSubMenu");

	UIngameMenu_C_QuitSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.RestartSubMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::RestartSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartSubMenu");

	UIngameMenu_C_RestartSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.MainMenuMoveSettingSelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Down                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenu_C::MainMenuMoveSettingSelector(bool Down)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.MainMenuMoveSettingSelector");

	UIngameMenu_C_MainMenuMoveSettingSelector_Params params;
	params.Down = Down;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ClearSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::ClearSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ClearSelected");

	UIngameMenu_C_ClearSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenu_C::BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UIngameMenu_C_BndEvt__QUITBUTTON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ResumeSelected
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::ResumeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ResumeSelected");

	UIngameMenu_C_ResumeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.RestartSelected
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::RestartSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartSelected");

	UIngameMenu_C_RestartSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.QuitSelected
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::QuitSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitSelected");

	UIngameMenu_C_QuitSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_Enter
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_Enter()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Enter");

	UIngameMenu_C_PauseMenu_Enter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_Up
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Up");

	UIngameMenu_C_PauseMenu_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_Down
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Down");

	UIngameMenu_C_PauseMenu_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_AnyButtonClick
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_AnyButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_AnyButtonClick");

	UIngameMenu_C_PauseMenu_AnyButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenu_C::BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UIngameMenu_C_BndEvt__CONFIRMBUTTON_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenu_C::BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UIngameMenu_C_BndEvt__CANCELBUTTON_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.YesSelected
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::YesSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.YesSelected");

	UIngameMenu_C_YesSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.NoSelected
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::NoSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.NoSelected");

	UIngameMenu_C_NoSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_Left
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Left");

	UIngameMenu_C_PauseMenu_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.PauseMenu_Right
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::PauseMenu_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.PauseMenu_Right");

	UIngameMenu_C_PauseMenu_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenu_C::BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UIngameMenu_C_BndEvt__RESUME_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenu_C::BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UIngameMenu_C_BndEvt__RESTARTBUTTON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.CancelButton_Clicked
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::CancelButton_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.CancelButton_Clicked");

	UIngameMenu_C_CancelButton_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ConfirmButton_Clicked
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::ConfirmButton_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ConfirmButton_Clicked");

	UIngameMenu_C_ConfirmButton_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ResumeButton_Clicked
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::ResumeButton_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ResumeButton_Clicked");

	UIngameMenu_C_ResumeButton_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.RestartButton_Clicked
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::RestartButton_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.RestartButton_Clicked");

	UIngameMenu_C_RestartButton_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.QuitButton_Clicked
// (BlueprintCallable, BlueprintEvent)

void UIngameMenu_C::QuitButton_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.QuitButton_Clicked");

	UIngameMenu_C_QuitButton_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIngameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.Construct");

	UIngameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.Tick");

	UIngameMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenu.IngameMenu_C.ExecuteUbergraph_IngameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenu_C::ExecuteUbergraph_IngameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenu.IngameMenu_C.ExecuteUbergraph_IngameMenu");

	UIngameMenu_C_ExecuteUbergraph_IngameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
