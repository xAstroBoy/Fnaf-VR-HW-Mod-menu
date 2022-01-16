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
	 * BlueprintGeneratedClass NightGuard_Office02.NightGuard_Office02_C
	 * Size -> 0x0068 (FullSize[0x02B0] - InheritedSize[0x0248])
	 */
	class ANightGuard_Office02_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AEmitter*                                            P_Ambient_Dust_Emissive4_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_NIGHTMARE_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASpotLight*                                          OfficeSpotLight_Nightmare_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASpotLight*                                          OfficeSpotLight_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEmitter*                                            P_Ambient_Dust_Emissive_2_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEmitter*                                            P_Ambient_Dust_Emissive2_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  Post_Withered_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  Post_Withered2_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  Post_Withered3_4_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  Post_WitheredCenter_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHiddenCoin_C*                                       HiddenCoin_05_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEmitter*                                            P_Ambient_Dust2_ExecuteUbergraph_NightGuard_Office02_RefProperty; // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_NightGuard_Office02(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
