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

// BlueprintGeneratedClass LocPoint_BP.LocPoint_BP_C
// 0x0020 (0x0348 - 0x0328)
class ALocPoint_BP_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ListOfOfficeAiTypes;                                      // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AOfficeAiBase_Bp_C*                          CharacterAtLocation;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LocPoint_BP.LocPoint_BP_C");
		return ptr;
	}


	void IsAvailable(bool* IsAvailable);
	void GetOwnerOfficeAi(class AOfficeAiBase_Bp_C** CharacterAtLocation);
	void SetOwnerOfficeAi(class AOfficeAiBase_Bp_C* OwnerAi, bool* OwnerSet);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
