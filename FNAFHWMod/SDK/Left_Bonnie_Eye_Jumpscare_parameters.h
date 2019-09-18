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

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptGrab
struct ALeft_Bonnie_Eye_Jumpscare_C_AttemptGrab_Params
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

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.AttemptRelease
struct ALeft_Bonnie_Eye_Jumpscare_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.UserConstructionScript
struct ALeft_Bonnie_Eye_Jumpscare_C_UserConstructionScript_Params
{
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Pickup
struct ALeft_Bonnie_Eye_Jumpscare_C_Pickup_Params
{
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.Drop
struct ALeft_Bonnie_Eye_Jumpscare_C_Drop_Params
{
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRInteract
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverBegin
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentBegin
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverComponentEnd
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRHoverEnd
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRGrabbed
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.OnVRReleased
struct ALeft_Bonnie_Eye_Jumpscare_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare
struct ALeft_Bonnie_Eye_Jumpscare_C_ExecuteUbergraph_Left_Bonnie_Eye_Jumpscare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Left_Bonnie_Eye_Jumpscare.Left_Bonnie_Eye_Jumpscare_C.FeedbackTest__DelegateSignature
struct ALeft_Bonnie_Eye_Jumpscare_C_FeedbackTest__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
