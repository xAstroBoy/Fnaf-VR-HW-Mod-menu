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
	 * BlueprintGeneratedClass ContinueButton.ContinueButton_C
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class AContinueButton_C : public AMasterButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    ButtonPrompt;                                            // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void EnableButton(bool enable);
		void ButtonTriggered();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ContinueButton(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
