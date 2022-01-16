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
	 * BlueprintGeneratedClass Office02_ToyBonnie.Office02_ToyBonnie_C
	 * Size -> 0x0000 (FullSize[0x0399] - InheritedSize[0x0399])
	 */
	class AOffice02_ToyBonnie_C : public AOffice02_AiBase_BP_C
	{
	public:
		void CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
