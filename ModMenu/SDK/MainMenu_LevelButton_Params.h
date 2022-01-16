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
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight
	 */
	struct UMainMenu_LevelButton_C_OnBeginHighlight_Params
	{
	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight
	 */
	struct UMainMenu_LevelButton_C_OnEndHighlight_Params
	{
	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box
	 */
	struct UMainMenu_LevelButton_C_Initialize_SubGame_Box_Params
	{
	public:
		class FText                                                LevelName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          LevelImage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLevelUnlocked;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct
	 */
	struct UMainMenu_LevelButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton
	 */
	struct UMainMenu_LevelButton_C_ExecuteUbergraph_MainMenu_LevelButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature
	 */
	struct UMainMenu_LevelButton_C_OnLevelButtonHovered__DelegateSignature_Params
	{
	public:
		int                                                        SelectedLevelIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature
	 */
	struct UMainMenu_LevelButton_C_OnLevelButtonClicked__DelegateSignature_Params
	{
	public:
		int                                                        SelectedLevelIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
