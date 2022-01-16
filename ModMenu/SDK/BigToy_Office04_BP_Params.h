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
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetLeftDoorState
	 */
	struct ABigToy_Office04_BP_C_SetLeftDoorState_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.EnableLightBoxCollision
	 */
	struct ABigToy_Office04_BP_C_EnableLightBoxCollision_Params
	{
	public:
		bool                                                       EnableCollision;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBoxComponent*                                       LightBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetRightDoorState
	 */
	struct ABigToy_Office04_BP_C_SetRightDoorState_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.Big_Toy_Anim BP
	 */
	struct ABigToy_Office04_BP_C_Big_Toy_Anim_BP_Params
	{
	public:
		class UBigToy_Office04_AnimBP_C*                           Fun_With_Plush_Trap_Anim_BP_Ref;                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.GetBigToyState
	 */
	struct ABigToy_Office04_BP_C_GetBigToyState_Params
	{
	public:
		class UBigToy_O4_State_C*                                  BigToy_State;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.SetBigToyState
	 */
	struct ABigToy_Office04_BP_C_SetBigToyState_Params
	{
	public:
		class UClass*                                              Big_Toy_Ref;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerKilled
	 */
	struct ABigToy_Office04_BP_C_PlayerKilled_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveBeginPlay
	 */
	struct ABigToy_Office04_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.ReceiveTick
	 */
	struct ABigToy_Office04_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.PlayerWonOffice04
	 */
	struct ABigToy_Office04_BP_C_PlayerWonOffice04_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.StartFredBear
	 */
	struct ABigToy_Office04_BP_C_StartFredBear_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.SFX
	 */
	struct ABigToy_Office04_BP_C_SFX_Params
	{
	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.ExecuteUbergraph_BigToy_Office04_BP
	 */
	struct ABigToy_Office04_BP_C_ExecuteUbergraph_BigToy_Office04_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnRightDoorClosed__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_OnRightDoorClosed__DelegateSignature_Params
	{
	public:
		class AButton_Hold_C*                                      ButtonHoldCheck;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BigToy_Office04_BP.BigToy_Office04_BP_C.OnBigToyStateChanged__DelegateSignature
	 */
	struct ABigToy_Office04_BP_C_OnBigToyStateChanged__DelegateSignature_Params
	{
	public:
		class UBigToy_O4_State_C*                                  BigBoyState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
