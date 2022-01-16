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
	 * AnimBlueprintGeneratedClass Office02_Puppet_AnimBp.Office02_Puppet_AnimBp_C
	 * Size -> 0x0560 (FullSize[0x07D0] - InheritedSize[0x0270])
	 */
	class UOffice02_Puppet_AnimBp_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_06D63F7F45E522A6ED74739B4637364A;     // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_CDCBE5F7407BD01733376FB9FE1DC378; // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_049A183F4E447F86219A7E9D1ACCAAD0; // 0x02D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13A463824E15A10ECB6BB2BA7F15E887; // 0x02F8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E8D158F84878BF0D9EAA84B447A14EED; // 0x0320(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_97711DED4F7806A22BAF64AAED3EF22E; // 0x0398(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_19ED899D44583CE8E4244A82D32C5074; // 0x03C8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_497F94B5462F540A10FC22BAF8647CC7; // 0x03E8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_CB51C0C14E035FE6379C0CBFFE559BDB; // 0x0408(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E098B56846660CF1DA310BB38330FA77; // 0x0510(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_CCF26D9540EC1807E46D19A48E053712; // 0x0588(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_ED387AD845403839AFAAAB864A1D2C96; // 0x05B8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_ED6EE74741DBB38EE9EABF8549CD4AEA; // 0x0630(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_61FC4C1C41BDF2AA7DD9D2ADF290DC17; // 0x0660(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7FC804D3475F419502C3CC9303D00B9E; // 0x06D8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9A0B57044737E64C5AB1E6AD484DF9D4; // 0x0708(0x00B0)
		class AOffice02_Puppet_Bp_C*                               PuppetActorReference;                                    // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice_BaseGamemanager_C*                           GameManagerReference;                                    // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice02_GameManager_C*                             Office02_Reference;                                      // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Puppet_AnimBp_AnimGraphNode_TransitionResult_13A463824E15A10ECB6BB2BA7F15E887();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Puppet_AnimBp_AnimGraphNode_TransitionResult_049A183F4E447F86219A7E9D1ACCAAD0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Puppet_AnimBp_AnimGraphNode_TransitionResult_CDCBE5F7407BD01733376FB9FE1DC378();
		void BlueprintBeginPlay();
		void AnimNotify_StartPuppetExecution();
		void AnimNotify_TriggerJumpScare();
		void ExecuteUbergraph_Office02_Puppet_AnimBp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
