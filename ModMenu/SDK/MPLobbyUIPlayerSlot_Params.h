#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.JoinPlayer
	 */
	struct UMPLobbyUIPlayerSlot_C_JoinPlayer_Params
	{
	};

	/**
	 * Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.UpdateCharacter
	 */
	struct UMPLobbyUIPlayerSlot_C_UpdateCharacter_Params
	{
	public:
		class FText                                                CharacterName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.Init
	 */
	struct UMPLobbyUIPlayerSlot_C_Init_Params
	{
	public:
		int                                                        PlayerNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUIPlayerSlot.MPLobbyUIPlayerSlot_C.ExecuteUbergraph_MPLobbyUIPlayerSlot
	 */
	struct UMPLobbyUIPlayerSlot_C_ExecuteUbergraph_MPLobbyUIPlayerSlot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
