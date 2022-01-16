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
	 * Function LobbyPlayerController.LobbyPlayerController_C.GetPlayerNumber
	 */
	struct ALobbyPlayerController_C_GetPlayerNumber_Params
	{
	public:
		int                                                        PlayerNumber;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.IsPlayerReady
	 */
	struct ALobbyPlayerController_C_IsPlayerReady_Params
	{
	public:
		bool                                                       IsConfirmed;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.GetCharacterID
	 */
	struct ALobbyPlayerController_C_GetCharacterID_Params
	{
	public:
		int                                                        Character_ID;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_2
	 */
	struct ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.InpActEvt_JoinGame_K2Node_InputActionEvent_1
	 */
	struct ALobbyPlayerController_C_InpActEvt_JoinGame_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1
	 */
	struct ALobbyPlayerController_C_InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.ActivatePlayer
	 */
	struct ALobbyPlayerController_C_ActivatePlayer_Params
	{
	public:
		int                                                        PlayerNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.UpdateCharacter
	 */
	struct ALobbyPlayerController_C_UpdateCharacter_Params
	{
	public:
		int                                                        Character_ID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerAccepted
	 */
	struct ALobbyPlayerController_C_OnPlayerAccepted_Params
	{
	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.OnPlayerRejected
	 */
	struct ALobbyPlayerController_C_OnPlayerRejected_Params
	{
	};

	/**
	 * Function LobbyPlayerController.LobbyPlayerController_C.ExecuteUbergraph_LobbyPlayerController
	 */
	struct ALobbyPlayerController_C_ExecuteUbergraph_LobbyPlayerController_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
