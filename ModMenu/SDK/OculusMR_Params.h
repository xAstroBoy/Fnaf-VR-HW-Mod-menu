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
	 * Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
	 */
	struct UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params
	{
	public:
		TArray<struct FOculusMR_PlaneMeshTriangle>                 Triangles;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
	 */
	struct UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params
	{
	};

	/**
	 * Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
	 */
	struct UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params
	{
	public:
		TArray<struct FOculusMR_PlaneMeshTriangle>                 Triangles;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
	 */
	struct UOculusMR_Settings_SetUseDynamicLighting_Params
	{
	public:
		bool                                                       Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SetIsCasting
	 */
	struct UOculusMR_Settings_SetIsCasting_Params
	{
	public:
		bool                                                       Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SetDepthQuality
	 */
	struct UOculusMR_Settings_SetDepthQuality_Params
	{
	public:
		OculusMR_EOculusMR_DepthQuality                            Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SetCompositionMethod
	 */
	struct UOculusMR_Settings_SetCompositionMethod_Params
	{
	public:
		OculusMR_EOculusMR_CompositionMethod                       Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SetCapturingCamera
	 */
	struct UOculusMR_Settings_SetCapturingCamera_Params
	{
	public:
		OculusMR_EOculusMR_CameraDeviceEnum                        Val;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.SaveToIni
	 */
	struct UOculusMR_Settings_SaveToIni_Params
	{
	};

	/**
	 * Function OculusMR.OculusMR_Settings.LoadFromIni
	 */
	struct UOculusMR_Settings_LoadFromIni_Params
	{
	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
	 */
	struct UOculusMR_Settings_GetUseDynamicLighting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetIsCasting
	 */
	struct UOculusMR_Settings_GetIsCasting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetDepthQuality
	 */
	struct UOculusMR_Settings_GetDepthQuality_Params
	{
	public:
		OculusMR_EOculusMR_DepthQuality                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetCompositionMethod
	 */
	struct UOculusMR_Settings_GetCompositionMethod_Params
	{
	public:
		OculusMR_EOculusMR_CompositionMethod                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetCapturingCamera
	 */
	struct UOculusMR_Settings_GetCapturingCamera_Params
	{
	public:
		OculusMR_EOculusMR_CameraDeviceEnum                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
	 */
	struct UOculusMR_Settings_GetBindToTrackedCameraIndex_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
	 */
	struct UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params
	{
	public:
		int                                                        InTrackedCameraIndex;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
	 */
	struct UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
	 */
	struct UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
	 */
	struct UOculusMRFunctionLibrary_GetOculusMRSettings_Params
	{
	public:
		class UOculusMR_Settings*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
