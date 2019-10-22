#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos
struct UGameTypeMapper_C_GetDLCGameTypeInfos_Params
{
	EFNAFDLCType                                       DLCType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameTypeEnumNameMaping>             GameTypeInfos;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo
struct UGameTypeMapper_C_GetGameTypeInfo_Params
{
	TEnumAsByte<EGameTypeEnum>                         GameType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameTypeEnumNameMaping                     GameTypeInfo;                                             // (Parm, OutParm)
};

// Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes
struct UGameTypeMapper_C_GetDLCGameTypes_Params
{
	EFNAFDLCType                                       DLCType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EGameTypeEnum>>                 GameTypes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName
struct UGameTypeMapper_C_GetGameTypeDisplayName_Params
{
	TEnumAsByte<EGameTypeEnum>                         GameTypeVal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GameTypeDisplay;                                          // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
