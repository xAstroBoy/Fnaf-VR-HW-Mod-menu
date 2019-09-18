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

// Function Flashlight_Battery.Flashlight_Battery_C.AttemptGrab
struct AFlashlight_Battery_C_AttemptGrab_Params
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

// Function Flashlight_Battery.Flashlight_Battery_C.AttemptRelease
struct AFlashlight_Battery_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.Flashlight Ref
struct AFlashlight_Battery_C_Flashlight_Ref_Params
{
	class UFlashLight_Power_C*                         Flash_Light_Power;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.Motion Controller Pawn Ref
struct AFlashlight_Battery_C_Motion_Controller_Pawn_Ref_Params
{
	class ASaul_MotionControllerPawn_C*                AsMotion_Controller_Pawn;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.UserConstructionScript
struct AFlashlight_Battery_C_UserConstructionScript_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__FinishedFunc
struct AFlashlight_Battery_C_Dyling_Flashlight_Flicker__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Dyling Flashlight Flicker__UpdateFunc
struct AFlashlight_Battery_C_Dyling_Flashlight_Flicker__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__FinishedFunc
struct AFlashlight_Battery_C_Timeline_0__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_0__UpdateFunc
struct AFlashlight_Battery_C_Timeline_0__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__FinishedFunc
struct AFlashlight_Battery_C_FredHead_LightFlicker__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__UpdateFunc
struct AFlashlight_Battery_C_FredHead_LightFlicker__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_LightFlicker__ToggleLight__EventFunc
struct AFlashlight_Battery_C_FredHead_LightFlicker__ToggleLight__EventFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__FinishedFunc
struct AFlashlight_Battery_C_Light_Flicker__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Light Flicker__UpdateFunc
struct AFlashlight_Battery_C_Light_Flicker__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__FinishedFunc
struct AFlashlight_Battery_C_Flicker01Timeline__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Flicker01Timeline__UpdateFunc
struct AFlashlight_Battery_C_Flicker01Timeline__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__FinishedFunc
struct AFlashlight_Battery_C_Timeline_1__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_1__UpdateFunc
struct AFlashlight_Battery_C_Timeline_1__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__FinishedFunc
struct AFlashlight_Battery_C_Timeline_2__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Timeline_2__UpdateFunc
struct AFlashlight_Battery_C_Timeline_2__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__FinishedFunc
struct AFlashlight_Battery_C_PostprocessTransition__FinishedFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.PostprocessTransition__UpdateFunc
struct AFlashlight_Battery_C_PostprocessTransition__UpdateFunc_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Pickup
struct AFlashlight_Battery_C_Pickup_Params
{
	class USceneComponent*                             AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.Drop
struct AFlashlight_Battery_C_Drop_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRInteract
struct AFlashlight_Battery_C_OnVRInteract_Params
{
	class ASWGVRCharacter*                             VRCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverBegin
struct AFlashlight_Battery_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentBegin
struct AFlashlight_Battery_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverComponentEnd
struct AFlashlight_Battery_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRHoverEnd
struct AFlashlight_Battery_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRGrabbed
struct AFlashlight_Battery_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.OnVRReleased
struct AFlashlight_Battery_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.ReceiveTick
struct AFlashlight_Battery_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AFlashlight_Battery_C_BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.Flashlight On?
struct AFlashlight_Battery_C_Flashlight_On__Params
{
	bool                                               IsOn_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.ReceiveBeginPlay
struct AFlashlight_Battery_C_ReceiveBeginPlay_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Can Win
struct AFlashlight_Battery_C_Can_Win_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Fate is Sealed (RIP)
struct AFlashlight_Battery_C_Fate_is_Sealed__RIP__Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOff
struct AFlashlight_Battery_C_FlickerLightOff_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FlickerLightOn
struct AFlashlight_Battery_C_FlickerLightOn_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.FredHead_Flicker
struct AFlashlight_Battery_C_FredHead_Flicker_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Toggle Flicker
struct AFlashlight_Battery_C_Toggle_Flicker_Params
{
	bool                                               IsPlayerDead;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.PCBFlicker_01
struct AFlashlight_Battery_C_PCBFlicker_01_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetNewTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.FuntimeFreddyFlicker
struct AFlashlight_Battery_C_FuntimeFreddyFlicker_Params
{
	bool                                               IsPlayerDead;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flashlight_Battery.Flashlight_Battery_C.FinaleNightmareWeightTransition
struct AFlashlight_Battery_C_FinaleNightmareWeightTransition_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.ResetWeightTransition
struct AFlashlight_Battery_C_ResetWeightTransition_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.SetRadialForce
struct AFlashlight_Battery_C_SetRadialForce_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.Disable Collider
struct AFlashlight_Battery_C_Disable_Collider_Params
{
};

// Function Flashlight_Battery.Flashlight_Battery_C.ExecuteUbergraph_Flashlight_Battery
struct AFlashlight_Battery_C_ExecuteUbergraph_Flashlight_Battery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
