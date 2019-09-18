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

// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.UserConstructionScript
struct AHandToPointerProximitySquare_C_UserConstructionScript_Params
{
};

// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorBeginOverlap
struct AHandToPointerProximitySquare_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorEndOverlap
struct AHandToPointerProximitySquare_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ExecuteUbergraph_HandToPointerProximitySquare
struct AHandToPointerProximitySquare_C_ExecuteUbergraph_HandToPointerProximitySquare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
