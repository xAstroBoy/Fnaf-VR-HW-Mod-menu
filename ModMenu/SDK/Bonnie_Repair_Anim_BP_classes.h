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
	 * AnimBlueprintGeneratedClass Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C
	 * Size -> 0x0594 (FullSize[0x0804] - InheritedSize[0x0270])
	 */
	class UBonnie_Repair_Anim_BP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_1F3B13F748A607565FF083BF48280554;     // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF; // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3; // 0x02D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_06671E624F21221E2023729E1089CD8B; // 0x02F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28910BCE4FE03E94EBD7008091923346; // 0x0370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6452C5EE415940F0C6BA1D8133E68757; // 0x03A0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_83F757F94C8035649FF93CA1CD5CF508; // 0x0418(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8E67CD0242FD8B244155BEA184A5D188; // 0x0448(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_273B9D8C49DAB0DA4EA19894A34B7109; // 0x04C0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6AC79E2F4BEDA845F62D9095A3493AF2; // 0x04F0(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53; // 0x05A0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_F281071F47F5AF96801C5EB9F3823064; // 0x06A8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_81B05EB94E45A933E773769A270E3ED0; // 0x06C8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_35C458FD407BABE132FD94940B789CA9; // 0x06E8(0x0108)
		class UAnimSequenceBase*                                   AnimSequence;                                            // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartPosition;                                           // 0x07F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Loop;                                                    // 0x07FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S1F9[0x3];                                   // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShakeAlpha;                                              // 0x0800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF();
		void Action_Completed(int Action_ID);
		void JumpScare_Temp();
		void ExecuteUbergraph_Bonnie_Repair_Anim_BP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
