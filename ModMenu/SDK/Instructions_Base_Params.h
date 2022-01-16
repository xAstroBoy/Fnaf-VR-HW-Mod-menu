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
	 * Function Instructions_Base.Instructions_Base_C.PreConstruct
	 */
	struct UInstructions_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
	 */
	struct UInstructions_Base_C_TriggerPullWidget_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed
	 */
	struct UInstructions_Base_C_On_Controller_Tracking_Changed_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.Setup With Skip
	 */
	struct UInstructions_Base_C_Setup_With_Skip_Params
	{
	public:
		TArray<int>                                                FramesToSkip;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse
	 */
	struct UInstructions_Base_C_TriggerPullWidgetReverse_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.Setup Inputs
	 */
	struct UInstructions_Base_C_Setup_Inputs_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.Setup Without Skip
	 */
	struct UInstructions_Base_C_Setup_Without_Skip_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.Update Displays
	 */
	struct UInstructions_Base_C_Update_Displays_Params
	{
	};

	/**
	 * Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
	 */
	struct UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
