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
	 * Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons
	 */
	struct UHeldActionInfoProvider_C_GetAvailableButtons_Params
	{
	public:
		TArray<ControllerButtonsEnum_EControllerButtonsEnum>       AvailableButtons;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText
	 */
	struct UHeldActionInfoProvider_C_GetHeldActionsText_Params
	{
	public:
		class FText                                                Left_Text;                                               // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Right_Text;                                              // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Bottom_Text;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
