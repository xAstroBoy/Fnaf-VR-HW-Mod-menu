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
	 * Function Repair_Freddy.Repair_Freddy_C.CheckNightmareMode
	 */
	struct ARepair_Freddy_C_CheckNightmareMode_Params
	{
	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARepair_Freddy_C_BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Repair_Freddy.Repair_Freddy_C.ReceiveBeginPlay
	 */
	struct ARepair_Freddy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.OpenChest
	 */
	struct ARepair_Freddy_C_OpenChest_Params
	{
	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.CloseChest
	 */
	struct ARepair_Freddy_C_CloseChest_Params
	{
	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.ReceiveTick
	 */
	struct ARepair_Freddy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.ExecuteUbergraph_Repair_Freddy
	 */
	struct ARepair_Freddy_C_ExecuteUbergraph_Repair_Freddy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Repair_Freddy.Repair_Freddy_C.Kill Player__DelegateSignature
	 */
	struct ARepair_Freddy_C_Kill_Player__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
