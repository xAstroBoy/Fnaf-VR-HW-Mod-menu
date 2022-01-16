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
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.NonVrGamepadInteractions
	 */
	struct AMaintenceBoard_BP_C_NonVrGamepadInteractions_Params
	{
	public:
		bool                                                       Down;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.RumbleControllers
	 */
	struct AMaintenceBoard_BP_C_RumbleControllers_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.DeSelectAllOptions
	 */
	struct AMaintenceBoard_BP_C_DeSelectAllOptions_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.InitializeMaintenceBoard
	 */
	struct AMaintenceBoard_BP_C_InitializeMaintenceBoard_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveBeginPlay
	 */
	struct AMaintenceBoard_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable
	 */
	struct AMaintenceBoard_BP_C_Event_Btn_Interactable_Params
	{
	public:
		bool                                                       IsLightBtn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVentBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAudioBtn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMusicBoxBtn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRebootBtn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHeldDown;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.Event Btn Interactable Is Held
	 */
	struct AMaintenceBoard_BP_C_Event_Btn_Interactable_Is_Held_Params
	{
	public:
		bool                                                       IsBeingHeld;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMaintenceBoard_BP_C_BndEvt__Collider_Cam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMaintenceBoard_BP_C_BndEvt__Collider_Audio_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMaintenceBoard_BP_C_BndEvt__Collider_Vent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMaintenceBoard_BP_C_BndEvt__Collider_All_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ReceiveTick
	 */
	struct AMaintenceBoard_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetDoOnceNodes
	 */
	struct AMaintenceBoard_BP_C_ResetDoOnceNodes_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAudio
	 */
	struct AMaintenceBoard_BP_C_ResetAudio_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetCamera
	 */
	struct AMaintenceBoard_BP_C_ResetCamera_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetVent
	 */
	struct AMaintenceBoard_BP_C_ResetVent_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetAll
	 */
	struct AMaintenceBoard_BP_C_ResetAll_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ResetButtonInteraction
	 */
	struct AMaintenceBoard_BP_C_ResetButtonInteraction_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.NonVRRelease
	 */
	struct AMaintenceBoard_BP_C_NonVRRelease_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.OnNonVRLineTraceInteract
	 */
	struct AMaintenceBoard_BP_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ZoomInteract
	 */
	struct AMaintenceBoard_BP_C_ZoomInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Hit_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.MaintanceBoardDirectionalSelection
	 */
	struct AMaintenceBoard_BP_C_MaintanceBoardDirectionalSelection_Params
	{
	public:
		bool                                                       Down;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.NonVr_OnMaintanceSelected
	 */
	struct AMaintenceBoard_BP_C_NonVr_OnMaintanceSelected_Params
	{
	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ButtonChange
	 */
	struct AMaintenceBoard_BP_C_ButtonChange_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaintenceBoard_BP.MaintenceBoard_BP_C.ExecuteUbergraph_MaintenceBoard_BP
	 */
	struct AMaintenceBoard_BP_C_ExecuteUbergraph_MaintenceBoard_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
