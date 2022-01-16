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
	 * WidgetBlueprintGeneratedClass ButtonIcon.ButtonIcon_C
	 * Size -> 0x0398 (FullSize[0x05C8] - InheritedSize[0x0230])
	 */
	class UButtonIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ButtonImage;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HaloImage;                                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ControllerButtonsEnum_EControllerButtonsEnum               Button;                                                  // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QH1[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, class UTexture2D*> HaloMaps;                                                // 0x0250(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> MapToUse;                                                // 0x02A0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> SteamVRButtonsMap;                                       // 0x02F0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> OculusButtonsMap;                                        // 0x0340(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> MoveButtonsMap;                                          // 0x0390(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> DS4ButtonsMap;                                           // 0x03E0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> PCButtonsMap;                                            // 0x0430(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> XBoxButtonsMap;                                          // 0x0480(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ControllerButtonsEnum_EControllerButtonsEnum, struct FControllerButton_Struct> SwitchButtonsMap;                                        // 0x04D0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<unsigned char, ControllerButtonsEnum_EControllerButtonsEnum> ControllerOverrides;                                     // 0x0520(0x0050) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		bool                                                       IsInInstruction;                                         // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Pressed;                                                 // 0x0571(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowWithMouse;                                           // 0x0572(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_F90X[0x1];                                   // 0x0573(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HaloOpacity;                                             // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides;                                 // 0x0578(0x0050) Edit, BlueprintVisible, ZeroConstructor

	public:
		void Change_Button_And_State(bool Is_Pressed, ControllerButtonsEnum_EControllerButtonsEnum Button);
		void Change_Button(ControllerButtonsEnum_EControllerButtonsEnum Controller_Button, float HaloOpacity);
		void Change_Button_State(bool Pressed);
		void OnControllerDeviceChanged();
		void PreConstruct(bool IsDesignTime);
		void Change_Controller_Overrides(TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides);
		void Change_Button_Halo_Opacity(float HaloOpacity);
		void Change_Button_State_and_Halo_Opacity(float HaloOpacity, bool Is_Pressed, ControllerButtonsEnum_EControllerButtonsEnum Button);
		void UpdateDisplay();
		void ExecuteUbergraph_ButtonIcon(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
