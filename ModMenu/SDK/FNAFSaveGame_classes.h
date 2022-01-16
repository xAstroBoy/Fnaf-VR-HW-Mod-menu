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
	 * BlueprintGeneratedClass FNAFSaveGame.FNAFSaveGame_C
	 * Size -> 0x02A8 (FullSize[0x02D0] - InheritedSize[0x0028])
	 */
	class UFNAFSaveGame_C : public USaveGame
	{
	public:
		TMap<class FName, struct FSaveGame_LevelInfo>              LevelInfo;                                               // 0x0028(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame
		class UDataTable*                                          LevelTable;                                              // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Prizes;                                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame
		class UDataTable*                                          PrizeTable;                                              // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CollectedGlitches[0x50];                                 // 0x0098(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.CollectedGlitches
		bool                                                       UnlockedAudioLog;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E4HI[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CompletedLevelsInType;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPlayedMenuInstructions;                               // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       GlitchtrapDefeated;                                      // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YIQ3[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GlitchesListenedTo[0x50];                                // 0x00F2(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.GlitchesListenedTo
		unsigned char                                              HUBUpdateVOListenedTo[0x50];                             // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.HUBUpdateVOListenedTo
		unsigned char                                              HUBUpdateVOCollected[0x50];                              // 0x0198(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.HUBUpdateVOCollected
		int                                                        NumberOfGamesWon;                                        // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NumberOfGamesLost;                                       // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisitedDarkRoom;                                         // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5GXD[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ObjectsEaten[0x50];                                      // 0x01F1(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.ObjectsEaten
		unsigned char                                              CollectedCoins[0x50];                                    // 0x0248(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.CollectedCoins
		bool                                                       SubtitlesOn;                                             // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       EULAAgreed;                                              // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       Has_Seen_H_Title;                                        // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NCYS[0x1];                                   // 0x029B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        DarkRideHighScore;                                       // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StrangeMaskAquired;                                      // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZGZ0[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GammaSettings;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash
		int                                                        QualityLevel_PCNonVR;                                    // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GammaSliderPOS;                                          // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FL_CameraSensitivityValue;                               // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FL_SensitivitySliderValue;                               // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetheredCameraSensitivityValue;                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetheredSensitivitySliderValue;                          // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool HasListenedToHUBVO(int ItemToFind);
		bool HasListenedToGlitch(int ItemToFind);
		void ListenedToGlitch(int NewItem);
		void GetLevelOfType(GameTypeEnum_EGameTypeEnum GameType);
		void CheckCompletedLevels(int* Completed_Level_Count);
		int GetGlitchCount();
		void AwardGlitch(int GlitchID);
		void HasGlitch(int GlitchID, bool* Value);
		void GetPrizes(TArray<struct FPrize_Item_Struct>* PrizeItemInfoArray);
		void HasPrize(const class FName& PrizeID, bool* HasPrize);
		void GetLevelInfoByID(const class FName& LevelID, struct FSaveGame_LevelInfo* LevelSaveInfo);
		void GetTotalCoinCount(int* PlayerTotalCoins);
		void SetLevelInfo(const class FName& LevelNameID, const struct FSaveGame_LevelInfo& LevelInfo);
		void GetLevelInfoByName(const class FString& LevelLoadedName, struct FSaveGame_LevelInfo* LevelInfo, bool* Found, class FName* LevelNameID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
