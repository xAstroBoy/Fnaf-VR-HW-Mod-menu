
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

// Function Office01_Chica.Office01_Chica_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Chica_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.UserConstructionScript");

	AOffice01_Chica_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Chica.Office01_Chica_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_Chica_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.ReceiveBeginPlay");

	AOffice01_Chica_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Chica.Office01_Chica_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Chica_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.MoveAi");

	AOffice01_Chica_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Chica.Office01_Chica_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Chica_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.ReceiveTick");

	AOffice01_Chica_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Chica.Office01_Chica_C.Chica_SpecialDoorMove
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Chica_C::Chica_SpecialDoorMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.Chica_SpecialDoorMove");

	AOffice01_Chica_C_Chica_SpecialDoorMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Chica.Office01_Chica_C.ExecuteUbergraph_Office01_Chica
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Chica_C::ExecuteUbergraph_Office01_Chica(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Chica.Office01_Chica_C.ExecuteUbergraph_Office01_Chica");

	AOffice01_Chica_C_ExecuteUbergraph_Office01_Chica_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
