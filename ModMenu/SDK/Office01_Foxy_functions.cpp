
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

// Function Office01_Foxy.Office01_Foxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.UserConstructionScript");

	AOffice01_Foxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReachedKillZone");

	AOffice01_Foxy_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_Foxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReceiveBeginPlay");

	AOffice01_Foxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Foxy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReceiveTick");

	AOffice01_Foxy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cb
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::MoveCurtain_1Cb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cb");

	AOffice01_Foxy_C_MoveCurtain_1Cb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cc
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::MoveCurtain_1Cc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cc");

	AOffice01_Foxy_C_MoveCurtain_1Cc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1c_Gone
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::MoveCurtain_1c_Gone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1c_Gone");

	AOffice01_Foxy_C_MoveCurtain_1c_Gone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Ca
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::MoveCurtain_1Ca()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Ca");

	AOffice01_Foxy_C_MoveCurtain_1Ca_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.CheckBonniePosition
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Foxy_C::CheckBonniePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.CheckBonniePosition");

	AOffice01_Foxy_C_CheckBonniePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Foxy.Office01_Foxy_C.ExecuteUbergraph_Office01_Foxy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Foxy_C::ExecuteUbergraph_Office01_Foxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ExecuteUbergraph_Office01_Foxy");

	AOffice01_Foxy_C_ExecuteUbergraph_Office01_Foxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
