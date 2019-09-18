
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

// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice_MotionControllerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.UserConstructionScript");

	AOffice_MotionControllerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice_MotionControllerPawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.Timeline_0__FinishedFunc");

	AOffice_MotionControllerPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice_MotionControllerPawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.Timeline_0__UpdateFunc");

	AOffice_MotionControllerPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice_MotionControllerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.ReceiveBeginPlay");

	AOffice_MotionControllerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.TriggerNightmareScareSequence
// (BlueprintCallable, BlueprintEvent)

void AOffice_MotionControllerPawn_C::TriggerNightmareScareSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.TriggerNightmareScareSequence");

	AOffice_MotionControllerPawn_C_TriggerNightmareScareSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.ExecuteUbergraph_Office_MotionControllerPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice_MotionControllerPawn_C::ExecuteUbergraph_Office_MotionControllerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office_MotionControllerPawn.Office_MotionControllerPawn_C.ExecuteUbergraph_Office_MotionControllerPawn");

	AOffice_MotionControllerPawn_C_ExecuteUbergraph_Office_MotionControllerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
