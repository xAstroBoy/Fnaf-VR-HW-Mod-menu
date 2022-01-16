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
	 * BlueprintGeneratedClass DropPointLerpActorCondition.DropPointLerpActorCondition_C
	 * Size -> 0x000C (FullSize[0x0300] - InheritedSize[0x02F4])
	 */
	class ADropPointLerpActorCondition_C : public ADropPointLerpPosition_C
	{
	public:
		unsigned char                                              UnknownData_KMF9[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDropPointActorCondition_C*                          DropPointActorCondition;                                 // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
