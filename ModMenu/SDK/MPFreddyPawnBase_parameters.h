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

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInPlayerVis
struct AMPFreddyPawnBase_C_IsInPlayerVis_Params
{
	bool                                               IsInvis;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangePlayerVisStatus
struct AMPFreddyPawnBase_C_ChangePlayerVisStatus_Params
{
	bool                                               IsInVision;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.IsInFlashLight
struct AMPFreddyPawnBase_C_IsInFlashLight_Params
{
	bool                                               InFlashLight;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ChangeFlashStatus
struct AMPFreddyPawnBase_C_ChangeFlashStatus_Params
{
	bool                                               IsInFlashLight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.UserConstructionScript
struct AMPFreddyPawnBase_C_UserConstructionScript_Params
{
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveBeginPlay
struct AMPFreddyPawnBase_C_ReceiveBeginPlay_Params
{
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightBeginHover
struct AMPFreddyPawnBase_C_OnFlashLightBeginHover_Params
{
	class AFlashlight_Battery_C*                       Flashlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnFlashLightEndHover
struct AMPFreddyPawnBase_C_OnFlashLightEndHover_Params
{
	class AFlashlight_Battery_C*                       Flashlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceivePossessed
struct AMPFreddyPawnBase_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.RestartPlayer
struct AMPFreddyPawnBase_C_RestartPlayer_Params
{
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionExit
struct AMPFreddyPawnBase_C_OnPlayerVisionExit_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.OnPlayerVisionEnter
struct AMPFreddyPawnBase_C_OnPlayerVisionEnter_Params
{
	class AFNAFPlayerPawn_C*                           PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMPFreddyPawnBase_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ReceiveTick
struct AMPFreddyPawnBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPFreddyPawnBase.MPFreddyPawnBase_C.ExecuteUbergraph_MPFreddyPawnBase
struct AMPFreddyPawnBase_C_ExecuteUbergraph_MPFreddyPawnBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
