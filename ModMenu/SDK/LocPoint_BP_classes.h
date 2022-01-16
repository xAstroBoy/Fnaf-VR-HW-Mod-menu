#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass LocPoint_BP.LocPoint_BP_C
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class ALocPoint_BP_C : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ListOfOfficeAiTypes;                                     // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class AOfficeAiBase_Bp_C*                                  CharacterAtLocation;                                     // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsAvailable(bool* IsAvailable);
		void GetOwnerOfficeAi(class AOfficeAiBase_Bp_C** CharacterAtLocation);
		void SetOwnerOfficeAi(class AOfficeAiBase_Bp_C* OwnerAi, bool* OwnerSet);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
