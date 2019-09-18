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

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetLeftDoorState
struct ABigToy_Office04_BP_C_SetLeftDoorState_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.EnableLightBoxCollision
struct ABigToy_Office04_BP_C_EnableLightBoxCollision_Params
{
	bool                                               EnableCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               LightBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetRightDoorState
struct ABigToy_Office04_BP_C_SetRightDoorState_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.Big_Toy_Anim BP
struct ABigToy_Office04_BP_C_Big_Toy_Anim_BP_Params
{
	class UBigToy_Office04_AnimBP_C*                   Fun_With_Plush_Trap_Anim_BP_Ref;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.GetBigToyState
struct ABigToy_Office04_BP_C_GetBigToyState_Params
{
	class UBigToy_O4_State_C*                          BigToy_State;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetBigToyState
struct ABigToy_Office04_BP_C_SetBigToyState_Params
{
	class UClass*                                      Big_Toy_Ref;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.UserConstructionScript
struct ABigToy_Office04_BP_C_UserConstructionScript_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerKilled
struct ABigToy_Office04_BP_C_PlayerKilled_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveBeginPlay
struct ABigToy_Office04_BP_C_ReceiveBeginPlay_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveTick
struct ABigToy_Office04_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerWonOffice04
struct ABigToy_Office04_BP_C_PlayerWonOffice04_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.StartFredBear
struct ABigToy_Office04_BP_C_StartFredBear_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.SFX
struct ABigToy_Office04_BP_C_SFX_Params
{
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.ExecuteUbergraph_BigToy_Office04_BP
struct ABigToy_Office04_BP_C_ExecuteUbergraph_BigToy_Office04_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnRightDoorClosed__DelegateSignature
struct ABigToy_Office04_BP_C_OnRightDoorClosed__DelegateSignature_Params
{
	class AButton_Hold_C*                              ButtonHoldCheck;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnBigToyStateChanged__DelegateSignature
struct ABigToy_Office04_BP_C_OnBigToyStateChanged__DelegateSignature_Params
{
	class UBigToy_O4_State_C*                          BigBoyState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
