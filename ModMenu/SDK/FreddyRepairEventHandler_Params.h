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
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.OverlapWithFloor
	 */
	struct AFreddyRepairEventHandler_C_OverlapWithFloor_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.StageCheck
	 */
	struct AFreddyRepairEventHandler_C_StageCheck_Params
	{
	public:
		int                                                        StageCompleted;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Win
	 */
	struct AFreddyRepairEventHandler_C_Win_Params
	{
	};

	/**
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Fail
	 */
	struct AFreddyRepairEventHandler_C_Fail_Params
	{
	};

	/**
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ReceiveBeginPlay
	 */
	struct AFreddyRepairEventHandler_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ExecuteUbergraph_FreddyRepairEventHandler
	 */
	struct AFreddyRepairEventHandler_C_ExecuteUbergraph_FreddyRepairEventHandler_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
