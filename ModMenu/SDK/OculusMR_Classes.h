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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OculusMR.OculusMR_BoundaryActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class AOculusMR_BoundaryActor : public AActor
	{
	public:
		class UOculusMR_BoundaryMeshComponent*                     BoundaryMeshComponent;                                   // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_BoundaryMeshComponent
	 * Size -> 0x0030 (FullSize[0x0460] - InheritedSize[0x0430])
	 */
	class UOculusMR_BoundaryMeshComponent : public UMeshComponent
	{
	public:
		OculusMR_EOculusMR_BoundaryType                            BoundaryType;                                            // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2BD[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BottomZ;                                                 // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopZ;                                                    // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDLY[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           WhiteMaterial;                                           // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOculusMR_CastingCameraActor*                        CastingCameraActor;                                      // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86CT[0x10];                                  // 0x0450(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_CastingCameraActor
	 * Size -> 0x00F8 (FullSize[0x0350] - InheritedSize[0x0258])
	 */
	class AOculusMR_CastingCameraActor : public ASceneCapture2D
	{
	public:
		class UVRNotificationsComponent*                           VRNotificationComponent;                                 // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CameraColorTexture;                                      // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CameraDepthTexture;                                      // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOculusMR_PlaneMeshComponent*                        PlaneMeshComponent;                                      // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ChromaKeyMaterial;                                       // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ChromaKeyLitMaterial;                                    // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           OpaqueColoredMaterial;                                   // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ChromaKeyMaterialInstance;                               // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ChromaKeyLitMaterialInstance;                            // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CameraFrameMaterialInstance;                             // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            BackdropMaterialInstance;                                // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AOculusMR_BoundaryActor*                             BoundaryActor;                                           // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASceneCapture2D*                                     BoundarySceneCaptureActor;                               // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultTexture_White;                                    // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KH0[0x60];                                  // 0x02C8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              BackgroundRenderTarget;                                  // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASceneCapture2D*                                     ForegroundCaptureActor;                                  // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextureRenderTarget2D*                              ForegroundRenderTarget;                                  // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOculusMR_Settings*                                  MRSettings;                                              // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOculusMR_State*                                     MRState;                                                 // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_PlaneMeshComponent
	 * Size -> 0x0020 (FullSize[0x0450] - InheritedSize[0x0430])
	 */
	class UOculusMR_PlaneMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_QU08[0x20];                                  // 0x0430(0x0020) MISSED OFFSET (PADDING)

	public:
		bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_Settings
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UOculusMR_Settings : public UObject
	{
	public:
		OculusMR_EOculusMR_ClippingReference                       ClippingReference;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrackedCameraResolution;                             // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HPI[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        WidthPerView;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        HeightPerView;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastingLatency;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPoseStateLatency;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ChromaKeyColor;                                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySimilarity;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySmoothRange;                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySpillRange;                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		OculusMR_EOculusMR_VirtualGreenScreenType                  VirtualGreenScreenType;                                  // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP04[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DynamicLightingDepthSmoothFactor;                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicLightingDepthVariationClampingValue;              // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		OculusMR_EOculusMR_PostProcessEffects                      ExternalCompositionPostProcessEffects;                   // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCasting;                                              // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		OculusMR_EOculusMR_CompositionMethod                       CompositionMethod;                                       // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		OculusMR_EOculusMR_CameraDeviceEnum                        CapturingCamera;                                         // 0x005B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseDynamicLighting;                                     // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		OculusMR_EOculusMR_DepthQuality                            DepthQuality;                                            // 0x005D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1NJ3[0x6A];                                  // 0x005E(0x006A) MISSED OFFSET (PADDING)

	public:
		void SetUseDynamicLighting(bool Val);
		void SetIsCasting(bool Val);
		void SetDepthQuality(OculusMR_EOculusMR_DepthQuality Val);
		void SetCompositionMethod(OculusMR_EOculusMR_CompositionMethod Val);
		void SetCapturingCamera(OculusMR_EOculusMR_CameraDeviceEnum Val);
		void SaveToIni();
		void LoadFromIni();
		bool GetUseDynamicLighting();
		bool GetIsCasting();
		OculusMR_EOculusMR_DepthQuality GetDepthQuality();
		OculusMR_EOculusMR_CompositionMethod GetCompositionMethod();
		OculusMR_EOculusMR_CameraDeviceEnum GetCapturingCamera();
		int GetBindToTrackedCameraIndex();
		void BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_State
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusMR_State : public UObject
	{
	public:
		struct FTrackedCamera                                      TrackedCamera;                                           // 0x0028(0x0058) NativeAccessSpecifierPublic
		class USceneComponent*                                     TrackingReferenceComponent;                              // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVMW[0x4];                                   // 0x0088(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ChangeCameraStateRequested;                              // 0x008C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BindToTrackedCameraIndexRequested;                       // 0x008D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XANC[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetTrackingReferenceComponent(class USceneComponent* Component);
		class USceneComponent* STATIC_GetTrackingReferenceComponent();
		class UOculusMR_Settings* STATIC_GetOculusMRSettings();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
