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

// Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady
struct AMPLobbyGameMode_C_AllPlayersReady_Params
{
	bool                                               AllPlayersReady;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch
struct AMPLobbyGameMode_C_StartMatch_Params
{
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection
struct AMPLobbyGameMode_C_CheckIfPlayerHasValidSelection_Params
{
	class ALobbyPlayerController_C*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerIsValid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter
struct AMPLobbyGameMode_C_SelectCharacter_Params
{
	class ALobbyPlayerController_C*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Desired_Character_ID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_Character_ID;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FCharacterInfo                              New_Character_Info;                                       // (Parm, OutParm)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.UserConstructionScript
struct AMPLobbyGameMode_C_UserConstructionScript_Params
{
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer
struct AMPLobbyGameMode_C_AddLocalPlayer_Params
{
	class ALobbyPlayerController_C*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay
struct AMPLobbyGameMode_C_ReceiveBeginPlay_Params
{
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter
struct AMPLobbyGameMode_C_SwitchCharacter_Params
{
	class ALobbyPlayerController_C*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredCharacterID;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady
struct AMPLobbyGameMode_C_PlayerReady_Params
{
	class ALobbyPlayerController_C*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode
struct AMPLobbyGameMode_C_ExecuteUbergraph_MPLobbyGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
