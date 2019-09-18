
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

// Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::GetBlockedRooms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms");

	AOffice_SpringTrap_C_GetBlockedRooms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOfficeRoomTransition_Struct TransitionInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARoomInfo_Bp_C**         RoomBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnterRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom");

	AOffice_SpringTrap_C_CanEnterRoom_Params params;
	params.RoomBP = RoomBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (CanEnterRoom != nullptr)
		*CanEnterRoom = params.CanEnterRoom;
}


// Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          DestinationRoom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::CheckVentDoor(class ARoomInfo_Bp_C* DestinationRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor");

	AOffice_SpringTrap_C_CheckVentDoor_Params params;
	params.DestinationRoom = DestinationRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          RoomToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::FindAdjacentRoom(class ARoomInfo_Bp_C* RoomToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom");

	AOffice_SpringTrap_C_FindAdjacentRoom_Params params;
	params.RoomToCheck = RoomToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.UserConstructionScript");

	AOffice_SpringTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice_SpringTrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay");

	AOffice_SpringTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::PickNextRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom");

	AOffice_SpringTrap_C_PickNextRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick");

	AOffice_SpringTrap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone");

	AOffice_SpringTrap_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.MoveAi");

	AOffice_SpringTrap_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap
// (BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::SpeedupSpringTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap");

	AOffice_SpringTrap_C_SpeedupSpringTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed
// (BlueprintCallable, BlueprintEvent)

void AOffice_SpringTrap_C::ResetSpringtrapSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed");

	AOffice_SpringTrap_C_ResetSpringtrapSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_SpringTrap_C::ExecuteUbergraph_Office_SpringTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap");

	AOffice_SpringTrap_C_ExecuteUbergraph_Office_SpringTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
