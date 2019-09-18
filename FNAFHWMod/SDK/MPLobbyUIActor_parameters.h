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

// Function MPLobbyUIActor.MPLobbyUIActor_C.UserConstructionScript
struct AMPLobbyUIActor_C_UserConstructionScript_Params
{
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay
struct AMPLobbyUIActor_C_ReceiveBeginPlay_Params
{
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.Init
struct AMPLobbyUIActor_C_Init_Params
{
	class AMPLobbyGameMode_C*                          LobbyGameMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer
struct AMPLobbyUIActor_C_JoinPlayer_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter
struct AMPLobbyUIActor_C_UpdatePlayerCharacter_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch
struct AMPLobbyUIActor_C_StartingMatch_Params
{
	struct FTimerHandle                                TimerHandle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch
struct AMPLobbyUIActor_C_StopMatch_Params
{
};

// Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor
struct AMPLobbyUIActor_C_ExecuteUbergraph_MPLobbyUIActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
