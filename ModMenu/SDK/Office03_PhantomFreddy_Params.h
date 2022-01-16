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
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.DisableVentilation
	 */
	struct AOffice03_PhantomFreddy_C_DisableVentilation_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.DropFreddy__FinishedFunc
	 */
	struct AOffice03_PhantomFreddy_C_DropFreddy__FinishedFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.DropFreddy__UpdateFunc
	 */
	struct AOffice03_PhantomFreddy_C_DropFreddy__UpdateFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.DropFreddy__FireFlickeringLights__EventFunc
	 */
	struct AOffice03_PhantomFreddy_C_DropFreddy__FireFlickeringLights__EventFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.Timeline_0__FinishedFunc
	 */
	struct AOffice03_PhantomFreddy_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.Timeline_0__UpdateFunc
	 */
	struct AOffice03_PhantomFreddy_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.ReceiveTick
	 */
	struct AOffice03_PhantomFreddy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.BndEvt__WindowCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFreddy_C_BndEvt__WindowCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.BndEvt__FreddyBodyCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFreddy_C_BndEvt__FreddyBodyCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.BndEvt__WindowCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFreddy_C_BndEvt__WindowCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.EnablePhantom
	 */
	struct AOffice03_PhantomFreddy_C_EnablePhantom_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.DisablePhantom
	 */
	struct AOffice03_PhantomFreddy_C_DisablePhantom_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.ReceiveBeginPlay
	 */
	struct AOffice03_PhantomFreddy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.CancelPhantomFreddy
	 */
	struct AOffice03_PhantomFreddy_C_CancelPhantomFreddy_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.FlickerLights
	 */
	struct AOffice03_PhantomFreddy_C_FlickerLights_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.BndEvt__FreddyBodyCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFreddy_C_BndEvt__FreddyBodyCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.ResetAllDoOnce
	 */
	struct AOffice03_PhantomFreddy_C_ResetAllDoOnce_Params
	{
	};

	/**
	 * Function Office03_PhantomFreddy.Office03_PhantomFreddy_C.ExecuteUbergraph_Office03_PhantomFreddy
	 */
	struct AOffice03_PhantomFreddy_C_ExecuteUbergraph_Office03_PhantomFreddy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
