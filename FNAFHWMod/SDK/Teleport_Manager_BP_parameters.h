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

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot
struct ATeleport_Manager_BP_C_CurrentTeleportSpot_Params
{
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents
struct ATeleport_Manager_BP_C_EnableAttachedComponents_Params
{
	class ATeleportSpot_BP_C*                          TeleportSpots;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll
struct ATeleport_Manager_BP_C_DisableAll_Params
{
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport
struct ATeleport_Manager_BP_C_EnableTeleport_Params
{
	int                                                TeleportID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots
struct ATeleport_Manager_BP_C_UpdateTeleportSpots_Params
{
	class ATeleportSpot_BP_C*                          TeleportSpotChange;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.UserConstructionScript
struct ATeleport_Manager_BP_C_UserConstructionScript_Params
{
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location
struct ATeleport_Manager_BP_C_Check_Location_Params
{
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay
struct ATeleport_Manager_BP_C_ReceiveBeginPlay_Params
{
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP
struct ATeleport_Manager_BP_C_ExecuteUbergraph_Teleport_Manager_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature
struct ATeleport_Manager_BP_C_Player_Is_Teleporting__DelegateSignature_Params
{
	int                                                Player_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
