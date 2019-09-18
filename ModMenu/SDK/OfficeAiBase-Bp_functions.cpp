
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

// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::SetActivationTimeRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetActivationTimeRange");

	AOfficeAiBase_Bp_C_SetActivationTimeRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WaitMoveTimer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimerCap                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsThereTimeCap                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MoveTimer                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::PlayerWatchingAi(float Delta_Time, float WaitMoveTimer, float TimerCap, bool* IsThereTimeCap, float* MoveTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerWatchingAi");

	AOfficeAiBase_Bp_C_PlayerWatchingAi_Params params;
	params.Delta_Time = Delta_Time;
	params.WaitMoveTimer = WaitMoveTimer;
	params.TimerCap = TimerCap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsThereTimeCap != nullptr)
		*IsThereTimeCap = params.IsThereTimeCap;
	if (MoveTimer != nullptr)
		*MoveTimer = params.MoveTimer;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOfficeRoomTransition_Struct TransitionInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARoomInfo_Bp_C*          RoomBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnterRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::CanEnterRoom(class ARoomInfo_Bp_C* RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CanEnterRoom");

	AOfficeAiBase_Bp_C_CanEnterRoom_Params params;
	params.RoomBP = RoomBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (CanEnterRoom != nullptr)
		*CanEnterRoom = params.CanEnterRoom;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::OnAnimJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.OnAnimJump");

	AOfficeAiBase_Bp_C_OnAnimJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::FinishMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FinishMove");

	AOfficeAiBase_Bp_C_FinishMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          PrevRoom                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C*          PrevLoc                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::StartingMove(class ARoomInfo_Bp_C* PrevRoom, class ALocPoint_BP_C* PrevLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.StartingMove");

	AOfficeAiBase_Bp_C_StartingMove_Params params;
	params.PrevRoom = PrevRoom;
	params.PrevLoc = PrevLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AOfficeAiBase_Bp_C::GetCurrentLocationName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentLocationName");

	AOfficeAiBase_Bp_C_GetCurrentLocationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AOfficeAiBase_Bp_C::GetCurrentRoomName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetCurrentRoomName");

	AOfficeAiBase_Bp_C_GetCurrentRoomName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class ARoomInfo_Bp_C*, int> AllRoomChances                 (Parm, OutParm, ZeroConstructor)
// int                            TotalOfRoomChance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::CollectNextRoomInfo(TMap<class ARoomInfo_Bp_C*, int>* AllRoomChances, int* TotalOfRoomChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.CollectNextRoomInfo");

	AOfficeAiBase_Bp_C_CollectNextRoomInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllRoomChances != nullptr)
		*AllRoomChances = params.AllRoomChances;
	if (TotalOfRoomChance != nullptr)
		*TotalOfRoomChance = params.TotalOfRoomChance;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::ResetMoveTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ResetMoveTimer");

	AOfficeAiBase_Bp_C_ResetMoveTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::Temp_Office02_MaskTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.Temp_Office02_MaskTransition");

	AOfficeAiBase_Bp_C_Temp_Office02_MaskTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::SetJumpScareRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.SetJumpScareRef");

	AOfficeAiBase_Bp_C_SetJumpScareRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AJumpScare_C*            Ref_Jumpscare_Bp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::GetJumpScareRef(class AJumpScare_C** Ref_Jumpscare_Bp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetJumpScareRef");

	AOfficeAiBase_Bp_C_GetJumpScareRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref_Jumpscare_Bp != nullptr)
		*Ref_Jumpscare_Bp = params.Ref_Jumpscare_Bp;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReachedKillZone");

	AOfficeAiBase_Bp_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ARoomInfo_Bp_C*          Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C*          RoomLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::GetRandomLocationForRoom(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C** RoomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRandomLocationForRoom");

	AOfficeAiBase_Bp_C_GetRandomLocationForRoom_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoomLocation != nullptr)
		*RoomLocation = params.RoomLocation;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOffice_BaseGamemanager_C* OfficeManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::GetOfficeManager(class AOffice_BaseGamemanager_C** OfficeManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetOfficeManager");

	AOfficeAiBase_Bp_C_GetOfficeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OfficeManager != nullptr)
		*OfficeManager = params.OfficeManager;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::PickNextRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PickNextRoom");

	AOfficeAiBase_Bp_C_PickNextRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::NotifyLocationOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.NotifyLocationOwner");

	AOfficeAiBase_Bp_C_NotifyLocationOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::PlayerLookLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.PlayerLookLogic");

	AOfficeAiBase_Bp_C_PlayerLookLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C*          Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.MoveAi");

	AOfficeAiBase_Bp_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UpdateTimer");

	AOfficeAiBase_Bp_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RoomType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARoomInfo_Bp_C*          RoomInfo_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   WhatIsCurrentRoom              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::GetRoomLocationName(const struct FName& RoomType, class ARoomInfo_Bp_C** RoomInfo_Bp, struct FName* WhatIsCurrentRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.GetRoomLocationName");

	AOfficeAiBase_Bp_C_GetRoomLocationName_Params params;
	params.RoomType = RoomType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoomInfo_Bp != nullptr)
		*RoomInfo_Bp = params.RoomInfo_Bp;
	if (WhatIsCurrentRoom != nullptr)
		*WhatIsCurrentRoom = params.WhatIsCurrentRoom;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.UserConstructionScript");

	AOfficeAiBase_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOfficeAiBase_Bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveBeginPlay");

	AOfficeAiBase_Bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ReceiveTick");

	AOfficeAiBase_Bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::EventDisableAi(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.EventDisableAi");

	AOfficeAiBase_Bp_C_EventDisableAi_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights
// (BlueprintCallable, BlueprintEvent)

void AOfficeAiBase_Bp_C::FlickerAssignedLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.FlickerAssignedLights");

	AOfficeAiBase_Bp_C_FlickerAssignedLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOfficeAiBase_Bp_C::ExecuteUbergraph_OfficeAiBase_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OfficeAiBase-Bp.OfficeAiBase-Bp_C.ExecuteUbergraph_OfficeAiBase-Bp");

	AOfficeAiBase_Bp_C_ExecuteUbergraph_OfficeAiBase_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
