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

// AnimBlueprintGeneratedClass Foxy_Office01_AnimBp.Foxy_Office01_AnimBp_C
// 0x0CB8 (0x1018 - 0x0360)
class UFoxy_Office01_AnimBp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2B71ECE74C8381F5434F46AC0EBDBDDA;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48D9B8514D02304569212DB3B71FABD7;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C5E9D55423E0E6A6EF1C2801A33CC3A;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09FFD1D94CA0B43ECCDA9284BB308C64;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_864141C6474FF61EF23B5E919DF0416A;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68A35E0B4D8448B56EA6D8A23296559D;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C26628744CD409E3D0F155B964A80F4C;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7C2597944DD1A288B07A8AFE0CD690C;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4B2DE054B61312A0351B0B2ACB2A14D;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_508E0F564B93383FDF0BDEB9F437A659;// 0x05E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38793BFF4ED92DE9267075A456D71D3B;// 0x0630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91ADAB06457CF0077B36EDA6A3441E00;// 0x0678(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0FD9A7D64CC28368DEC6B680A2614768;// 0x0718(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CA8B29294A552BC4D443C1A70852A6EA;// 0x0758(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FFD148804479C2BBC09D258AA06A803A;// 0x0798(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59E4EBD7499AB3279EF3CF9FD77406B6;// 0x07D8(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2AC3BBB246D2BED26E826BAF1F6D889E;// 0x0910(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_77BF9A0F45C360DCBF789C9BA53C79A6;// 0x09B0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6E9F8B1942885F51F481D88BFE883042;// 0x09F0(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2CC1AD6F4EF82820975361A551C1EACD;// 0x0A30(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93E5699A4DECCF7D35D67A9519E5DC31;// 0x0A70(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A21712864BE9E348CB642B850A8ABC8B;// 0x0BA8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5056B4E04DF535426E108F90E4E2B4E6;// 0x0C48(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E56ED3C5417201EC9822AF87BE148592;// 0x0C88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5BF080F347FA11410F2D63827D31CD21;// 0x0D28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A07F126940ECFA49D1CE5CAD265CD72C;// 0x0D68(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AB9077FE41F6FBA6840A9BB80FF03160;// 0x0E08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0EF2DCA343843FBBB2FD618B210C1E73;// 0x0E48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C17328E04B02A1C7C950A0B8D1685FE3;// 0x0EE8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A15E4F6C482DB12319B72B99F2FDC261;// 0x0F28(0x00E0)
	class AOffice01_GameManager_C*                     OfficeManagerReference;                                   // 0x1008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice01_Foxy_C*                            FoxyActorReference;                                       // 0x1010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Foxy_Office01_AnimBp.Foxy_Office01_AnimBp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_48D9B8514D02304569212DB3B71FABD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_0C5E9D55423E0E6A6EF1C2801A33CC3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_09FFD1D94CA0B43ECCDA9284BB308C64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_864141C6474FF61EF23B5E919DF0416A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_68A35E0B4D8448B56EA6D8A23296559D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_C26628744CD409E3D0F155B964A80F4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_E7C2597944DD1A288B07A8AFE0CD690C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_D4B2DE054B61312A0351B0B2ACB2A14D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_508E0F564B93383FDF0BDEB9F437A659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Foxy_Office01_AnimBp_AnimGraphNode_TransitionResult_38793BFF4ED92DE9267075A456D71D3B();
	void BlueprintBeginPlay();
	void AnimNotify_FoxyAtDoor();
	void AnimNotify_RunningSound();
	void AnimNotify_FoxyIsRunning();
	void AnimNotify_Move01();
	void AnimNotify_Move02();
	void AnimNotify_Move03();
	void ExecuteUbergraph_Foxy_Office01_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
