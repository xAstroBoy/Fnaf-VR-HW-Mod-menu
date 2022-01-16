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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos
	 */
	struct UGameTypeMapper_C_GetDLCGameTypeInfos_Params
	{
	public:
		freddys_EFNAFDLCType                                       DLCType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGameTypeEnumNameMaping>                     GameTypeInfos;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo
	 */
	struct UGameTypeMapper_C_GetGameTypeInfo_Params
	{
	public:
		GameTypeEnum_EGameTypeEnum                                 GameType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameTypeEnumNameMaping                             GameTypeInfo;                                            // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes
	 */
	struct UGameTypeMapper_C_GetDLCGameTypes_Params
	{
	public:
		freddys_EFNAFDLCType                                       DLCType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<GameTypeEnum_EGameTypeEnum>                         GameTypes;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName
	 */
	struct UGameTypeMapper_C_GetGameTypeDisplayName_Params
	{
	public:
		GameTypeEnum_EGameTypeEnum                                 GameTypeVal;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                GameTypeDisplay;                                         // 0x0000(0x0018)  (Parm, OutParm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
