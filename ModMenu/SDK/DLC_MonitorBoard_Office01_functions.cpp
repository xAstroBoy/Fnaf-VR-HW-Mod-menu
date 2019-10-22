
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

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PirateCoveCameraBroke          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::PirateCoveCameraState(bool PirateCoveCameraBroke)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState");

	ADLC_MonitorBoard_Office01_C_PirateCoveCameraState_Params params;
	params.PirateCoveCameraBroke = PirateCoveCameraBroke;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMonitorButton_BP_C**    ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            BtnID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::SubscribeMonitorBtn(class AMonitorButton_BP_C** ItemToFind, int* BtnID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn");

	ADLC_MonitorBoard_Office01_C_SubscribeMonitorBtn_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtnID != nullptr)
		*BtnID = params.BtnID;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.UserConstructionScript");

	ADLC_MonitorBoard_Office01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc");

	ADLC_MonitorBoard_Office01_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc");

	ADLC_MonitorBoard_Office01_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial**              CameraMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ARoomInfo_Bp_C*>* Room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh**            VentLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFNAFCamera_Blueprint_C** FNAFCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed");

	ADLC_MonitorBoard_Office01_C_Event_Btn_Pressed_Params params;
	params.ID = ID;
	params.Pressed = Pressed;
	params.CameraMaterial = CameraMaterial;
	params.Room = Room;
	params.VentLight = VentLight;
	params.FNAFCamera = FNAFCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay");

	ADLC_MonitorBoard_Office01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::DisableMonitorInteractions(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions");

	ADLC_MonitorBoard_Office01_C_DisableMonitorInteractions_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick");

	ADLC_MonitorBoard_Office01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeingHeld                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::EventBtnInteractableIsHeld(bool IsBeingHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld");

	ADLC_MonitorBoard_Office01_C_EventBtnInteractableIsHeld_Params params;
	params.IsBeingHeld = IsBeingHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLightBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVentBtn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAudioBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMusicBoxBtn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRebootBtn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHeldDown                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable");

	ADLC_MonitorBoard_Office01_C_Event_Btn_Interactable_Params params;
	params.IsLightBtn = IsLightBtn;
	params.IsVentBtn = IsVentBtn;
	params.IsAudioBtn = IsAudioBtn;
	params.IsMusicBoxBtn = IsMusicBoxBtn;
	params.IsRebootBtn = IsRebootBtn;
	params.IsHeldDown = IsHeldDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower
// (BlueprintCallable, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::RestartPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower");

	ADLC_MonitorBoard_Office01_C_RestartPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured
// (BlueprintCallable, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::PowerOutageHasOccured()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured");

	ADLC_MonitorBoard_Office01_C_PowerOutageHasOccured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted
// (BlueprintCallable, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::PowerRebooted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted");

	ADLC_MonitorBoard_Office01_C_PowerRebooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent
// (BlueprintCallable, BlueprintEvent)

void ADLC_MonitorBoard_Office01_C::PowerOutageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent");

	ADLC_MonitorBoard_Office01_C_PowerOutageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EnableStatic                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::SetVisualStatic(bool* EnableStatic)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic");

	ADLC_MonitorBoard_Office01_C_SetVisualStatic_Params params;
	params.EnableStatic = EnableStatic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_MonitorBoard_Office01_C::ExecuteUbergraph_DLC_MonitorBoard_Office01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01");

	ADLC_MonitorBoard_Office01_C_ExecuteUbergraph_DLC_MonitorBoard_Office01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
