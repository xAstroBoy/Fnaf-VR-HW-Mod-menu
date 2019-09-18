
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

// Function PickupActorInterface.PickupActorInterface_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void UPickupActorInterface_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupActorInterface.PickupActorInterface_C.Drop");

	UPickupActorInterface_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupActorInterface.PickupActorInterface_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPickupActorInterface_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupActorInterface.PickupActorInterface_C.Pickup");

	UPickupActorInterface_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
