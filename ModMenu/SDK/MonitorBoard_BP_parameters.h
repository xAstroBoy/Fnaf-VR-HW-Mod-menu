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

// Function MonitorBoard_BP.MonitorBoard_BP_C.InitializeClock
struct AMonitorBoard_BP_C_InitializeClock_Params
{
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.ArrayOfBtnStateFunction
struct AMonitorBoard_BP_C_ArrayOfBtnStateFunction_Params
{
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.SubscribeMonitorBtn
struct AMonitorBoard_BP_C_SubscribeMonitorBtn_Params
{
	class AMonitorButton_BP_C*                         ItemToFind;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                BtnID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.UserConstructionScript
struct AMonitorBoard_BP_C_UserConstructionScript_Params
{
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Pressed
struct AMonitorBoard_BP_C_Event_Btn_Pressed_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   CameraMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>                      Room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh*                                 VentLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFNAFCamera_Blueprint_C*                     FNAFCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable
struct AMonitorBoard_BP_C_Event_Btn_Interactable_Params
{
	bool                                               IsLightBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVentBtn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAudioBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMusicBoxBtn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRebootBtn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeldDown;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.Event Btn Interactable Is Held
struct AMonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params
{
	bool                                               IsBeingHeld;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.LevelWon
struct AMonitorBoard_BP_C_LevelWon_Params
{
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.SetVisualStatic
struct AMonitorBoard_BP_C_SetVisualStatic_Params
{
	bool                                               EnableStatic;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.CharacterStartingMove
struct AMonitorBoard_BP_C_CharacterStartingMove_Params
{
	class AOfficeAiBase_Bp_C*                          OfficeAI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveBeginPlay
struct AMonitorBoard_BP_C_ReceiveBeginPlay_Params
{
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.ReceiveTick
struct AMonitorBoard_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorBoard_BP.MonitorBoard_BP_C.ExecuteUbergraph_MonitorBoard_BP
struct AMonitorBoard_BP_C_ExecuteUbergraph_MonitorBoard_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
