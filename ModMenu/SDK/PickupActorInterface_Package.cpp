/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PickupActorInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PickupActorInterface.PickupActorInterface_C.Drop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPickupActorInterface_C::Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PickupActorInterface.PickupActorInterface_C.Drop");
		
		UPickupActorInterface_C_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function PickupActorInterface.PickupActorInterface_C.Pickup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             AttachTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPickupActorInterface_C::Pickup(class USceneComponent* AttachTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PickupActorInterface.PickupActorInterface_C.Pickup");
		
		UPickupActorInterface_C_Pickup_Params params {};
		params.AttachTo = AttachTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPickupActorInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPickupActorInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PickupActorInterface.PickupActorInterface_C");
		return ptr;
	}

}


