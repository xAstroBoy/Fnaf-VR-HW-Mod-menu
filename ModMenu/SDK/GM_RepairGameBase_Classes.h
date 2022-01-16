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
	 * BlueprintGeneratedClass GM_RepairGameBase.GM_RepairGameBase_C
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class AGM_RepairGameBase_C : public AGameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void KillPlayer(JumpScareList_EJumpScareList Character);
		void LevelDefeat();
		void LevelVictory();
		void ExecuteUbergraph_GM_RepairGameBase(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
