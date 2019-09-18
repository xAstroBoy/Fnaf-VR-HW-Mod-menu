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

// Function FallingRoach.FallingRoach_C.AttemptGrab
struct AFallingRoach_C_AttemptGrab_Params
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

// Function FallingRoach.FallingRoach_C.AttemptRelease
struct AFallingRoach_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FallingRoach.FallingRoach_C.UserConstructionScript
struct AFallingRoach_C_UserConstructionScript_Params
{
};

// Function FallingRoach.FallingRoach_C.OnVRGrabbed
struct AFallingRoach_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FallingRoach.FallingRoach_C.OnVRReleased
struct AFallingRoach_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FallingRoach.FallingRoach_C.ExecuteUbergraph_FallingRoach
struct AFallingRoach_C_ExecuteUbergraph_FallingRoach_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
