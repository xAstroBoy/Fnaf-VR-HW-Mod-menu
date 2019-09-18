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

// BlueprintGeneratedClass Office02_ToyChica.Office02_ToyChica_C
// 0x0023 (0x0498 - 0x0475)
class AOffice02_ToyChica_C : public AOffice02_AiBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      PlateTemp1;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cupcake;                                                  // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Chica_Beak;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_ToyChica.Office02_ToyChica_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void ExecuteUbergraph_Office02_ToyChica(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
