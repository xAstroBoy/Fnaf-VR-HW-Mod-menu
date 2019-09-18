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

// AnimBlueprintGeneratedClass NMHands_ABP.NMHands_ABP_C
// 0x12C0 (0x1620 - 0x0360)
class UNMHands_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FE5A4CFD4128C0A8C66EB1ADEBF70A0B;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D4480F2461511E13EEFDC82843B6128;// 0x03A8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4F2890E1411DC7DA00ACC4BFA4F1E3B8;// 0x0448(0x00F0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1;// 0x0538(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8;// 0x0580(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454;// 0x05C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0;// 0x0610(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9;// 0x0658(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_765C3A064E50888EA67799B68E40CAD9;// 0x06A0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D6257A7F46C9588927850C95BE2B3D36;// 0x06E0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1339CA0741B677834D4EC9AC9B701671;// 0x0720(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3B95A0A454C32D287847E9364FD75A4;// 0x0858(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CB484BA84DED80E6EC6EE8B17BD74D70;// 0x08F8(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_328F9A264549D8F96B7064BBBA2A01A8;// 0x0938(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F420EEE477F57B40E738D9176BA1993;// 0x09A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C668F3A84AA9E78FD9DC8C8E5F291AB9;// 0x0A48(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C476C3C4043FFFD8E85C0BB18528C01;// 0x0AE8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24CC4DC8470745FCC6B5DD8E68510CCE;// 0x0B88(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_3259FF5A4A6F8B838D82E6B737250325;// 0x0C28(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DDD5B80B42CE86576E05F384CBCE804A;// 0x0CF8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E10780744CE44B4598B369B3FA59F546;// 0x0D38(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E14D030C4265B0B64EFD898D850CA1C4;// 0x0DD8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA7193F94F8BB24D9CFE1193CA1AD51A;// 0x0E78(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F679666D4FE452793C2DBA856D8CE148;// 0x0F18(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41A74C824657668670657784E52994C8;// 0x0FB8(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_171277D14D2FFFB8CE7A5882A9F18845;// 0x1058(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_523787F34DFE05EDAC71D88675B29769;// 0x1128(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A73D37B640CF4596BE07C786C4FF0480;// 0x1168(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BA355F5B41BBB81A9A64C182AB84AEDB;// 0x11A8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F3D72FAA450E02C81FFAC1B4C3A595A9;// 0x11E8(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8507520E48CE73E7E2983A941DE25389;// 0x1320(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8C73F9B04E11E90C41D4A8B4509AFB87;// 0x13C0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C09DEFB54F7D3427E7EDD6A9984A3B0A;// 0x1400(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B1B29E3B4D7F26A1EDEE049D1B0CD4F2;// 0x14E0(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8F95C1C54126424B8EE05F95E33FA1D7;// 0x15B8(0x0048)
	bool                                               CanAppear;                                                // 0x1600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1601(0x0003) MISSED OFFSET
	float                                              BasePlayRate;                                             // 0x1604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ANMHands_BP_C*                               BP_Ref;                                                   // 0x1608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WigglePlayRate;                                           // 0x1610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Position;                                                 // 0x1614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDisappear;                                             // 0x1618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHit;                                                    // 0x1619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanStart;                                                 // 0x161A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x161B(0x0001) MISSED OFFSET
	float                                              RateMult;                                                 // 0x161C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NMHands_ABP.NMHands_ABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_IsFinished();
	void AnimNotify_IsNotFinished();
	void AnimNotify_IsInvis();
	void AnimNotify_HandsGone();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0();
	void ExecuteUbergraph_NMHands_ABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
