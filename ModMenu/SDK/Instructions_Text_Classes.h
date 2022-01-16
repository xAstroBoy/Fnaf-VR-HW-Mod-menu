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
	 * WidgetBlueprintGeneratedClass Instructions_Text.Instructions_Text_C
	 * Size -> 0x00D8 (FullSize[0x0308] - InheritedSize[0x0230])
	 */
	class UInstructions_Text_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButtonIcon_C*                                       ButtonPrompt;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Instruction;                                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                InstructionText;                                         // 0x0248(0x0018) Edit, BlueprintVisible
		ControllerButtonsEnum_EControllerButtonsEnum               ControllerButton;                                        // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LC7Y[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<unsigned char, ControllerButtonsEnum_EControllerButtonsEnum> ControllerOverrides;                                     // 0x0268(0x0050) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides;                                 // 0x02B8(0x0050) Edit, BlueprintVisible, ZeroConstructor

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Instructions_Text(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
