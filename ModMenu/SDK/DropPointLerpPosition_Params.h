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
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.PerformLerp
	 */
	struct ADropPointLerpPosition_C_PerformLerp_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorToLerp;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LerpIsFinished;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.GetLerpActor
	 */
	struct ADropPointLerpPosition_C_GetLerpActor_Params
	{
	public:
		class AActor*                                              ActorBeingLerped;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__FinishedFunc
	 */
	struct ADropPointLerpPosition_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.Timeline_0__UpdateFunc
	 */
	struct ADropPointLerpPosition_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.OnActorReleased
	 */
	struct ADropPointLerpPosition_C_OnActorReleased_Params
	{
	public:
		class ASWGVRCharacter*                                     Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DroppedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SWGVR_EVRHandType                                          Hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.ReceiveTick
	 */
	struct ADropPointLerpPosition_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointBeginHover
	 */
	struct ADropPointLerpPosition_C_OnDropPointBeginHover_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.OnDropPointEndHover
	 */
	struct ADropPointLerpPosition_C_OnDropPointEndHover_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.OnBeginLerp
	 */
	struct ADropPointLerpPosition_C_OnBeginLerp_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.OnEndLerp
	 */
	struct ADropPointLerpPosition_C_OnEndLerp_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.LerpPreview
	 */
	struct ADropPointLerpPosition_C_LerpPreview_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.HandleAttachPreviewActor
	 */
	struct ADropPointLerpPosition_C_HandleAttachPreviewActor_Params
	{
	};

	/**
	 * Function DropPointLerpPosition.DropPointLerpPosition_C.ExecuteUbergraph_DropPointLerpPosition
	 */
	struct ADropPointLerpPosition_C_ExecuteUbergraph_DropPointLerpPosition_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
