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

// UserDefinedStruct GameTypeEnumNameMaping.GameTypeEnumNameMaping
// 0x0028
struct FGameTypeEnumNameMaping
{
	TEnumAsByte<EGameTypeEnum>                         GameTypeEnumValue_3_7FF90C2D4659801EF29053B079362FDB;     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       GameTypeDisplayValue_6_9EA03594413FA57ECE8921AEBE9CF421;  // 0x0008(0x0018) (Edit, BlueprintVisible)
	class UMaterialInstance*                           GameTypeImage_9_01EA76A344383A86649F17A99880ECF6;         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
