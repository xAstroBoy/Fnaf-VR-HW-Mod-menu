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

// Function GrabbablePhone.GrabbablePhone_C.UserConstructionScript
struct AGrabbablePhone_C_UserConstructionScript_Params
{
};

// Function GrabbablePhone.GrabbablePhone_C.ReceiveBeginPlay
struct AGrabbablePhone_C_ReceiveBeginPlay_Params
{
};

// Function GrabbablePhone.GrabbablePhone_C.ReceiveTick
struct AGrabbablePhone_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbablePhone.GrabbablePhone_C.OnVRGrabbed
struct AGrabbablePhone_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter**                            Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbablePhone.GrabbablePhone_C.OnVRReleased
struct AGrabbablePhone_C_OnVRReleased_Params
{
	class ASWGVRCharacter**                            Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GrabbablePhone.GrabbablePhone_C.ExecuteUbergraph_GrabbablePhone
struct AGrabbablePhone_C_ExecuteUbergraph_GrabbablePhone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
