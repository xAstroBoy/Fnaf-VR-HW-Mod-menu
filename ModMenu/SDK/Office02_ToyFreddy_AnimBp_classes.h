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

// AnimBlueprintGeneratedClass Office02_ToyFreddy_AnimBp.Office02_ToyFreddy_AnimBp_C
// 0x0BC0 (0x0F20 - 0x0360)
class UOffice02_ToyFreddy_AnimBp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1EB5C1B844DE7DC11D7F1FA3DEAA3B00;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_686C68C84BCD1E1A2B4270A92DA8105E;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8018F8644CC40AB076024975BF187D8;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7DEDE94B4684E3BB94055FBCED79877E;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A4DF84472025BDFC614DB8C2DD2ECC;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_939AFF7041A515D4260D4B8CB86AE649;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DE279A9465CD3A6506BA1BDF0763B52;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93DC710E40E469AA940992A5F4EC71BC;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95CD96A74E59CBFAF1EC719E5C58FCE8;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF038AA04F937629C0C0F699494CB369;// 0x05E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B9C21DD4713A7368801A580967CF303;// 0x0630(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB76E51D4611FFE89D8A5E8FD3C2DDBF;// 0x0678(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5AE4F5B84A447EF5F3C177979C5E835F;// 0x06C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E894310243B4ADEB68DB7ABC10CAA4E0;// 0x0708(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F66E31814A05A0FB97347CA734110948;// 0x07A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A103DF0746D0BC570A3F359E685D3CE2;// 0x07E8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14549988435EE14DBEBA63BEED7966CF;// 0x0888(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64272BA449CA97DA001EB7813F221B87;// 0x08C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_472809364C20C9F49753A89D6A44CC1F;// 0x0968(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07893B3D4E51670EA8DB2C8E0566DC59;// 0x09A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9FED22144FEB3D4F9917AE83A3C16B7F;// 0x0A48(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A84DAA04907C144E8E5EBAC64C401BC;// 0x0A88(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AA82253144AF7E163BBDD787057E9BEC;// 0x0B28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_350DA8DD47E8C2A92BA811ACD81C7F0E;// 0x0B68(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_06ACB2244CEC040E8FA9D6B77BE16A9E;// 0x0C08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_461B32B24E82EF85547E888763312DD9;// 0x0C48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B10B81C7498903A83CC0A5B09B2EE660;// 0x0CE8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F99186F6479653D25A8175AE222CA546;// 0x0D28(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FCCAAFB74A9DF9B32927C68E7517B459;// 0x0DC8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C2A43E294224244CD732D9B74827F9A2;// 0x0E08(0x00E0)
	class AOfficeAiBase_Bp_C*                          ToyFreddyActorReference;                                  // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice_BaseGamemanager_C*                   OfficeManagerReference;                                   // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayTimer;                                               // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EF9(0x0007) MISSED OFFSET
	class AFreddieMask_BP_C*                           FreddieMask_Ref;                                          // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice02_WitheredFreddy_C*                  WitheredFreddyActorReference;                             // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceJumpHallway02;                                       // 0x0F10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F11(0x0007) MISSED OFFSET
	class AOffice02_WitheredBonnie_C*                  Ref_WitheredBonnie;                                       // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Office02_ToyFreddy_AnimBp.Office02_ToyFreddy_AnimBp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_686C68C84BCD1E1A2B4270A92DA8105E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_E8018F8644CC40AB076024975BF187D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_7DEDE94B4684E3BB94055FBCED79877E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_24A4DF84472025BDFC614DB8C2DD2ECC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_939AFF7041A515D4260D4B8CB86AE649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_8DE279A9465CD3A6506BA1BDF0763B52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_93DC710E40E469AA940992A5F4EC71BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_95CD96A74E59CBFAF1EC719E5C58FCE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_FF038AA04F937629C0C0F699494CB369();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_9B9C21DD4713A7368801A580967CF303();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_BB76E51D4611FFE89D8A5E8FD3C2DDBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Office02_ToyFreddy_AnimBp_AnimGraphNode_TransitionResult_5AE4F5B84A447EF5F3C177979C5E835F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_CheckForMask();
	void AnimNotify_CallFlickerLights();
	void AnimNotify_ChangeEyes();
	void AnimNotify_ChangeEyesBack();
	void AnimNotify_CheckHideActor();
	void AnimNotify_FlickerLights();
	void AnimNotify_CheckForWitheredBonnie();
	void AnimNotify_CheckOtherFreddy();
	void ExecuteUbergraph_Office02_ToyFreddy_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
