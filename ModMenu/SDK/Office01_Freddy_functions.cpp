
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

// Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::CheckIfGameWonDuringPowerOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut");

	AOffice01_Freddy_C_CheckIfGameWonDuringPowerOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOfficeRoomTransition_Struct TransitionInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ARoomInfo_Bp_C**         RoomBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnterRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice01_Freddy_C::CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom");

	AOffice01_Freddy_C_CanEnterRoom_Params params;
	params.RoomBP = RoomBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (CanEnterRoom != nullptr)
		*CanEnterRoom = params.CanEnterRoom;
}


// Function Office01_Freddy.Office01_Freddy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.UserConstructionScript");

	AOffice01_Freddy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Flashing_Eyes__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc");

	AOffice01_Freddy_C_Flashing_Eyes__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Flashing_Eyes__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc");

	AOffice01_Freddy_C_Flashing_Eyes__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::EyeFlickerTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc");

	AOffice01_Freddy_C_EyeFlickerTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::EyeFlickerTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc");

	AOffice01_Freddy_C_EyeFlickerTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc");

	AOffice01_Freddy_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc");

	AOffice01_Freddy_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Timeline_1__StopTrackHere__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc");

	AOffice01_Freddy_C_Timeline_1__StopTrackHere__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Timeline_1__LightOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc");

	AOffice01_Freddy_C_Timeline_1__LightOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc
// (BlueprintEvent)

void AOffice01_Freddy_C::Timeline_1__LightOff__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc");

	AOffice01_Freddy_C_Timeline_1__LightOff__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_Freddy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay");

	AOffice01_Freddy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.EventDisableAi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Freddy_C::EventDisableAi(bool* Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.EventDisableAi");

	AOffice01_Freddy_C_EventDisableAi_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::FreddySongSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence");

	AOffice01_Freddy_C_FreddySongSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.FlickerEyes
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::FlickerEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.FlickerEyes");

	AOffice01_Freddy_C_FlickerEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::StopFlickerEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes");

	AOffice01_Freddy_C_StopFlickerEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Freddy_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.MoveAi");

	AOffice01_Freddy_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Freddy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReceiveTick");

	AOffice01_Freddy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::DestroyFreddy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy");

	AOffice01_Freddy_C_DestroyFreddy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Freddy_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone");

	AOffice01_Freddy_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Freddy_C::ExecuteUbergraph_Office01_Freddy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy");

	AOffice01_Freddy_C_ExecuteUbergraph_Office01_Freddy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
