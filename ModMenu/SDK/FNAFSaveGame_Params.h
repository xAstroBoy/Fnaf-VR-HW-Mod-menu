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
	 * Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToHUBVO
	 */
	struct UFNAFSaveGame_C_HasListenedToHUBVO_Params
	{
	public:
		int                                                        ItemToFind;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.HasListenedToGlitch
	 */
	struct UFNAFSaveGame_C_HasListenedToGlitch_Params
	{
	public:
		int                                                        ItemToFind;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.ListenedToGlitch
	 */
	struct UFNAFSaveGame_C_ListenedToGlitch_Params
	{
	public:
		int                                                        NewItem;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetLevelOfType
	 */
	struct UFNAFSaveGame_C_GetLevelOfType_Params
	{
	public:
		GameTypeEnum_EGameTypeEnum                                 GameType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.CheckCompletedLevels
	 */
	struct UFNAFSaveGame_C_CheckCompletedLevels_Params
	{
	public:
		int                                                        Completed_Level_Count;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetGlitchCount
	 */
	struct UFNAFSaveGame_C_GetGlitchCount_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.AwardGlitch
	 */
	struct UFNAFSaveGame_C_AwardGlitch_Params
	{
	public:
		int                                                        GlitchID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.HasGlitch
	 */
	struct UFNAFSaveGame_C_HasGlitch_Params
	{
	public:
		int                                                        GlitchID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetPrizes
	 */
	struct UFNAFSaveGame_C_GetPrizes_Params
	{
	public:
		TArray<struct FPrize_Item_Struct>                          PrizeItemInfoArray;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.HasPrize
	 */
	struct UFNAFSaveGame_C_HasPrize_Params
	{
	public:
		class FName                                                PrizeID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasPrize;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByID
	 */
	struct UFNAFSaveGame_C_GetLevelInfoByID_Params
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSaveGame_LevelInfo                                 LevelSaveInfo;                                           // 0x0000(0x0058)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetTotalCoinCount
	 */
	struct UFNAFSaveGame_C_GetTotalCoinCount_Params
	{
	public:
		int                                                        PlayerTotalCoins;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.SetLevelInfo
	 */
	struct UFNAFSaveGame_C_SetLevelInfo_Params
	{
	public:
		class FName                                                LevelNameID;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSaveGame_LevelInfo                                 LevelInfo;                                               // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function FNAFSaveGame.FNAFSaveGame_C.GetLevelInfoByName
	 */
	struct UFNAFSaveGame_C_GetLevelInfoByName_Params
	{
	public:
		class FString                                              LevelLoadedName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSaveGame_LevelInfo                                 LevelInfo;                                               // 0x0000(0x0058)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                LevelNameID;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
