#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FNAFSaveGame.FNAFSaveGame_C
// 0x0278 (0x02A0 - 0x0028)
class UFNAFSaveGame_C : public USaveGame
{
public:
	TMap<struct FName, struct FSaveGame_LevelInfo>     LevelInfo;                                                // 0x0028(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	class UDataTable*                                  LevelTable;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Prizes;                                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	class UDataTable*                                  PrizeTable;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0098(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.CollectedGlitches
	bool                                               UnlockedAudioLog;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	int                                                CompletedLevelsInType;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayedMenuInstructions;                                // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               GlitchtrapDefeated;                                       // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData03[0x50];                                      // 0x00F2(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.GlitchesListenedTo
	unsigned char                                      UnknownData04[0x50];                                      // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.HUBUpdateVOListenedTo
	unsigned char                                      UnknownData05[0x50];                                      // 0x0198(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.HUBUpdateVOCollected
	int                                                NumberOfGamesWon;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumberOfGamesLost;                                        // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               VisitedDarkRoom;                                          // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData07[0x50];                                      // 0x01F1(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.ObjectsEaten
	unsigned char                                      UnknownData08[0x50];                                      // 0x0248(0x0050) UNKNOWN PROPERTY: SetProperty FNAFSaveGame.FNAFSaveGame_C.CollectedCoins
	bool                                               SubtitlesOn;                                              // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               EULAAgreed;                                               // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Has_Seen_H_Title;                                         // 0x029A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x029B(0x0001) MISSED OFFSET
	int                                                DarkRideHighScore;                                        // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FNAFSaveGame.FNAFSaveGame_C");
		return ptr;
	}


	bool HasListenedToHUBVO(int ItemToFind);
	bool HasListenedToGlitch(int ItemToFind);
	void ListenedToGlitch(int NewItem);
	void GetLevelOfType(TEnumAsByte<EGameTypeEnum> GameType);
	void CheckCompletedLevels(int* Completed_Level_Count);
	int GetGlitchCount();
	void AwardGlitch(int GlitchID);
	void HasGlitch(int GlitchID, bool* Value);
	void GetPrizes(TArray<struct FPrize_Item_Struct>* PrizeItemInfoArray);
	void HasPrize(const struct FName& PrizeID, bool* HasPrize);
	void GetLevelInfoByID(const struct FName& LevelID, struct FSaveGame_LevelInfo* LevelSaveInfo);
	void GetTotalCoinCount(int* PlayerTotalCoins);
	void SetLevelInfo(const struct FName& LevelNameID, const struct FSaveGame_LevelInfo& LevelInfo);
	void GetLevelInfoByName(const struct FString& LevelLoadedName, struct FSaveGame_LevelInfo* LevelInfo, bool* Found, struct FName* LevelNameID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
