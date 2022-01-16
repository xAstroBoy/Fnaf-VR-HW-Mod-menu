/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "MaintenenceComputer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.DisableAllAnimLoadBars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::DisableAllAnimLoadBars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.DisableAllAnimLoadBars");
		
		UMaintenenceComputer_C_DisableAllAnimLoadBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::DisableAnimLoadBar_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Audio");
		
		UMaintenenceComputer_C_DisableAnimLoadBar_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Vent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::DisableAnimLoadBar_Vent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Vent");
		
		UMaintenenceComputer_C_DisableAnimLoadBar_Vent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_All
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::DisableAnimLoadBar_All()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_All");
		
		UMaintenenceComputer_C_DisableAnimLoadBar_All_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Cam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::DisableAnimLoadBar_Cam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.DisableAnimLoadBar_Cam");
		
		UMaintenenceComputer_C_DisableAnimLoadBar_Cam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::EnableAnimLoadbar_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_Audio");
		
		UMaintenenceComputer_C_EnableAnimLoadbar_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Cam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::EnableAnimLoadBar_Cam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Cam");
		
		UMaintenenceComputer_C_EnableAnimLoadBar_Cam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Vent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::EnableAnimLoadBar_Vent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadBar_Vent");
		
		UMaintenenceComputer_C_EnableAnimLoadBar_Vent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_All
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::EnableAnimLoadbar_All()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.EnableAnimLoadbar_All");
		
		UMaintenenceComputer_C_EnableAnimLoadbar_All_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaintenenceComputer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.Tick");
		
		UMaintenenceComputer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMaintenenceComputer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.Construct");
		
		UMaintenenceComputer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function MaintenenceComputer.MaintenenceComputer_C.ExecuteUbergraph_MaintenenceComputer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaintenenceComputer_C::ExecuteUbergraph_MaintenenceComputer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaintenenceComputer.MaintenenceComputer_C.ExecuteUbergraph_MaintenenceComputer");
		
		UMaintenenceComputer_C_ExecuteUbergraph_MaintenenceComputer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMaintenenceComputer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaintenenceComputer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MaintenenceComputer.MaintenenceComputer_C");
		return ptr;
	}

}


