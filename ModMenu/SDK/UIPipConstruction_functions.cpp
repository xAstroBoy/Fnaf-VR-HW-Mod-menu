
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

// Function UIPipConstruction.UIPipConstruction_C.SetSelectedPip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UImage*>          PipArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedPipIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIPipConstruction_C::STATIC_SetSelectedPip(int SelectedPipIndex, class UObject* __WorldContext, TArray<class UImage*>* PipArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPipConstruction.UIPipConstruction_C.SetSelectedPip");

	UUIPipConstruction_C_SetSelectedPip_Params params;
	params.SelectedPipIndex = SelectedPipIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PipArray != nullptr)
		*PipArray = params.PipArray;
}


// Function UIPipConstruction.UIPipConstruction_C.ConstructEndSpacer
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBox*          PipContainer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIPipConstruction_C::STATIC_ConstructEndSpacer(class UHorizontalBox* PipContainer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPipConstruction.UIPipConstruction_C.ConstructEndSpacer");

	UUIPipConstruction_C_ConstructEndSpacer_Params params;
	params.PipContainer = PipContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIPipConstruction.UIPipConstruction_C.ConstructPips
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumPips                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UImage*>          PipArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UHorizontalBox*          PipContainer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIPipConstruction_C::STATIC_ConstructPips(int NumPips, class UHorizontalBox* PipContainer, class UObject* __WorldContext, TArray<class UImage*>* PipArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPipConstruction.UIPipConstruction_C.ConstructPips");

	UUIPipConstruction_C_ConstructPips_Params params;
	params.NumPips = NumPips;
	params.PipContainer = PipContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PipArray != nullptr)
		*PipArray = params.PipArray;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
