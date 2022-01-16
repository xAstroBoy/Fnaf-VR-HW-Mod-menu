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
	 * Function Main_Menu.Main_Menu_C.SetReftoHand
	 */
	struct UMain_Menu_C_SetReftoHand_Params
	{
	public:
		class ASaul_BP_MotionController_C*                         Refto;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.ChangeSelectedLevel
	 */
	struct UMain_Menu_C_ChangeSelectedLevel_Params
	{
	public:
		int                                                        Selected_Level_Index;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.UpdateTickStatus
	 */
	struct UMain_Menu_C_UpdateTickStatus_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays
	 */
	struct UMain_Menu_C_UpdateGameTypeDisplays_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.IncrementSelectedLevel
	 */
	struct UMain_Menu_C_IncrementSelectedLevel_Params
	{
	public:
		int                                                        Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.GatherGameLevels
	 */
	struct UMain_Menu_C_GatherGameLevels_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.UpdateLevelButtons
	 */
	struct UMain_Menu_C_UpdateLevelButtons_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.ChangeGameMode
	 */
	struct UMain_Menu_C_ChangeGameMode_Params
	{
	public:
		int                                                        Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.LoadSelectedLevel
	 */
	struct UMain_Menu_C_LoadSelectedLevel_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Construct
	 */
	struct UMain_Menu_C_Construct_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Enter
	 */
	struct UMain_Menu_C_Enter_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Up
	 */
	struct UMain_Menu_C_Up_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Down
	 */
	struct UMain_Menu_C_Down_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Left
	 */
	struct UMain_Menu_C_Left_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Right
	 */
	struct UMain_Menu_C_Right_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.AnyButtonPress
	 */
	struct UMain_Menu_C_AnyButtonPress_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.UpdateCoinDisplay
	 */
	struct UMain_Menu_C_UpdateCoinDisplay_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched
	 */
	struct UMain_Menu_C_OnNightmareModeSwitched_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.ActivateScreenPressed
	 */
	struct UMain_Menu_C_ActivateScreenPressed_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.OnConfirmComplete
	 */
	struct UMain_Menu_C_OnConfirmComplete_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.PreConstruct
	 */
	struct UMain_Menu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.ChangeDLCType
	 */
	struct UMain_Menu_C_ChangeDLCType_Params
	{
	public:
		freddys_EFNAFDLCType                                       DLCType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.PageLeft
	 */
	struct UMain_Menu_C_PageLeft_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.PageRight
	 */
	struct UMain_Menu_C_PageRight_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Setup Level Buttons
	 */
	struct UMain_Menu_C_Setup_Level_Buttons_Params
	{
	};

	/**
	 * Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse
	 */
	struct UMain_Menu_C_OnLevelClickedWithMouse_Params
	{
	public:
		int                                                        SelectedLevelIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
	 */
	struct UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
