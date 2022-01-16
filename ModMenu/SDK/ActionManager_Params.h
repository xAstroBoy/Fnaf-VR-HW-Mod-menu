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
	 * Function ActionManager.ActionManager_C.SetCurrentlyAvailableActions
	 */
	struct AActionManager_C_SetCurrentlyAvailableActions_Params
	{
	public:
		TArray<int>                                                CurrentlyAvailableActions;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function ActionManager.ActionManager_C.CompleteAction
	 */
	struct AActionManager_C_CompleteAction_Params
	{
	public:
		class UActions_C*                                          ActionComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player_dead;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActionManager.ActionManager_C.ReceiveBeginPlay
	 */
	struct AActionManager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ActionManager.ActionManager_C.ExecuteUbergraph_ActionManager
	 */
	struct AActionManager_C_ExecuteUbergraph_ActionManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActionManager.ActionManager_C.OnKill__DelegateSignature
	 */
	struct AActionManager_C_OnKill__DelegateSignature_Params
	{
	};

	/**
	 * Function ActionManager.ActionManager_C.OnActionCompleted__DelegateSignature
	 */
	struct AActionManager_C_OnActionCompleted__DelegateSignature_Params
	{
	public:
		int                                                        ActionID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
