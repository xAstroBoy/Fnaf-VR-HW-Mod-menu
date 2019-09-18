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

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_2
struct UBedroom_ClockTime_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.GetText_1
struct UBedroom_ClockTime_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.Tick
struct UBedroom_ClockTime_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.Construct
struct UBedroom_ClockTime_C_Construct_Params
{
};

// Function Bedroom_ClockTime.Bedroom_ClockTime_C.ExecuteUbergraph_Bedroom_ClockTime
struct UBedroom_ClockTime_C_ExecuteUbergraph_Bedroom_ClockTime_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
