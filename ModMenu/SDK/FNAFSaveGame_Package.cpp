/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FNAFSaveGame_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFNAFSaveGame_C::HasListenedToHUBVO(int ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO");
		
		UFNAFSaveGame_C_HasListenedToHUBVO_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFNAFSaveGame_C::HasListenedToGlitch(int ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch");
		
		UFNAFSaveGame_C_HasListenedToGlitch_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::ListenedToGlitch(int NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch");
		
		UFNAFSaveGame_C_ListenedToGlitch_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GameTypeEnum_EGameTypeEnum                         GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::GetLevelOfType(GameTypeEnum_EGameTypeEnum GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType");
		
		UFNAFSaveGame_C_GetLevelOfType_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Completed_Level_Count                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::CheckCompletedLevels(int* Completed_Level_Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels");
		
		UFNAFSaveGame_C_CheckCompletedLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Completed_Level_Count != nullptr)
			*Completed_Level_Count = params.Completed_Level_Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int UFNAFSaveGame_C::GetGlitchCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount");
		
		UFNAFSaveGame_C_GetGlitchCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                GlitchID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::AwardGlitch(int GlitchID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch");
		
		UFNAFSaveGame_C_AwardGlitch_Params params {};
		params.GlitchID = GlitchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                GlitchID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFSaveGame_C::HasGlitch(int GlitchID, bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch");
		
		UFNAFSaveGame_C_HasGlitch_Params params {};
		params.GlitchID = GlitchID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPrize_Item_Struct>                  PrizeItemInfoArray                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	 */
	void UFNAFSaveGame_C::GetPrizes(TArray<struct FPrize_Item_Struct>* PrizeItemInfoArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes");
		
		UFNAFSaveGame_C_GetPrizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrizeItemInfoArray != nullptr)
			*PrizeItemInfoArray = params.PrizeItemInfoArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.HasPrize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PrizeID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasPrize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFSaveGame_C::HasPrize(const class FName& PrizeID, bool* HasPrize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.HasPrize");
		
		UFNAFSaveGame_C_HasPrize_Params params {};
		params.PrizeID = PrizeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasPrize != nullptr)
			*HasPrize = params.HasPrize;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSaveGame_LevelInfo                         LevelSaveInfo                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::GetLevelInfoByID(const class FName& LevelID, struct FSaveGame_LevelInfo* LevelSaveInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID");
		
		UFNAFSaveGame_C_GetLevelInfoByID_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelSaveInfo != nullptr)
			*LevelSaveInfo = params.LevelSaveInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                PlayerTotalCoins                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::GetTotalCoinCount(int* PlayerTotalCoins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount");
		
		UFNAFSaveGame_C_GetTotalCoinCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerTotalCoins != nullptr)
			*PlayerTotalCoins = params.PlayerTotalCoins;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelNameID                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSaveGame_LevelInfo                         LevelInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::SetLevelInfo(const class FName& LevelNameID, const struct FSaveGame_LevelInfo& LevelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo");
		
		UFNAFSaveGame_C_SetLevelInfo_Params params {};
		params.LevelNameID = LevelNameID;
		params.LevelInfo = LevelInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LevelLoadedName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSaveGame_LevelInfo                         LevelInfo                                                  (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        LevelNameID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFSaveGame_C::GetLevelInfoByName(const class FString& LevelLoadedName, struct FSaveGame_LevelInfo* LevelInfo, bool* Found, class FName* LevelNameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName");
		
		UFNAFSaveGame_C_GetLevelInfoByName_Params params {};
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

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFSaveGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFSaveGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFSaveGame.FNAFSaveGame_C");
		return ptr;
	}

}


