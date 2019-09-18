#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickupActorInterface.PickupActorInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPickupActorInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupActorInterface.PickupActorInterface_C");
		return ptr;
	}


	void Drop();
	void Pickup(class USceneComponent* AttachTo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
