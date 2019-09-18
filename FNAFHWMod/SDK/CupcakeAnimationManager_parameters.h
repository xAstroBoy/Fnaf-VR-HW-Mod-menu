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

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.AttemptGrab
struct ACupcakeAnimationManager_C_AttemptGrab_Params
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

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.AttemptRelease
struct ACupcakeAnimationManager_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.UserConstructionScript
struct ACupcakeAnimationManager_C_UserConstructionScript_Params
{
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.OnVRReleased
struct ACupcakeAnimationManager_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.ReceiveBeginPlay
struct ACupcakeAnimationManager_C_ReceiveBeginPlay_Params
{
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.Activate
struct ACupcakeAnimationManager_C_Activate_Params
{
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.ValidGrab
struct ACupcakeAnimationManager_C_ValidGrab_Params
{
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.OnVRGrabbed
struct ACupcakeAnimationManager_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CupcakeAnimationManager.CupcakeAnimationManager_C.ExecuteUbergraph_CupcakeAnimationManager
struct ACupcakeAnimationManager_C_ExecuteUbergraph_CupcakeAnimationManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
