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

// UserDefinedStruct Office03_PhantomData.Office03_PhantomData
// 0x001C
struct FOffice03_PhantomData
{
	TEnumAsByte<EOffice03_PhantomAi_enum>              CharacterType_5_04135ED1466656FF5B142C9A92303E65;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Night_7_36A94CA54CE86BF1A60E3189D00F428D;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive_8_F88ED5AB47DFBFF0D28A89ADFA792333;              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ActivationTimeMin_13_0C71AAD1492199F51DA5E691DE014B79;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActivationTimeMax_14_18A14BD042A4307A827AC49EA2883241;    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetTimeMin_16_F2767E9F410EC81306EB35B22E0ECBDE;         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetTimeMax_18_5D44372C45954BB8B6926BA827A5573A;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
