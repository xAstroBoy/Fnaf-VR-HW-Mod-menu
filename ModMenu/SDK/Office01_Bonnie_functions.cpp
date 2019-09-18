
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

// Function Office01_Bonnie.Office01_Bonnie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Bonnie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.UserConstructionScript");

	AOffice01_Bonnie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_Bonnie_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ReceiveBeginPlay");

	AOffice01_Bonnie_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Bonnie_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.MoveAi");

	AOffice01_Bonnie_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.ForceMoveBonnie
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Bonnie_C::ForceMoveBonnie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ForceMoveBonnie");

	AOffice01_Bonnie_C_ForceMoveBonnie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.Bonnie_SpecialDoorMove
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Bonnie_C::Bonnie_SpecialDoorMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.Bonnie_SpecialDoorMove");

	AOffice01_Bonnie_C_Bonnie_SpecialDoorMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Bonnie_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ReceiveTick");

	AOffice01_Bonnie_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Bonnie.Office01_Bonnie_C.ExecuteUbergraph_Office01_Bonnie
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Bonnie_C::ExecuteUbergraph_Office01_Bonnie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Bonnie.Office01_Bonnie_C.ExecuteUbergraph_Office01_Bonnie");

	AOffice01_Bonnie_C_ExecuteUbergraph_Office01_Bonnie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
