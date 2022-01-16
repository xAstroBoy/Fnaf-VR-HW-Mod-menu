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
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.AllPlayersReady
	 */
	struct AMPLobbyGameMode_C_AllPlayersReady_Params
	{
	public:
		bool                                                       AllPlayersReady;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.StartMatch
	 */
	struct AMPLobbyGameMode_C_StartMatch_Params
	{
	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.CheckIfPlayerHasValidSelection
	 */
	struct AMPLobbyGameMode_C_CheckIfPlayerHasValidSelection_Params
	{
	public:
		class ALobbyPlayerController_C*                            Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayerIsValid;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.SelectCharacter
	 */
	struct AMPLobbyGameMode_C_SelectCharacter_Params
	{
	public:
		class ALobbyPlayerController_C*                            Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Desired_Character_ID;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        New_Character_ID;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterInfo                                      New_Character_Info;                                      // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.AddLocalPlayer
	 */
	struct AMPLobbyGameMode_C_AddLocalPlayer_Params
	{
	public:
		class ALobbyPlayerController_C*                            Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.ReceiveBeginPlay
	 */
	struct AMPLobbyGameMode_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.SwitchCharacter
	 */
	struct AMPLobbyGameMode_C_SwitchCharacter_Params
	{
	public:
		class ALobbyPlayerController_C*                            Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        DesiredCharacterID;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.PlayerReady
	 */
	struct AMPLobbyGameMode_C_PlayerReady_Params
	{
	public:
		class ALobbyPlayerController_C*                            Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPLobbyGameMode.MPLobbyGameMode_C.ExecuteUbergraph_MPLobbyGameMode
	 */
	struct AMPLobbyGameMode_C_ExecuteUbergraph_MPLobbyGameMode_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
