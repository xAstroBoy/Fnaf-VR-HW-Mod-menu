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

// AnimBlueprintGeneratedClass Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C
// 0x075C (0x0ABC - 0x0360)
class UBonnie_Repair_Anim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1F3B13F748A607565FF083BF48280554;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06671E624F21221E2023729E1089CD8B;// 0x0438(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28910BCE4FE03E94EBD7008091923346;// 0x04D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6452C5EE415940F0C6BA1D8133E68757;// 0x0518(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_83F757F94C8035649FF93CA1CD5CF508;// 0x05B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E67CD0242FD8B244155BEA184A5D188;// 0x05F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_273B9D8C49DAB0DA4EA19894A34B7109;// 0x0698(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6AC79E2F4BEDA845F62D9095A3493AF2;// 0x06D8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53;// 0x07B8(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F281071F47F5AF96801C5EB9F3823064;// 0x08F0(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_81B05EB94E45A933E773769A270E3ED0;// 0x0930(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35C458FD407BABE132FD94940B789CA9;// 0x0970(0x0138)
	class UAnimSequenceBase*                           AnimSequence;                                             // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	float                                              ShakeAlpha;                                               // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF();
	void Action_Completed(int Action_ID);
	void JumpScare_Temp();
	void ExecuteUbergraph_Bonnie_Repair_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
