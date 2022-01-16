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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum freddys.EFlowGraphFlowType
	 */
	enum class freddys_EFlowGraphFlowType : uint8_t
	{
		EFlowGraphFlowType__HasFlow                = 0,
		EFlowGraphFlowType__NoFlow                 = 1,
		EFlowGraphFlowType__EFlowGraphFlowType_MAX = 2
	};

	/**
	 * Enum freddys.GLVictoryState
	 */
	enum class freddys_EGLVictoryState : uint8_t
	{
		GLVictoryState__InProgress         = 0,
		GLVictoryState__Victory            = 1,
		GLVictoryState__Defeat             = 2,
		GLVictoryState__GLVictoryState_MAX = 3
	};

	/**
	 * Enum freddys.GLGameState
	 */
	enum class freddys_EGLGameState : uint8_t
	{
		GLGameState__PreInit         = 0,
		GLGameState__Init            = 1,
		GLGameState__Progress        = 2,
		GLGameState__Completed       = 3,
		GLGameState__GLGameState_MAX = 4
	};

	/**
	 * Enum freddys.EFNAFGameType
	 */
	enum class freddys_EFNAFGameType : uint8_t
	{
		EFNAFGameType__Demo              = 0,
		EFNAFGameType__Normal            = 1,
		EFNAFGameType__Arcade            = 2,
		EFNAFGameType__EFNAFGameType_MAX = 3
	};

	/**
	 * Enum freddys.EFNAFDLCType
	 */
	enum class freddys_EFNAFDLCType : uint8_t
	{
		EFNAFDLCType__BaseGame         = 0,
		EFNAFDLCType__Halloween        = 1,
		EFNAFDLCType__EFNAFDLCType_MAX = 2
	};

	/**
	 * Enum freddys.ELevelType
	 */
	enum class freddys_ELevelType : uint8_t
	{
		Playable       = 0,
		Visual         = 1,
		ELevelType_MAX = 2
	};

	/**
	 * Enum freddys.AIScareDirection
	 */
	enum class freddys_EAIScareDirection : uint8_t
	{
		AIScareDirection__Right                = 0,
		AIScareDirection__Left                 = 1,
		AIScareDirection__Up                   = 2,
		AIScareDirection__Down                 = 3,
		AIScareDirection__AIScareDirection_MAX = 4
	};

	/**
	 * Enum freddys.AIBaseAxisDirection
	 */
	enum class freddys_EAIBaseAxisDirection : uint8_t
	{
		AIBaseAxisDirection__Horizontal              = 0,
		AIBaseAxisDirection__Vertical                = 1,
		AIBaseAxisDirection__AIBaseAxisDirection_MAX = 2
	};

	/**
	 * Enum freddys.AILifeCycle
	 */
	enum class freddys_EAILifeCycle : uint8_t
	{
		AILifeCycle__Alive           = 0,
		AILifeCycle__Dead            = 1,
		AILifeCycle__AILifeCycle_MAX = 2
	};

	/**
	 * Enum freddys.ERegisterAudio
	 */
	enum class freddys_ERegisterAudio : uint8_t
	{
		ERegisterAudio__REGISTER           = 0,
		ERegisterAudio__UNREGISTER         = 1,
		ERegisterAudio__ERegisterAudio_MAX = 2
	};

	/**
	 * Enum freddys.EAudioCategory
	 */
	enum class freddys_EAudioCategory : uint8_t
	{
		EAudioCategory__UI                 = 0,
		EAudioCategory__FX                 = 1,
		EAudioCategory__DEATH              = 2,
		EAudioCategory__EAudioCategory_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct freddys.GameLevels
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FGameLevels : public FTableRowBase
	{
	public:
		int                                                        TokenRequired;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNHA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Level[0x28];                                             // 0x000C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty freddys.GameLevels.Level
		int                                                        LevelID;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		freddys_ELevelType                                         LevelType;                                               // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ABP[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct freddys.AudioData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAudioData : public FTableRowBase
	{
	public:
		unsigned char                                              NoiseValue;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AudioID;                                                 // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCTJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SoundCue;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundClass*                                         SoundCategory;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct freddys.AudioHandle
	 * Size -> 0x0038
	 */
	struct FAudioHandle
	{
	public:
		struct FAudioData                                          AudioData;                                               // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		class UAudioComponent*                                     AudioComponent;                                          // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct freddys.AIOffsetData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAIOffsetData : public FTableRowBase
	{
	public:
		freddys_EAIScareDirection                                  AIDir;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0OV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsettransformData;                                     // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct freddys.AIDirectionOffsetData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAIDirectionOffsetData : public FTableRowBase
	{
	public:
		class UClass*                                              AIType;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIOffsetData>                               OffsettransformData;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct freddys.AIDatabase
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAIDatabase : public FTableRowBase
	{
	public:
		TArray<struct FAIDirectionOffsetData>                      AIScareData;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct freddys.SaveFileFormat
	 * Size -> 0x0018
	 */
	struct FSaveFileFormat
	{
	public:
		unsigned char                                              UnknownData_W75S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
