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
	 * AnimBlueprintGeneratedClass Office03_PhantomFoxy_AnimBp.Office03_PhantomFoxy_AnimBp_C
	 * Size -> 0x01F8 (FullSize[0x0468] - InheritedSize[0x0270])
	 */
	class UOffice03_PhantomFoxy_AnimBp_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E8C350D54C95F26C36698EBE911FDFEE; // 0x0278(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_502A11064A68387106CBA4BA034B60B6; // 0x02F0(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root_40EA69A74E200A80999AD2ABD3121746;     // 0x03F8(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_71DA674541F5A7A9A42922B15985BC8C; // 0x0428(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_99C4D188422CDB768A5F80B404B1D9F6; // 0x0448(0x0020)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_Office03_PhantomFoxy_AnimBp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
