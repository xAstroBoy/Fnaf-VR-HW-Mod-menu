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

// BlueprintGeneratedClass MPLobbyGameMode.MPLobbyGameMode_C
// 0x0050 (0x0418 - 0x03C8)
class AMPLobbyGameMode_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  CharacterInfoTable;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMPLobbyUIActor_C*                           MPUI;                                                     // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NumCharacters;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TArray<class ALobbyPlayerController_C*>            ActivePlayers;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     SelectedLevel;                                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                MatchTimer;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MPLobbyGameMode.MPLobbyGameMode_C");
		return ptr;
	}


	void AllPlayersReady(bool* AllPlayersReady);
	void StartMatch();
	void CheckIfPlayerHasValidSelection(class ALobbyPlayerController_C* Controller, bool* PlayerIsValid);
	void SelectCharacter(class ALobbyPlayerController_C* Controller, int Desired_Character_ID, int* New_Character_ID, struct FCharacterInfo* New_Character_Info);
	void UserConstructionScript();
	void AddLocalPlayer(class ALobbyPlayerController_C* Controller);
	void ReceiveBeginPlay();
	void SwitchCharacter(class ALobbyPlayerController_C* Controller, int DesiredCharacterID);
	void PlayerReady(class ALobbyPlayerController_C* Controller);
	void ExecuteUbergraph_MPLobbyGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
