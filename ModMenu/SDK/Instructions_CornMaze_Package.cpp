/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_CornMaze_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_CornMaze.Instructions_CornMaze_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInstructions_CornMaze_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_CornMaze.Instructions_CornMaze_C.Construct");
		
		UInstructions_CornMaze_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_CornMaze.Instructions_CornMaze_C.OnControllerTrackingChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UInstructions_CornMaze_C::OnControllerTrackingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_CornMaze.Instructions_CornMaze_C.OnControllerTrackingChanged");
		
		UInstructions_CornMaze_C_OnControllerTrackingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Instructions_CornMaze.Instructions_CornMaze_C.ExecuteUbergraph_Instructions_CornMaze
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstructions_CornMaze_C::ExecuteUbergraph_Instructions_CornMaze(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Instructions_CornMaze.Instructions_CornMaze_C.ExecuteUbergraph_Instructions_CornMaze");
		
		UInstructions_CornMaze_C_ExecuteUbergraph_Instructions_CornMaze_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_CornMaze_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_CornMaze_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_CornMaze.Instructions_CornMaze_C");
		return ptr;
	}

}


