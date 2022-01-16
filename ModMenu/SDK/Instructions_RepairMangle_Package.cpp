/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_RepairMangle_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_RepairMangle.Instructions_RepairMangle_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInstructions_RepairMangle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.Construct");
		
		UInstructions_RepairMangle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_RepairMangle.Instructions_RepairMangle_C.OnControllerTrackingChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_RepairMangle_C::OnControllerTrackingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.OnControllerTrackingChanged");
		
		UInstructions_RepairMangle_C_OnControllerTrackingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_RepairMangle.Instructions_RepairMangle_C.ExecuteUbergraph_Instructions_RepairMangle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstructions_RepairMangle_C::ExecuteUbergraph_Instructions_RepairMangle(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_RepairMangle.Instructions_RepairMangle_C.ExecuteUbergraph_Instructions_RepairMangle");
		
		UInstructions_RepairMangle_C_ExecuteUbergraph_Instructions_RepairMangle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_RepairMangle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_RepairMangle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_RepairMangle.Instructions_RepairMangle_C");
		return ptr;
	}

}


