
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

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.UserConstructionScript");

	AOffice02_MonitorBoard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc");

	AOffice02_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc");

	AOffice02_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial**              CameraMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ARoomInfo_Bp_C*>* Room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh**            VentLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFNAFCamera_Blueprint_C** FNAFCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_MonitorBoard_BP_C::Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed");

	AOffice02_MonitorBoard_BP_C_Event_Btn_Pressed_Params params;
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


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLightBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVentBtn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAudioBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMusicBoxBtn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRebootBtn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHeldDown                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_MonitorBoard_BP_C::Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable");

	AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Params params;
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


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsBeingHeld                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_MonitorBoard_BP_C::Event_Btn_Interactable_Is_Held(bool* IsBeingHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held");

	AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params params;
	params.IsBeingHeld = IsBeingHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_MonitorBoard_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick");

	AOffice02_MonitorBoard_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown
// (BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::EventMusicBoxCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown");

	AOffice02_MonitorBoard_BP_C_EventMusicBoxCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay");

	AOffice02_MonitorBoard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled
// (BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::Event_Office02_Lights_Disabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled");

	AOffice02_MonitorBoard_BP_C_Event_Office02_Lights_Disabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions
// (BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::DisableAllLightFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions");

	AOffice02_MonitorBoard_BP_C_DisableAllLightFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride
// (BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::EnableFreddyStaticOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride");

	AOffice02_MonitorBoard_BP_C_EnableFreddyStaticOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride
// (BlueprintCallable, BlueprintEvent)

void AOffice02_MonitorBoard_BP_C::DisableFreddyStaticOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride");

	AOffice02_MonitorBoard_BP_C_DisableFreddyStaticOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_MonitorBoard_BP_C::ExecuteUbergraph_Office02_MonitorBoard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP");

	AOffice02_MonitorBoard_BP_C_ExecuteUbergraph_Office02_MonitorBoard_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
