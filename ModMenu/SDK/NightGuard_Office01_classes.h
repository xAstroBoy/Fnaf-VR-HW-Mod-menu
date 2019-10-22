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

// BlueprintGeneratedClass NightGuard_Office01.NightGuard_Office01_C
// 0x0030 (0x0360 - 0x0330)
class ANightGuard_Office01_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              A1_Rotation;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DT;                                                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftMaxAngle;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RighrMaxAngle;                                            // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawerSoundPlay;                                          // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	float                                              DrawerVolume;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APostProcessVolume*                          PostProcessVolume3_ExecuteUbergraph_NightGuard_Office01_RefProperty;// 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          PostProcessVolume_1_ExecuteUbergraph_NightGuard_Office01_RefProperty;// 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightGuard_Office01.NightGuard_Office01_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_NightGuard_Office01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
