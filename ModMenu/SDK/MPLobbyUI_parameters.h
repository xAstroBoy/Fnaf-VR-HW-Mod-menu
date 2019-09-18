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

// Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1
struct UMPLobbyUI_C_Get_MatchStartingText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MPLobbyUI.MPLobbyUI_C.PreConstruct
struct UMPLobbyUI_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyUI.MPLobbyUI_C.JoinPlayer
struct UMPLobbyUI_C_JoinPlayer_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter
struct UMPLobbyUI_C_UpdatePlayerCharacter_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPLobbyUI.MPLobbyUI_C.StartingMatch
struct UMPLobbyUI_C_StartingMatch_Params
{
	struct FTimerHandle                                TimerHandle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPLobbyUI.MPLobbyUI_C.StopMatch
struct UMPLobbyUI_C_StopMatch_Params
{
};

// Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI
struct UMPLobbyUI_C_ExecuteUbergraph_MPLobbyUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
