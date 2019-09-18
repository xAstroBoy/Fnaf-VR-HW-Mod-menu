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

// Function HandToPointerProximity.HandToPointerProximity_C.UserConstructionScript
struct AHandToPointerProximity_C_UserConstructionScript_Params
{
};

// Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorBeginOverlap
struct AHandToPointerProximity_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorEndOverlap
struct AHandToPointerProximity_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HandToPointerProximity.HandToPointerProximity_C.ExecuteUbergraph_HandToPointerProximity
struct AHandToPointerProximity_C_ExecuteUbergraph_HandToPointerProximity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
