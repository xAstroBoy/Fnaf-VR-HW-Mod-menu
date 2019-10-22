
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFNAFDLCType                   DLCType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameTypeEnumNameMaping> GameTypeInfos                  (Parm, OutParm, ZeroConstructor)

void UGameTypeMapper_C::STATIC_GetDLCGameTypeInfos(EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<struct FGameTypeEnumNameMaping>* GameTypeInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypeInfos");

	UGameTypeMapper_C_GetDLCGameTypeInfos_Params params;
	params.DLCType = DLCType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTypeInfos != nullptr)
		*GameTypeInfos = params.GameTypeInfos;
}


// Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTypeEnum>     GameType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameTypeEnumNameMaping GameTypeInfo                   (Parm, OutParm)

void UGameTypeMapper_C::STATIC_GetGameTypeInfo(TEnumAsByte<EGameTypeEnum> GameType, class UObject* __WorldContext, struct FGameTypeEnumNameMaping* GameTypeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetGameTypeInfo");

	UGameTypeMapper_C_GetGameTypeInfo_Params params;
	params.GameType = GameType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTypeInfo != nullptr)
		*GameTypeInfo = params.GameTypeInfo;
}


// Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFNAFDLCType                   DLCType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EGameTypeEnum>> GameTypes                      (Parm, OutParm, ZeroConstructor)

void UGameTypeMapper_C::STATIC_GetDLCGameTypes(EFNAFDLCType DLCType, class UObject* __WorldContext, TArray<TEnumAsByte<EGameTypeEnum>>* GameTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetDLCGameTypes");

	UGameTypeMapper_C_GetDLCGameTypes_Params params;
	params.DLCType = DLCType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTypes != nullptr)
		*GameTypes = params.GameTypes;
}


// Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameTypeEnum>     GameTypeVal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GameTypeDisplay                (Parm, OutParm)

void UGameTypeMapper_C::STATIC_GetGameTypeDisplayName(TEnumAsByte<EGameTypeEnum> GameTypeVal, class UObject* __WorldContext, struct FText* GameTypeDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTypeMapper.GameTypeMapper_C.GetGameTypeDisplayName");

	UGameTypeMapper_C_GetGameTypeDisplayName_Params params;
	params.GameTypeVal = GameTypeVal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameTypeDisplay != nullptr)
		*GameTypeDisplay = params.GameTypeDisplay;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
