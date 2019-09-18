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

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.GetEnableState
struct AFNAFCamera_Blueprint_C_GetEnableState_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.DisableCam
struct AFNAFCamera_Blueprint_C_DisableCam_Params
{
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.EnableCam
struct AFNAFCamera_Blueprint_C_EnableCam_Params
{
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.RotateCamera
struct AFNAFCamera_Blueprint_C_RotateCamera_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.UserConstructionScript
struct AFNAFCamera_Blueprint_C_UserConstructionScript_Params
{
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveBeginPlay
struct AFNAFCamera_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ReceiveTick
struct AFNAFCamera_Blueprint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFCamera_Blueprint.FNAFCamera_Blueprint_C.ExecuteUbergraph_FNAFCamera_Blueprint
struct AFNAFCamera_Blueprint_C_ExecuteUbergraph_FNAFCamera_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
