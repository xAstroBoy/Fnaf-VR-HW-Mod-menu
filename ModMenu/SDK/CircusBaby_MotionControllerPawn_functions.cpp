
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

// Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACircusBaby_MotionControllerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.UserConstructionScript");

	ACircusBaby_MotionControllerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACircusBaby_MotionControllerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ReceiveBeginPlay");

	ACircusBaby_MotionControllerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACircusBaby_MotionControllerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ReceiveTick");

	ACircusBaby_MotionControllerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ExecuteUbergraph_CircusBaby_MotionControllerPawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACircusBaby_MotionControllerPawn_C::ExecuteUbergraph_CircusBaby_MotionControllerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C.ExecuteUbergraph_CircusBaby_MotionControllerPawn");

	ACircusBaby_MotionControllerPawn_C_ExecuteUbergraph_CircusBaby_MotionControllerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
