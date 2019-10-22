
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

// Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::TriggerPullWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.TriggerPullWidget");

	UInstructions_Base_C_TriggerPullWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.PreConstruct");

	UInstructions_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Base_C::ExecuteUbergraph_Instructions_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base");

	UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
