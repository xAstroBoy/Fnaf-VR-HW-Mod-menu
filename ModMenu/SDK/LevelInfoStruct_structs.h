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
	 * UserDefinedStruct LevelInfoStruct.LevelInfoStruct
	 * Size -> 0x0071
	 */
	struct FLevelInfoStruct
	{
	public:
		GameTypeEnum_EGameTypeEnum                                 GameType_32_7BD9D16C469E17DC4AF2FA8AAABAD8A1;            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P5SW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LevelDisplayName_27_0175D7E9454218C5BC40508F82AB5275;    // 0x0008(0x0018) Edit, BlueprintVisible
		int                                                        Variant_24_1F2EF0F34D4F0F0B193D9C8B09B0D4EC;             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsNightmareLevel_34_1966C91F4BDAAFBA9B61B08E0D75BAC4;    // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2O5M[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        RequiredCoins_10_CF93A3714980D859B4FF9487B71CAC20;       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RLIP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelToLoad_12_75DF9C2D42EE68B1A56DBCB1ED59F5C6;         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       Is_LVL_Locked_14_D337A01543EEC3CFC9B23E9D285889B2;       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSSP[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Legacy_Instructions_38_0A6819674FFA815C28BD7EABA3042AE5; // 0x0048(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          LevelImage_20_73275F5643BB5CBE7FC2C2B37C1B76C9;          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              InstructionsWidget_43_22CCAC434D64B6385DA2CEA8F93BA630;  // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		freddys_EFNAFDLCType                                       DLC_46_CE3C0D8B43F968470712D69FD1CC5B3E;                 // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
