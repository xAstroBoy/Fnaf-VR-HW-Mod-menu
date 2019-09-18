
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

// Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock
// (Public, BlueprintCallable, BlueprintEvent)

void AMonitorBoard_BP_C::InitializeClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock");

	AMonitorBoard_BP_C_InitializeClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction
// (Public, BlueprintCallable, BlueprintEvent)

void AMonitorBoard_BP_C::ArrayOfBtnStateFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction");

	AMonitorBoard_BP_C_ArrayOfBtnStateFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMonitorButton_BP_C*     ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            BtnID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::SubscribeMonitorBtn(class AMonitorButton_BP_C* ItemToFind, int* BtnID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn");

	AMonitorBoard_BP_C_SubscribeMonitorBtn_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BtnID != nullptr)
		*BtnID = params.BtnID;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMonitorBoard_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript");

	AMonitorBoard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               CameraMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ARoomInfo_Bp_C*>  Room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh*             VentLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFNAFCamera_Blueprint_C* FNAFCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::Event_Btn_Pressed(int ID, bool Pressed, class UMaterial* CameraMaterial, TArray<class ARoomInfo_Bp_C*> Room, class UStaticMesh* VentLight, class AFNAFCamera_Blueprint_C* FNAFCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed");

	AMonitorBoard_BP_C_Event_Btn_Pressed_Params params;
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


// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLightBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVentBtn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAudioBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMusicBoxBtn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRebootBtn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHeldDown                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::Event_Btn_Interactable(bool IsLightBtn, bool IsVentBtn, bool IsAudioBtn, bool IsMusicBoxBtn, bool IsRebootBtn, bool IsHeldDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable");

	AMonitorBoard_BP_C_Event_Btn_Interactable_Params params;
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


// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeingHeld                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::Event_Btn_Interactable_Is_Held(bool IsBeingHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held");

	AMonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params params;
	params.IsBeingHeld = IsBeingHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon
// (BlueprintCallable, BlueprintEvent)

void AMonitorBoard_BP_C::LevelWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon");

	AMonitorBoard_BP_C_LevelWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableStatic                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::SetVisualStatic(bool EnableStatic)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic");

	AMonitorBoard_BP_C_SetVisualStatic_Params params;
	params.EnableStatic = EnableStatic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOfficeAiBase_Bp_C*      OfficeAI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove");

	AMonitorBoard_BP_C_CharacterStartingMove_Params params;
	params.OfficeAI = OfficeAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMonitorBoard_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay");

	AMonitorBoard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick");

	AMonitorBoard_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMonitorBoard_BP_C::ExecuteUbergraph_MonitorBoard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP");

	AMonitorBoard_BP_C_ExecuteUbergraph_MonitorBoard_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
