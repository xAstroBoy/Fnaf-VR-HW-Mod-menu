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

// Class freddys.AICharacterBase
// 0x0000 (0x0740 - 0x0740)
class AAICharacterBase : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.AICharacterBase");
		return ptr;
	}

};


// Class freddys.AICommonFunctionalities
// 0x0000 (0x0028 - 0x0028)
class UAICommonFunctionalities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.AICommonFunctionalities");
		return ptr;
	}


	bool STATIC_isVerticalAxis(EAIScareDirection Direction);
	bool STATIC_isValidAxisDirection(EAIBaseAxisDirection Axis, EAIScareDirection Direction);
	bool STATIC_isHorizontalAxis(EAIScareDirection Direction);
};


// Class freddys.FlowGraphConnector
// 0x0030 (0x0270 - 0x0240)
class UFlowGraphConnector : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFlowGraphDisconnected;                                  // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UFlowGraphConnector*                         ConnectedTo;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              FlowConnectorDistance;                                    // 0x0260(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0264(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FlowGraphConnector");
		return ptr;
	}


	void OnDisconnected();
	void OnConnectorRegistered();
	void OnConnected(class UFlowGraphConnector* OtherConnector);
	bool HasFlow();
	class AFlowGraphNode* GetNodeOwner();
	class AFlowGraphNode* GetConnectedNode();
	class UFlowGraphConnector* GetConnectedConnector();
	void Disconnect();
	void Connect(class UFlowGraphConnector* OtherConnector);
	void CheckConnection();
};


// Class freddys.FlowGraphNode
// 0x0058 (0x0380 - 0x0328)
class AFlowGraphNode : public AActor
{
public:
	bool                                               bIsFlowSource;                                            // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsConnectedToFlow;                                       // 0x0329(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x032A(0x0056) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FlowGraphNode");
		return ptr;
	}


	void UnregisterConnector(class UFlowGraphConnector* Connector);
	void SetFlowSource(bool EnableAsFlowSource);
	void RegisterConnector(class UFlowGraphConnector* Connector);
	void OnFlowChanged();
	void OnConnectorDisconnected(class UFlowGraphConnector* MyConnector);
	void OnConnectorConnected(class UFlowGraphConnector* MyConnector, class UFlowGraphConnector* TheirConnector);
	bool IsFlowSource();
	bool HasFlow();
	TArray<class UFlowGraphConnector*> GetConnectors();
	void FlowTypeSwitch(EFlowGraphFlowType* FlowType);
	void CheckConnections();
};


// Class freddys.AchievementsFunctions
// 0x0000 (0x0028 - 0x0028)
class UAchievementsFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.AchievementsFunctions");
		return ptr;
	}


	void STATIC_ClearAllAchievements(class UObject* WorldContextObject);
};


// Class freddys.FNAFEditorSettings
// 0x0008 (0x0040 - 0x0038)
class UFNAFEditorSettings : public UDeveloperSettings
{
public:
	EFNAFGameType                                      GameType;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FNAFEditorSettings");
		return ptr;
	}

};


// Class freddys.FNAFGameMode
// 0x0010 (0x0420 - 0x0410)
class AFNAFGameMode : public AGameMode
{
public:
	class UClass*                                      LevelDBClass;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelDB*                                    LevelDBInstance;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FNAFGameMode");
		return ptr;
	}


	void SpawnLevelDB();
	void OnSetLevelDB();
};


// Class freddys.FNAFGamestate
// 0x0008 (0x0390 - 0x0388)
class AFNAFGamestate : public AGameState
{
public:
	EGLVictoryState                                    VictoryState;                                             // 0x0388(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGLGameState                                       GameState;                                                // 0x0389(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FNAFGamestate");
		return ptr;
	}


	void SetVictoryCondition(EGLVictoryState victory);
	void SetGameState(EGLGameState State);
	EGLVictoryState GetVictoryCondition();
	EGLGameState GetGameState();
};


// Class freddys.FNAF_Collectables
// 0x0000 (0x0328 - 0x0328)
class AFNAF_Collectables : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FNAF_Collectables");
		return ptr;
	}

};


// Class freddys.FNAF_GameInstanceBase
// 0x0008 (0x00A8 - 0x00A0)
class UFNAF_GameInstanceBase : public UGameInstance
{
public:
	int                                                ForcedVariantNumber;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.FNAF_GameInstanceBase");
		return ptr;
	}


	void SwitchFNAFGameType(EFNAFGameType* GameType);
	void StartAsyncSaveGame(class USaveGame* SaveGame, const struct FString& SlotName, int UserIndex);
	bool IsInDemoMode();
	struct FString STATIC_GetPrimaryGPUBrand();
	struct FString STATIC_GetGPUBrandName();
	EFNAFGameType GetGameType();
	int GetForcedVariantNumber();
};


