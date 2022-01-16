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
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSoloSound
	 */
	struct ANT_CB_AudioManager_C_TriggerSoloSound_Params
	{
	public:
		class USoundBase*                                          SoundFile;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveBeginPlay
	 */
	struct ANT_CB_AudioManager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.TriggerSound2D
	 */
	struct ANT_CB_AudioManager_C_TriggerSound2D_Params
	{
	public:
		class USoundBase*                                          NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.StopSound
	 */
	struct ANT_CB_AudioManager_C_StopSound_Params
	{
	};

	/**
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.ReceiveTick
	 */
	struct ANT_CB_AudioManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NT_CB_AudioManager.NT_CB_AudioManager_C.ExecuteUbergraph_NT_CB_AudioManager
	 */
	struct ANT_CB_AudioManager_C_ExecuteUbergraph_NT_CB_AudioManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
