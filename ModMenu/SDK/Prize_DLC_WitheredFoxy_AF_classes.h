﻿#pragma once

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
	 * BlueprintGeneratedClass Prize_DLC_WitheredFoxy_AF.Prize_DLC_WitheredFoxy_AF_C
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class APrize_DLC_WitheredFoxy_AF_C : public APrize_Parent_C
	{
	public:
		class USphereComponent*                                    Sphere;                                                  // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Foxy;                                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
