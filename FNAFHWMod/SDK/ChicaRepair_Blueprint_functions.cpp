
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

// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AChicaRepair_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.UserConstructionScript");

	AChicaRepair_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AChicaRepair_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveBeginPlay");

	AChicaRepair_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.KillPlayer
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_Blueprint_C::KillPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.KillPlayer");

	AChicaRepair_Blueprint_C_KillPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveTick");

	AChicaRepair_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_Blueprint_C::ButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ButtonPressed");

	AChicaRepair_Blueprint_C_ButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Left
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_Blueprint_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Left");

	AChicaRepair_Blueprint_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Right
// (BlueprintCallable, BlueprintEvent)

void AChicaRepair_Blueprint_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Right");

	AChicaRepair_Blueprint_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ExecuteUbergraph_ChicaRepair_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AChicaRepair_Blueprint_C::ExecuteUbergraph_ChicaRepair_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ExecuteUbergraph_ChicaRepair_Blueprint");

	AChicaRepair_Blueprint_C_ExecuteUbergraph_ChicaRepair_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
