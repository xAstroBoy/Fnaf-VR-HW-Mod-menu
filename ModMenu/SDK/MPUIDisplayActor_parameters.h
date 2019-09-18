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

// Function MPUIDisplayActor.MPUIDisplayActor_C.UserConstructionScript
struct AMPUIDisplayActor_C_UserConstructionScript_Params
{
};

// Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveBeginPlay
struct AMPUIDisplayActor_C_ReceiveBeginPlay_Params
{
};

// Function MPUIDisplayActor.MPUIDisplayActor_C.ReceiveTick
struct AMPUIDisplayActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIDisplayActor.MPUIDisplayActor_C.ExecuteUbergraph_MPUIDisplayActor
struct AMPUIDisplayActor_C_ExecuteUbergraph_MPUIDisplayActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
