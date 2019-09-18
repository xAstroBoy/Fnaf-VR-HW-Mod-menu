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

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptGrab
struct AChicaRepair_RoachManager_New_C_AttemptGrab_Params
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

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.AttemptRelease
struct AChicaRepair_RoachManager_New_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.RemoveClosestRoach
struct AChicaRepair_RoachManager_New_C_RemoveClosestRoach_Params
{
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RoachRemoved;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.UserConstructionScript
struct AChicaRepair_RoachManager_New_C_UserConstructionScript_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__FinishedFunc
struct AChicaRepair_RoachManager_New_C_ForceAplicator__FinishedFunc_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ForceAplicator__UpdateFunc
struct AChicaRepair_RoachManager_New_C_ForceAplicator__UpdateFunc_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentBegin
struct AChicaRepair_RoachManager_New_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverComponentEnd
struct AChicaRepair_RoachManager_New_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRGrabbed
struct AChicaRepair_RoachManager_New_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRReleased
struct AChicaRepair_RoachManager_New_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.SpawnRoach
struct AChicaRepair_RoachManager_New_C_SpawnRoach_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveBeginPlay
struct AChicaRepair_RoachManager_New_C_ReceiveBeginPlay_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.CleanRoaches
struct AChicaRepair_RoachManager_New_C_CleanRoaches_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.BeginRoachInfestation
struct AChicaRepair_RoachManager_New_C_BeginRoachInfestation_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ReceiveTick
struct AChicaRepair_RoachManager_New_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.StopSound
struct AChicaRepair_RoachManager_New_C_StopSound_Params
{
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.GrabAttempt
struct AChicaRepair_RoachManager_New_C_GrabAttempt_Params
{
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverBegin
struct AChicaRepair_RoachManager_New_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.OnVRHoverEnd
struct AChicaRepair_RoachManager_New_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChicaRepair_RoachManager_New.ChicaRepair_RoachManager_New_C.ExecuteUbergraph_ChicaRepair_RoachManager_New
struct AChicaRepair_RoachManager_New_C_ExecuteUbergraph_ChicaRepair_RoachManager_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
