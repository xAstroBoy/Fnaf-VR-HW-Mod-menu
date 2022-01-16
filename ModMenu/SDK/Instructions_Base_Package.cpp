/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Instructions_Base_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInstructions_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.PreConstruct");
		
		UInstructions_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::TriggerPullWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.TriggerPullWidget");
		
		UInstructions_Base_C_TriggerPullWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::On_Controller_Tracking_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed");
		
		UInstructions_Base_C_On_Controller_Tracking_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.Setup With Skip
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int>                                        FramesToSkip                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UInstructions_Base_C::Setup_With_Skip(TArray<int> FramesToSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup With Skip");
		
		UInstructions_Base_C_Setup_With_Skip_Params params {};
		params.FramesToSkip = FramesToSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::TriggerPullWidgetReverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse");
		
		UInstructions_Base_C_TriggerPullWidgetReverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.Setup Inputs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::Setup_Inputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup Inputs");
		
		UInstructions_Base_C_Setup_Inputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.Setup Without Skip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::Setup_Without_Skip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup Without Skip");
		
		UInstructions_Base_C_Setup_Without_Skip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.Update Displays
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_Base_C::Update_Displays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Update Displays");
		
		UInstructions_Base_C_Update_Displays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstructions_Base_C::ExecuteUbergraph_Instructions_Base(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base");
		
		UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_Base.Instructions_Base_C");
		return ptr;
	}

}


