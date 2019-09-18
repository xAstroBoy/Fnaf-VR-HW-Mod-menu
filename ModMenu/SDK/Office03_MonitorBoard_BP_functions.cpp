
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

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::DisableCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin");

	AOffice03_MonitorBoard_BP_C_DisableCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::EnableCoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin");

	AOffice03_MonitorBoard_BP_C_EnableCoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::TurnOffVentLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights");

	AOffice03_MonitorBoard_BP_C_TurnOffVentLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::UpdateVentLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights");

	AOffice03_MonitorBoard_BP_C_UpdateVentLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOffice03_VentRoomLockOff_struct> BlockedRooms                   (Parm, OutParm, ZeroConstructor)

void AOffice03_MonitorBoard_BP_C::GetLockedVentInfo(TArray<struct FOffice03_VentRoomLockOff_struct>* BlockedRooms)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo");

	AOffice03_MonitorBoard_BP_C_GetLockedVentInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlockedRooms != nullptr)
		*BlockedRooms = params.BlockedRooms;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::PhantomAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack");

	AOffice03_MonitorBoard_BP_C_PhantomAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::TriggerVentilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation");

	AOffice03_MonitorBoard_BP_C_TriggerVentilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::RebootVentilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation");

	AOffice03_MonitorBoard_BP_C_RebootVentilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::RebootCameras()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras");

	AOffice03_MonitorBoard_BP_C_RebootCameras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::RebootAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio");

	AOffice03_MonitorBoard_BP_C_RebootAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::AudioDelay(float NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay");

	AOffice03_MonitorBoard_BP_C_AudioDelay_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::OpenVent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent");

	AOffice03_MonitorBoard_BP_C_OpenVent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::ClosingVent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent");

	AOffice03_MonitorBoard_BP_C_ClosingVent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UserConstructionScript");

	AOffice03_MonitorBoard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc");

	AOffice03_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc");

	AOffice03_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay");

	AOffice03_MonitorBoard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial**              CameraMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ARoomInfo_Bp_C*>* Room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh**            VentLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFNAFCamera_Blueprint_C** FNAFCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed");

	AOffice03_MonitorBoard_BP_C_Event_Btn_Pressed_Params params;
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


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLightBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVentBtn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAudioBtn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMusicBoxBtn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRebootBtn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHeldDown                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable");

	AOffice03_MonitorBoard_BP_C_Event_Btn_Interactable_Params params;
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


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick");

	AOffice03_MonitorBoard_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged
// (BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::VentilationDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged");

	AOffice03_MonitorBoard_BP_C_VentilationDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light
// (BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::Flash_Alarm_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light");

	AOffice03_MonitorBoard_BP_C_Flash_Alarm_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks
// (BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::RandomPhantomAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks");

	AOffice03_MonitorBoard_BP_C_RandomPhantomAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger
// (BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::AttackTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger");

	AOffice03_MonitorBoard_BP_C_AttackTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap
// (BlueprintCallable, BlueprintEvent)

void AOffice03_MonitorBoard_BP_C::VentTriggerToAccelerateSpringtrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap");

	AOffice03_MonitorBoard_BP_C_VentTriggerToAccelerateSpringtrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EnableStatic                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::SetVisualStatic(bool* EnableStatic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic");

	AOffice03_MonitorBoard_BP_C_SetVisualStatic_Params params;
	params.EnableStatic = EnableStatic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_MonitorBoard_BP_C::ExecuteUbergraph_Office03_MonitorBoard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP");

	AOffice03_MonitorBoard_BP_C_ExecuteUbergraph_Office03_MonitorBoard_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
