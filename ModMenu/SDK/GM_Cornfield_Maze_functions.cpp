
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.CheckAllKeysCollected
// (Public, BlueprintCallable, BlueprintEvent)

void AGM_Cornfield_Maze_C::CheckAllKeysCollected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.CheckAllKeysCollected");

	AGM_Cornfield_Maze_C_CheckAllKeysCollected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Set Keys for Map
// (Public, BlueprintCallable, BlueprintEvent)

void AGM_Cornfield_Maze_C::Set_Keys_for_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Set Keys for Map");

	AGM_Cornfield_Maze_C_Set_Keys_for_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Pick Location for Keys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Set_Key_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EKey_Color>        Set_Key_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Cornfield_Maze_C::Pick_Location_for_Keys(int Set_Key_ID, TEnumAsByte<EKey_Color> Set_Key_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Pick Location for Keys");

	AGM_Cornfield_Maze_C_Pick_Location_for_Keys_Params params;
	params.Set_Key_ID = Set_Key_ID;
	params.Set_Key_Type = Set_Key_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGM_Cornfield_Maze_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.UserConstructionScript");

	AGM_Cornfield_Maze_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGM_Cornfield_Maze_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ReceiveBeginPlay");

	AGM_Cornfield_Maze_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Player Picked Up Key
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMaze_Key_C*             CollectedKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Cornfield_Maze_C::Player_Picked_Up_Key(class AMaze_Key_C* CollectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Player Picked Up Key");

	AGM_Cornfield_Maze_C_Player_Picked_Up_Key_Params params;
	params.CollectedKey = CollectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Toggle Flashlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OFF                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Cornfield_Maze_C::Toggle_Flashlight(bool OFF)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.Toggle Flashlight");

	AGM_Cornfield_Maze_C_Toggle_Flashlight_Params params;
	params.OFF = OFF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.JumpScare
// (BlueprintCallable, BlueprintEvent)

void AGM_Cornfield_Maze_C::JumpScare()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.JumpScare");

	AGM_Cornfield_Maze_C_JumpScare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ExecuteUbergraph_GM_Cornfield_Maze
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGM_Cornfield_Maze_C::ExecuteUbergraph_GM_Cornfield_Maze(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_Cornfield_Maze.GM_Cornfield_Maze_C.ExecuteUbergraph_GM_Cornfield_Maze");

	AGM_Cornfield_Maze_C_ExecuteUbergraph_GM_Cornfield_Maze_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
