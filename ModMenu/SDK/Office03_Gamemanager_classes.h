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
	 * BlueprintGeneratedClass Office03_Gamemanager.Office03_Gamemanager_C
	 * Size -> 0x00C8 (FullSize[0x0430] - InheritedSize[0x0368])
	 */
	class AOffice03_Gamemanager_C : public AOffice_BaseGamemanager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnSoundPlayed;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		Office03_PhantomAi_enum_EOffice03_PhantomAi_enum           PhantomAiTypeToUse;                                      // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TKKW[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          PhantomDataTable;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLevelInfoStruct                                    CurrentLevelInfo_1;                                      // 0x0390(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UDataTable*                                          ResourceManagementDataTable;                             // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableAllPhantoms;                                      // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J0IL[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             DisablePhantoms;                                         // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AStaticMeshActor*                                    MovableVentDoors;                                        // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRMData(struct FOffice03_ResourceManagement_struct* AIData_Struct, bool* DataWasFound);
		void GetPhantomAIData(Office03_PhantomAi_enum_EOffice03_PhantomAi_enum PhantomType, struct FOffice03_PhantomData* AIData_Struct, bool* DataWasFound);
		void SoundPlayed(class ARoomInfo_Bp_C* Room);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Office03_Gamemanager(int EntryPoint);
		void DisablePhantoms__DelegateSignature();
		void OnSoundPlayed__DelegateSignature(class ARoomInfo_Bp_C* Room);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
