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
	 * Function Flashlight_Battery.Flashlight_Battery_C.AttemptGrab
	 */
	struct AFlashlight_Battery_C_AttemptGrab_Params
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
	 * Function Flashlight_Battery.Flashlight_Battery_C.AttemptRelease
	 */
	struct AFlashlight_Battery_C_AttemptRelease_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Flashlight Ref
	 */
	struct AFlashlight_Battery_C_Flashlight_Ref_Params
	{
	public:
		class UFlashLight_Power_C*                                 Flash_Light_Power;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Motion Controller Pawn Ref
	 */
	struct AFlashlight_Battery_C_Motion_Controller_Pawn_Ref_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        AsMotion_Controller_Pawn;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Dyling_Flashlight_Flicker__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Dyling_Flashlight_Flicker__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__FinishedFunc
	 */
	struct AFlashlight_Battery_C_FredHead_LightFlicker__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__UpdateFunc
	 */
	struct AFlashlight_Battery_C_FredHead_LightFlicker__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__ToggleLight__EventFunc
	 */
	struct AFlashlight_Battery_C_FredHead_LightFlicker__ToggleLight__EventFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Light_Flicker__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Light_Flicker__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Flicker01Timeline__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Flicker01Timeline__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__FinishedFunc
	 */
	struct AFlashlight_Battery_C_Timeline_2__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__UpdateFunc
	 */
	struct AFlashlight_Battery_C_Timeline_2__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__FinishedFunc
	 */
	struct AFlashlight_Battery_C_PostprocessTransition__FinishedFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__UpdateFunc
	 */
	struct AFlashlight_Battery_C_PostprocessTransition__UpdateFunc_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Pickup
	 */
	struct AFlashlight_Battery_C_Pickup_Params
	{
	public:
		class USceneComponent*                                     AttachTo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Drop
	 */
	struct AFlashlight_Battery_C_Drop_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRInteract
	 */
	struct AFlashlight_Battery_C_OnVRInteract_Params
	{
	public:
		class ASWGVRCharacter*                                     VRCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverBegin
	 */
	struct AFlashlight_Battery_C_OnVRHoverBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentBegin
	 */
	struct AFlashlight_Battery_C_OnVRHoverComponentBegin_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentEnd
	 */
	struct AFlashlight_Battery_C_OnVRHoverComponentEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HoveredComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverEnd
	 */
	struct AFlashlight_Battery_C_OnVRHoverEnd_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRGrabbed
	 */
	struct AFlashlight_Battery_C_OnVRGrabbed_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.OnVRReleased
	 */
	struct AFlashlight_Battery_C_OnVRReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReleaseVelocity;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.ReceiveTick
	 */
	struct AFlashlight_Battery_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AFlashlight_Battery_C_BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Flashlight_Battery.Flashlight_Battery_C.Flashlight On?
	 */
	struct AFlashlight_Battery_C_Flashlight_On__Params
	{
	public:
		bool                                                       IsOn_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.ReceiveBeginPlay
	 */
	struct AFlashlight_Battery_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Can Win
	 */
	struct AFlashlight_Battery_C_Can_Win_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Fate is Sealed (RIP)
	 */
	struct AFlashlight_Battery_C_Fate_is_Sealed__RIP__Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOff
	 */
	struct AFlashlight_Battery_C_FlickerLightOff_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOn
	 */
	struct AFlashlight_Battery_C_FlickerLightOn_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FredHead_Flicker
	 */
	struct AFlashlight_Battery_C_FredHead_Flicker_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Toggle Flicker
	 */
	struct AFlashlight_Battery_C_Toggle_Flicker_Params
	{
	public:
		bool                                                       IsPlayerDead;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.PCBFlicker_01
	 */
	struct AFlashlight_Battery_C_PCBFlicker_01_Params
	{
	public:
		bool                                                       Reverse;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetNewTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FuntimeFreddyFlicker
	 */
	struct AFlashlight_Battery_C_FuntimeFreddyFlicker_Params
	{
	public:
		bool                                                       IsPlayerDead;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.FinaleNightmareWeightTransition
	 */
	struct AFlashlight_Battery_C_FinaleNightmareWeightTransition_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.ResetWeightTransition
	 */
	struct AFlashlight_Battery_C_ResetWeightTransition_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.SetRadialForce
	 */
	struct AFlashlight_Battery_C_SetRadialForce_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Disable Collider
	 */
	struct AFlashlight_Battery_C_Disable_Collider_Params
	{
	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.ExecuteUbergraph_Flashlight_Battery
	 */
	struct AFlashlight_Battery_C_ExecuteUbergraph_Flashlight_Battery_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Flashlight_Battery.Flashlight_Battery_C.Flashlight Active__DelegateSignature
	 */
	struct AFlashlight_Battery_C_Flashlight_Active__DelegateSignature_Params
	{
	public:
		bool                                                       Flashlight_On;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
