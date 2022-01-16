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
	 * BlueprintGeneratedClass Office02_ToyFreddie.Office02_ToyFreddie_C
	 * Size -> 0x000F (FullSize[0x03A8] - InheritedSize[0x0399])
	 */
	class AOffice02_ToyFreddie_C : public AOffice02_AiBase_BP_C
	{
	public:
		unsigned char                                              UnknownData_QRY5[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom);
		void FreddyBlackEye();
		void FreddyNormalEye();
		void ExecuteUbergraph_Office02_ToyFreddie(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
