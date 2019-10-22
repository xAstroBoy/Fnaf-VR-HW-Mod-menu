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

// BlueprintGeneratedClass Office_MotionControllerPawn.Office_MotionControllerPawn_C
// 0x006F (0x0ED8 - 0x0E69)
class AOffice_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            OfficeVictoryWidget_1;                                    // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_543A8DE14AF85162E15C8E904FBCECBA;   // 0x0E80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_543A8DE14AF85162E15C8E904FBCECBA;   // 0x0E84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOffice01_Door_Bp_C*                         RefToDoorBP;                                              // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Door_Bp_C*                         RefToDoorBP_1;                                            // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Counter;                                                  // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0EA4(0x0004) MISSED OFFSET
	class AOffice01_Foxy_C*                            RefTOFoxy;                                                // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Freddy_C*                          RefTOFreddy;                                              // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Bonnie_C*                          RefToBonnie;                                              // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Chica_C*                           RefToChica;                                               // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AnimCheck_BonnieL;                                        // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Chica_Notify;                                             // 0x0EC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bonnie_Notify;                                            // 0x0ECA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0ECB(0x0005) MISSED OFFSET
	class AOffice01_GameManager_C*                     RefToManager;                                             // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office_MotionControllerPawn.Office_MotionControllerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void TriggerNightmareScareSequence();
	void ExecuteUbergraph_Office_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
