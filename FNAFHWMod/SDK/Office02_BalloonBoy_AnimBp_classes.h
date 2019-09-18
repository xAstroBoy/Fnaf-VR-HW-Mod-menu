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

// AnimBlueprintGeneratedClass Office02_BalloonBoy_AnimBp.Office02_BalloonBoy_AnimBp_C
// 0x0EEC (0x124C - 0x0360)
class UOffice02_BalloonBoy_AnimBp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4176CD0A42A7D07C787EC6BA4AA4ED65;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2C66070499EE2F79CD882BD69508366;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B2338F5475316957AEC8AA6920835BB;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77C0741F479384AF24D6AFB9008E97DC;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ECF0D184A663EFBEE62C288D3F6B52E;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7AD8ADE14C73426A18858DB156170175;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_056D1A654AEE20AB8DC123BFCC009C0D;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E63EABF4D9ACDB9F59D2DAB6FD9094C;// 0x0558(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D3FFCE5D46895E1CD78B7C827B71E88D;// 0x05A0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_77D89164447D617EC1CEB19A71CB808C;// 0x05E0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_50299FED4C9891A4B23D55AB78820D5F;// 0x0620(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDD332554CF1CC4B5BBB9D93A6982A84;// 0x0758(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C162FA0E48B060E50DC9E7BE968B095E;// 0x07F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C474308944A40084EFC97C803A80A742;// 0x0838(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5308E0B347B41D44E00030A046B409E2;// 0x08D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3E2416D45A69011A70975A53922044E;// 0x0918(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2D07AA29494AA58F78393EBAF1722899;// 0x09B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D36507C40C44E5B28BEED8C1AF41A6F;// 0x09F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B30088D146B3DD634C5A14A611D438CB;// 0x0A98(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19FF590641C7179E8E783890C93899A1;// 0x0AD8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C8738BDB480AA327EFC611897D65FED4;// 0x0B78(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2377E59F4B36F97208384BA14D404433;// 0x0BB8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15EE3C744157A821A65067BEADF51F06;// 0x0CF0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E73171A246C09C447B40D485CBCCDE54;// 0x0D30(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5700BE2A4181B2C6E59FAEAEC676CB4C;// 0x0D70(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A765E143431DE5520C5FEF8DB08BDCF6;// 0x0EA8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F4BB18EC4EC030606CD73283372ADB26;// 0x0F48(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_077EBBDE4DF26DEEA389A5A83DDB261E;// 0x0F88(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4C145BA1469948B4BE1302BAC150C606;// 0x1068(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_39C073F04A6BD5AC1A6665A2F6FCEA38;// 0x11A0(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_19E7AB7043C6FD96D6D5E6BD999406DC;// 0x11E0(0x0040)
	class AOffice02_BalloonBoy_C*                      BalloonBoyActorReference;                                 // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice_BaseGamemanager_C*                   OfficeManagerReference;                                   // 0x1228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Count;                                                    // 0x1230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TipRate;                                                  // 0x1234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpinRate;                                                 // 0x1238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TipAmount;                                                // 0x123C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HatSpinRotation;                                          // 0x1240(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Office02_BalloonBoy_AnimBp.Office02_BalloonBoy_AnimBp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_C2C66070499EE2F79CD882BD69508366();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_9B2338F5475316957AEC8AA6920835BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_77C0741F479384AF24D6AFB9008E97DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_0ECF0D184A663EFBEE62C288D3F6B52E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_7AD8ADE14C73426A18858DB156170175();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_056D1A654AEE20AB8DC123BFCC009C0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_BalloonBoy_AnimBp_AnimGraphNode_TransitionResult_0E63EABF4D9ACDB9F59D2DAB6FD9094C();
	void BlueprintBeginPlay();
	void AnimNotify_PlayBBLaugh();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Office02_BalloonBoy_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
