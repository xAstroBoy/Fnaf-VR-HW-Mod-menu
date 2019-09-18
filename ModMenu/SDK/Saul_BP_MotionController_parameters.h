#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.StartAntennaeGrabber
struct ASaul_BP_MotionController_C_StartAntennaeGrabber_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetAntennaeTransform
struct ASaul_BP_MotionController_C_GetAntennaeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ProcessDS4Antennae
struct ASaul_BP_MotionController_C_ProcessDS4Antennae_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetTeleportDestination
struct ASaul_BP_MotionController_C_GetTeleportDestination_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateRoomScaleOutline
struct ASaul_BP_MotionController_C_UpdateRoomScaleOutline_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.SetupRoomScaleOutline
struct ASaul_BP_MotionController_C_SetupRoomScaleOutline_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcEndpoint
struct ASaul_BP_MotionController_C_UpdateArcEndpoint_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidLocationFound;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcSpline
struct ASaul_BP_MotionController_C_UpdateArcSpline_Params
{
	bool                                               FoundValidLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ClearArc
struct ASaul_BP_MotionController_C_ClearArc_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.TraceTeleportDestination
struct ASaul_BP_MotionController_C_TraceTeleportDestination_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TracePoints;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     NavMeshLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.DisableTeleporter
struct ASaul_BP_MotionController_C_DisableTeleporter_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ActivateTeleporter
struct ASaul_BP_MotionController_C_ActivateTeleporter_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GrabActor
struct ASaul_BP_MotionController_C_GrabActor_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReleaseActor
struct ASaul_BP_MotionController_C_ReleaseActor_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetActorNearHand
struct ASaul_BP_MotionController_C_GetActorNearHand_Params
{
	class AActor*                                      NearestMesh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UserConstructionScript
struct ASaul_BP_MotionController_C_UserConstructionScript_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ASaul_BP_MotionController_C_BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveBeginPlay
struct ASaul_BP_MotionController_C_ReceiveBeginPlay_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveTick
struct ASaul_BP_MotionController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.RumbleController
struct ASaul_BP_MotionController_C_RumbleController_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASaul_BP_MotionController_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnTouch
struct ASaul_BP_MotionController_C_OnTouch_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnRelease
struct ASaul_BP_MotionController_C_OnRelease_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Hide Flashlight Light
struct ASaul_BP_MotionController_C_Hide_Flashlight_Light_Params
{
	bool                                               flase;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.EnterPointerMode
struct ASaul_BP_MotionController_C_EnterPointerMode_Params
{
	class UPrimitiveComponent*                         WidgetFingerCollider;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExitPointerMode
struct ASaul_BP_MotionController_C_ExitPointerMode_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.FreeHandFromBlocker
struct ASaul_BP_MotionController_C_FreeHandFromBlocker_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Destroy Flashlight, spawn Microphone
struct ASaul_BP_MotionController_C_Destroy_Flashlight_spawn_Microphone_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Start Confirmation
struct ASaul_BP_MotionController_C_Start_Confirmation_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete_Event
struct ASaul_BP_MotionController_C_ConfirmationComplete_Event_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnPadTrackingChanged
struct ASaul_BP_MotionController_C_OnPadTrackingChanged_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.StopConfirmation
struct ASaul_BP_MotionController_C_StopConfirmation_Params
{
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExecuteUbergraph_Saul_BP_MotionController
struct ASaul_BP_MotionController_C_ExecuteUbergraph_Saul_BP_MotionController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete__DelegateSignature
struct ASaul_BP_MotionController_C_ConfirmationComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
