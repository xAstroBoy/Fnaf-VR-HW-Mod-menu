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
	 * Function EdibleInterface.EdibleInterface_C.OnActorEaten
	 */
	struct UEdibleInterface_C_OnActorEaten_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        Eater;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EdibleInterface.EdibleInterface_C.GetEdibleType
	 */
	struct UEdibleInterface_C_GetEdibleType_Params
	{
	public:
		EdibleEnum_EdibleEnum                                      EdibleType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
