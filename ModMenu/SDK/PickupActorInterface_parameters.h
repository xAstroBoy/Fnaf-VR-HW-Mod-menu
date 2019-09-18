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

// Function PickupActorInterface.PickupActorInterface_C.Drop
struct UPickupActorInterface_C_Drop_Params
{
};

// Function PickupActorInterface.PickupActorInterface_C.Pickup
struct UPickupActorInterface_C_Pickup_Params
{
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
