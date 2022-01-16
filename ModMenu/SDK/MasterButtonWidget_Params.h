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
	 * Function MasterButtonWidget.MasterButtonWidget_C.PreConstruct
	 */
	struct UMasterButtonWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MasterButtonWidget.MasterButtonWidget_C.Construct
	 */
	struct UMasterButtonWidget_C_Construct_Params
	{
	};

	/**
	 * Function MasterButtonWidget.MasterButtonWidget_C.SetText
	 */
	struct UMasterButtonWidget_C_SetText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function MasterButtonWidget.MasterButtonWidget_C.ExecuteUbergraph_MasterButtonWidget
	 */
	struct UMasterButtonWidget_C_ExecuteUbergraph_MasterButtonWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
