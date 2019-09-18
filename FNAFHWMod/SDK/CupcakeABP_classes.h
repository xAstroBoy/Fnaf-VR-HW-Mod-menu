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

// AnimBlueprintGeneratedClass CupcakeABP.CupcakeABP_C
// 0x0273 (0x05D3 - 0x0360)
class UCupcakeABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34;// 0x0368(0x00A0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270;// 0x0408(0x00F8)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D0732AC14C34A95F644764B9BA5846E8;// 0x0500(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_Root_9446579449A07414FD60AFB8C71A17C8;      // 0x0590(0x0040)
	bool                                               StartAnim;                                                // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomLocationsActive;                                    // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayOnlyEasy;                                             // 0x05D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CupcakeABP.CupcakeABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270();
	void ExecuteUbergraph_CupcakeABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
