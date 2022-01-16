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
	 * BlueprintGeneratedClass Office01_Bonnie.Office01_Bonnie_C
	 * Size -> 0x004C (FullSize[0x03D8] - InheritedSize[0x038C])
	 */
	class AOffice01_Bonnie_C : public AOffice01_AiBase_BP_C
	{
	public:
		unsigned char                                              UnknownData_BG8X[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Movement;                                          // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              BonnieCurrentRoom;                                       // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class ALocPoint_BP_C*                                      OfficeLoc_Ref;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARoomInfo_Bp_C*                                      OfficeRoom_Ref;                                          // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARoomInfo_Bp_C*                                      WestHall_Room;                                           // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALocPoint_BP_C*                                      WestHall_Loc;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBonnie_Office01_AnimBp_C*                           BonnieAMP_Ref;                                           // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location);
		void ForceMoveBonnie();
		void Bonnie_SpecialDoorMove();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Office01_Bonnie(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
