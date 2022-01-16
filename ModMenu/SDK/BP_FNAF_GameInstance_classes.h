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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_FNAF_GameInstance.BP_FNAF_GameInstance_C
	 * Size -> 0x01B5 (FullSize[0x0345] - InheritedSize[0x0190])
	 */
	class UBP_FNAF_GameInstance_C : public UFNAF_GameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0190(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FLevelInfoStruct                                    NextLevelInfo;                                           // 0x0198(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FName                                                CaveatLevel;                                             // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        PlayerCoins;                                             // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NGAS[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, struct FMPPlayerLobbyInfo>                       PlayerSelectedCharacters;                                // 0x0220(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                MainMenuLevel;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DefeatLevel;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VictoryLevel;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SaveSlotName;                                            // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                CurrentLevelNameID;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          LevelDataTable;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          PrizeDataTable;                                          // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        PlayerIndex;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        CurrentLevelNumber;                                      // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInNightmareMode;                                       // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_484A[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFNAFSaveGame_C*                                     SaveGameRef;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TitleLevel;                                              // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LevelToLoadAfterFade;                                    // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DemoMainMenuLevel;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ThanksForPlayingLevel;                                   // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DefeatToTitle;                                           // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoadingLevel;                                          // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasSaveGame;                                             // 0x02EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LastLevelWasDefeat;                                      // 0x02EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GlitchedIntroLevel;                                      // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MH9E[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GlitchTrapLevel;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLoadingFinaleLevel;                                    // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDoneFading;                                            // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoadingInstructionLevel;                               // 0x02FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8XGT[0x5];                                   // 0x02FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AchievementIDs;                                          // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ComingFromGlitchLVL;                                     // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VUMX[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PizzaPartyID;                                            // 0x0314(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInDLC;                                                 // 0x031C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X1AB[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CaveatLevel_Halloween;                                   // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WitheredID;                                              // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        DifficultAdjustmentValue;                                // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                H_VictoryLevel;                                          // 0x0334(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                H_DefeatLevel;                                           // 0x033C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowLoadingScreenAfterFade;                              // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTetheredCameraSensitivity(float* TetheredCameraSensitivityValue);
		void GetFLCameraSensitivity(float* FLCameraSensitivityValue);
		void GetSubtitlesOn(bool* SubtitlesOn);
		void GiveAllAchievements();
		void GetAvailablePrizesForLevel(TArray<class FName>* AvailablePrizes);
		void AttemptAwardSpecialPrize();
		void SaveGameSlot();
		void CheckforAchievementCompletion();
		void GiveBasketBall(struct FPrize_Item_Struct* Prize);
		void HasDefeatedGlitchtrap(bool* GlitchtrapDefeated);
		void DefeatGlitchtrap();
		void SetGlitchListenedTo(int NewItem);
		void GetInstructionWidget(class UClass** Next_Level_Info_Instructions_Widget);
		void UnlockAllPrizes();
		void UnlockAllGlitches();
		void GetAchievementData(const class FName& AchievementID, float* Progress, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bFoundID);
		void AfterFadeLevelLoader();
		void FadeOutWithLevelLoad(const class FName& LevelToLoadAfterFade, bool Skip_Fade_out, bool ShowLoadingScreen);
		class AFadeHandlerForPause_C* FadeOut(bool Skip_Fade);
		void FadeOutWithTimerEvent(const class FScriptDelegate& OnFadeFinishedEvent, bool Skip_Fade_out);
		void AwardGlitch(int GlitchID);
		void HasGlitch(int GlitchID, bool* Value);
		void UpdateGlitchtrapStage();
		void GetGlitchtrapStage(int* CurrentGlitchtrapStage);
		void InitSaveGame();
		bool HasCoin(int CoinID);
		void GetSavedLevelInfo(struct FSaveGame_LevelInfo* LevelInfo);
		void HasPrize(const class FName& PrizeID, bool* HasPrize);
		void EnableNightmareMode(bool IsInNightmareMode);
		void IsNightmareModeEnabled(bool* IsInNightmareMode);
		int GetLevelNumber();
		void AwardRandomPrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, class FName* PrizeID);
		void GetRandomAvailablePrize(bool* ValidPrize, struct FPrize_Item_Struct* Prize, class FName* PrizeID);
		void GetAvailablePrizesBase(TArray<class FName>* AvailablePrizes);
		void GetNumberOfPlayers(int* NumberOfPlayers);
		void GetAllLevelsOfType(GameTypeEnum_EGameTypeEnum Game_Type, TArray<struct FLevelInfoStruct>* LevelsForGameType, TArray<class FName>* LevelIDsForGameType);
		void IsLevelUnlocked(const class FName& LevelID, bool* LevelIsUnlocked);
		void IsLevelBeaten(const class FName& LevelID, bool* LevelCompleted);
		void IsShowtimeUnlocked(bool* ShowtimeUnlocked);
		void FindCurrentLevelID();
		void UpdateCachedCoinCount();
		void ClearSaveGame();
		void GetCurrentLevelID(class FName* CurrentLevelNameID);
		void GetCurrentLevelInfo(struct FLevelInfoStruct* CurrentLevelInfo, int* LevelNumber);
		void UnlockCoin(int CoinID);
		void GetSaveGame(class UFNAFSaveGame_C** SaveGameInfo);
		void SaveLevelVictory();
		void SetupPlayerCharacters(TArray<class ALobbyPlayerController_C*>* LobbyPlayers);
		void GetCoinCount(int* NumberOfCoins);
		void GetLevelInstructions(class FText* LevelInstructions, bool* WidgetIsValid);
		void SpawnLevelDatabase();
		void LoadMainMenu();
		void ReceiveInit();
		void UnlockAllLevels();
		void RunFadeOut();
		void LoadTitle();
		void LoadIntroLevel();
		void LoadGlichedIntroLevel();
		void LoadGallery();
		void FinaleVictory(int NumCoins);
		void UnlockAllCoins();
		void ToggleSubtitles();
		void LoadGlitchKeyhole();
		void LoadCasetteRoom();
		void LoadGameOver();
		void LoadHalloweenHub();
		void ForceLoadHTitle();
		void LoadMainHub();
		void LevelVictory(int NumCoins, bool No_Fade_Out_at_end);
		void LevelDefeat();
		void LoadHSplash();
		void LoadGearGame();
		void LoadDarkRide();
		void RestartCurrentLevel();
		void LoadHollidayLevel();
		void FinishCaveat(int Difficulty);
		void LoadLevel(const class FName& LevelID, const struct FLevelInfoStruct& LevelInfo);
		void ExecuteUbergraph_BP_FNAF_GameInstance(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
