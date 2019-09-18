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

// Function BedroomClock.BedroomClock_C.UpdatesClock
struct ABedroomClock_C_UpdatesClock_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClock.BedroomClock_C.UserConstructionScript
struct ABedroomClock_C_UserConstructionScript_Params
{
};

// Function BedroomClock.BedroomClock_C.ReceiveTick
struct ABedroomClock_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClock.BedroomClock_C.TimeOver
struct ABedroomClock_C_TimeOver_Params
{
};

// Function BedroomClock.BedroomClock_C.ReceiveBeginPlay
struct ABedroomClock_C_ReceiveBeginPlay_Params
{
};

// Function BedroomClock.BedroomClock_C.ExecuteUbergraph_BedroomClock
struct ABedroomClock_C_ExecuteUbergraph_BedroomClock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
