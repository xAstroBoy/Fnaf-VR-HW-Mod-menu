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
	 * BlueprintGeneratedClass NightGuard_Office03.NightGuard_Office03_C
	 * Size -> 0x0040 (FullSize[0x0288] - InheritedSize[0x0248])
	 */
	class ANightGuard_Office03_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AHiddenCoin_C*                                       HiddenCoin_07_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_LookDev_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_1_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    ENV_MOD_Duct_Corner6_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Plane_2_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEmitter*                                            P_TrashFire5_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHiddenGlitchTrigger_02_C*                           HiddenGlitchTrigger_2_ExecuteUbergraph_NightGuard_Office03_RefProperty; // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_NightGuard_Office03(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
