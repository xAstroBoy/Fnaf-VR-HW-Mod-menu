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

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptGrab
struct AGrabbableToken_InitiallyFrozen_C_AttemptGrab_Params
{
	class ASWGVRCharacter**                            Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGrabSnapType                                      SnapType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffsetLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentOffsetRotation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.AttemptRelease
struct AGrabbableToken_InitiallyFrozen_C_AttemptRelease_Params
{
	class ASWGVRCharacter**                            Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.UserConstructionScript
struct AGrabbableToken_InitiallyFrozen_C_UserConstructionScript_Params
{
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentBegin
struct AGrabbableToken_InitiallyFrozen_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverComponentEnd
struct AGrabbableToken_InitiallyFrozen_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ReceiveBeginPlay
struct AGrabbableToken_InitiallyFrozen_C_ReceiveBeginPlay_Params
{
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverBegin
struct AGrabbableToken_InitiallyFrozen_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.OnVRHoverEnd
struct AGrabbableToken_InitiallyFrozen_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.ExecuteUbergraph_GrabbableToken_InitiallyFrozen
struct AGrabbableToken_InitiallyFrozen_C_ExecuteUbergraph_GrabbableToken_InitiallyFrozen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Released__DelegateSignature
struct AGrabbableToken_InitiallyFrozen_C_Released__DelegateSignature_Params
{
};

// Function GrabbableToken_InitiallyFrozen.GrabbableToken_InitiallyFrozen_C.Grabbed__DelegateSignature
struct AGrabbableToken_InitiallyFrozen_C_Grabbed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
