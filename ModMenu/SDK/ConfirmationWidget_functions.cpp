
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

// Function ConfirmationWidget.ConfirmationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.Construct");

	UConfirmationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWidget.ConfirmationWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.Tick");

	UConfirmationWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation
// (BlueprintCallable, BlueprintEvent)

void UConfirmationWidget_C::PizzaConfimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation");

	UConfirmationWidget_C_PizzaConfimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWidget.ConfirmationWidget_C.StopPizza
// (BlueprintCallable, BlueprintEvent)

void UConfirmationWidget_C::StopPizza()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.StopPizza");

	UConfirmationWidget_C_StopPizza_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWidget.ConfirmationWidget_C.StartPizza
// (BlueprintCallable, BlueprintEvent)

void UConfirmationWidget_C::StartPizza()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.StartPizza");

	UConfirmationWidget_C_StartPizza_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWidget_C::ExecuteUbergraph_ConfirmationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget");

	UConfirmationWidget_C_ExecuteUbergraph_ConfirmationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
