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
	 * BlueprintGeneratedClass PlushTrapMoveState.PlushTrapMoveState_C
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	class UPlushTrapMoveState_C : public UPlushTrapState_C
	{
	public:
		int                                                        DirectionID;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMovementDirection(int* Direction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
