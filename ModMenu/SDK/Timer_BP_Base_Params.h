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
	 * Function Timer_BP_Base.Timer_BP_Base_C.SetTimeOnWidget
	 */
	struct ATimer_BP_Base_C_SetTimeOnWidget_Params
	{
	public:
		int                                                        Timer;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.Time Ref
	 */
	struct ATimer_BP_Base_C_Time_Ref_Params
	{
	public:
		bool                                                       Timer_hit_0;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick
	 */
	struct ATimer_BP_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer
	 */
	struct ATimer_BP_Base_C_Pause_Timer_Params
	{
	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.Set Timer
	 */
	struct ATimer_BP_Base_C_Set_Timer_Params
	{
	public:
		int                                                        Set_Time;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.Start Timer
	 */
	struct ATimer_BP_Base_C_Start_Timer_Params
	{
	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base
	 */
	struct ATimer_BP_Base_C_ExecuteUbergraph_Timer_BP_Base_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature
	 */
	struct ATimer_BP_Base_C_Timer_Ended__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
