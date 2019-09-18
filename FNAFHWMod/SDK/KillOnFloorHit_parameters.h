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

// Function KillOnFloorHit.KillOnFloorHit_C.ReceiveBeginPlay
struct UKillOnFloorHit_C_ReceiveBeginPlay_Params
{
};

// Function KillOnFloorHit.KillOnFloorHit_C.OnActorOverlapped
struct UKillOnFloorHit_C_OnActorOverlapped_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOnFloorHit.KillOnFloorHit_C.ExecuteUbergraph_KillOnFloorHit
struct UKillOnFloorHit_C_ExecuteUbergraph_KillOnFloorHit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
