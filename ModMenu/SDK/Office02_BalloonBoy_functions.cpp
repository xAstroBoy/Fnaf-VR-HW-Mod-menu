
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

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.CheckForMaskType
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_BalloonBoy_C::CheckForMaskType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.CheckForMaskType");

	AOffice02_BalloonBoy_C_CheckForMaskType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice02_BalloonBoy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.UserConstructionScript");

	AOffice02_BalloonBoy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_BalloonBoy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReceiveTick");

	AOffice02_BalloonBoy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice02_BalloonBoy_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReachedKillZone");

	AOffice02_BalloonBoy_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.BalloonBoysEndGame
// (BlueprintCallable, BlueprintEvent)

void AOffice02_BalloonBoy_C::BalloonBoysEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.BalloonBoysEndGame");

	AOffice02_BalloonBoy_C_BalloonBoysEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_BalloonBoy_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.MoveAi");

	AOffice02_BalloonBoy_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ExecuteUbergraph_Office02_BalloonBoy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice02_BalloonBoy_C::ExecuteUbergraph_Office02_BalloonBoy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office02_BalloonBoy.Office02_BalloonBoy_C.ExecuteUbergraph_Office02_BalloonBoy");

	AOffice02_BalloonBoy_C_ExecuteUbergraph_Office02_BalloonBoy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
