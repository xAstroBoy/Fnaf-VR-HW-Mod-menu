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
	 * Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay
	 */
	struct ANonVR_InSpaceUI_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button
	 */
	struct ANonVR_InSpaceUI_C_Change_Button_Params
	{
	public:
		ControllerButtonsEnum_EControllerButtonsEnum               Controller_Button;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick
	 */
	struct ANonVR_InSpaceUI_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display
	 */
	struct ANonVR_InSpaceUI_C_Setup_Controller_Display_Params
	{
	};

	/**
	 * Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI
	 */
	struct ANonVR_InSpaceUI_C_ExecuteUbergraph_NonVR_InSpaceUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
