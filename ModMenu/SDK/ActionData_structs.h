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
	 * UserDefinedStruct ActionData.ActionData
	 * Size -> 0x0038
	 */
	struct FActionData
	{
	public:
		int                                                        ActionID_14_408F0763430A5E3387D658A5F04F043D;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_88ZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                NextPossibleActions_9_3931289D42F44015637301A8CF8AF9A3;  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       IsCompleted_13_62C092204B04DE8564A58AA8F3BA83B6;         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NFVZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CompletedAnimation_20_B44E4808448405DE1B2B348547802A00;  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundWave*                                          CompletedVoice_27_99DA6F0342BBFDBD45A53E93007E32E7;      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          SubtitleTable_31_4ADF107945F9403D034A0CB8F1EDBF60;       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
