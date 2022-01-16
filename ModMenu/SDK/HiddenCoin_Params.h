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
	 * Function HiddenCoin.HiddenCoin_C.ReceiveBeginPlay
	 */
	struct AHiddenCoin_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.Grabbed
	 */
	struct AHiddenCoin_C_Grabbed_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.Released
	 */
	struct AHiddenCoin_C_Released_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.Activate
	 */
	struct AHiddenCoin_C_Activate_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AHiddenCoin_C_BndEvt__GazeSphereCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.ReceiveTick
	 */
	struct AHiddenCoin_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.TriggerWithoutDelay
	 */
	struct AHiddenCoin_C_TriggerWithoutDelay_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.Enable Phsyics
	 */
	struct AHiddenCoin_C_Enable_Phsyics_Params
	{
	};

	/**
	 * Function HiddenCoin.HiddenCoin_C.ExecuteUbergraph_HiddenCoin
	 */
	struct AHiddenCoin_C_ExecuteUbergraph_HiddenCoin_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
