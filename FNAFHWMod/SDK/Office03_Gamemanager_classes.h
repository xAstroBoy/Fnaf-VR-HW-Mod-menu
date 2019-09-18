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

// BlueprintGeneratedClass Office03_Gamemanager.Office03_Gamemanager_C
// 0x00C0 (0x0510 - 0x0450)
class AOffice03_Gamemanager_C : public AOffice_BaseGamemanager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnSoundPlayed;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EOffice03_PhantomAi_enum>              PhantomAiTypeToUse;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UDataTable*                                  PhantomDataTable;                                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLevelInfoStruct                            CurrentLevelInfo_1;                                       // 0x0478(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                                  ResourceManagementDataTable;                              // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableAllPhantoms;                                       // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DisablePhantoms;                                          // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AStaticMeshActor*                            MovableVentDoors;                                         // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office03_Gamemanager.Office03_Gamemanager_C");
		return ptr;
	}


	void GetRMData(struct FOffice03_ResourceManagement_struct* AIData_Struct, bool* DataWasFound);
	void GetPhantomAIData(TEnumAsByte<EOffice03_PhantomAi_enum> PhantomType, struct FOffice03_PhantomData* AIData_Struct, bool* DataWasFound);
	void UserConstructionScript();
	void SoundPlayed(class ARoomInfo_Bp_C* Room);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Office03_Gamemanager(int EntryPoint);
	void DisablePhantoms__DelegateSignature();
	void OnSoundPlayed__DelegateSignature(class ARoomInfo_Bp_C* Room);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
