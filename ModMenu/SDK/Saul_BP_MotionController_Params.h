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
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.StartAntennaeGrabber
	 */
	struct ASaul_BP_MotionController_C_StartAntennaeGrabber_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetAntennaeTransform
	 */
	struct ASaul_BP_MotionController_C_GetAntennaeTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ProcessDS4Antennae
	 */
	struct ASaul_BP_MotionController_C_ProcessDS4Antennae_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetTeleportDestination
	 */
	struct ASaul_BP_MotionController_C_GetTeleportDestination_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateRoomScaleOutline
	 */
	struct ASaul_BP_MotionController_C_UpdateRoomScaleOutline_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.SetupRoomScaleOutline
	 */
	struct ASaul_BP_MotionController_C_SetupRoomScaleOutline_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcEndpoint
	 */
	struct ASaul_BP_MotionController_C_UpdateArcEndpoint_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValidLocationFound;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcSpline
	 */
	struct ASaul_BP_MotionController_C_UpdateArcSpline_Params
	{
	public:
		bool                                                       FoundValidLocation;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FVector>                                     SplinePoints;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ClearArc
	 */
	struct ASaul_BP_MotionController_C_ClearArc_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.TraceTeleportDestination
	 */
	struct ASaul_BP_MotionController_C_TraceTeleportDestination_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FVector>                                     TracePoints;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FVector                                             NavMeshLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.DisableTeleporter
	 */
	struct ASaul_BP_MotionController_C_DisableTeleporter_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ActivateTeleporter
	 */
	struct ASaul_BP_MotionController_C_ActivateTeleporter_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.GrabActor
	 */
	struct ASaul_BP_MotionController_C_GrabActor_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReleaseActor
	 */
	struct ASaul_BP_MotionController_C_ReleaseActor_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetActorNearHand
	 */
	struct ASaul_BP_MotionController_C_GetActorNearHand_Params
	{
	public:
		class AActor*                                              NearestMesh;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.UserConstructionScript
	 */
	struct ASaul_BP_MotionController_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ASaul_BP_MotionController_C_BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveBeginPlay
	 */
	struct ASaul_BP_MotionController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveTick
	 */
	struct ASaul_BP_MotionController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.RumbleController
	 */
	struct ASaul_BP_MotionController_C_RumbleController_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASaul_BP_MotionController_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnTouch
	 */
	struct ASaul_BP_MotionController_C_OnTouch_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnRelease
	 */
	struct ASaul_BP_MotionController_C_OnRelease_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.Hide Flashlight Light
	 */
	struct ASaul_BP_MotionController_C_Hide_Flashlight_Light_Params
	{
	public:
		bool                                                       flase;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.EnterPointerMode
	 */
	struct ASaul_BP_MotionController_C_EnterPointerMode_Params
	{
	public:
		class UPrimitiveComponent*                                 WidgetFingerCollider;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExitPointerMode
	 */
	struct ASaul_BP_MotionController_C_ExitPointerMode_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.FreeHandFromBlocker
	 */
	struct ASaul_BP_MotionController_C_FreeHandFromBlocker_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.Destroy Flashlight, spawn Microphone
	 */
	struct ASaul_BP_MotionController_C_Destroy_Flashlight_spawn_Microphone_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.Start Confirmation
	 */
	struct ASaul_BP_MotionController_C_Start_Confirmation_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete_Event
	 */
	struct ASaul_BP_MotionController_C_ConfirmationComplete_Event_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnPadTrackingChanged
	 */
	struct ASaul_BP_MotionController_C_OnPadTrackingChanged_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.StopConfirmation
	 */
	struct ASaul_BP_MotionController_C_StopConfirmation_Params
	{
	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExecuteUbergraph_Saul_BP_MotionController
	 */
	struct ASaul_BP_MotionController_C_ExecuteUbergraph_Saul_BP_MotionController_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete__DelegateSignature
	 */
	struct ASaul_BP_MotionController_C_ConfirmationComplete__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
