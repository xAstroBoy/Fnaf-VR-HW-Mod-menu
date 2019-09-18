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

// Function FlashlightBase.FlashlightBase_C.IsValidActorForVisionTest
struct AFlashlightBase_C_IsValidActorForVisionTest_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.AttemptGrab
struct AFlashlightBase_C_AttemptGrab_Params
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

// Function FlashlightBase.FlashlightBase_C.AttemptRelease
struct AFlashlightBase_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.GetGrabber
struct AFlashlightBase_C_GetGrabber_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.GetIsOn
struct AFlashlightBase_C_GetIsOn_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.ToggleFlashlight
struct AFlashlightBase_C_ToggleFlashlight_Params
{
};

// Function FlashlightBase.FlashlightBase_C.UserConstructionScript
struct AFlashlightBase_C_UserConstructionScript_Params
{
};

// Function FlashlightBase.FlashlightBase_C.OnVRInteract
struct AFlashlightBase_C_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.OnVRGrabbed
struct AFlashlightBase_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.OnVRReleased
struct AFlashlightBase_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature
struct AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature
struct AFlashlightBase_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.ExecuteUbergraph_FlashlightBase
struct AFlashlightBase_C_ExecuteUbergraph_FlashlightBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FlashlightBase.FlashlightBase_C.OnFlashlightStatusChanged__DelegateSignature
struct AFlashlightBase_C_OnFlashlightStatusChanged__DelegateSignature_Params
{
	bool                                               FlashLightOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
