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
	 * AnimBlueprintGeneratedClass CupcakeABP.CupcakeABP_C
	 * Size -> 0x01E3 (FullSize[0x0453] - InheritedSize[0x0270])
	 */
	class UCupcakeABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34; // 0x0278(0x0078)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270; // 0x02F0(0x00C8)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_D0732AC14C34A95F644764B9BA5846E8; // 0x03B8(0x0068)
		struct FAnimNode_Root                                      AnimGraphNode_Root_9446579449A07414FD60AFB8C71A17C8;     // 0x0420(0x0030)
		bool                                                       StartAnim;                                               // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RandomLocationsActive;                                   // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayOnlyEasy;                                            // 0x0452(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270();
		void ExecuteUbergraph_CupcakeABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
