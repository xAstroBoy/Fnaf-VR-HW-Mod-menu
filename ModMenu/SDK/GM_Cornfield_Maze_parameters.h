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

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.CheckAllKeysCollected
struct AGM_Cornfield_Maze_C_CheckAllKeysCollected_Params
{
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Set Keys for Map
struct AGM_Cornfield_Maze_C_Set_Keys_for_Map_Params
{
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Pick Location for Keys
struct AGM_Cornfield_Maze_C_Pick_Location_for_Keys_Params
{
	int                                                Set_Key_ID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKey_Color>                            Set_Key_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.UserConstructionScript
struct AGM_Cornfield_Maze_C_UserConstructionScript_Params
{
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ReceiveBeginPlay
struct AGM_Cornfield_Maze_C_ReceiveBeginPlay_Params
{
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Player Picked Up Key
struct AGM_Cornfield_Maze_C_Player_Picked_Up_Key_Params
{
	class AMaze_Key_C*                                 CollectedKey;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Toggle Flashlight
struct AGM_Cornfield_Maze_C_Toggle_Flashlight_Params
{
	bool                                               OFF;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.JumpScare
struct AGM_Cornfield_Maze_C_JumpScare_Params
{
};

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ExecuteUbergraph_GM_Cornfield_Maze
struct AGM_Cornfield_Maze_C_ExecuteUbergraph_GM_Cornfield_Maze_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
