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

// BlueprintGeneratedClass Timer_BP_Base.Timer_BP_Base_C
// 0x0034 (0x035C - 0x0328)
class ATimer_BP_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Timer;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Timer_Ended;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Set_New_Time;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Timer_BP_Base.Timer_BP_Base_C");
		return ptr;
	}


	void Time_Ref(bool* Timer_hit_0);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Pause_Timer();
	void Set_Timer(int Set_Time);
	void Start_Timer();
	void ExecuteUbergraph_Timer_BP_Base(int EntryPoint);
	void Timer_Ended__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
