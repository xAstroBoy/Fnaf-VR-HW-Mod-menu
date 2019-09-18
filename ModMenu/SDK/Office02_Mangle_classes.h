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

// BlueprintGeneratedClass Office02_Mangle.Office02_Mangle_C
// 0x0033 (0x04A8 - 0x0475)
class AOffice02_Mangle_C : public AOffice02_AiBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterMovements_1;                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Name_LeftVent_1;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_0_1;                                               // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class ARoomInfo_Bp_C*                              MangleResetPoint;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              MangleResetLoc;                                           // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_Mangle.Office02_Mangle_C");
		return ptr;
	}


	void UserConstructionScript();
	void MoveBackToStarting();
	void ExecuteUbergraph_Office02_Mangle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
