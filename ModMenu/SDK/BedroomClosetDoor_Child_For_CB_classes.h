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

// BlueprintGeneratedClass BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C
// 0x0013 (0x03E8 - 0x03D5)
class ABedroomClosetDoor_Child_For_CB_C : public ABedroomClosetDoor_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    DoorMat;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BedroomClosetDoor_Child_For_CB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
