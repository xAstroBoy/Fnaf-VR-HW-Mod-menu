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

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PirateCoveCameraState
struct ADLC_MonitorBoard_Office01_C_PirateCoveCameraState_Params
{
	bool                                               PirateCoveCameraBroke;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SubscribeMonitorBtn
struct ADLC_MonitorBoard_Office01_C_SubscribeMonitorBtn_Params
{
	class AMonitorButton_BP_C**                        ItemToFind;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                BtnID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.UserConstructionScript
struct ADLC_MonitorBoard_Office01_C_UserConstructionScript_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__FinishedFunc
struct ADLC_MonitorBoard_Office01_C_Timeline_0_0__FinishedFunc_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Timeline_0_0__UpdateFunc
struct ADLC_MonitorBoard_Office01_C_Timeline_0_0__UpdateFunc_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Pressed
struct ADLC_MonitorBoard_Office01_C_Event_Btn_Pressed_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  CameraMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>*                     Room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh**                                VentLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFNAFCamera_Blueprint_C**                    FNAFCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveBeginPlay
struct ADLC_MonitorBoard_Office01_C_ReceiveBeginPlay_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.DisableMonitorInteractions
struct ADLC_MonitorBoard_Office01_C_DisableMonitorInteractions_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ReceiveTick
struct ADLC_MonitorBoard_Office01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.EventBtnInteractableIsHeld
struct ADLC_MonitorBoard_Office01_C_EventBtnInteractableIsHeld_Params
{
	bool                                               IsBeingHeld;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.Event Btn Interactable
struct ADLC_MonitorBoard_Office01_C_Event_Btn_Interactable_Params
{
	bool*                                              IsLightBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVentBtn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAudioBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMusicBoxBtn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRebootBtn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHeldDown;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.RestartPower
struct ADLC_MonitorBoard_Office01_C_RestartPower_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageHasOccured
struct ADLC_MonitorBoard_Office01_C_PowerOutageHasOccured_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerRebooted
struct ADLC_MonitorBoard_Office01_C_PowerRebooted_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.PowerOutageEvent
struct ADLC_MonitorBoard_Office01_C_PowerOutageEvent_Params
{
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.SetVisualStatic
struct ADLC_MonitorBoard_Office01_C_SetVisualStatic_Params
{
	bool*                                              EnableStatic;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C.ExecuteUbergraph_DLC_MonitorBoard_Office01
struct ADLC_MonitorBoard_Office01_C_ExecuteUbergraph_DLC_MonitorBoard_Office01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
