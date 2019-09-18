#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PuppetAIDataStruct.PuppetAIDataStruct
// 0x0014
struct FPuppetAIDataStruct
{
	TEnumAsByte<EFreddyCharacterType>                  CharacterType_2_2E99F11948A54BE775CF76B28B021CED;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Night_12_AC304BAD4CAAAFFF64978A83973ABC31;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeActivation_5_25C8333C4A4071404566028B05027227;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMultiplierBefore50Percent_7_25F4C2DB47904BB5E603ED96CD615F51;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMultiplierAfter50Percent_9_4BD2FC0B4B5156A0567548AAD049BEC1;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
