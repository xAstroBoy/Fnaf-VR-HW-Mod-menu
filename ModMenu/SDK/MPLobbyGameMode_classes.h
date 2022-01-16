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
	 * BlueprintGeneratedClass MPLobbyGameMode.MPLobbyGameMode_C
	 * Size -> 0x0050 (FullSize[0x0330] - InheritedSize[0x02E0])
	 */
	class AMPLobbyGameMode_C : public AGameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          CharacterInfoTable;                                      // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMPLobbyUIActor_C*                                   MPUI;                                                    // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NumCharacters;                                           // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NCMX[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ALobbyPlayerController_C*>                    ActivePlayers;                                           // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FString                                              SelectedLevel;                                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        MatchTimer;                                              // 0x0328(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AllPlayersReady(bool* AllPlayersReady);
		void StartMatch();
		void CheckIfPlayerHasValidSelection(class ALobbyPlayerController_C* Controller, bool* PlayerIsValid);
		void SelectCharacter(class ALobbyPlayerController_C* Controller, int Desired_Character_ID, int* New_Character_ID, struct FCharacterInfo* New_Character_Info);
		void AddLocalPlayer(class ALobbyPlayerController_C* Controller);
		void ReceiveBeginPlay();
		void SwitchCharacter(class ALobbyPlayerController_C* Controller, int DesiredCharacterID);
		void PlayerReady(class ALobbyPlayerController_C* Controller);
		void ExecuteUbergraph_MPLobbyGameMode(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
