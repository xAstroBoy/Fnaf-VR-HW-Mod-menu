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

// Function Guitar_Tune.Guitar_Tune_C.AttemptGrab
struct AGuitar_Tune_C_AttemptGrab_Params
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

// Function Guitar_Tune.Guitar_Tune_C.AttemptRelease
struct AGuitar_Tune_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.ToggleCorrectSound
struct AGuitar_Tune_C_ToggleCorrectSound_Params
{
	bool                                               PlayCorrectSound;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CorrectSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.RotateTuner
struct AGuitar_Tune_C_RotateTuner_Params
{
	float                                              RotateValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              Tune_Mesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.UserConstructionScript
struct AGuitar_Tune_C_UserConstructionScript_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.Pickup
struct AGuitar_Tune_C_Pickup_Params
{
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.Drop
struct AGuitar_Tune_C_Drop_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRInteract
struct AGuitar_Tune_C_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverBegin
struct AGuitar_Tune_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentBegin
struct AGuitar_Tune_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverComponentEnd
struct AGuitar_Tune_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRHoverEnd
struct AGuitar_Tune_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRGrabbed
struct AGuitar_Tune_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.OnVRReleased
struct AGuitar_Tune_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.ReceiveBeginPlay
struct AGuitar_Tune_C_ReceiveBeginPlay_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.Play Music Cue
struct AGuitar_Tune_C_Play_Music_Cue_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.0Grabbed
struct AGuitar_Tune_C__0Grabbed_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.1Grabbed
struct AGuitar_Tune_C__1Grabbed_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.2Grabbed
struct AGuitar_Tune_C__2Grabbed_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.3Grabbed
struct AGuitar_Tune_C__3Grabbed_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.4Grabbed
struct AGuitar_Tune_C__4Grabbed_Params
{
};

// Function Guitar_Tune.Guitar_Tune_C.ExecuteUbergraph_Guitar_Tune
struct AGuitar_Tune_C_ExecuteUbergraph_Guitar_Tune_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Guitar_Tune.Guitar_Tune_C.FeedbackTest__DelegateSignature
struct AGuitar_Tune_C_FeedbackTest__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
