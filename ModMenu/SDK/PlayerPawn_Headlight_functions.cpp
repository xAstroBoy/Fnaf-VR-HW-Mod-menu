
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

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Flicker_Light                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Headlight_C::Flicker_Flashlight(bool Flicker_Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight");

	APlayerPawn_Headlight_C_Flicker_Flashlight_Params params;
	params.Flicker_Light = Flicker_Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Headlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.UserConstructionScript");

	APlayerPawn_Headlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Collision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TurnOffLightAfterFlicker       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Headlight_C::Toggle_Flicker(bool Enable_Collision, bool TurnOffLightAfterFlicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker");

	APlayerPawn_Headlight_C_Toggle_Flicker_Params params;
	params.Enable_Collision = Enable_Collision;
	params.TurnOffLightAfterFlicker = TurnOffLightAfterFlicker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Power_On                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Headlight_C::Toggle_Light(bool Power_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light");

	APlayerPawn_Headlight_C_Toggle_Light_Params params;
	params.Power_On = Power_On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Headlight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick");

	APlayerPawn_Headlight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Headlight_C::Heavy_Flicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker");

	APlayerPawn_Headlight_C_Heavy_Flicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Headlight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay");

	APlayerPawn_Headlight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Headlight_C::ExecuteUbergraph_PlayerPawn_Headlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight");

	APlayerPawn_Headlight_C_ExecuteUbergraph_PlayerPawn_Headlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Headlight_C::LightTriggered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature");

	APlayerPawn_Headlight_C_LightTriggered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
