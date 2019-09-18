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

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptGrab
struct AChicaRepair_Cupcake_Runner_C_AttemptGrab_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGrabSnapType                                      SnapType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffsetLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentOffsetRotation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.AttemptRelease
struct AChicaRepair_Cupcake_Runner_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.CheckAttachCupcake
struct AChicaRepair_Cupcake_Runner_C_CheckAttachCupcake_Params
{
	class USceneComponent*                             Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.MoveToRandomLocation
struct AChicaRepair_Cupcake_Runner_C_MoveToRandomLocation_Params
{
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.UserConstructionScript
struct AChicaRepair_Cupcake_Runner_C_UserConstructionScript_Params
{
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveTick
struct AChicaRepair_Cupcake_Runner_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionExit
struct AChicaRepair_Cupcake_Runner_C_OnPlayerVisionExit_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ReceiveBeginPlay
struct AChicaRepair_Cupcake_Runner_C_ReceiveBeginPlay_Params
{
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnPlayerVisionEnter
struct AChicaRepair_Cupcake_Runner_C_OnPlayerVisionEnter_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AChicaRepair_Cupcake_Runner_C_BndEvt__AttachmentPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRGrabbed
struct AChicaRepair_Cupcake_Runner_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.OnVRReleased
struct AChicaRepair_Cupcake_Runner_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ChicaRepair_Cupcake_Runner.ChicaRepair_Cupcake_Runner_C.ExecuteUbergraph_ChicaRepair_Cupcake_Runner
struct AChicaRepair_Cupcake_Runner_C_ExecuteUbergraph_ChicaRepair_Cupcake_Runner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
