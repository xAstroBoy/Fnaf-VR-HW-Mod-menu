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

// BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C
// 0x001C (0x0378 - 0x035C)
class ATimer_BP_Child_FunWith_C : public ATimer_BP_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Set_Time;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class AFun_With_PlushTrap_BP_C*                    FunWithPlushTrapBP;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Timer_hit_0();
	void ExecuteUbergraph_Timer_BP_Child_FunWith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
