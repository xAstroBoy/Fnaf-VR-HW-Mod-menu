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
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptGrab
	 */
	struct ABP_PrizeJackInTheBox_C_AttemptGrab_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canGrab;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		SWGVR_EGrabSnapType                                        SnapType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       snapLocation;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       snapRotation;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AttachmentOffsetLocation;                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            AttachmentOffsetRotation;                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptRelease
	 */
	struct ABP_PrizeJackInTheBox_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__FinishedFunc
	 */
	struct ABP_PrizeJackInTheBox_C_BOB__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__UpdateFunc
	 */
	struct ABP_PrizeJackInTheBox_C_BOB__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__FinishedFunc
	 */
	struct ABP_PrizeJackInTheBox_C_MoveUp__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__UpdateFunc
	 */
	struct ABP_PrizeJackInTheBox_C_MoveUp__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentBegin
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentEnd
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveTick
	 */
	struct ABP_PrizeJackInTheBox_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveBeginPlay
	 */
	struct ABP_PrizeJackInTheBox_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_PrizeJackInTheBox_C_BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRGrabbed
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRReleased
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeGrabbed
	 */
	struct ABP_PrizeJackInTheBox_C_OnPrizeGrabbed_Params
	{
	public:
		class APrize_Parent_C*                                     Prize;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StopBob
	 */
	struct ABP_PrizeJackInTheBox_C_StopBob_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeReleased
	 */
	struct ABP_PrizeJackInTheBox_C_OnPrizeReleased_Params
	{
	public:
		class APrize_Parent_C*                                     Prize;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.DestroyPrize
	 */
	struct ABP_PrizeJackInTheBox_C_DestroyPrize_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StartBob
	 */
	struct ABP_PrizeJackInTheBox_C_StartBob_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverBegin
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverEnd
	 */
	struct ABP_PrizeJackInTheBox_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.NonVR Bypass
	 */
	struct ABP_PrizeJackInTheBox_C_NonVR_Bypass_Params
	{
	};

	/**
	 * Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ExecuteUbergraph_BP_PrizeJackInTheBox
	 */
	struct ABP_PrizeJackInTheBox_C_ExecuteUbergraph_BP_PrizeJackInTheBox_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
