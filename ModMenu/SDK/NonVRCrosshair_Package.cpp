/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NonVRCrosshair_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNonVRCrosshair_C::Get_Center_Brush_1(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1");
		
		UNonVRCrosshair_C_Get_Center_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNonVRCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.Tick");
		
		UNonVRCrosshair_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNonVRCrosshair_C::RecticleLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt");
		
		UNonVRCrosshair_C_RecticleLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNonVRCrosshair_C::RecticleReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset");
		
		UNonVRCrosshair_C_RecticleReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNonVRCrosshair_C::ReticleInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract");
		
		UNonVRCrosshair_C_ReticleInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNonVRCrosshair_C::ExecuteUbergraph_NonVRCrosshair(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair");
		
		UNonVRCrosshair_C_ExecuteUbergraph_NonVRCrosshair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNonVRCrosshair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNonVRCrosshair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NonVRCrosshair.NonVRCrosshair_C");
		return ptr;
	}

}


