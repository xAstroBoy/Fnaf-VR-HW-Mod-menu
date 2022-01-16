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
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetTwoPreviousRoomTransitions
	 */
	struct AOffice_BaseGamemanager_C_GetTwoPreviousRoomTransitions_Params
	{
	public:
		class FName                                                Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FOfficeRoomTransition_Struct>                RoomTransitions;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetPreviousRoomTransitions
	 */
	struct AOffice_BaseGamemanager_C_GetPreviousRoomTransitions_Params
	{
	public:
		class FName                                                Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FOfficeRoomTransition_Struct>                RoomTransitions;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetAIData
	 */
	struct AOffice_BaseGamemanager_C_GetAIData_Params
	{
	public:
		FreddyCharacterType_EFreddyCharacterType                   CharacterType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FOfficeAIDataStruct                                 AIDataStruct;                                            // 0x0000(0x0020)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DataWasFound;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.ClockCountDown
	 */
	struct AOffice_BaseGamemanager_C_ClockCountDown_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomInfo
	 */
	struct AOffice_BaseGamemanager_C_GetRoomInfo_Params
	{
	public:
		class FName                                                RoomName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRoomTransitions
	 */
	struct AOffice_BaseGamemanager_C_GetRoomTransitions_Params
	{
	public:
		class FName                                                Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FOfficeRoomTransition_Struct>                RoomTransitions;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GetRooms
	 */
	struct AOffice_BaseGamemanager_C_GetRooms_Params
	{
	public:
		TArray<class ARoomInfo_Bp_C*>                              ListOfRoomBps;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.UserConstructionScript
	 */
	struct AOffice_BaseGamemanager_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveBeginPlay
	 */
	struct AOffice_BaseGamemanager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.EventStartClock
	 */
	struct AOffice_BaseGamemanager_C_EventStartClock_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.CountDownClock
	 */
	struct AOffice_BaseGamemanager_C_CountDownClock_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.SetStatic
	 */
	struct AOffice_BaseGamemanager_C_SetStatic_Params
	{
	public:
		bool                                                       EnableStatic;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.CharacterStartingMove
	 */
	struct AOffice_BaseGamemanager_C_CharacterStartingMove_Params
	{
	public:
		class AOfficeAiBase_Bp_C*                                  OfficeCharacterAI;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      PrevRom;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartLightFade
	 */
	struct AOffice_BaseGamemanager_C_StartLightFade_Params
	{
	public:
		class AOfficeAiBase_Bp_C*                                  AIWaiting;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.ScreenFaded
	 */
	struct AOffice_BaseGamemanager_C_ScreenFaded_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.ReceiveTick
	 */
	struct AOffice_BaseGamemanager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.StartupStaticCounter
	 */
	struct AOffice_BaseGamemanager_C_StartupStaticCounter_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.GameLost_Error_Fix
	 */
	struct AOffice_BaseGamemanager_C_GameLost_Error_Fix_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.ExecuteUbergraph_Office_BaseGamemanager
	 */
	struct AOffice_BaseGamemanager_C_ExecuteUbergraph_Office_BaseGamemanager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.DestroyProblemAI__DelegateSignature
	 */
	struct AOffice_BaseGamemanager_C_DestroyProblemAI__DelegateSignature_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.FlickerLights__DelegateSignature
	 */
	struct AOffice_BaseGamemanager_C_FlickerLights__DelegateSignature_Params
	{
	};

	/**
	 * Function Office_BaseGamemanager.Office_BaseGamemanager_C.DisableAi__DelegateSignature
	 */
	struct AOffice_BaseGamemanager_C_DisableAi__DelegateSignature_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
