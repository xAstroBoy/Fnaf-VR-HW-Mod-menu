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
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVR_WidgetVisibility
	 */
	struct ADLC_Office01_Door_Bp_C_NonVR_WidgetVisibility_Params
	{
	public:
		bool                                                       IsHidden_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__FinishedFunc
	 */
	struct ADLC_Office01_Door_Bp_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_1__UpdateFunc
	 */
	struct ADLC_Office01_Door_Bp_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__FinishedFunc
	 */
	struct ADLC_Office01_Door_Bp_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.Timeline_0__UpdateFunc
	 */
	struct ADLC_Office01_Door_Bp_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Q_K2Node_InputKeyEvent_5
	 */
	struct ADLC_Office01_Door_Bp_C_InpActEvt_Q_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4
	 */
	struct ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
	 */
	struct ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
	 */
	struct ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
	 */
	struct ADLC_Office01_Door_Bp_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ADLC_Office01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ADLC_Office01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ADLC_Office01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ADLC_Office01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveTick
	 */
	struct ADLC_Office01_Door_Bp_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ToggleSound
	 */
	struct ADLC_Office01_Door_Bp_C_ToggleSound_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ReceiveBeginPlay
	 */
	struct ADLC_Office01_Door_Bp_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DisableDoorInteraction
	 */
	struct ADLC_Office01_Door_Bp_C_DisableDoorInteraction_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadDoor
	 */
	struct ADLC_Office01_Door_Bp_C_OnPadDoor_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnPadLights
	 */
	struct ADLC_Office01_Door_Bp_C_OnPadLights_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.DoorImapctEvent
	 */
	struct ADLC_Office01_Door_Bp_C_DoorImapctEvent_Params
	{
	public:
		Office01_Doors_EOffice01_Doors                             LeftSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.FlashBeaconLight
	 */
	struct ADLC_Office01_Door_Bp_C_FlashBeaconLight_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.PowerOutageEvent
	 */
	struct ADLC_Office01_Door_Bp_C_PowerOutageEvent_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.RebootPowerEvent
	 */
	struct ADLC_Office01_Door_Bp_C_RebootPowerEvent_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconCooldown
	 */
	struct ADLC_Office01_Door_Bp_C_BeaconCooldown_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.BeaconRecharged
	 */
	struct ADLC_Office01_Door_Bp_C_BeaconRecharged_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.NonVRLightBypass
	 */
	struct ADLC_Office01_Door_Bp_C_NonVRLightBypass_Params
	{
	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.OnNonVRLineTraceInteract
	 */
	struct ADLC_Office01_Door_Bp_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DLC_Office01_Door_Bp.DLC_Office01_Door_Bp_C.ExecuteUbergraph_DLC_Office01_Door_Bp
	 */
	struct ADLC_Office01_Door_Bp_C_ExecuteUbergraph_DLC_Office01_Door_Bp_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
