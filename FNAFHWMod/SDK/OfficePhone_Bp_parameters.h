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

// Function OfficePhone_Bp.OfficePhone_Bp_C.UserConstructionScript
struct AOfficePhone_Bp_C_UserConstructionScript_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__FinishedFunc
struct AOfficePhone_Bp_C_PhoneButtonPulse__FinishedFunc_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneButtonPulse__UpdateFunc
struct AOfficePhone_Bp_C_PhoneButtonPulse__UpdateFunc_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveBeginPlay
struct AOfficePhone_Bp_C_ReceiveBeginPlay_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ReceiveTick
struct AOfficePhone_Bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AOfficePhone_Bp_C_BndEvt__MuteCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneHasBeenGrabbed
struct AOfficePhone_Bp_C_PhoneHasBeenGrabbed_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ObjectHasBeenDropped_Event_1
struct AOfficePhone_Bp_C_ObjectHasBeenDropped_Event_1_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct AOfficePhone_Bp_C_BndEvt__PhoneResetCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.OnAudioPlayback_AudioSpeaker
struct AOfficePhone_Bp_C_OnAudioPlayback_AudioSpeaker_Params
{
	class USoundWave*                                  PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ResetDoOnces
struct AOfficePhone_Bp_C_ResetDoOnces_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.PhoneFellIntoZone
struct AOfficePhone_Bp_C_PhoneFellIntoZone_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ShutOffPhone
struct AOfficePhone_Bp_C_ShutOffPhone_Params
{
	bool                                               Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOn
struct AOfficePhone_Bp_C_SpeakerOn_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.SpeakerOff
struct AOfficePhone_Bp_C_SpeakerOff_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AOfficePhone_Bp_C_BndEvt__SpeakerCollider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.TriggerButtomPulse
struct AOfficePhone_Bp_C_TriggerButtomPulse_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.TurnOffPhoneButtons
struct AOfficePhone_Bp_C_TurnOffPhoneButtons_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.StopButtonPulse
struct AOfficePhone_Bp_C_StopButtonPulse_Params
{
};

// Function OfficePhone_Bp.OfficePhone_Bp_C.ExecuteUbergraph_OfficePhone_Bp
struct AOfficePhone_Bp_C_ExecuteUbergraph_OfficePhone_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
