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
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetTetheredCameraSensitivity
	 */
	struct UBP_FNAF_GameInstance_C_GetTetheredCameraSensitivity_Params
	{
	public:
		float                                                      TetheredCameraSensitivityValue;                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetFLCameraSensitivity
	 */
	struct UBP_FNAF_GameInstance_C_GetFLCameraSensitivity_Params
	{
	public:
		float                                                      FLCameraSensitivityValue;                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn
	 */
	struct UBP_FNAF_GameInstance_C_GetSubtitlesOn_Params
	{
	public:
		bool                                                       SubtitlesOn;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements
	 */
	struct UBP_FNAF_GameInstance_C_GiveAllAchievements_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel
	 */
	struct UBP_FNAF_GameInstance_C_GetAvailablePrizesForLevel_Params
	{
	public:
		TArray<class FName>                                        AvailablePrizes;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize
	 */
	struct UBP_FNAF_GameInstance_C_AttemptAwardSpecialPrize_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot
	 */
	struct UBP_FNAF_GameInstance_C_SaveGameSlot_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion
	 */
	struct UBP_FNAF_GameInstance_C_CheckforAchievementCompletion_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall
	 */
	struct UBP_FNAF_GameInstance_C_GiveBasketBall_Params
	{
	public:
		struct FPrize_Item_Struct                                  Prize;                                                   // 0x0000(0x0068)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap
	 */
	struct UBP_FNAF_GameInstance_C_HasDefeatedGlitchtrap_Params
	{
	public:
		bool                                                       GlitchtrapDefeated;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap
	 */
	struct UBP_FNAF_GameInstance_C_DefeatGlitchtrap_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo
	 */
	struct UBP_FNAF_GameInstance_C_SetGlitchListenedTo_Params
	{
	public:
		int                                                        NewItem;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget
	 */
	struct UBP_FNAF_GameInstance_C_GetInstructionWidget_Params
	{
	public:
		class UClass*                                              Next_Level_Info_Instructions_Widget;                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes
	 */
	struct UBP_FNAF_GameInstance_C_UnlockAllPrizes_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches
	 */
	struct UBP_FNAF_GameInstance_C_UnlockAllGlitches_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData
	 */
	struct UBP_FNAF_GameInstance_C_GetAchievementData_Params
	{
	public:
		class FName                                                AchievementID;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                LockedDescription;                                       // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                UnlockedDescription;                                     // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       bFoundID;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader
	 */
	struct UBP_FNAF_GameInstance_C_AfterFadeLevelLoader_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad
	 */
	struct UBP_FNAF_GameInstance_C_FadeOutWithLevelLoad_Params
	{
	public:
		class FName                                                LevelToLoadAfterFade;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Skip_Fade_out;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowLoadingScreen;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut
	 */
	struct UBP_FNAF_GameInstance_C_FadeOut_Params
	{
	public:
		bool                                                       Skip_Fade;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AFadeHandlerForPause_C*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent
	 */
	struct UBP_FNAF_GameInstance_C_FadeOutWithTimerEvent_Params
	{
	public:
		class FScriptDelegate                                      OnFadeFinishedEvent;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Skip_Fade_out;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch
	 */
	struct UBP_FNAF_GameInstance_C_AwardGlitch_Params
	{
	public:
		int                                                        GlitchID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch
	 */
	struct UBP_FNAF_GameInstance_C_HasGlitch_Params
	{
	public:
		int                                                        GlitchID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage
	 */
	struct UBP_FNAF_GameInstance_C_UpdateGlitchtrapStage_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage
	 */
	struct UBP_FNAF_GameInstance_C_GetGlitchtrapStage_Params
	{
	public:
		int                                                        CurrentGlitchtrapStage;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame
	 */
	struct UBP_FNAF_GameInstance_C_InitSaveGame_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin
	 */
	struct UBP_FNAF_GameInstance_C_HasCoin_Params
	{
	public:
		int                                                        CoinID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo
	 */
	struct UBP_FNAF_GameInstance_C_GetSavedLevelInfo_Params
	{
	public:
		struct FSaveGame_LevelInfo                                 LevelInfo;                                               // 0x0000(0x0058)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize
	 */
	struct UBP_FNAF_GameInstance_C_HasPrize_Params
	{
	public:
		class FName                                                PrizeID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasPrize;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode
	 */
	struct UBP_FNAF_GameInstance_C_EnableNightmareMode_Params
	{
	public:
		bool                                                       IsInNightmareMode;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled
	 */
	struct UBP_FNAF_GameInstance_C_IsNightmareModeEnabled_Params
	{
	public:
		bool                                                       IsInNightmareMode;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber
	 */
	struct UBP_FNAF_GameInstance_C_GetLevelNumber_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize
	 */
	struct UBP_FNAF_GameInstance_C_AwardRandomPrize_Params
	{
	public:
		bool                                                       ValidPrize;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FPrize_Item_Struct                                  Prize;                                                   // 0x0000(0x0068)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		class FName                                                PrizeID;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize
	 */
	struct UBP_FNAF_GameInstance_C_GetRandomAvailablePrize_Params
	{
	public:
		bool                                                       ValidPrize;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FPrize_Item_Struct                                  Prize;                                                   // 0x0000(0x0068)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		class FName                                                PrizeID;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesBase
	 */
	struct UBP_FNAF_GameInstance_C_GetAvailablePrizesBase_Params
	{
	public:
		TArray<class FName>                                        AvailablePrizes;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers
	 */
	struct UBP_FNAF_GameInstance_C_GetNumberOfPlayers_Params
	{
	public:
		int                                                        NumberOfPlayers;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType
	 */
	struct UBP_FNAF_GameInstance_C_GetAllLevelsOfType_Params
	{
	public:
		GameTypeEnum_EGameTypeEnum                                 Game_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FLevelInfoStruct>                            LevelsForGameType;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
		TArray<class FName>                                        LevelIDsForGameType;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked
	 */
	struct UBP_FNAF_GameInstance_C_IsLevelUnlocked_Params
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LevelIsUnlocked;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten
	 */
	struct UBP_FNAF_GameInstance_C_IsLevelBeaten_Params
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LevelCompleted;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked
	 */
	struct UBP_FNAF_GameInstance_C_IsShowtimeUnlocked_Params
	{
	public:
		bool                                                       ShowtimeUnlocked;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID
	 */
	struct UBP_FNAF_GameInstance_C_FindCurrentLevelID_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount
	 */
	struct UBP_FNAF_GameInstance_C_UpdateCachedCoinCount_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame
	 */
	struct UBP_FNAF_GameInstance_C_ClearSaveGame_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID
	 */
	struct UBP_FNAF_GameInstance_C_GetCurrentLevelID_Params
	{
	public:
		class FName                                                CurrentLevelNameID;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo
	 */
	struct UBP_FNAF_GameInstance_C_GetCurrentLevelInfo_Params
	{
	public:
		struct FLevelInfoStruct                                    CurrentLevelInfo;                                        // 0x0000(0x0078)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		int                                                        LevelNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin
	 */
	struct UBP_FNAF_GameInstance_C_UnlockCoin_Params
	{
	public:
		int                                                        CoinID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame
	 */
	struct UBP_FNAF_GameInstance_C_GetSaveGame_Params
	{
	public:
		class UFNAFSaveGame_C*                                     SaveGameInfo;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory
	 */
	struct UBP_FNAF_GameInstance_C_SaveLevelVictory_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters
	 */
	struct UBP_FNAF_GameInstance_C_SetupPlayerCharacters_Params
	{
	public:
		TArray<class ALobbyPlayerController_C*>                    LobbyPlayers;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount
	 */
	struct UBP_FNAF_GameInstance_C_GetCoinCount_Params
	{
	public:
		int                                                        NumberOfCoins;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions
	 */
	struct UBP_FNAF_GameInstance_C_GetLevelInstructions_Params
	{
	public:
		class FText                                                LevelInstructions;                                       // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       WidgetIsValid;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase
	 */
	struct UBP_FNAF_GameInstance_C_SpawnLevelDatabase_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu
	 */
	struct UBP_FNAF_GameInstance_C_LoadMainMenu_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit
	 */
	struct UBP_FNAF_GameInstance_C_ReceiveInit_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels
	 */
	struct UBP_FNAF_GameInstance_C_UnlockAllLevels_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut
	 */
	struct UBP_FNAF_GameInstance_C_RunFadeOut_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle
	 */
	struct UBP_FNAF_GameInstance_C_LoadTitle_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel
	 */
	struct UBP_FNAF_GameInstance_C_LoadIntroLevel_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel
	 */
	struct UBP_FNAF_GameInstance_C_LoadGlichedIntroLevel_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery
	 */
	struct UBP_FNAF_GameInstance_C_LoadGallery_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory
	 */
	struct UBP_FNAF_GameInstance_C_FinaleVictory_Params
	{
	public:
		int                                                        NumCoins;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins
	 */
	struct UBP_FNAF_GameInstance_C_UnlockAllCoins_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles
	 */
	struct UBP_FNAF_GameInstance_C_ToggleSubtitles_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole
	 */
	struct UBP_FNAF_GameInstance_C_LoadGlitchKeyhole_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom
	 */
	struct UBP_FNAF_GameInstance_C_LoadCasetteRoom_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver
	 */
	struct UBP_FNAF_GameInstance_C_LoadGameOver_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHalloweenHub
	 */
	struct UBP_FNAF_GameInstance_C_LoadHalloweenHub_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ForceLoadHTitle
	 */
	struct UBP_FNAF_GameInstance_C_ForceLoadHTitle_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainHub
	 */
	struct UBP_FNAF_GameInstance_C_LoadMainHub_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory
	 */
	struct UBP_FNAF_GameInstance_C_LevelVictory_Params
	{
	public:
		int                                                        NumCoins;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       No_Fade_Out_at_end;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat
	 */
	struct UBP_FNAF_GameInstance_C_LevelDefeat_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHSplash
	 */
	struct UBP_FNAF_GameInstance_C_LoadHSplash_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGearGame
	 */
	struct UBP_FNAF_GameInstance_C_LoadGearGame_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadDarkRide
	 */
	struct UBP_FNAF_GameInstance_C_LoadDarkRide_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel
	 */
	struct UBP_FNAF_GameInstance_C_RestartCurrentLevel_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadHollidayLevel
	 */
	struct UBP_FNAF_GameInstance_C_LoadHollidayLevel_Params
	{
	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat
	 */
	struct UBP_FNAF_GameInstance_C_FinishCaveat_Params
	{
	public:
		int                                                        Difficulty;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel
	 */
	struct UBP_FNAF_GameInstance_C_LoadLevel_Params
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLevelInfoStruct                                    LevelInfo;                                               // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance
	 */
	struct UBP_FNAF_GameInstance_C_ExecuteUbergraph_BP_FNAF_GameInstance_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
