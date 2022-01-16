/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "BedroomClosetDoor_Child_For_CB_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABedroomClosetDoor_Child_For_CB_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ReceiveBeginPlay");
		
		ABedroomClosetDoor_Child_For_CB_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ExecuteUbergraph_BedroomClosetDoor_Child_For_CB
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoor_Child_For_CB_C::ExecuteUbergraph_BedroomClosetDoor_Child_For_CB(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ExecuteUbergraph_BedroomClosetDoor_Child_For_CB");
		
		ABedroomClosetDoor_Child_For_CB_C_ExecuteUbergraph_BedroomClosetDoor_Child_For_CB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABedroomClosetDoor_Child_For_CB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABedroomClosetDoor_Child_For_CB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C");
		return ptr;
	}

}


