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

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor
struct ANightmareBedroomClosetDoors_C_ConnectDoor_Params
{
	class UChildActorComponent*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Event_OnDoorAngleChanged;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.UserConstructionScript
struct ANightmareBedroomClosetDoors_C_UserConstructionScript_Params
{
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay
struct ANightmareBedroomClosetDoors_C_ReceiveBeginPlay_Params
{
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick
struct ANightmareBedroomClosetDoors_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged
struct ANightmareBedroomClosetDoors_C_OnLeftDoorAngleChanged_Params
{
	float                                              DoorAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABedroomClosetDoor_C*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged
struct ANightmareBedroomClosetDoors_C_OnRightDoorAngleChanged_Params
{
	float                                              DoorAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABedroomClosetDoor_C*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed
struct ANightmareBedroomClosetDoors_C_Closed_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1
struct ANightmareBedroomClosetDoors_C_OnComponentEndOverlap_Event_1_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors
struct ANightmareBedroomClosetDoors_C_ExecuteUbergraph_NightmareBedroomClosetDoors_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature
struct ANightmareBedroomClosetDoors_C_SendDoorsOpen__DelegateSignature_Params
{
};

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature
struct ANightmareBedroomClosetDoors_C_SendDoorsClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
