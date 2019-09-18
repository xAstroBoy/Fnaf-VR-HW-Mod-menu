
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFNAFSaveGame_C::HasListenedToHUBVO(int ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO");

	UFNAFSaveGame_C_HasListenedToHUBVO_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemToFind                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFNAFSaveGame_C::HasListenedToGlitch(int ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch");

	UFNAFSaveGame_C_HasListenedToGlitch_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UFNAFSaveGame_C::ListenedToGlitch(int NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch");

	UFNAFSaveGame_C_ListenedToGlitch_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTypeEnum>     GameType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::GetLevelOfType(TEnumAsByte<EGameTypeEnum> GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType");

	UFNAFSaveGame_C_GetLevelOfType_Params params;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Completed_Level_Count          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::CheckCompletedLevels(int* Completed_Level_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels");

	UFNAFSaveGame_C_CheckCompletedLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed_Level_Count != nullptr)
		*Completed_Level_Count = params.Completed_Level_Count;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFNAFSaveGame_C::GetGlitchCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount");

	UFNAFSaveGame_C_GetGlitchCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GlitchID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::AwardGlitch(int GlitchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch");

	UFNAFSaveGame_C_AwardGlitch_Params params;
	params.GlitchID = GlitchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            GlitchID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::HasGlitch(int GlitchID, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch");

	UFNAFSaveGame_C_HasGlitch_Params params;
	params.GlitchID = GlitchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPrize_Item_Struct> PrizeItemInfoArray             (Parm, OutParm, ZeroConstructor)

void UFNAFSaveGame_C::GetPrizes(TArray<struct FPrize_Item_Struct>* PrizeItemInfoArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes");

	UFNAFSaveGame_C_GetPrizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrizeItemInfoArray != nullptr)
		*PrizeItemInfoArray = params.PrizeItemInfoArray;
}


// Function FNAFSaveGame.FNAFSaveGame_C.HasPrize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   PrizeID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasPrize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::HasPrize(const struct FName& PrizeID, bool* HasPrize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasPrize");

	UFNAFSaveGame_C_HasPrize_Params params;
	params.PrizeID = PrizeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasPrize != nullptr)
		*HasPrize = params.HasPrize;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSaveGame_LevelInfo     LevelSaveInfo                  (Parm, OutParm)

void UFNAFSaveGame_C::GetLevelInfoByID(const struct FName& LevelID, struct FSaveGame_LevelInfo* LevelSaveInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID");

	UFNAFSaveGame_C_GetLevelInfoByID_Params params;
	params.LevelID = LevelID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelSaveInfo != nullptr)
		*LevelSaveInfo = params.LevelSaveInfo;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PlayerTotalCoins               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::GetTotalCoinCount(int* PlayerTotalCoins)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount");

	UFNAFSaveGame_C_GetTotalCoinCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerTotalCoins != nullptr)
		*PlayerTotalCoins = params.PlayerTotalCoins;
}


// Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelNameID                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSaveGame_LevelInfo     LevelInfo                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFNAFSaveGame_C::SetLevelInfo(const struct FName& LevelNameID, const struct FSaveGame_LevelInfo& LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo");

	UFNAFSaveGame_C_SetLevelInfo_Params params;
	params.LevelNameID = LevelNameID;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LevelLoadedName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSaveGame_LevelInfo     LevelInfo                      (Parm, OutParm)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelNameID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFSaveGame_C::GetLevelInfoByName(const struct FString& LevelLoadedName, struct FSaveGame_LevelInfo* LevelInfo, bool* Found, struct FName* LevelNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName");

	UFNAFSaveGame_C_GetLevelInfoByName_Params params;
	params.LevelLoadedName = LevelLoadedName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelInfo != nullptr)
		*LevelInfo = params.LevelInfo;
	if (Found != nullptr)
		*Found = params.Found;
	if (LevelNameID != nullptr)
		*LevelNameID = params.LevelNameID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
