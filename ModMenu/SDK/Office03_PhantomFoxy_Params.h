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
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.DisableVentilation
	 */
	struct AOffice03_PhantomFoxy_C_DisableVentilation_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.EnablePhantomFoxy
	 */
	struct AOffice03_PhantomFoxy_C_EnablePhantomFoxy_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.Timeline_0__FinishedFunc
	 */
	struct AOffice03_PhantomFoxy_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.Timeline_0__UpdateFunc
	 */
	struct AOffice03_PhantomFoxy_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.ReceiveBeginPlay
	 */
	struct AOffice03_PhantomFoxy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.ReceiveTick
	 */
	struct AOffice03_PhantomFoxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.BndEvt__EyeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFoxy_C_BndEvt__EyeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.EnablePhantom
	 */
	struct AOffice03_PhantomFoxy_C_EnablePhantom_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.DisablePhantom
	 */
	struct AOffice03_PhantomFoxy_C_DisablePhantom_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.BndEvt__VisionCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFoxy_C_BndEvt__VisionCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.BndEvt__VisionCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFoxy_C_BndEvt__VisionCollider_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.BndEvt__EyeCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOffice03_PhantomFoxy_C_BndEvt__EyeCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.FlickerLights
	 */
	struct AOffice03_PhantomFoxy_C_FlickerLights_Params
	{
	};

	/**
	 * Function Office03_PhantomFoxy.Office03_PhantomFoxy_C.ExecuteUbergraph_Office03_PhantomFoxy
	 */
	struct AOffice03_PhantomFoxy_C_ExecuteUbergraph_Office03_PhantomFoxy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
