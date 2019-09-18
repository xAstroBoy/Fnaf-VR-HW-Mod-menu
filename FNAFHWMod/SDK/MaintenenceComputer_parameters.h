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

// Function MaintenenceComputer.MaintenenceComputer_C.DisableAllAnimLoadBars
struct UMaintenenceComputer_C_DisableAllAnimLoadBars_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Audio
struct UMaintenenceComputer_C_DisableAnimLoadBar_Audio_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Vent
struct UMaintenenceComputer_C_DisableAnimLoadBar_Vent_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_All
struct UMaintenenceComputer_C_DisableAnimLoadBar_All_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Cam
struct UMaintenenceComputer_C_DisableAnimLoadBar_Cam_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_Audio
struct UMaintenenceComputer_C_EnableAnimLoadbar_Audio_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Cam
struct UMaintenenceComputer_C_EnableAnimLoadBar_Cam_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Vent
struct UMaintenenceComputer_C_EnableAnimLoadBar_Vent_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_All
struct UMaintenenceComputer_C_EnableAnimLoadbar_All_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.Tick
struct UMaintenenceComputer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MaintenenceComputer.MaintenenceComputer_C.Construct
struct UMaintenenceComputer_C_Construct_Params
{
};

// Function MaintenenceComputer.MaintenenceComputer_C.ExecuteUbergraph_MaintenenceComputer
struct UMaintenenceComputer_C_ExecuteUbergraph_MaintenenceComputer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
