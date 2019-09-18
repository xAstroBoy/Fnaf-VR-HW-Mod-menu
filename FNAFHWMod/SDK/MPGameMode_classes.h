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

// BlueprintGeneratedClass MPGameMode.MPGameMode_C
// 0x0110 (0x04D8 - 0x03C8)
class AMPGameMode_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMPUIGame_C*                                 UI;                                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class APlayerStart*>                        AvailableStartPoints;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AMPFreddyPawnBase_C*>                 AvailablePawns;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector2D                                   SpecEyeMin;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpecEyeMax;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpecTexMin;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpecTexMax;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_To_Stop;                                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TMap<class AMPFreddyPawnBase_C*, struct FMPGMPlayerTracking> PlayersToWatch;                                           // 0x0428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AMPUIDisplayActor_C*                         UIDisplayActor;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AMPController_C*>                     PlayerControllers;                                        // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UDataTable*                                  CharacterTable;                                           // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AMPFreddyPawnBase_C*>                 CharacterPawns;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxScarePlayers;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<struct FName>                               AvailableCharacters;                                      // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Timer;                                                    // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              VictoryTime;                                              // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerForVictory;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       FinishLevelName;                                          // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MPGameMode.MPGameMode_C");
		return ptr;
	}


	void SpawnControllers();
	void SetupAvailableCharacters();
	void PickRandomCharacterClass(class UClass** PawnClass);
	void RunCharacterStatuses(float DeltaSec);
	void CheckCharacterStatusByTimer(class AMPFreddyPawnBase_C* CharacterPawn);
	void CheckCharacterStatus(class AMPFreddyPawnBase_C* CharacterPawn);
	class APawn* SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot);
	void UserConstructionScript();
	void K2_PostLogin(class APlayerController** NewPlayer);
	void ReceiveTick(float* DeltaSeconds);
	void PerformScare(class AMPFreddyPawnBase_C* ScareActor);
	void K2_OnSwapPlayerControllers(class APlayerController** OldPC, class APlayerController** NewPC);
	void TimerUp();
	void AddLocalPlayer(class AMPController_C* Controller);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MPGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
