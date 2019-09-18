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

// Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor
struct ABedroomClosetDoors_C_ConnectDoor_Params
{
	class UChildActorComponent*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Event_OnDoorAngleChanged;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.UserConstructionScript
struct ABedroomClosetDoors_C_UserConstructionScript_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc
struct ABedroomClosetDoors_C_OpenCloset__FinishedFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc
struct ABedroomClosetDoors_C_OpenCloset__UpdateFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc
struct ABedroomClosetDoors_C_OpenCloset__TriggerDoorSound__EventFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc
struct ABedroomClosetDoors_C_Timeline_0__FinishedFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc
struct ABedroomClosetDoors_C_Timeline_0__UpdateFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc
struct ABedroomClosetDoors_C_Timeline_0__TriggerDoorSound__EventFunc_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay
struct ABedroomClosetDoors_C_ReceiveBeginPlay_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick
struct ABedroomClosetDoors_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged
struct ABedroomClosetDoors_C_OnLeftDoorAngleChanged_Params
{
	float                                              DoorAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABedroomClosetDoor_C*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged
struct ABedroomClosetDoors_C_OnRightDoorAngleChanged_Params
{
	float                                              DoorAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABedroomClosetDoor_C*                        Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor
struct ABedroomClosetDoors_C_InitClosetDoor_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors
struct ABedroomClosetDoors_C_CloseClosetDoors_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors
struct ABedroomClosetDoors_C_OpenClosetDoors_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide
struct ABedroomClosetDoors_C_OpenDoorWide_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut
struct ABedroomClosetDoors_C_KeepClosetDoorsShut_Params
{
};

// Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors
struct ABedroomClosetDoors_C_ExecuteUbergraph_BedroomClosetDoors_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
