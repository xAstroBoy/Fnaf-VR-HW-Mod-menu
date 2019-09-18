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

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSubtitlesOn
struct UBP_FNAF_GameInstance_C_GetSubtitlesOn_Params
{
	bool                                               SubtitlesOn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveAllAchievements
struct UBP_FNAF_GameInstance_C_GiveAllAchievements_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizesForLevel
struct UBP_FNAF_GameInstance_C_GetAvailablePrizesForLevel_Params
{
	TArray<struct FName>                               AvailablePrizes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AttemptAwardSpecialPrize
struct UBP_FNAF_GameInstance_C_AttemptAwardSpecialPrize_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveGameSlot
struct UBP_FNAF_GameInstance_C_SaveGameSlot_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.CheckforAchievementCompletion
struct UBP_FNAF_GameInstance_C_CheckforAchievementCompletion_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GiveBasketBall
struct UBP_FNAF_GameInstance_C_GiveBasketBall_Params
{
	struct FPrize_Item_Struct                          Prize;                                                    // (Parm, OutParm)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasDefeatedGlitchtrap
struct UBP_FNAF_GameInstance_C_HasDefeatedGlitchtrap_Params
{
	bool                                               GlitchtrapDefeated;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.DefeatGlitchtrap
struct UBP_FNAF_GameInstance_C_DefeatGlitchtrap_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetGlitchListenedTo
struct UBP_FNAF_GameInstance_C_SetGlitchListenedTo_Params
{
	int                                                NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetInstructionWidget
struct UBP_FNAF_GameInstance_C_GetInstructionWidget_Params
{
	class UClass*                                      Next_Level_Info_Instructions_Widget;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllPrizes
struct UBP_FNAF_GameInstance_C_UnlockAllPrizes_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllGlitches
struct UBP_FNAF_GameInstance_C_UnlockAllGlitches_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAchievementData
struct UBP_FNAF_GameInstance_C_GetAchievementData_Params
{
	struct FName                                       AchievementID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       LockedDescription;                                        // (Parm, OutParm)
	struct FText                                       UnlockedDescription;                                      // (Parm, OutParm)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AfterFadeLevelLoader
struct UBP_FNAF_GameInstance_C_AfterFadeLevelLoader_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithLevelLoad
struct UBP_FNAF_GameInstance_C_FadeOutWithLevelLoad_Params
{
	struct FName                                       LevelToLoadAfterFade;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip_Fade_out;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOut
struct UBP_FNAF_GameInstance_C_FadeOut_Params
{
	bool                                               Skip_Fade;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFadeHandlerForPause_C*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FadeOutWithTimerEvent
struct UBP_FNAF_GameInstance_C_FadeOutWithTimerEvent_Params
{
	struct FScriptDelegate                             OnFadeFinishedEvent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Skip_Fade_out;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardGlitch
struct UBP_FNAF_GameInstance_C_AwardGlitch_Params
{
	int                                                GlitchID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasGlitch
struct UBP_FNAF_GameInstance_C_HasGlitch_Params
{
	int                                                GlitchID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateGlitchtrapStage
struct UBP_FNAF_GameInstance_C_UpdateGlitchtrapStage_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetGlitchtrapStage
struct UBP_FNAF_GameInstance_C_GetGlitchtrapStage_Params
{
	int                                                CurrentGlitchtrapStage;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.InitSaveGame
struct UBP_FNAF_GameInstance_C_InitSaveGame_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasCoin
struct UBP_FNAF_GameInstance_C_HasCoin_Params
{
	int                                                CoinID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSavedLevelInfo
struct UBP_FNAF_GameInstance_C_GetSavedLevelInfo_Params
{
	struct FSaveGame_LevelInfo                         LevelInfo;                                                // (Parm, OutParm)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.HasPrize
struct UBP_FNAF_GameInstance_C_HasPrize_Params
{
	struct FName                                       PrizeID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasPrize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.EnableNightmareMode
struct UBP_FNAF_GameInstance_C_EnableNightmareMode_Params
{
	bool                                               IsInNightmareMode;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsNightmareModeEnabled
struct UBP_FNAF_GameInstance_C_IsNightmareModeEnabled_Params
{
	bool                                               IsInNightmareMode;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelNumber
struct UBP_FNAF_GameInstance_C_GetLevelNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.AwardRandomPrize
struct UBP_FNAF_GameInstance_C_AwardRandomPrize_Params
{
	bool                                               ValidPrize;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPrize_Item_Struct                          Prize;                                                    // (Parm, OutParm)
	struct FName                                       PrizeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetRandomAvailablePrize
struct UBP_FNAF_GameInstance_C_GetRandomAvailablePrize_Params
{
	bool                                               ValidPrize;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPrize_Item_Struct                          Prize;                                                    // (Parm, OutParm)
	struct FName                                       PrizeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAvailablePrizes
struct UBP_FNAF_GameInstance_C_GetAvailablePrizes_Params
{
	TArray<struct FName>                               AvailablePrizes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetNumberOfPlayers
struct UBP_FNAF_GameInstance_C_GetNumberOfPlayers_Params
{
	int                                                NumberOfPlayers;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetAllLevelsOfType
struct UBP_FNAF_GameInstance_C_GetAllLevelsOfType_Params
{
	TEnumAsByte<EGameTypeEnum>                         Game_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLevelInfoStruct>                    LevelsForGameType;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               LevelIDsForGameType;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelUnlocked
struct UBP_FNAF_GameInstance_C_IsLevelUnlocked_Params
{
	struct FName                                       LevelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelIsUnlocked;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsLevelBeaten
struct UBP_FNAF_GameInstance_C_IsLevelBeaten_Params
{
	struct FName                                       LevelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.IsShowtimeUnlocked
struct UBP_FNAF_GameInstance_C_IsShowtimeUnlocked_Params
{
	bool                                               ShowtimeUnlocked;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FindCurrentLevelID
struct UBP_FNAF_GameInstance_C_FindCurrentLevelID_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UpdateCachedCoinCount
struct UBP_FNAF_GameInstance_C_UpdateCachedCoinCount_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ClearSaveGame
struct UBP_FNAF_GameInstance_C_ClearSaveGame_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelID
struct UBP_FNAF_GameInstance_C_GetCurrentLevelID_Params
{
	struct FName                                       CurrentLevelNameID;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCurrentLevelInfo
struct UBP_FNAF_GameInstance_C_GetCurrentLevelInfo_Params
{
	struct FLevelInfoStruct                            CurrentLevelInfo;                                         // (Parm, OutParm)
	int                                                LevelNumber;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockCoin
struct UBP_FNAF_GameInstance_C_UnlockCoin_Params
{
	int                                                CoinID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetSaveGame
struct UBP_FNAF_GameInstance_C_GetSaveGame_Params
{
	class UFNAFSaveGame_C*                             SaveGameInfo;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SaveLevelVictory
struct UBP_FNAF_GameInstance_C_SaveLevelVictory_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SetupPlayerCharacters
struct UBP_FNAF_GameInstance_C_SetupPlayerCharacters_Params
{
	TArray<class ALobbyPlayerController_C*>            LobbyPlayers;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetCoinCount
struct UBP_FNAF_GameInstance_C_GetCoinCount_Params
{
	int                                                NumberOfCoins;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.GetLevelInstructions
struct UBP_FNAF_GameInstance_C_GetLevelInstructions_Params
{
	struct FText                                       LevelInstructions;                                        // (Parm, OutParm)
	bool                                               WidgetIsValid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.SpawnLevelDatabase
struct UBP_FNAF_GameInstance_C_SpawnLevelDatabase_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadLevel
struct UBP_FNAF_GameInstance_C_LoadLevel_Params
{
	struct FName                                       LevelID;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLevelInfoStruct                            LevelInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinishCaveat
struct UBP_FNAF_GameInstance_C_FinishCaveat_Params
{
	int                                                Difficulty_Adjustment;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RestartCurrentLevel
struct UBP_FNAF_GameInstance_C_RestartCurrentLevel_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelDefeat
struct UBP_FNAF_GameInstance_C_LevelDefeat_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LevelVictory
struct UBP_FNAF_GameInstance_C_LevelVictory_Params
{
	int                                                NumCoins;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               No_Fade_Out_at_end;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadMainMenu
struct UBP_FNAF_GameInstance_C_LoadMainMenu_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ReceiveInit
struct UBP_FNAF_GameInstance_C_ReceiveInit_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllLevels
struct UBP_FNAF_GameInstance_C_UnlockAllLevels_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.RunFadeOut
struct UBP_FNAF_GameInstance_C_RunFadeOut_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadTitle
struct UBP_FNAF_GameInstance_C_LoadTitle_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadIntroLevel
struct UBP_FNAF_GameInstance_C_LoadIntroLevel_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlichedIntroLevel
struct UBP_FNAF_GameInstance_C_LoadGlichedIntroLevel_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGallery
struct UBP_FNAF_GameInstance_C_LoadGallery_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.FinaleVictory
struct UBP_FNAF_GameInstance_C_FinaleVictory_Params
{
	int                                                NumCoins;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.UnlockAllCoins
struct UBP_FNAF_GameInstance_C_UnlockAllCoins_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ToggleSubtitles
struct UBP_FNAF_GameInstance_C_ToggleSubtitles_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGlitchKeyhole
struct UBP_FNAF_GameInstance_C_LoadGlitchKeyhole_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadCasetteRoom
struct UBP_FNAF_GameInstance_C_LoadCasetteRoom_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.LoadGameOver
struct UBP_FNAF_GameInstance_C_LoadGameOver_Params
{
};

// Function BP_FNAF_GameInstance.BP_FNAF_GameInstance_C.ExecuteUbergraph_BP_FNAF_GameInstance
struct UBP_FNAF_GameInstance_C_ExecuteUbergraph_BP_FNAF_GameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
