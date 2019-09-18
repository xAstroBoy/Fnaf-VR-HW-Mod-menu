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

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.UserConstructionScript
struct AOffice02_MonitorBoard_BP_C_UserConstructionScript_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__FinishedFunc
struct AOffice02_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Timeline_0__UpdateFunc
struct AOffice02_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Pressed
struct AOffice02_MonitorBoard_BP_C_Event_Btn_Pressed_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  CameraMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>*                     Room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh**                                VentLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFNAFCamera_Blueprint_C**                    FNAFCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable
struct AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Params
{
	bool*                                              IsLightBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVentBtn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAudioBtn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMusicBoxBtn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsRebootBtn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHeldDown;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Btn Interactable Is Held
struct AOffice02_MonitorBoard_BP_C_Event_Btn_Interactable_Is_Held_Params
{
	bool*                                              IsBeingHeld;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveTick
struct AOffice02_MonitorBoard_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EventMusicBoxCountDown
struct AOffice02_MonitorBoard_BP_C_EventMusicBoxCountDown_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ReceiveBeginPlay
struct AOffice02_MonitorBoard_BP_C_ReceiveBeginPlay_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.Event Office02_Lights_Disabled
struct AOffice02_MonitorBoard_BP_C_Event_Office02_Lights_Disabled_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableAllLightFunctions
struct AOffice02_MonitorBoard_BP_C_DisableAllLightFunctions_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.EnableFreddyStaticOverride
struct AOffice02_MonitorBoard_BP_C_EnableFreddyStaticOverride_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.DisableFreddyStaticOverride
struct AOffice02_MonitorBoard_BP_C_DisableFreddyStaticOverride_Params
{
};

// Function Office02_MonitorBoard_BP.Office02_MonitorBoard_BP_C.ExecuteUbergraph_Office02_MonitorBoard_BP
struct AOffice02_MonitorBoard_BP_C_ExecuteUbergraph_Office02_MonitorBoard_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
