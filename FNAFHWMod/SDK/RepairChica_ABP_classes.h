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

// AnimBlueprintGeneratedClass RepairChica_ABP.RepairChica_ABP_C
// 0x07CD (0x0B2D - 0x0360)
class URepairChica_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_573704584B46237433C9848446188767;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D55F5C1480305CFCA7BA78A63659E20;// 0x03A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC2B292D4E86E3FAE6DF61B022ACBB9F;// 0x0448(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AAE541CB44DA848B5D01CAA590FF37BA;// 0x04E8(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43E46EF341CAC74F95082C8183703AEB;// 0x05C0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_375505F0445A087F51437DAEB4115BB3;// 0x06F8(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DE3237A64CD31BC43F6DCA943CC2FCE8;// 0x0738(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E7E94D5849A126D6CDD07E96CEBE0734;// 0x0778(0x0138)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_92FD74E74124D3B8C9557C9F5E1058B1;// 0x08B0(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E39489214EC7E64993AAE193238B4695;// 0x09A8(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CAAEEFC045AD4A61C613738C5DD07B72;// 0x0A80(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_974A98F247204B8446AD778F643123C6;// 0x0AC8(0x0048)
	bool                                               OpenMouth;                                                // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Chomp;                                                    // 0x0B11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B12(0x0002) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              LookFromPoint;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRotator                                    EyeRotation;                                              // 0x0B20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EyeFollow;                                                // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RepairChica_ABP.RepairChica_ABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_TwoWayBlend_92FD74E74124D3B8C9557C9F5E1058B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_ModifyBone_E7E94D5849A126D6CDD07E96CEBE0734();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_ModifyBone_43E46EF341CAC74F95082C8183703AEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_SequencePlayer_DC2B292D4E86E3FAE6DF61B022ACBB9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RepairChica_ABP_AnimGraphNode_SequencePlayer_3D55F5C1480305CFCA7BA78A63659E20();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_RepairChica_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
