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
	 * Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveBeginPlay
	 */
	struct AHandToPointerProximitySquare_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorBeginOverlap
	 */
	struct AHandToPointerProximitySquare_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorEndOverlap
	 */
	struct AHandToPointerProximitySquare_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ExecuteUbergraph_HandToPointerProximitySquare
	 */
	struct AHandToPointerProximitySquare_C_ExecuteUbergraph_HandToPointerProximitySquare_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
