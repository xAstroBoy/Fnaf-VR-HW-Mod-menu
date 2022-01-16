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
	 * AnimBlueprintGeneratedClass CircusBaby_NightmareBedroom_ABP.CircusBaby_NightmareBedroom_ABP_C
	 * Size -> 0x074C (FullSize[0x09BC] - InheritedSize[0x0270])
	 */
	class UCircusBaby_NightmareBedroom_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_E11D53154B931FD5468508A0DDA60E64;     // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2BD30D064076A439A08DE4850D2B2C27; // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B1F328C64F9C9C602D09BD9AE39DABA3; // 0x02D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37812C984C50691FDBA3448586C226BA; // 0x02F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_D0FC6997467DBE634AB4449BB6A76D5A; // 0x0370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C129CC384FAEE1B33BB91DBBAAAA5A68; // 0x03A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_76CA27C64857D1E30ADF25ABDC85FC73; // 0x0418(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A58F14484A70F28C25A69FBC5340E0A6; // 0x0490(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_552A59D54E6909CF771F09861F9039EF; // 0x0508(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6C25AB8940C81C84E6D316A95C86C6B7; // 0x0580(0x0078)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_437AED2C4D6B0C6CFEFBE99CE3078F74; // 0x05F8(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_301BDE6449B87B32FC7AE1A8C9E7A5BE; // 0x0698(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D0CA87934B0B1C2A7BB9AB837D73ABDA; // 0x0760(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0D404F944467EFC196E6E6A66F0A8EE3; // 0x07D8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7E56474E4F9D3460BD814FB42ECBF8C5; // 0x0850(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3EC7EF504C7D405429D66CB6F01D1152; // 0x0880(0x00B0)
		bool                                                       EnterLeftOrRight;                                        // 0x0930(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYSW[0x7];                                   // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              RefToSkeletalMesh;                                       // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        AnimStage;                                               // 0x0940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Doors_CLosed;                                            // 0x0944(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Safe_;                                                   // 0x0945(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RMCE[0x2];                                   // 0x0946(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FuckYou_AnimNotify;                                      // 0x0948(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Walking_AnimNotify;                                      // 0x0958(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BeginPositions_animNotify;                               // 0x0968(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        PreviousChoice;                                          // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        RandomNimber;                                            // 0x097C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimComplete;                                            // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CO9R[0x7];                                   // 0x0981(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CheckWalk;                                               // 0x0988(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		bool                                                       Pause;                                                   // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y96A[0x7];                                   // 0x0999(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACircusBabyAnimationManager_C*                       RefToAniMan;                                             // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             AnimDone;                                                // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      RandomStartPos;                                          // 0x09B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
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
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
