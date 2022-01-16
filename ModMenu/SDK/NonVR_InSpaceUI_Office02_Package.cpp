/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NonVR_InSpaceUI_Office02_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI_Office02.NonVR_InSpaceUI_Office02_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANonVR_InSpaceUI_Office02_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI_Office02.NonVR_InSpaceUI_Office02_C.ReceiveTick");
		
		ANonVR_InSpaceUI_Office02_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NonVR_InSpaceUI_Office02.NonVR_InSpaceUI_Office02_C.ExecuteUbergraph_NonVR_InSpaceUI_Office02
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANonVR_InSpaceUI_Office02_C::ExecuteUbergraph_NonVR_InSpaceUI_Office02(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI_Office02.NonVR_InSpaceUI_Office02_C.ExecuteUbergraph_NonVR_InSpaceUI_Office02");
		
		ANonVR_InSpaceUI_Office02_C_ExecuteUbergraph_NonVR_InSpaceUI_Office02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANonVR_InSpaceUI_Office02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANonVR_InSpaceUI_Office02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NonVR_InSpaceUI_Office02.NonVR_InSpaceUI_Office02_C");
		return ptr;
	}

}


