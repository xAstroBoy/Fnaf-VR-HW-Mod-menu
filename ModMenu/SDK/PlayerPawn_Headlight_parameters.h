#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Flicker Flashlight
struct APlayerPawn_Headlight_C_Flicker_Flashlight_Params
{
	bool                                               Flicker_Light;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.UserConstructionScript
struct APlayerPawn_Headlight_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Flicker
struct APlayerPawn_Headlight_C_Toggle_Flicker_Params
{
	bool                                               Enable_Collision;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TurnOffLightAfterFlicker;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Toggle Light
struct APlayerPawn_Headlight_C_Toggle_Light_Params
{
	bool                                               Power_On;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveTick
struct APlayerPawn_Headlight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.Heavy Flicker
struct APlayerPawn_Headlight_C_Heavy_Flicker_Params
{
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ReceiveBeginPlay
struct APlayerPawn_Headlight_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.ExecuteUbergraph_PlayerPawn_Headlight
struct APlayerPawn_Headlight_C_ExecuteUbergraph_PlayerPawn_Headlight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Headlight.PlayerPawn_Headlight_C.LightTriggered__DelegateSignature
struct APlayerPawn_Headlight_C_LightTriggered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
