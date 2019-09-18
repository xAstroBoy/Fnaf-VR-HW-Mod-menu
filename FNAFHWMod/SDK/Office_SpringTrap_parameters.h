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

// Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms
struct AOffice_SpringTrap_C_GetBlockedRooms_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom
struct AOffice_SpringTrap_C_CanEnterRoom_Params
{
	struct FOfficeRoomTransition_Struct                TransitionInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARoomInfo_Bp_C**                             RoomBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor
struct AOffice_SpringTrap_C_CheckVentDoor_Params
{
	class ARoomInfo_Bp_C*                              DestinationRoom;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom
struct AOffice_SpringTrap_C_FindAdjacentRoom_Params
{
	class ARoomInfo_Bp_C*                              RoomToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_SpringTrap.Office_SpringTrap_C.UserConstructionScript
struct AOffice_SpringTrap_C_UserConstructionScript_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay
struct AOffice_SpringTrap_C_ReceiveBeginPlay_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom
struct AOffice_SpringTrap_C_PickNextRoom_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick
struct AOffice_SpringTrap_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone
struct AOffice_SpringTrap_C_ReachedKillZone_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.MoveAi
struct AOffice_SpringTrap_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap
struct AOffice_SpringTrap_C_SpeedupSpringTrap_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed
struct AOffice_SpringTrap_C_ResetSpringtrapSpeed_Params
{
};

// Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap
struct AOffice_SpringTrap_C_ExecuteUbergraph_Office_SpringTrap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
