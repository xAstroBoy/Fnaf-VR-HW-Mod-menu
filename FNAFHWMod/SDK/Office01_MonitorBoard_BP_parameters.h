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

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.UserConstructionScript
struct AOffice01_MonitorBoard_BP_C_UserConstructionScript_Params
{
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__FinishedFunc
struct AOffice01_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__UpdateFunc
struct AOffice01_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Event Btn Pressed
struct AOffice01_MonitorBoard_BP_C_Event_Btn_Pressed_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  CameraMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>*                     Room;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh**                                VentLight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFNAFCamera_Blueprint_C**                    FNAFCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveBeginPlay
struct AOffice01_MonitorBoard_BP_C_ReceiveBeginPlay_Params
{
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.DisableMonitorInteractions
struct AOffice01_MonitorBoard_BP_C_DisableMonitorInteractions_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveTick
struct AOffice01_MonitorBoard_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ExecuteUbergraph_Office01_MonitorBoard_BP
struct AOffice01_MonitorBoard_BP_C_ExecuteUbergraph_Office01_MonitorBoard_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
