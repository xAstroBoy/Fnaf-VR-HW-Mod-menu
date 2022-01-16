/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ConfirmationWidget_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmationWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.Construct");
		
		UConfirmationWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.Tick");
		
		UConfirmationWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationWidget_C::PizzaConfimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation");
		
		UConfirmationWidget_C_PizzaConfimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.StopPizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationWidget_C::StopPizza()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.StopPizza");
		
		UConfirmationWidget_C_StopPizza_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.StartPizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationWidget_C::StartPizza()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.StartPizza");
		
		UConfirmationWidget_C_StartPizza_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.StartLoadingCycle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationWidget_C::StartLoadingCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.StartLoadingCycle");
		
		UConfirmationWidget_C_StartLoadingCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationWidget_C::ExecuteUbergraph_ConfirmationWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget");
		
		UConfirmationWidget_C_ExecuteUbergraph_ConfirmationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConfirmationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationWidget.ConfirmationWidget_C");
		return ptr;
	}

}


