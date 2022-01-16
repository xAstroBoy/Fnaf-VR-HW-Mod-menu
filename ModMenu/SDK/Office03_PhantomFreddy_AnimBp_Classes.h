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
	 * AnimBlueprintGeneratedClass Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C
	 * Size -> 0x0290 (FullSize[0x0500] - InheritedSize[0x0270])
	 */
	class UOffice03_PhantomFreddy_AnimBp_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_52A572614E7DF939F488BEBFBE1F1421;     // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA; // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F; // 0x02D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1409D16845E1426C6ACF408A654C152F; // 0x02F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9330C89C483C5614DD7133A0B1DF893A; // 0x0370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9D2FAFC04F0EF62C7EA7989D5F9AE777; // 0x03A0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_798EC40F44DB5B1CFA87E5B22F8D6B54; // 0x0418(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_749082B3400EB6C470D4549B72C5A40F; // 0x0448(0x00B0)
		class AOffice03_PhantomFreddy_C*                           PhantomFreddyActorReference;                             // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA();
		void BlueprintBeginPlay();
		void AnimNotify_StopFreddy();
		void ExecuteUbergraph_Office03_PhantomFreddy_AnimBp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
