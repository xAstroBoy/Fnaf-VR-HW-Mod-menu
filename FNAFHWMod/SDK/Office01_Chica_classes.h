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

// BlueprintGeneratedClass Office01_Chica.Office01_Chica_C
// 0x0044 (0x04B8 - 0x0474)
class AOffice01_Chica_C : public AOffice01_AiBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Movement;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARoomInfo_Bp_C*                              OfficeRoom_Ref;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              OfficeLoc_Ref;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              EastHall_Room;                                            // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              EastHall_Loc;                                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UChica_Office01_AnimBp_C*                    ChicaABP_Ref;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOffice01_Freddy_C*                          Freddy_Ref;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Chica.Office01_Chica_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void ReceiveTick(float* DeltaSeconds);
	void Chica_SpecialDoorMove();
	void ExecuteUbergraph_Office01_Chica(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
