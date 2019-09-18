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

// Function FNAFVisionDetector.FNAFVisionDetector_C.CheckLOS
struct UFNAFVisionDetector_C_CheckLOS_Params
{
	class AActor*                                      ActorToCheck;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInLOS;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.ReceiveTick
struct UFNAFVisionDetector_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionCone
struct UFNAFVisionDetector_C_SetVisionCone_Params
{
	class UPrimitiveComponent*                         visioncone;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.ConeBeginOverlap
struct UFNAFVisionDetector_C_ConeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.ConeEndOverlap
struct UFNAFVisionDetector_C_ConeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionFilter
struct UFNAFVisionDetector_C_SetVisionFilter_Params
{
	TScriptInterface<class UIFNAFVisionFilter_C>       VisionFilterObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionComponent
struct UFNAFVisionDetector_C_SetVisionComponent_Params
{
	class USceneComponent*                             SceneComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.ExecuteUbergraph_FNAFVisionDetector
struct UFNAFVisionDetector_C_ExecuteUbergraph_FNAFVisionDetector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionEnter__DelegateSignature
struct UFNAFVisionDetector_C_OnVisionEnter__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionExit__DelegateSignature
struct UFNAFVisionDetector_C_OnVisionExit__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
