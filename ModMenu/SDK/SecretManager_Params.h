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
	 * Function SecretManager.SecretManager_C.ReceiveBeginPlay
	 */
	struct ASecretManager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SecretManager.SecretManager_C.ReceiveTick
	 */
	struct ASecretManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecretManager.SecretManager_C.SecretTrigger
	 */
	struct ASecretManager_C_SecretTrigger_Params
	{
	};

	/**
	 * Function SecretManager.SecretManager_C.Released_Event_1
	 */
	struct ASecretManager_C_Released_Event_1_Params
	{
	};

	/**
	 * Function SecretManager.SecretManager_C.Grabbed_Event
	 */
	struct ASecretManager_C_Grabbed_Event_Params
	{
	};

	/**
	 * Function SecretManager.SecretManager_C.AudioTimerFinished
	 */
	struct ASecretManager_C_AudioTimerFinished_Params
	{
	};

	/**
	 * Function SecretManager.SecretManager_C.ExecuteUbergraph_SecretManager
	 */
	struct ASecretManager_C_ExecuteUbergraph_SecretManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
