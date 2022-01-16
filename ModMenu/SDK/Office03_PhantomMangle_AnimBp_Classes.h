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
	 * AnimBlueprintGeneratedClass Office03_PhantomMangle_AnimBp.Office03_PhantomMangle_AnimBp_C
	 * Size -> 0x0288 (FullSize[0x04F8] - InheritedSize[0x0270])
	 */
	class UOffice03_PhantomMangle_AnimBp_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_AD9A803A41EB13F6C370EF9151720931;     // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1E9825024767B9D3692CB8B25410CF68; // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E057F25E456DA66062B9EF88A9E9A070; // 0x02D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EB9EE5884D6276E3596CB98D428C0CD7; // 0x02F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_757CD0284F9B93EF6E9D96A4E484B961; // 0x0370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DAB541A04070B7655A9D449C3D762387; // 0x03A0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7753B71147EA19812D1C8C9FE1C8A85D; // 0x0418(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_1D157BDE4A8958DE8D0824855F09D7C7; // 0x0448(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_Office03_PhantomMangle_AnimBp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
