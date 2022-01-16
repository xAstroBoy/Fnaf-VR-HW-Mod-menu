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
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.ReceiveBeginPlay
	 */
	struct AMPLobbyUIActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.Init
	 */
	struct AMPLobbyUIActor_C_Init_Params
	{
	public:
		class AMPLobbyGameMode_C*                                  LobbyGameMode;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.JoinPlayer
	 */
	struct AMPLobbyUIActor_C_JoinPlayer_Params
	{
	public:
		int                                                        PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.UpdatePlayerCharacter
	 */
	struct AMPLobbyUIActor_C_UpdatePlayerCharacter_Params
	{
	public:
		int                                                        PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CharacterName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.StartingMatch
	 */
	struct AMPLobbyUIActor_C_StartingMatch_Params
	{
	public:
		struct FTimerHandle                                        TimerHandle;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.StopMatch
	 */
	struct AMPLobbyUIActor_C_StopMatch_Params
	{
	};

	/**
	 * Function MPLobbyUIActor.MPLobbyUIActor_C.ExecuteUbergraph_MPLobbyUIActor
	 */
	struct AMPLobbyUIActor_C_ExecuteUbergraph_MPLobbyUIActor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
