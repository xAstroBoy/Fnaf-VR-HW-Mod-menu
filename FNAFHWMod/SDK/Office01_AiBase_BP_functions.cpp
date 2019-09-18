
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

// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::ResetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetPosition");

	AOffice01_AiBase_BP_C_ResetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.UserConstructionScript");

	AOffice01_AiBase_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc
// (BlueprintEvent)

void AOffice01_AiBase_BP_C::CameraFadeFlicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__FinishedFunc");

	AOffice01_AiBase_BP_C_CameraFadeFlicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc
// (BlueprintEvent)

void AOffice01_AiBase_BP_C::CameraFadeFlicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.CameraFadeFlicker__UpdateFunc");

	AOffice01_AiBase_BP_C_CameraFadeFlicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_AiBase_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveTick");

	AOffice01_AiBase_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::ReachedKillZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReachedKillZone");

	AOffice01_AiBase_BP_C_ReachedKillZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_AiBase_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ReceiveBeginPlay");

	AOffice01_AiBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound
// (BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::TriggerLightSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.TriggerLightSound");

	AOffice01_AiBase_BP_C_TriggerLightSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C**         Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALocPoint_BP_C**         Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_AiBase_BP_C::MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.MoveAi");

	AOffice01_AiBase_BP_C_MoveAi_Params params;
	params.Room = Room;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor
// (BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::ResetAudioTriggerForDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ResetAudioTriggerForDoor");

	AOffice01_AiBase_BP_C_ResetAudioTriggerForDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare
// (BlueprintCallable, BlueprintEvent)

void AOffice01_AiBase_BP_C::TESTINGONLY_ForceJumpscare()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.TESTINGONLY_ForceJumpscare");

	AOffice01_AiBase_BP_C_TESTINGONLY_ForceJumpscare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_AiBase_BP_C::ExecuteUbergraph_Office01_AiBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_AiBase_BP.Office01_AiBase_BP_C.ExecuteUbergraph_Office01_AiBase_BP");

	AOffice01_AiBase_BP_C_ExecuteUbergraph_Office01_AiBase_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
