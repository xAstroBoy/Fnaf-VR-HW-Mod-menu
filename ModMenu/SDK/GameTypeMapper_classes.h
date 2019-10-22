#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameTypeMapper.GameTypeMapper_C
// 0x0000 (0x0028 - 0x0028)
class UGameTypeMapper_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameTypeMapper.GameTypeMapper_C");
		return ptr;
	}


	void STATIC_GetDLCGameTypeInfos(EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<struct FGameTypeEnumNameMaping>* GameTypeInfos);
	void STATIC_GetGameTypeInfo(TEnumAsByte<EGameTypeEnum> GameType, class UObject* __WorldContext, struct FGameTypeEnumNameMaping* GameTypeInfo);
	void STATIC_GetDLCGameTypes(EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<TEnumAsByte<EGameTypeEnum>>* GameTypes);
	void STATIC_GetGameTypeDisplayName(TEnumAsByte<EGameTypeEnum> GameTypeVal, class UObject* __WorldContext, struct FText* GameTypeDisplay);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
