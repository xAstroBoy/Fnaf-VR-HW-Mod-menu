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

// Function MPUIGame.MPUIGame_C.UpdateVision
struct UMPUIGame_C_UpdateVision_Params
{
	class UWidget*                                     ConeWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIGame.MPUIGame_C.UpdateFlashlightVision
struct UMPUIGame_C_UpdateFlashlightVision_Params
{
};

// Function MPUIGame.MPUIGame_C.ChangeLightState
struct UMPUIGame_C_ChangeLightState_Params
{
	bool                                               LightOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIGame.MPUIGame_C.UpdatePlayerVision
struct UMPUIGame_C_UpdatePlayerVision_Params
{
};

// Function MPUIGame.MPUIGame_C.UpdateCharacterLocations
struct UMPUIGame_C_UpdateCharacterLocations_Params
{
};

// Function MPUIGame.MPUIGame_C.SetupCharacter
struct UMPUIGame_C_SetupCharacter_Params
{
	class AMPFreddyPawnBase_C*                         Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIGame.MPUIGame_C.Construct
struct UMPUIGame_C_Construct_Params
{
};

// Function MPUIGame.MPUIGame_C.UpdateLight
struct UMPUIGame_C_UpdateLight_Params
{
	class AActor*                                      LightActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIGame.MPUIGame_C.Tick
struct UMPUIGame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPUIGame.MPUIGame_C.ExecuteUbergraph_MPUIGame
struct UMPUIGame_C_ExecuteUbergraph_MPUIGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
