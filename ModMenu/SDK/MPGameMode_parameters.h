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

// Function MPGameMode.MPGameMode_C.SpawnControllers
struct AMPGameMode_C_SpawnControllers_Params
{
};

// Function MPGameMode.MPGameMode_C.SetupAvailableCharacters
struct AMPGameMode_C_SetupAvailableCharacters_Params
{
};

// Function MPGameMode.MPGameMode_C.PickRandomCharacterClass
struct AMPGameMode_C_PickRandomCharacterClass_Params
{
	class UClass*                                      PawnClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.RunCharacterStatuses
struct AMPGameMode_C_RunCharacterStatuses_Params
{
	float                                              DeltaSec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer
struct AMPGameMode_C_CheckCharacterStatusByTimer_Params
{
	class AMPFreddyPawnBase_C*                         CharacterPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.CheckCharacterStatus
struct AMPGameMode_C_CheckCharacterStatus_Params
{
	class AMPFreddyPawnBase_C*                         CharacterPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor
struct AMPGameMode_C_SpawnDefaultPawnFor_Params
{
	class AController**                                NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     StartSpot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.UserConstructionScript
struct AMPGameMode_C_UserConstructionScript_Params
{
};

// Function MPGameMode.MPGameMode_C.K2_PostLogin
struct AMPGameMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.ReceiveTick
struct AMPGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.PerformScare
struct AMPGameMode_C_PerformScare_Params
{
	class AMPFreddyPawnBase_C*                         ScareActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers
struct AMPGameMode_C_K2_OnSwapPlayerControllers_Params
{
	class APlayerController**                          OldPC;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          NewPC;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.TimerUp
struct AMPGameMode_C_TimerUp_Params
{
};

// Function MPGameMode.MPGameMode_C.AddLocalPlayer
struct AMPGameMode_C_AddLocalPlayer_Params
{
	class AMPController_C*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPGameMode.MPGameMode_C.ReceiveBeginPlay
struct AMPGameMode_C_ReceiveBeginPlay_Params
{
};

// Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode
struct AMPGameMode_C_ExecuteUbergraph_MPGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
