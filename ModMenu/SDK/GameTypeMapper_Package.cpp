/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "GameTypeMapper_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EFNAFDLCType                               DLCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameTypeEnumNameMaping>             GameTypeInfos                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UGameTypeMapper_C::STATIC_GetDLCGameTypeInfos(freddys_EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<struct FGameTypeEnumNameMaping>* GameTypeInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos");
		
		UGameTypeMapper_C_GetDLCGameTypeInfos_Params params {};
		params.DLCType = DLCType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTypeInfos != nullptr)
			*GameTypeInfos = params.GameTypeInfos;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GameTypeEnum_EGameTypeEnum                         GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameTypeEnumNameMaping                     GameTypeInfo                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameTypeMapper_C::STATIC_GetGameTypeInfo(GameTypeEnum_EGameTypeEnum GameType, class UObject* __WorldContext, struct FGameTypeEnumNameMaping* GameTypeInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo");
		
		UGameTypeMapper_C_GetGameTypeInfo_Params params {};
		params.GameType = GameType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTypeInfo != nullptr)
			*GameTypeInfo = params.GameTypeInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		freddys_EFNAFDLCType                               DLCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<GameTypeEnum_EGameTypeEnum>                 GameTypes                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UGameTypeMapper_C::STATIC_GetDLCGameTypes(freddys_EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<GameTypeEnum_EGameTypeEnum>* GameTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes");
		
		UGameTypeMapper_C_GetDLCGameTypes_Params params {};
		params.DLCType = DLCType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTypes != nullptr)
			*GameTypes = params.GameTypes;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GameTypeEnum_EGameTypeEnum                         GameTypeVal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        GameTypeDisplay                                            (Parm, OutParm)
	 */
	void UGameTypeMapper_C::STATIC_GetGameTypeDisplayName(GameTypeEnum_EGameTypeEnum GameTypeVal, class UObject* __WorldContext, class FText* GameTypeDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName");
		
		UGameTypeMapper_C_GetGameTypeDisplayName_Params params {};
		params.GameTypeVal = GameTypeVal;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTypeDisplay != nullptr)
			*GameTypeDisplay = params.GameTypeDisplay;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameTypeMapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameTypeMapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameTypeMapper.GameTypeMapper_C");
		return ptr;
	}

}


