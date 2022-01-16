﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GameplayTasks.ETaskResourceOverlapPolicy
	 */
	enum class GameplayTasks_ETaskResourceOverlapPolicy : uint8_t
	{
		ETaskResourceOverlapPolicy__StartOnTop                     = 0,
		ETaskResourceOverlapPolicy__StartAtEnd                     = 1,
		ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 2
	};

	/**
	 * Enum GameplayTasks.EGameplayTaskState
	 */
	enum class GameplayTasks_EGameplayTaskState : uint8_t
	{
		EGameplayTaskState__Uninitialized          = 0,
		EGameplayTaskState__AwaitingActivation     = 1,
		EGameplayTaskState__Paused                 = 2,
		EGameplayTaskState__Active                 = 3,
		EGameplayTaskState__Finished               = 4,
		EGameplayTaskState__EGameplayTaskState_MAX = 5
	};

	/**
	 * Enum GameplayTasks.EGameplayTaskRunResult
	 */
	enum class GameplayTasks_EGameplayTaskRunResult : uint8_t
	{
		EGameplayTaskRunResult__Error                      = 0,
		EGameplayTaskRunResult__Failed                     = 1,
		EGameplayTaskRunResult__Success_Paused             = 2,
		EGameplayTaskRunResult__Success_Active             = 3,
		EGameplayTaskRunResult__Success_Finished           = 4,
		EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayTasks.GameplayResourceSet
	 * Size -> 0x0002
	 */
	struct FGameplayResourceSet
	{
	public:
		unsigned char                                              UnknownData_O330[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
