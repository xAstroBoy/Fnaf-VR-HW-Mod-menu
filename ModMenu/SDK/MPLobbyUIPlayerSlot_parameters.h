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

// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer
struct UMPLobbyUIPlayerSlot_C_JoinPlayer_Params
{
};

// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter
struct UMPLobbyUIPlayerSlot_C_UpdateCharacter_Params
{
	struct FText                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init
struct UMPLobbyUIPlayerSlot_C_Init_Params
{
	int                                                PlayerNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot
struct UMPLobbyUIPlayerSlot_C_ExecuteUbergraph_MPLobbyUIPlayerSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
