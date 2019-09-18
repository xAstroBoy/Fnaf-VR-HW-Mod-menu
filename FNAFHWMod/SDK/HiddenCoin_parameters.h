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

// Function HiddenCoin.HiddenCoin_C.UserConstructionScript
struct AHiddenCoin_C_UserConstructionScript_Params
{
};

// Function HiddenCoin.HiddenCoin_C.ReceiveBeginPlay
struct AHiddenCoin_C_ReceiveBeginPlay_Params
{
};

// Function HiddenCoin.HiddenCoin_C.Grabbed
struct AHiddenCoin_C_Grabbed_Params
{
};

// Function HiddenCoin.HiddenCoin_C.Released
struct AHiddenCoin_C_Released_Params
{
};

// Function HiddenCoin.HiddenCoin_C.Activate
struct AHiddenCoin_C_Activate_Params
{
};

// Function HiddenCoin.HiddenCoin_C.BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AHiddenCoin_C_BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HiddenCoin.HiddenCoin_C.ReceiveTick
struct AHiddenCoin_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HiddenCoin.HiddenCoin_C.TriggerWithoutDelay
struct AHiddenCoin_C_TriggerWithoutDelay_Params
{
};

// Function HiddenCoin.HiddenCoin_C.ExecuteUbergraph_HiddenCoin
struct AHiddenCoin_C_ExecuteUbergraph_HiddenCoin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
