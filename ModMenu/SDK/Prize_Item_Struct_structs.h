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
	 * UserDefinedStruct Prize_Item_Struct.Prize_Item_Struct
	 * Size -> 0x0064
	 */
	struct FPrize_Item_Struct
	{
	public:
		class FText                                                Item_Name_10_F66ABD284254FF49443C17B7E4B93899;           // 0x0000(0x0018) Edit, BlueprintVisible
		class UClass*                                              Item_Object_21_B19234814CCB3E8E07CA02A73109E4F4;         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Tokens_Needed_For_Unlock_16_BCEDA40D47200BA107F487B8C30D25E5; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        RandomWeight_19_B3B378B04D444351C42BC0B10FB6082A;        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          ItemImage_24_76FF6BB64E9AA9DD7FC403994750A80E;           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		PrizeType_EPrizeType                                       PrizeCategory_37_B532323F44710878B93E809096FFDEAD;       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EdibleEnum_EdibleEnum                                      Edible__44_841CA8FF4E3A829268424195A8517773;             // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W2ZR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AllowedLevels_36_04326D524D7EEDC10CA3F183C6399987;       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       CanBeAwardedFromAnyLevel_30_1B21394C40BAF1CFB24E33932A1B8D8E; // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ItemUnlocked_39_EBE5A26649279C9211EAA997E5D64210;        // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Candy__46_FB96948941080F591DF0C29DE40572C1;              // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C8J2[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AttachmentOffset_49_A6C65CC4450BB65936CB1FBFB92F297F;    // 0x004C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AttachmentRotation_52_1591934E458113A4FF2AB19CA9A05B43;  // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
