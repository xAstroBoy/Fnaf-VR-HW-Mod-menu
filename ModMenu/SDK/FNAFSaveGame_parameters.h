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

// Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO
struct UFNAFSaveGame_C_HasListenedToHUBVO_Params
{
	int                                                ItemToFind;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch
struct UFNAFSaveGame_C_HasListenedToGlitch_Params
{
	int                                                ItemToFind;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch
struct UFNAFSaveGame_C_ListenedToGlitch_Params
{
	int                                                NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType
struct UFNAFSaveGame_C_GetLevelOfType_Params
{
	TEnumAsByte<EGameTypeEnum>                         GameType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels
struct UFNAFSaveGame_C_CheckCompletedLevels_Params
{
	int                                                Completed_Level_Count;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount
struct UFNAFSaveGame_C_GetGlitchCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch
struct UFNAFSaveGame_C_AwardGlitch_Params
{
	int                                                GlitchID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch
struct UFNAFSaveGame_C_HasGlitch_Params
{
	int                                                GlitchID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes
struct UFNAFSaveGame_C_GetPrizes_Params
{
	TArray<struct FPrize_Item_Struct>                  PrizeItemInfoArray;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function FNAFSaveGame.FNAFSaveGame_C.HasPrize
struct UFNAFSaveGame_C_HasPrize_Params
{
	struct FName                                       PrizeID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasPrize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID
struct UFNAFSaveGame_C_GetLevelInfoByID_Params
{
	struct FName                                       LevelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSaveGame_LevelInfo                         LevelSaveInfo;                                            // (Parm, OutParm)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount
struct UFNAFSaveGame_C_GetTotalCoinCount_Params
{
	int                                                PlayerTotalCoins;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo
struct UFNAFSaveGame_C_SetLevelInfo_Params
{
	struct FName                                       LevelNameID;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSaveGame_LevelInfo                         LevelInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName
struct UFNAFSaveGame_C_GetLevelInfoByName_Params
{
	struct FString                                     LevelLoadedName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSaveGame_LevelInfo                         LevelInfo;                                                // (Parm, OutParm)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelNameID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
