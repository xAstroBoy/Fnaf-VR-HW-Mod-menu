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
	 * AnimBlueprintGeneratedClass RepairChica_ABP.RepairChica_ABP_C
	 * Size -> 0x0625 (FullSize[0x0895] - InheritedSize[0x0270])
	 */
	class URepairChica_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_573704584B46237433C9848446188767;     // 0x0278(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3D55F5C1480305CFCA7BA78A63659E20; // 0x02A8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DC2B292D4E86E3FAE6DF61B022ACBB9F; // 0x0320(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_AAE541CB44DA848B5D01CAA590FF37BA; // 0x0398(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_43E46EF341CAC74F95082C8183703AEB; // 0x0458(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_375505F0445A087F51437DAEB4115BB3; // 0x0560(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_DE3237A64CD31BC43F6DCA943CC2FCE8; // 0x0580(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_E7E94D5849A126D6CDD07E96CEBE0734; // 0x05A0(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_92FD74E74124D3B8C9557C9F5E1058B1; // 0x06A8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_E39489214EC7E64993AAE193238B4695; // 0x0770(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_CAAEEFC045AD4A61C613738C5DD07B72; // 0x0828(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_974A98F247204B8446AD778F643123C6; // 0x0850(0x0028)
		bool                                                       OpenMouth;                                               // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Chomp;                                                   // 0x0879(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5798[0x2];                                   // 0x087A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMeshComponent*                                      LookFromPoint;                                           // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            EyeRotation;                                             // 0x0888(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EyeFollow;                                               // 0x0894(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_TwoWayBlend_92FD74E74124D3B8C9557C9F5E1058B1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_ModifyBone_E7E94D5849A126D6CDD07E96CEBE0734();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_ModifyBone_43E46EF341CAC74F95082C8183703AEB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_SequencePlayer_DC2B292D4E86E3FAE6DF61B022ACBB9F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_SequencePlayer_3D55F5C1480305CFCA7BA78A63659E20();
		void BlueprintBeginPlay();
		void ExecuteUbergraph_RepairChica_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
