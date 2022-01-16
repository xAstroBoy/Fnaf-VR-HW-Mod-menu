#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PickupActorInterface.PickupActorInterface_C.Drop
	 */
	struct UPickupActorInterface_C_Drop_Params
	{
	};

	/**
	 * Function PickupActorInterface.PickupActorInterface_C.Pickup
	 */
	struct UPickupActorInterface_C_Pickup_Params
	{
	public:
		class USceneComponent*                                     AttachTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
