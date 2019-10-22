
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

// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          RandomRoom                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C*          RoomLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_AI_BP_C::FindLowerAssignedRoom(class ARoomInfo_Bp_C** RandomRoom, class ALocPoint_BP_C** RoomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindLowerAssignedRoom");

	ADLC_Office01_AI_BP_C_FindLowerAssignedRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomRoom != nullptr)
		*RandomRoom = params.RandomRoom;
	if (RoomLocation != nullptr)
		*RoomLocation = params.RoomLocation;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::AdjustAnimationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.AdjustAnimationSpeed");

	ADLC_Office01_AI_BP_C_AdjustAnimationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition
// (Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::ResetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ResetPosition");

	ADLC_Office01_AI_BP_C_ResetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom
// (Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::SendToHiddenRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.SendToHiddenRoom");

	ADLC_Office01_AI_BP_C_SendToHiddenRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          RoomToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_AI_BP_C::FindPreviousRoom(class ARoomInfo_Bp_C* RoomToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.FindPreviousRoom");

	ADLC_Office01_AI_BP_C_FindPreviousRoom_Params params;
	params.RoomToCheck = RoomToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AttackingDoor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_AI_BP_C::BeingFlashed(bool AttackingDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.BeingFlashed");

	ADLC_Office01_AI_BP_C_BeingFlashed_Params params;
	params.AttackingDoor = AttackingDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.UserConstructionScript");

	ADLC_Office01_AI_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_AI_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveTick");

	ADLC_Office01_AI_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom
// (Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::PickNextRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.PickNextRoom");

	ADLC_Office01_AI_BP_C_PickNextRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADLC_Office01_AI_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReceiveBeginPlay");

	ADLC_Office01_AI_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ReachedKillZone");

	ADLC_Office01_AI_BP_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::CaughtByFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CaughtByFlash");

	ADLC_Office01_AI_BP_C_CaughtByFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::CheckBeingWatched()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.CheckBeingWatched");

	ADLC_Office01_AI_BP_C_CheckBeingWatched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_AI_BP_C::RoomDelayTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.RoomDelayTrigger");

	ADLC_Office01_AI_BP_C_RoomDelayTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_AI_BP_C::ExecuteUbergraph_DLC_Office01_AI_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_AI_BP.DLC_Office01_AI_BP_C.ExecuteUbergraph_DLC_Office01_AI_BP");

	ADLC_Office01_AI_BP_C_ExecuteUbergraph_DLC_Office01_AI_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
