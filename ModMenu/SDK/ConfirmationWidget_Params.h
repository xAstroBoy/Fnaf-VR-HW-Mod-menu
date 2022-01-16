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
	 * Function ConfirmationWidget.ConfirmationWidget_C.Construct
	 */
	struct UConfirmationWidget_C_Construct_Params
	{
	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.Tick
	 */
	struct UConfirmationWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation
	 */
	struct UConfirmationWidget_C_PizzaConfimation_Params
	{
	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.StopPizza
	 */
	struct UConfirmationWidget_C_StopPizza_Params
	{
	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.StartPizza
	 */
	struct UConfirmationWidget_C_StartPizza_Params
	{
	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.StartLoadingCycle
	 */
	struct UConfirmationWidget_C_StartLoadingCycle_Params
	{
	};

	/**
	 * Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget
	 */
	struct UConfirmationWidget_C_ExecuteUbergraph_ConfirmationWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
