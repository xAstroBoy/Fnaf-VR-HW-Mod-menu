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
	 * Function MPGameMode.MPGameMode_C.SpawnControllers
	 */
	struct AMPGameMode_C_SpawnControllers_Params
	{
	};

	/**
	 * Function MPGameMode.MPGameMode_C.SetupAvailableCharacters
	 */
	struct AMPGameMode_C_SetupAvailableCharacters_Params
	{
	};

	/**
	 * Function MPGameMode.MPGameMode_C.PickRandomCharacterClass
	 */
	struct AMPGameMode_C_PickRandomCharacterClass_Params
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.RunCharacterStatuses
	 */
	struct AMPGameMode_C_RunCharacterStatuses_Params
	{
	public:
		float                                                      DeltaSec;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.CheckCharacterStatusByTimer
	 */
	struct AMPGameMode_C_CheckCharacterStatusByTimer_Params
	{
	public:
		class AMPFreddyPawnBase_C*                                 CharacterPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.CheckCharacterStatus
	 */
	struct AMPGameMode_C_CheckCharacterStatus_Params
	{
	public:
		class AMPFreddyPawnBase_C*                                 CharacterPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.SpawnDefaultPawnFor
	 */
	struct AMPGameMode_C_SpawnDefaultPawnFor_Params
	{
	public:
		class AController*                                         NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              StartSpot;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.K2_PostLogin
	 */
	struct AMPGameMode_C_K2_PostLogin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.ReceiveTick
	 */
	struct AMPGameMode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.PerformScare
	 */
	struct AMPGameMode_C_PerformScare_Params
	{
	public:
		class AMPFreddyPawnBase_C*                                 ScareActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.K2_OnSwapPlayerControllers
	 */
	struct AMPGameMode_C_K2_OnSwapPlayerControllers_Params
	{
	public:
		class APlayerController*                                   OldPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   NewPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.TimerUp
	 */
	struct AMPGameMode_C_TimerUp_Params
	{
	};

	/**
	 * Function MPGameMode.MPGameMode_C.AddLocalPlayer
	 */
	struct AMPGameMode_C_AddLocalPlayer_Params
	{
	public:
		class AMPController_C*                                     Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPGameMode.MPGameMode_C.ReceiveBeginPlay
	 */
	struct AMPGameMode_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPGameMode.MPGameMode_C.ExecuteUbergraph_MPGameMode
	 */
	struct AMPGameMode_C_ExecuteUbergraph_MPGameMode_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
