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

// Function SWGVR.SWGGrabbable.OnVRReleased
struct USWGGrabbable_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SWGVR.SWGGrabbable.OnVRGrabbed
struct USWGGrabbable_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGGrabbable.AttemptRelease
struct USWGGrabbable_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGVR.SWGGrabbable.AttemptGrab
struct USWGGrabbable_AttemptGrab_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGrabSnapType                                      SnapType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffsetLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentOffsetRotation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.StopFrameCounters
struct ASWGVRCharacter_StopFrameCounters_Params
{
};

// Function SWGVR.SWGVRCharacter.StartFrameCounters
struct ASWGVRCharacter_StartFrameCounters_Params
{
};

// Function SWGVR.SWGVRCharacter.SetVRModeEnabled
struct ASWGVRCharacter_SetVRModeEnabled_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.SetHeldOffset
struct ASWGVRCharacter_SetHeldOffset_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewOffset;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.ReleaseGrabbable
struct ASWGVRCharacter_ReleaseGrabbable_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideVelocity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.ReleaseAll
struct ASWGVRCharacter_ReleaseAll_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideVelocity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.ProcessInterpolatedGrab
struct ASWGVRCharacter_ProcessInterpolatedGrab_Params
{
	struct FTransform                                  AttachmentTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHeldGrabbableInfo                          ActorGrabbablePair;                                       // (Parm, OutParm, ReferenceParm)
	class AActor*                                      HeldActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnTrackedControllerChanged
struct ASWGVRCharacter_OnTrackedControllerChanged_Params
{
};

// Function SWGVR.SWGVRCharacter.OnRightEndOverlap
struct ASWGVRCharacter_OnRightEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnRightBeginOverlap
struct ASWGVRCharacter_OnRightBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnRelease
struct ASWGVRCharacter_OnRelease_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnLeftEndOverlap
struct ASWGVRCharacter_OnLeftEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnLeftBeginOverlap
struct ASWGVRCharacter_OnLeftBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnHeldActorDestroyed
struct ASWGVRCharacter_OnHeldActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnGrabHoverEnd
struct ASWGVRCharacter_OnGrabHoverEnd_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnGrabHoverBegin
struct ASWGVRCharacter_OnGrabHoverBegin_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.OnGrab
struct ASWGVRCharacter_OnGrab_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.IsUsingPad
struct ASWGVRCharacter_IsUsingPad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.IsInVRMode
struct ASWGVRCharacter_IsInVRMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GrabGrabbable
struct ASWGVRCharacter_GrabGrabbable_Params
{
	class AActor*                                      Grabbable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GetPadTrackingSource
struct ASWGVRCharacter_GetPadTrackingSource_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GetHeldOffset
struct ASWGVRCharacter_GetHeldOffset_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GetHandInfo
struct ASWGVRCharacter_GetHandInfo_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMotionControllerInfo                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function SWGVR.SWGVRCharacter.GetHandForPad
struct ASWGVRCharacter_GetHandForPad_Params
{
	EVRHandType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GetHandAttachPoint
struct ASWGVRCharacter_GetHandAttachPoint_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SWGVR.SWGVRCharacter.GetGrabbableInfo
struct ASWGVRCharacter_GetGrabbableInfo_Params
{
	class AActor*                                      HeldActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHeldGrabbableInfo                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function SWGVR.SWGVRCharacter.AddHeldOffset
struct ASWGVRCharacter_AddHeldOffset_Params
{
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditiveValue;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRHoverReceiver.OnVRHoverEnd
struct USWGVRHoverReceiver_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentEnd
struct USWGVRHoverReceiver_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRHoverReceiver.OnVRHoverComponentBegin
struct USWGVRHoverReceiver_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRHoverReceiver.OnVRHoverBegin
struct USWGVRHoverReceiver_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SWGVR.SWGVRInteractive.OnVRInteract
struct USWGVRInteractive_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
