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

// AnimBlueprintGeneratedClass CircusBaby_NightmareBedroom_ABP.CircusBaby_NightmareBedroom_ABP_C
// 0x098C (0x0CEC - 0x0360)
class UCircusBaby_NightmareBedroom_ABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E11D53154B931FD5468508A0DDA60E64;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BD30D064076A439A08DE4850D2B2C27;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1F328C64F9C9C602D09BD9AE39DABA3;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37812C984C50691FDBA3448586C226BA;// 0x0438(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D0FC6997467DBE634AB4449BB6A76D5A;// 0x04D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C129CC384FAEE1B33BB91DBBAAAA5A68;// 0x0518(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76CA27C64857D1E30ADF25ABDC85FC73;// 0x05B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A58F14484A70F28C25A69FBC5340E0A6;// 0x0658(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_552A59D54E6909CF771F09861F9039EF;// 0x06F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C25AB8940C81C84E6D316A95C86C6B7;// 0x0798(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_437AED2C4D6B0C6CFEFBE99CE3078F74;// 0x0838(0x00D0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_301BDE6449B87B32FC7AE1A8C9E7A5BE;// 0x0908(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0CA87934B0B1C2A7BB9AB837D73ABDA;// 0x0A00(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D404F944467EFC196E6E6A66F0A8EE3;// 0x0AA0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7E56474E4F9D3460BD814FB42ECBF8C5;// 0x0B40(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3EC7EF504C7D405429D66CB6F01D1152;// 0x0B80(0x00E0)
	bool                                               EnterLeftOrRight;                                         // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      RefToSkeletalMesh;                                        // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                AnimStage;                                                // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Doors_CLosed;                                             // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Safe_;                                                    // 0x0C75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0C76(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    FuckYou_AnimNotify;                                       // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Walking_AnimNotify;                                       // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BeginPositions_animNotify;                                // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                PreviousChoice;                                           // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomNimber;                                             // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimComplete;                                             // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0CB1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CheckWalk;                                                // 0x0CB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable)
	bool                                               Pause;                                                    // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class ACircusBabyAnimationManager_C*               RefToAniMan;                                              // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    AnimDone;                                                 // 0x0CD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              RandomStartPos;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CircusBaby_NightmareBedroom_ABP.CircusBaby_NightmareBedroom_ABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP_AnimGraphNode_SequencePlayer_C129CC384FAEE1B33BB91DBBAAAA5A68();
	void AnimNotify_NotSafe();
	void AnimNotify_Safe();
	void AnimNotify_BeginPositions();
	void AnimNotify_FuckYou();
	void AnimNotify_Walking();
	void AnimNotify_LookAnimComplete();
	void BlueprintBeginPlay();
	void BeginRandom();
	void AnimNotify_Reint();
	void AnimNotify_anim_done();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP_AnimGraphNode_SequencePlayer_76CA27C64857D1E30ADF25ABDC85FC73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP_AnimGraphNode_SequencePlayer_A58F14484A70F28C25A69FBC5340E0A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP_AnimGraphNode_SequencePlayer_552A59D54E6909CF771F09861F9039EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP_AnimGraphNode_SequencePlayer_6C25AB8940C81C84E6D316A95C86C6B7();
	void ExecuteUbergraph_CircusBaby_NightmareBedroom_ABP(int EntryPoint);
	void AnimDone__DelegateSignature();
	void CheckWalk__DelegateSignature();
	void BeginPositions_animNotify__DelegateSignature();
	void Walking_AnimNotify__DelegateSignature();
	void FuckYou_AnimNotify__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
