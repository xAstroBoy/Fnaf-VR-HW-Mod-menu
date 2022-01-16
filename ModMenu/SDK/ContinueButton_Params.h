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
	 * Function ContinueButton.ContinueButton_C.EnableButton
	 */
	struct AContinueButton_C_EnableButton_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ContinueButton.ContinueButton_C.ButtonTriggered
	 */
	struct AContinueButton_C_ButtonTriggered_Params
	{
	};

	/**
	 * Function ContinueButton.ContinueButton_C.ReceiveBeginPlay
	 */
	struct AContinueButton_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ContinueButton.ContinueButton_C.ExecuteUbergraph_ContinueButton
	 */
	struct AContinueButton_C_ExecuteUbergraph_ContinueButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
