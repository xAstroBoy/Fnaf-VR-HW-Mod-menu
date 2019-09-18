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

// BlueprintGeneratedClass NightGuard_Office02.NightGuard_Office02_C
// 0x0050 (0x0380 - 0x0330)
class ANightGuard_Office02_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APostProcessVolume*                          Post_WitheredCenter_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PostProcessVolume_NIGHTMARE_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpotLight*                                  OfficeSpotLight_Nightmare_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpotLight*                                  OfficeSpotLight_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_Ambient_Dust_Emissive_2_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_Ambient_Dust_Emissive2_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          Post_Withered_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          Post_Withered2_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          Post_Withered3_4_ExecuteUbergraph_NightGuard_Office02_RefProperty;// 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightGuard_Office02.NightGuard_Office02_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_NightGuard_Office02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
