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
	 * Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367
	 */
	struct UBTTask_MoveTo_C_OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367_Params
	{
	public:
		AIModule_EPathFollowingResult                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367
	 */
	struct UBTTask_MoveTo_C_OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367_Params
	{
	};

	/**
	 * Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute
	 */
	struct UBTTask_MoveTo_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort
	 */
	struct UBTTask_MoveTo_C_ReceiveAbort_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo
	 */
	struct UBTTask_MoveTo_C_ExecuteUbergraph_BTTask_MoveTo_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
