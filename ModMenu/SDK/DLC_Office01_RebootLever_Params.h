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
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptGrab
	 */
	struct ADLC_Office01_RebootLever_C_AttemptGrab_Params
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
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptRelease
	 */
	struct ADLC_Office01_RebootLever_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverControls
	 */
	struct ADLC_Office01_RebootLever_C_ResetLeverControls_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__FinishedFunc
	 */
	struct ADLC_Office01_RebootLever_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__UpdateFunc
	 */
	struct ADLC_Office01_RebootLever_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__FinishedFunc
	 */
	struct ADLC_Office01_RebootLever_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__UpdateFunc
	 */
	struct ADLC_Office01_RebootLever_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__FinishedFunc
	 */
	struct ADLC_Office01_RebootLever_C_LeverHandlerNonVR__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__UpdateFunc
	 */
	struct ADLC_Office01_RebootLever_C_LeverHandlerNonVR__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveTick
	 */
	struct ADLC_Office01_RebootLever_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRReleased
	 */
	struct ADLC_Office01_RebootLever_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRGrabbed
	 */
	struct ADLC_Office01_RebootLever_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetDoOnceNodes
	 */
	struct ADLC_Office01_RebootLever_C_ResetDoOnceNodes_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverEnd
	 */
	struct ADLC_Office01_RebootLever_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverBegin
	 */
	struct ADLC_Office01_RebootLever_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootPowerEvent
	 */
	struct ADLC_Office01_RebootLever_C_RebootPowerEvent_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.TriggerPowerOutageEvent
	 */
	struct ADLC_Office01_RebootLever_C_TriggerPowerOutageEvent_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveBeginPlay
	 */
	struct ADLC_Office01_RebootLever_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ADLC_Office01_RebootLever_C_BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Debug_EventInput
	 */
	struct ADLC_Office01_RebootLever_C_Debug_EventInput_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverInteraction
	 */
	struct ADLC_Office01_RebootLever_C_ResetLeverInteraction_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerOutage
	 */
	struct ADLC_Office01_RebootLever_C_PowerOutage_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerSequenceStarted
	 */
	struct ADLC_Office01_RebootLever_C_PowerSequenceStarted_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.EnableBlinkingLights
	 */
	struct ADLC_Office01_RebootLever_C_EnableBlinkingLights_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableBlinkingLights
	 */
	struct ADLC_Office01_RebootLever_C_DisableBlinkingLights_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableLeverLightNotify
	 */
	struct ADLC_Office01_RebootLever_C_DisableLeverLightNotify_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentEnd
	 */
	struct ADLC_Office01_RebootLever_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentBegin
	 */
	struct ADLC_Office01_RebootLever_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnNonVRLineTraceInteract
	 */
	struct ADLC_Office01_RebootLever_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.FireRebootProcess
	 */
	struct ADLC_Office01_RebootLever_C_FireRebootProcess_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootProcessFinishing
	 */
	struct ADLC_Office01_RebootLever_C_RebootProcessFinishing_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.NonVR_GamepadInteraction
	 */
	struct ADLC_Office01_RebootLever_C_NonVR_GamepadInteraction_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LowerLever
	 */
	struct ADLC_Office01_RebootLever_C_LowerLever_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RaiseLever
	 */
	struct ADLC_Office01_RebootLever_C_RaiseLever_Params
	{
	};

	/**
	 * Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ExecuteUbergraph_DLC_Office01_RebootLever
	 */
	struct ADLC_Office01_RebootLever_C_ExecuteUbergraph_DLC_Office01_RebootLever_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
