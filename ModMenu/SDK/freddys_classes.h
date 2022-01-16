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
	 * Class freddys.AchievementsFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementsFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ClearAllAchievements(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.AICharacterBase
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class AAICharacterBase : public ACharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.AICommonFunctionalities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAICommonFunctionalities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_isVerticalAxis(freddys_EAIScareDirection Direction);
		bool STATIC_isValidAxisDirection(freddys_EAIBaseAxisDirection Axis, freddys_EAIScareDirection Direction);
		bool STATIC_isHorizontalAxis(freddys_EAIScareDirection Direction);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FlowGraphConnector
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class UFlowGraphConnector : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlowGraphConnected;                                    // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlowGraphDisconnected;                                 // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UFlowGraphConnector*                                 ConnectedTo;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FlowConnectorDistance;                                   // 0x0240(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TUYD[0xC];                                   // 0x0244(0x000C) MISSED OFFSET (PADDING)

	public:
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
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FlowGraphNode
	 * Size -> 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
	 */
	class AFlowGraphNode : public AActor
	{
	public:
		bool                                                       bIsFlowSource;                                           // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsConnectedToFlow;                                      // 0x0241(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_15LE[0x56];                                  // 0x0242(0x0056) MISSED OFFSET (PADDING)

	public:
		void UnregisterConnector(class UFlowGraphConnector* Connector);
		void SetFlowSource(bool EnableAsFlowSource);
		void RegisterConnector(class UFlowGraphConnector* Connector);
		void OnFlowChanged();
		void OnConnectorDisconnected(class UFlowGraphConnector* MyConnector);
		void OnConnectorConnected(class UFlowGraphConnector* MyConnector, class UFlowGraphConnector* TheirConnector);
		bool IsFlowSource();
		bool HasFlow();
		TArray<class UFlowGraphConnector*> GetConnectors();
		void FlowTypeSwitch(freddys_EFlowGraphFlowType* FlowType);
		void CheckConnections();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FNAFEditorSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UFNAFEditorSettings : public UDeveloperSettings
	{
	public:
		freddys_EFNAFGameType                                      GameType;                                                // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasHalloweenDLC;                                         // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU8R[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FNAFGameMode
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class AFNAFGameMode : public AGameMode
	{
	public:
		class UClass*                                              LevelDBClass;                                            // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelDB*                                            LevelDBInstance;                                         // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SpawnLevelDB();
		void OnSetLevelDB();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FNAFGamestate
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class AFNAFGamestate : public AGameState
	{
	public:
		freddys_EGLVictoryState                                    VictoryState;                                            // 0x02A0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		freddys_EGLGameState                                       GameState;                                               // 0x02A1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZFSX[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVictoryCondition(freddys_EGLVictoryState victory);
		void SetGameState(freddys_EGLGameState State);
		freddys_EGLVictoryState GetVictoryCondition();
		freddys_EGLGameState GetGameState();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FNAF_Collectables
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class AFNAF_Collectables : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.FNAF_GameInstanceBase
	 * Size -> 0x0028 (FullSize[0x0190] - InheritedSize[0x0168])
	 */
	class UFNAF_GameInstanceBase : public UGameInstance
	{
	public:
		int                                                        ForcedVariantNumber;                                     // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CX5T[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LoadingWidget;                                           // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_INYU[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (PADDING)

	public:
		void SwitchFNAFGameType(freddys_EFNAFGameType* GameType);
		void StartAsyncSaveGame(class USaveGame* SaveGame, const class FString& SlotName, int UserIndex);
		void LoadLevelAsync(const class FName& LevelName);
		bool IsInDemoMode();
		bool HasDLC(freddys_EFNAFDLCType DLC);
		class FString STATIC_GetPrimaryGPUBrand();
		class FString STATIC_GetGPUBrandName();
		freddys_EFNAFGameType GetGameType();
		int GetForcedVariantNumber();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.GameConstants
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameConstants : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.GridCalculatorActor
	 * Size -> 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
	 */
	class AGridCalculatorActor : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        GridWidth;                                               // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        GridHeight;                                              // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      GridCellSize;                                            // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowDebug;                                              // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PPJF[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTextRenderComponent*>                        TextRenderers;                                           // 0x0258(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K46Z[0x20];                                  // 0x0268(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetCellDebugDisplay(int CellID, int CellX, int CellY, int CellDistance);
		void ResetDistances();
		void GetGridSize(int* Width, int* Height);
		int GetDistanceToCellAtWorldPosition(const struct FVector& WorldPosition);
		int GetDistanceToCell(int CellID);
		struct FVector GetCellWorldPositionByCellPos(int CellX, int CellY);
		struct FVector GetCellWorldPosition(int CellID);
		TArray<int> GetCellsBetweenDistances(int MinDistance, int MaxDistance);
		TArray<int> GetCellsAtDistance(int Distance);
		void GetCellPosition(int CellID, int* CellX, int* CellY);
		void GetCellPosFromWorldPosition(const struct FVector& WorldPosition, int* CellX, int* CellY);
		int GetCellIDFromWorldPosition(const struct FVector& WorldPosition);
		int GetCellIDFromGridPosition(int CellX, int CellY);
		TArray<int> FindPathFromWorldPositions(const struct FVector& WorldPositionStart, const struct FVector& WorldPositionEnd);
		TArray<int> FindPathFromCellIDs(int StartCellID, int EndCellID);
		void CalculateDistancesFromWorldPosition(const struct FVector& WorldPosition);
		void CalculateDistancesFromGridPosition(int GridX, int GridY);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.LevelDB
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULevelDB : public UObject
	{
	public:
		TArray<struct FGameLevels>                                 GameLevels;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void LoadLevelByName(const class FString& LevelName);
		void LoadLevelByID(int LevelID);
		void LoadLevel();
		int GetLevelIDByName(const class FString& Name);
		int GetLevelID();
		class ULevelDB* STATIC_CreateLevelDB(class UObject* Owner);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.NPCBaseInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNPCBaseInterface : public UInterface
	{
	public:
		void SetHealth(float health);
		void SetAILifeCycle(freddys_EAILifeCycle lifeCycle);
		float GetHealth();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SwitchBoard
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class ASwitchBoard : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.Switchboardbuttons
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class ASwitchboardbuttons : public AActor
	{
	public:
		unsigned char                                              UnknownData_UBE4[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              buttonID;                                                // 0x0248(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HAMD[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSwitchBoardButtonPessed(const class FString& buttonidentification);
		void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_AudioGroups
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class ASWS_AudioGroups : public AActor
	{
	public:
		class USWS_GroupComponent*                                 AudioGroupComponent;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHUU[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_AudioManager
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class ASWS_AudioManager : public AActor
	{
	public:
		class UDataTable*                                          AudioAssetData;                                          // 0x0240(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5LM9[0x48];                                  // 0x0248(0x0048) MISSED OFFSET (PADDING)

	public:
		void StopAudioByID(int ID);
		void StopAudioByHandle(const struct FAudioHandle& AudioHandle);
		void StopAudioByAsset(class USoundBase* Base);
		void RefreshAudioHandlePool(struct FAudioHandle* Handle);
		struct FAudioHandle PlayAudioByName(const class FString& Name, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		struct FAudioHandle PlayAudioByID(int ID, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		struct FAudioHandle PlayAudioByAsset(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		int GetSoundID(class USoundCue* cue);
		class USoundCue* GetSoundCueByName(const class FString& Name);
		class USoundCue* GetSoundByID(int ID);
		class ASWS_AudioManager* STATIC_GetAudioManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_AudioSource
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class ASWS_AudioSource : public AActor
	{
	public:
		class USoundCue*                                           SoundCueFile;                                            // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE71[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopAudio(class UObject* WorldContextObject);
		void PlayAudio(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
		void DestroyHandle();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_AudioStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWS_AudioStatics : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_GroupComponent
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	class USWS_GroupComponent : public UActorComponent
	{
	public:
		TArray<class ASWS_AudioSource*>                            ListOfAudioSources;                                      // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ETQ[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnRegisterAudioSource(class ASWS_AudioSource* cue);
		void RegisterAudioSource(class ASWS_AudioSource* cue);
		void OnVolumeModified(float Volume);
		void OnPitchModified(float Pitch);
		void ModifyGroupVolumeMultiplier(float Volume);
		void ModifyGroupPitchMultiplier(float Pitch);
		int GetTotalFrequency();
		int GetTotalAmplitude();
		static UClass* StaticClass();
	};

	/**
	 * Class freddys.SWS_SaveGame
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USWS_SaveGame : public USaveGame
	{
	public:
		unsigned char                                              UnknownData_C2AO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
