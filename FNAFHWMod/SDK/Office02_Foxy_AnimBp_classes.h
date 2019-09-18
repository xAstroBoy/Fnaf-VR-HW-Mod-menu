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

// AnimBlueprintGeneratedClass Office02_Foxy_AnimBp.Office02_Foxy_AnimBp_C
// 0x0CA0 (0x1000 - 0x0360)
class UOffice02_Foxy_AnimBp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_13AFF93B4039A1330D80069C765C8D6D;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33A7F10E44D3F1EB229CA384897A84D7;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF1ED56D41ECA3C959D8DF8474F77421;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C80BE8940A17A79436FACBB481A8EAF;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78E48944421CD1F8C6C9EC83613DEB56;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76E13702418A39ADBB139A9339F5CA41;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4285F8C446799BB1DAEFC3BA8DD79085;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88E85C5B422247A80799CBA8D3A9FF29;// 0x0558(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A78C556A48F40E3EC62576A31C430110;// 0x05A0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DE2861B7441E103EA1DAB2993808E3E2;// 0x05E0(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_80E9CB284D4E38C88009428E18557194;// 0x0620(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA8FB06341E303B82EC8DAB1FF314739;// 0x0758(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CE32ABDF461C1132B70153972EF1930B;// 0x07F8(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8163C37244AC4A1071EBA9813BFE08A8;// 0x0838(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_12A5AEF84950B35977C99D9575FF8F19;// 0x0878(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C83E4EF54A426447944C858D0BFC1B96;// 0x08B8(0x0138)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99815FF9416F589EE456CEA8111DA561;// 0x09F0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0C25D442484FF2E6C63167B41DA448B5;// 0x0A90(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49A7C6B24B9DFD859241A4867878CD00;// 0x0AD0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55375FA94C9CFF611BC7A2B951F21DCA;// 0x0B70(0x0040)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_3803CF2A496B4945267BE6AF880D0374;// 0x0BB0(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3F7828884E596116C7D8588F3133F93B;// 0x0C40(0x0040)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D66DE10D4AFBB641C0C2B186A1032C9F;// 0x0C80(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_ECCD3C944370A0C79335B996459A3177;// 0x0D10(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7DAD77648DB306A52AEB79F87F218A8;// 0x0D50(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_69CD9C094C9072CAEF95338C871E22F6;// 0x0DF0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3BEFF7D442727E6CD2AF49163718719;// 0x0E30(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D6BB4DD44620659EF8D77C8568DC8652;// 0x0ED0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C3CCF0FD49ADEF6735F32DAE59604674;// 0x0F10(0x00E0)
	class AOffice02_WitheredFoxy_C*                    WitheredFoxyActorReference;                               // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice_BaseGamemanager_C*                   OfficeManagerReference;                                   // 0x0FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Office02_Foxy_AnimBp.Office02_Foxy_AnimBp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_FF1ED56D41ECA3C959D8DF8474F77421();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_0C80BE8940A17A79436FACBB481A8EAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_78E48944421CD1F8C6C9EC83613DEB56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_76E13702418A39ADBB139A9339F5CA41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_4285F8C446799BB1DAEFC3BA8DD79085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_33A7F10E44D3F1EB229CA384897A84D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_Foxy_AnimBp_AnimGraphNode_TransitionResult_88E85C5B422247A80799CBA8D3A9FF29();
	void BlueprintBeginPlay();
	void AnimNotify_FoxyJumpScareTrigger();
	void AnimNotify_FlickerLights();
	void AnimNotify_FlickerLight();
	void ExecuteUbergraph_Office02_Foxy_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
