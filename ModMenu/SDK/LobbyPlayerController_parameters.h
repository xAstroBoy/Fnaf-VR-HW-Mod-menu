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

// Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber
struct ALobbyPlayerController_C_GetPlayerNumber_Params
{
	int                                                PlayerNumber;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady
struct ALobbyPlayerController_C_IsPlayerReady_Params
{
	bool                                               IsConfirmed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID
struct ALobbyPlayerController_C_GetCharacterID_Params
{
	int                                                Character_ID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.UserConstructionScript
struct ALobbyPlayerController_C_UserConstructionScript_Params
{
};

// Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
struct ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1
struct ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
struct ALobbyPlayerController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer
struct ALobbyPlayerController_C_ActivatePlayer_Params
{
	int                                                PlayerNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter
struct ALobbyPlayerController_C_UpdateCharacter_Params
{
	int                                                Character_ID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted
struct ALobbyPlayerController_C_OnPlayerAccepted_Params
{
};

// Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected
struct ALobbyPlayerController_C_OnPlayerRejected_Params
{
};

// Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController
struct ALobbyPlayerController_C_ExecuteUbergraph_LobbyPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
