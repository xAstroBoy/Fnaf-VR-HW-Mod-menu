#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.DisableCoin
struct AOffice03_MonitorBoard_BP_C_DisableCoin_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.EnableCoin
struct AOffice03_MonitorBoard_BP_C_EnableCoin_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TurnOffVentLights
struct AOffice03_MonitorBoard_BP_C_TurnOffVentLights_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UpdateVentLights
struct AOffice03_MonitorBoard_BP_C_UpdateVentLights_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.GetLockedVentInfo
struct AOffice03_MonitorBoard_BP_C_GetLockedVentInfo_Params
{
	TArray<struct FOffice03_VentRoomLockOff_struct>    BlockedRooms;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.PhantomAttack
struct AOffice03_MonitorBoard_BP_C_PhantomAttack_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.TriggerVentilation
struct AOffice03_MonitorBoard_BP_C_TriggerVentilation_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootVentilation
struct AOffice03_MonitorBoard_BP_C_RebootVentilation_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootCameras
struct AOffice03_MonitorBoard_BP_C_RebootCameras_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RebootAudio
struct AOffice03_MonitorBoard_BP_C_RebootAudio_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AudioDelay
struct AOffice03_MonitorBoard_BP_C_AudioDelay_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.OpenVent
struct AOffice03_MonitorBoard_BP_C_OpenVent_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ClosingVent
struct AOffice03_MonitorBoard_BP_C_ClosingVent_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.UserConstructionScript
struct AOffice03_MonitorBoard_BP_C_UserConstructionScript_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__FinishedFunc
struct AOffice03_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Timeline_0__UpdateFunc
struct AOffice03_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveBeginPlay
struct AOffice03_MonitorBoard_BP_C_ReceiveBeginPlay_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Pressed
struct AOffice03_MonitorBoard_BP_C_Event_Btn_Pressed_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  CameraMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>*                     Room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh**                                VentLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFNAFCamera_Blueprint_C**                    FNAFCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Event Btn Interactable
struct AOffice03_MonitorBoard_BP_C_Event_Btn_Interactable_Params
{
	bool*                                              IsLightBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVentBtn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAudioBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMusicBoxBtn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRebootBtn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHeldDown;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ReceiveTick
struct AOffice03_MonitorBoard_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentilationDamaged
struct AOffice03_MonitorBoard_BP_C_VentilationDamaged_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.Flash Alarm Light
struct AOffice03_MonitorBoard_BP_C_Flash_Alarm_Light_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.RandomPhantomAttacks
struct AOffice03_MonitorBoard_BP_C_RandomPhantomAttacks_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.AttackTrigger
struct AOffice03_MonitorBoard_BP_C_AttackTrigger_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.VentTriggerToAccelerateSpringtrap
struct AOffice03_MonitorBoard_BP_C_VentTriggerToAccelerateSpringtrap_Params
{
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.SetVisualStatic
struct AOffice03_MonitorBoard_BP_C_SetVisualStatic_Params
{
	bool*                                              EnableStatic;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_MonitorBoard_BP.Office03_MonitorBoard_BP_C.ExecuteUbergraph_Office03_MonitorBoard_BP
struct AOffice03_MonitorBoard_BP_C_ExecuteUbergraph_Office03_MonitorBoard_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
