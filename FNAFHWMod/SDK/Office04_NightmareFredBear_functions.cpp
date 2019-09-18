
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

// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBear_ResetWaitTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::FredBear_ResetWaitTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBear_ResetWaitTimer");

	AOffice04_NightmareFredBear_C_FredBear_ResetWaitTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_MoveReset
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::Fredbear_MoveReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_MoveReset");

	AOffice04_NightmareFredBear_C_Fredbear_MoveReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_Breathing
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::Fredbear_Breathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Fredbear_Breathing");

	AOffice04_NightmareFredBear_C_Fredbear_Breathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredbearInteractionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::FredbearInteractionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredbearInteractionTimer");

	AOffice04_NightmareFredBear_C_FredbearInteractionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicReset
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::FredBearMechanicReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicReset");

	AOffice04_NightmareFredBear_C_FredBearMechanicReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicChange
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::FredBearMechanicChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FredBearMechanicChange");

	AOffice04_NightmareFredBear_C_FredBearMechanicChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.CountBeforeSwitchUp
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::CountBeforeSwitchUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.CountBeforeSwitchUp");

	AOffice04_NightmareFredBear_C_CountBeforeSwitchUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.GetRoomLocationName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RoomType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARoomInfo_Bp_C*          RoomInfo_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   WhatIsCurrentRoom              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice04_NightmareFredBear_C::GetRoomLocationName(struct FName* RoomType, class ARoomInfo_Bp_C** RoomInfo_Bp, struct FName* WhatIsCurrentRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.GetRoomLocationName");

	AOffice04_NightmareFredBear_C_GetRoomLocationName_Params params;
	params.RoomType = RoomType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoomInfo_Bp != nullptr)
		*RoomInfo_Bp = params.RoomInfo_Bp;
	if (WhatIsCurrentRoom != nullptr)
		*WhatIsCurrentRoom = params.WhatIsCurrentRoom;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FindAdjacentRoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          Room_to_Check                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_NightmareFredBear_C::FindAdjacentRoom(class ARoomInfo_Bp_C* Room_to_Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.FindAdjacentRoom");

	AOffice04_NightmareFredBear_C_FindAdjacentRoom_Params params;
	params.Room_to_Check = Room_to_Check;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.UserConstructionScript");

	AOffice04_NightmareFredBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice04_NightmareFredBear_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__FinishedFunc");

	AOffice04_NightmareFredBear_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice04_NightmareFredBear_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.Timeline_0__UpdateFunc");

	AOffice04_NightmareFredBear_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice04_NightmareFredBear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveBeginPlay");

	AOffice04_NightmareFredBear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_NightmareFredBear_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ReceiveTick");

	AOffice04_NightmareFredBear_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_NightmareFredBear_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.MoveAi");

	AOffice04_NightmareFredBear_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.PickNextRoom
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::PickNextRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.PickNextRoom");

	AOffice04_NightmareFredBear_C_PickNextRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetLightJump
// (BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::ResetLightJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetLightJump");

	AOffice04_NightmareFredBear_C_ResetLightJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.TurnOnEyeEmissive
// (BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::TurnOnEyeEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.TurnOnEyeEmissive");

	AOffice04_NightmareFredBear_C_TurnOnEyeEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetClosetDoOnce
// (BlueprintCallable, BlueprintEvent)

void AOffice04_NightmareFredBear_C::ResetClosetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ResetClosetDoOnce");

	AOffice04_NightmareFredBear_C_ResetClosetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ExecuteUbergraph_Office04_NightmareFredBear
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_NightmareFredBear_C::ExecuteUbergraph_Office04_NightmareFredBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_NightmareFredBear.Office04_NightmareFredBear_C.ExecuteUbergraph_Office04_NightmareFredBear");

	AOffice04_NightmareFredBear_C_ExecuteUbergraph_Office04_NightmareFredBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
