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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GameTypeMapper.GameTypeMapper_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameTypeMapper_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetDLCGameTypeInfos(freddys_EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<struct FGameTypeEnumNameMaping>* GameTypeInfos);
		void STATIC_GetGameTypeInfo(GameTypeEnum_EGameTypeEnum GameType, class UObject* __WorldContext, struct FGameTypeEnumNameMaping* GameTypeInfo);
		void STATIC_GetDLCGameTypes(freddys_EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<GameTypeEnum_EGameTypeEnum>* GameTypes);
		void STATIC_GetGameTypeDisplayName(GameTypeEnum_EGameTypeEnum GameTypeVal, class UObject* __WorldContext, class FText* GameTypeDisplay);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
