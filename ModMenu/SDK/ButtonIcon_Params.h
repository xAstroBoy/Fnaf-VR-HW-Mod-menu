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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Button And State
	 */
	struct UButtonIcon_C_Change_Button_And_State_Params
	{
	public:
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ControllerButtonsEnum_EControllerButtonsEnum               Button;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Button
	 */
	struct UButtonIcon_C_Change_Button_Params
	{
	public:
		ControllerButtonsEnum_EControllerButtonsEnum               Controller_Button;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HaloOpacity;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Button State
	 */
	struct UButtonIcon_C_Change_Button_State_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged
	 */
	struct UButtonIcon_C_OnControllerDeviceChanged_Params
	{
	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.PreConstruct
	 */
	struct UButtonIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Controller Overrides
	 */
	struct UButtonIcon_C_Change_Controller_Overrides_Params
	{
	public:
		TMap<SWGVR_ESWGVRControllerType, ControllerButtonsEnum_EControllerButtonsEnum> ControllerTypeOverrides;                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity
	 */
	struct UButtonIcon_C_Change_Button_Halo_Opacity_Params
	{
	public:
		float                                                      HaloOpacity;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity
	 */
	struct UButtonIcon_C_Change_Button_State_and_Halo_Opacity_Params
	{
	public:
		float                                                      HaloOpacity;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Is_Pressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ControllerButtonsEnum_EControllerButtonsEnum               Button;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.UpdateDisplay
	 */
	struct UButtonIcon_C_UpdateDisplay_Params
	{
	};

	/**
	 * Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon
	 */
	struct UButtonIcon_C_ExecuteUbergraph_ButtonIcon_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
