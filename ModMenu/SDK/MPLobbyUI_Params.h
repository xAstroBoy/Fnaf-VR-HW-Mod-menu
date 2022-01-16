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
	 * Function MPLobbyUI.MPLobbyUI_C.Get_MatchStartingText_Text_1
	 */
	struct UMPLobbyUI_C_Get_MatchStartingText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.PreConstruct
	 */
	struct UMPLobbyUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.JoinPlayer
	 */
	struct UMPLobbyUI_C_JoinPlayer_Params
	{
	public:
		int                                                        PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.UpdatePlayerCharacter
	 */
	struct UMPLobbyUI_C_UpdatePlayerCharacter_Params
	{
	public:
		int                                                        PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CharacterName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.StartingMatch
	 */
	struct UMPLobbyUI_C_StartingMatch_Params
	{
	public:
		struct FTimerHandle                                        TimerHandle;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.StopMatch
	 */
	struct UMPLobbyUI_C_StopMatch_Params
	{
	};

	/**
	 * Function MPLobbyUI.MPLobbyUI_C.ExecuteUbergraph_MPLobbyUI
	 */
	struct UMPLobbyUI_C_ExecuteUbergraph_MPLobbyUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
