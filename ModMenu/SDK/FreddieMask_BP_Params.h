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
	 * Function FreddieMask_BP.FreddieMask_BP_C.AttemptGrab
	 */
	struct AFreddieMask_BP_C_AttemptGrab_Params
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
	 * Function FreddieMask_BP.FreddieMask_BP_C.AttemptRelease
	 */
	struct AFreddieMask_BP_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction_Release
	 */
	struct AFreddieMask_BP_C_NonVR_GamepadInteraction_Release_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteraction
	 */
	struct AFreddieMask_BP_C_NonVR_GamepadInteraction_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.CheckOtherMasks
	 */
	struct AFreddieMask_BP_C_CheckOtherMasks_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.InitializeMaskType
	 */
	struct AFreddieMask_BP_C_InitializeMaskType_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnNonVRLineTraceInteract
	 */
	struct AFreddieMask_BP_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.Pickup
	 */
	struct AFreddieMask_BP_C_Pickup_Params
	{
	public:
		class USceneComponent*                                     AttachTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.Drop
	 */
	struct AFreddieMask_BP_C_Drop_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRInteract
	 */
	struct AFreddieMask_BP_C_OnVRInteract_Params
	{
	public:
		class ASWGVRCharacter*                                     VRCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentBegin
	 */
	struct AFreddieMask_BP_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverComponentEnd
	 */
	struct AFreddieMask_BP_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.ReleasedTheMask
	 */
	struct AFreddieMask_BP_C_ReleasedTheMask_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AFreddieMask_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function FreddieMask_BP.FreddieMask_BP_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AFreddieMask_BP_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.ReceiveTick
	 */
	struct AFreddieMask_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.ReceiveBeginPlay
	 */
	struct AFreddieMask_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.TestThisHere
	 */
	struct AFreddieMask_BP_C_TestThisHere_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRGrabbed
	 */
	struct AFreddieMask_BP_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRReleased
	 */
	struct AFreddieMask_BP_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverBegin
	 */
	struct AFreddieMask_BP_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.OnVRHoverEnd
	 */
	struct AFreddieMask_BP_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NonVR Release
	 */
	struct AFreddieMask_BP_C_NonVR_Release_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.ResetMaskReturnNonVR
	 */
	struct AFreddieMask_BP_C_ResetMaskReturnNonVR_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.PressButtonGetMask
	 */
	struct AFreddieMask_BP_C_PressButtonGetMask_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionPressed
	 */
	struct AFreddieMask_BP_C_NonVR_GamepadInteractionPressed_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NonVR_GamepadInteractionRelease
	 */
	struct AFreddieMask_BP_C_NonVR_GamepadInteractionRelease_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.NONVR_SetMaskCoinVisible
	 */
	struct AFreddieMask_BP_C_NONVR_SetMaskCoinVisible_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.ExecuteUbergraph_FreddieMask_BP
	 */
	struct AFreddieMask_BP_C_ExecuteUbergraph_FreddieMask_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskIsOff__DelegateSignature
	 */
	struct AFreddieMask_BP_C_FreddyMaskIsOff__DelegateSignature_Params
	{
	};

	/**
	 * Function FreddieMask_BP.FreddieMask_BP_C.FreddyMaskisOn__DelegateSignature
	 */
	struct AFreddieMask_BP_C_FreddyMaskisOn__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
