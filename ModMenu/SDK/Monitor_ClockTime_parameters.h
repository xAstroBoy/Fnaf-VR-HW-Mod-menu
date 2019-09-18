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

// Function Monitor_ClockTime.Monitor_ClockTime_C.PaddingForTranslation
struct UMonitor_ClockTime_C_PaddingForTranslation_Params
{
};

// Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_2
struct UMonitor_ClockTime_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Monitor_ClockTime.Monitor_ClockTime_C.GetText_1
struct UMonitor_ClockTime_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Monitor_ClockTime.Monitor_ClockTime_C.Tick
struct UMonitor_ClockTime_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Monitor_ClockTime.Monitor_ClockTime_C.Construct
struct UMonitor_ClockTime_C_Construct_Params
{
};

// Function Monitor_ClockTime.Monitor_ClockTime_C.ExecuteUbergraph_Monitor_ClockTime
struct UMonitor_ClockTime_C_ExecuteUbergraph_Monitor_ClockTime_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
