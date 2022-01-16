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
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.IsValidActorForVisionTest
	 */
	struct AFNAFPlayerPawn_C_IsValidActorForVisionTest_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.SetupVisionDetector
	 */
	struct AFNAFPlayerPawn_C_SetupVisionDetector_Params
	{
	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnHand
	 */
	struct AFNAFPlayerPawn_C_SpawnHand_Params
	{
	public:
		InputCore_EControllerHand                                  HandClass;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.SpawnBothHands
	 */
	struct AFNAFPlayerPawn_C_SpawnBothHands_Params
	{
	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveBeginPlay
	 */
	struct AFNAFPlayerPawn_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AFNAFPlayerPawn_C_BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AFNAFPlayerPawn_C_BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.ReceiveTick
	 */
	struct AFNAFPlayerPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature
	 */
	struct AFNAFPlayerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature
	 */
	struct AFNAFPlayerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFPlayerPawn.FNAFPlayerPawn_C.ExecuteUbergraph_FNAFPlayerPawn
	 */
	struct AFNAFPlayerPawn_C_ExecuteUbergraph_FNAFPlayerPawn_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
