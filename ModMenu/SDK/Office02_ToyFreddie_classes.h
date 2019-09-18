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

// BlueprintGeneratedClass Office02_ToyFreddie.Office02_ToyFreddie_C
// 0x000B (0x0480 - 0x0475)
class AOffice02_ToyFreddie_C : public AOffice02_AiBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_ToyFreddie.Office02_ToyFreddie_C");
		return ptr;
	}


	void CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom);
	void UserConstructionScript();
	void FreddyBlackEye();
	void FreddyNormalEye();
	void ExecuteUbergraph_Office02_ToyFreddie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