// Class freddys.GameConstants
// 0x0000 (0x0028 - 0x0028)
class UGameConstants : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.GameConstants");
		return ptr;
	}

};


// Class freddys.NPCBaseInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCBaseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.NPCBaseInterface");
		return ptr;
	}


	void SetHealth(float health);
	void SetAILifeCycle(EAILifeCycle lifeCycle);
	float GetHealth();
};


// Class freddys.SwitchBoard
// 0x0000 (0x0328 - 0x0328)
class ASwitchBoard : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SwitchBoard");
		return ptr;
	}

};


// Class freddys.Switchboardbuttons
// 0x0020 (0x0348 - 0x0328)
class ASwitchboardbuttons : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	struct FString                                     buttonID;                                                 // 0x0330(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.Switchboardbuttons");
		return ptr;
	}


	void OnSwitchBoardButtonPessed(const struct FString& buttonidentification);
	void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class freddys.SWS_AudioGroups
// 0x0018 (0x0340 - 0x0328)
class ASWS_AudioGroups : public AActor
{
public:
	class USWS_GroupComponent*                         AudioGroupComponent;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_AudioGroups");
		return ptr;
	}

};


// Class freddys.SWS_AudioManager
// 0x0050 (0x0378 - 0x0328)
class ASWS_AudioManager : public AActor
{
public:
	class UDataTable*                                  AudioAssetData;                                           // 0x0328(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0330(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_AudioManager");
		return ptr;
	}


	void StopAudioByID(int ID);
	void StopAudioByHandle(const struct FAudioHandle& AudioHandle);
	void StopAudioByAsset(class USoundBase* Base);
	void RefreshAudioHandlePool(struct FAudioHandle* Handle);
	struct FAudioHandle PlayAudioByName(const struct FString& Name, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	struct FAudioHandle PlayAudioByID(int ID, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	struct FAudioHandle PlayAudioByAsset(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	int GetSoundID(class USoundCue* cue);
	class USoundCue* GetSoundCueByName(const struct FString& Name);
	class USoundCue* GetSoundByID(int ID);
	class ASWS_AudioManager* STATIC_GetAudioManager(class UObject* WorldContextObject);
};


// Class freddys.SWS_AudioSource
// 0x0018 (0x0340 - 0x0328)
class ASWS_AudioSource : public AActor
{
public:
	class USoundCue*                                   SoundCueFile;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_AudioSource");
		return ptr;
	}


	void StopAudio(class UObject* WorldContextObject);
	void PlayAudio(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	void DestroyHandle();
};


// Class freddys.SWS_AudioStatics
// 0x0000 (0x0028 - 0x0028)
class USWS_AudioStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_AudioStatics");
		return ptr;
	}

};


// Class freddys.SWS_GroupComponent
// 0x0018 (0x0108 - 0x00F0)
class USWS_GroupComponent : public UActorComponent
{
public:
	TArray<class ASWS_AudioSource*>                    ListOfAudioSources;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_GroupComponent");
		return ptr;
	}


	void UnRegisterAudioSource(class ASWS_AudioSource* cue);
	void RegisterAudioSource(class ASWS_AudioSource* cue);
	void OnVolumeModified(float Volume);
	void OnPitchModified(float Pitch);
	void ModifyGroupVolumeMultiplier(float Volume);
	void ModifyGroupPitchMultiplier(float Pitch);
	int GetTotalFrequency();
	int GetTotalAmplitude();
};


// Class freddys.SWS_SaveGame
// 0x0008 (0x0030 - 0x0028)
class USWS_SaveGame : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.SWS_SaveGame");
		return ptr;
	}

};


// Class freddys.LevelDB
// 0x0010 (0x0038 - 0x0028)
class ULevelDB : public UObject
{
public:
	TArray<struct FGameLevels>                         GameLevels;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class freddys.LevelDB");
		return ptr;
	}


	void LoadLevelByName(const struct FString& LevelName);
	void LoadLevelByID(int LevelID);
	void LoadLevel();
	int GetLevelIDByName(const struct FString& Name);
	int GetLevelID();
	class ULevelDB* STATIC_CreateLevelDB(class UObject* Owner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
