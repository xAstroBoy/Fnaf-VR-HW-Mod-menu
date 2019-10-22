#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum freddys.EFlowGraphFlowType
enum class EFlowGraphFlowType : uint8_t
{
	EFlowGraphFlowType__HasFlow    = 0,
	EFlowGraphFlowType__NoFlow     = 1,
	EFlowGraphFlowType__EFlowGraphFlowType_MAX = 2
};


// Enum freddys.GLGameState
enum class EGLGameState : uint8_t
{
	GLGameState__PreInit           = 0,
	GLGameState__Init              = 1,
	GLGameState__Progress          = 2,
	GLGameState__Completed         = 3,
	GLGameState__GLGameState_MAX   = 4
};


// Enum freddys.EFNAFGameType
enum class EFNAFGameType : uint8_t
{
	EFNAFGameType__Demo            = 0,
	EFNAFGameType__Normal          = 1,
	EFNAFGameType__Arcade          = 2,
	EFNAFGameType__EFNAFGameType_MAX = 3
};


// Enum freddys.ELevelType
enum class ELevelType : uint8_t
{
	Playable                       = 0,
	Visual                         = 1,
	ELevelType_MAX                 = 2
};


// Enum freddys.GLVictoryState
enum class EGLVictoryState : uint8_t
{
	GLVictoryState__InProgress     = 0,
	GLVictoryState__Victory        = 1,
	GLVictoryState__Defeat         = 2,
	GLVictoryState__GLVictoryState_MAX = 3
};


// Enum freddys.AIScareDirection
enum class EAIScareDirection : uint8_t
{
	AIScareDirection__Right        = 0,
	AIScareDirection__Left         = 1,
	AIScareDirection__Up           = 2,
	AIScareDirection__Down         = 3,
	AIScareDirection__AIScareDirection_MAX = 4
};


// Enum freddys.AIBaseAxisDirection
enum class EAIBaseAxisDirection : uint8_t
{
	AIBaseAxisDirection__Horizontal = 0,
	AIBaseAxisDirection__Vertical  = 1,
	AIBaseAxisDirection__AIBaseAxisDirection_MAX = 2
};


// Enum freddys.AILifeCycle
enum class EAILifeCycle : uint8_t
{
	AILifeCycle__Alive             = 0,
	AILifeCycle__Dead              = 1,
	AILifeCycle__AILifeCycle_MAX   = 2
};


// Enum freddys.ERegisterAudio
enum class ERegisterAudio : uint8_t
{
	ERegisterAudio__REGISTER       = 0,
	ERegisterAudio__UNREGISTER     = 1,
	ERegisterAudio__ERegisterAudio_MAX = 2
};


// Enum freddys.EAudioCategory
enum class EAudioCategory : uint8_t
{
	EAudioCategory__UI             = 0,
	EAudioCategory__FX             = 1,
	EAudioCategory__DEATH          = 2,
	EAudioCategory__EAudioCategory_MAX = 3
};


// Enum freddys.EFNAFDLCType
enum class EFNAFDLCType : uint8_t
{
	EFNAFDLCType__BaseGame         = 0,
	EFNAFDLCType__Halloween        = 1,
	EFNAFDLCType__EFNAFDLCType_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct freddys.GameLevels
// 0x0038 (0x0040 - 0x0008)
struct FGameLevels : public FTableRowBase
{
	int                                                TokenRequired;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x000C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty freddys.GameLevels.Level
	int                                                LevelID;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELevelType>                            LevelType;                                                // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct freddys.AudioData
// 0x0028 (0x0030 - 0x0008)
struct FAudioData : public FTableRowBase
{
	unsigned char                                      NoiseValue;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AudioID;                                                  // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   SoundCue;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SoundCategory;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct freddys.AudioHandle
// 0x0038
struct FAudioHandle
{
	struct FAudioData                                  AudioData;                                                // 0x0000(0x0030) (Edit, EditConst)
	class UAudioComponent*                             AudioComponent;                                           // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};

// ScriptStruct freddys.AIOffsetData
// 0x0038 (0x0040 - 0x0008)
struct FAIOffsetData : public FTableRowBase
{
	EAIScareDirection                                  AIDir;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FTransform                                  OffsettransformData;                                      // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct freddys.AIDirectionOffsetData
// 0x0018 (0x0020 - 0x0008)
struct FAIDirectionOffsetData : public FTableRowBase
{
	class UClass*                                      AIType;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIOffsetData>                       OffsettransformData;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct freddys.AIDatabase
// 0x0010 (0x0018 - 0x0008)
struct FAIDatabase : public FTableRowBase
{
	TArray<struct FAIDirectionOffsetData>              AIScareData;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct freddys.SaveFileFormat
// 0x0018
struct FSaveFileFormat
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
