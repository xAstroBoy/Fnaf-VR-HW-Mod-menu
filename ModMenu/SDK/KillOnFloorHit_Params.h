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
	 * Function KillOnFloorHit.KillOnFloorHit_C.ReceiveBeginPlay
	 */
	struct UKillOnFloorHit_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function KillOnFloorHit.KillOnFloorHit_C.OnActorOverlapped
	 */
	struct UKillOnFloorHit_C_OnActorOverlapped_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillOnFloorHit.KillOnFloorHit_C.ExecuteUbergraph_KillOnFloorHit
	 */
	struct UKillOnFloorHit_C_ExecuteUbergraph_KillOnFloorHit_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
