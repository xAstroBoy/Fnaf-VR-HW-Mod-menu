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

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar
struct ARoomInfo_Bp_C_GetAvailableLocationsForChar_Params
{
	class AOfficeAiBase_Bp_C*                          CharacterInstance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListOfLocations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType
struct ARoomInfo_Bp_C_GetAvailableLocationsForCharType_Params
{
	class UClass*                                      CharacterType;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListOfLocations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript
struct ARoomInfo_Bp_C_UserConstructionScript_Params
{
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ARoomInfo_Bp_C_BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ARoomInfo_Bp_C_BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoomInfo_Bp.RoomInfo_Bp_C.ExecuteUbergraph_RoomInfo_Bp
struct ARoomInfo_Bp_C_ExecuteUbergraph_RoomInfo_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
