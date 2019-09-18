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

// Function BonnieRepairTuner.BonnieRepairTuner_C.AttemptGrab
struct ABonnieRepairTuner_C_AttemptGrab_Params
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

// Function BonnieRepairTuner.BonnieRepairTuner_C.AttemptRelease
struct ABonnieRepairTuner_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.SetupColors
struct ABonnieRepairTuner_C_SetupColors_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.UserConstructionScript
struct ABonnieRepairTuner_C_UserConstructionScript_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.Timeline_0__FinishedFunc
struct ABonnieRepairTuner_C_Timeline_0__FinishedFunc_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.Timeline_0__UpdateFunc
struct ABonnieRepairTuner_C_Timeline_0__UpdateFunc_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRHoverComponentBegin
struct ABonnieRepairTuner_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRHoverComponentEnd
struct ABonnieRepairTuner_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRGrabbed
struct ABonnieRepairTuner_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRReleased
struct ABonnieRepairTuner_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.ReceiveBeginPlay
struct ABonnieRepairTuner_C_ReceiveBeginPlay_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.Rotate
struct ABonnieRepairTuner_C_Rotate_Params
{
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRHoverBegin
struct ABonnieRepairTuner_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.OnVRHoverEnd
struct ABonnieRepairTuner_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.ExecuteUbergraph_BonnieRepairTuner
struct ABonnieRepairTuner_C_ExecuteUbergraph_BonnieRepairTuner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BonnieRepairTuner.BonnieRepairTuner_C.GrabbedEvent__DelegateSignature
struct ABonnieRepairTuner_C_GrabbedEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
