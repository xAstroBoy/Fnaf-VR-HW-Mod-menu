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
	 * Function Song_Button.Song_Button_C.BrightLight__FinishedFunc
	 */
	struct ASong_Button_C_BrightLight__FinishedFunc_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.BrightLight__UpdateFunc
	 */
	struct ASong_Button_C_BrightLight__UpdateFunc_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.ReceiveBeginPlay
	 */
	struct ASong_Button_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.ReceiveTick
	 */
	struct ASong_Button_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Song_Button.Song_Button_C.ResetStage
	 */
	struct ASong_Button_C_ResetStage_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.NightmareModeToggle
	 */
	struct ASong_Button_C_NightmareModeToggle_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.FadeOut
	 */
	struct ASong_Button_C_FadeOut_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.TriggerSound
	 */
	struct ASong_Button_C_TriggerSound_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.Set to NM
	 */
	struct ASong_Button_C_Set_to_NM_Params
	{
	public:
		bool                                                       False;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Song_Button.Song_Button_C.Attempt Activate
	 */
	struct ASong_Button_C_Attempt_Activate_Params
	{
	};

	/**
	 * Function Song_Button.Song_Button_C.ResetTriggered
	 */
	struct ASong_Button_C_ResetTriggered_Params
	{
	public:
		class AMasterButton_C*                                     Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Song_Button.Song_Button_C.ExecuteUbergraph_Song_Button
	 */
	struct ASong_Button_C_ExecuteUbergraph_Song_Button_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
