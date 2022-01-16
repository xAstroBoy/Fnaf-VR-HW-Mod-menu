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
	 * Class Paper2D.MaterialExpressionSpriteTextureSampler
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
	{
	public:
		bool                                                       bSampleAdditionalTextures;                               // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA6X[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        AdditionalSlotIndex;                                     // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SlotDisplayName;                                         // 0x0108(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperCharacter
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class APaperCharacter : public ACharacter
	{
	public:
		class UPaperFlipbookComponent*                             Sprite;                                                  // 0x0658(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbook
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPaperFlipbook : public UObject
	{
	public:
		float                                                      FramesPerSecond;                                         // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YDOE[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaperFlipbookKeyFrame>                      KeyFrames;                                               // 0x0030(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Paper2D_EFlipbookCollisionMode                             CollisionSource;                                         // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NIAM[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsValidKeyFrameIndex(int Index);
		float GetTotalDuration();
		class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
		class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
		int GetNumKeyFrames();
		int GetNumFrames();
		int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbookActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class APaperFlipbookActor : public AActor
	{
	public:
		class UPaperFlipbookComponent*                             RenderComponent;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperFlipbookComponent
	 * Size -> 0x0050 (FullSize[0x0480] - InheritedSize[0x0430])
	 */
	class UPaperFlipbookComponent : public UMeshComponent
	{
	public:
		class UPaperFlipbook*                                      SourceFlipbook;                                          // 0x0430(0x0008) Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  Material;                                                // 0x0438(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLooping : 1;                                            // 0x0444(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReversePlayback : 1;                                    // 0x0444(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPlaying : 1;                                            // 0x0444(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SLGT[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AccumulatedTime;                                         // 0x0448(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CachedFrameIndex;                                        // 0x044C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        SpriteColor;                                             // 0x0450(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0460(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnFinishedPlaying;                                       // 0x0468(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDJI[0x8];                                   // 0x0478(0x0008) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetSpriteColor(const struct FLinearColor& NewColor);
		void SetPlayRate(float NewRate);
		void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
		void SetPlaybackPosition(float NewPosition, bool bFireEvents);
		void SetNewTime(float NewTime);
		void SetLooping(bool bNewLooping);
		bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
		void ReverseFromEnd();
		void Reverse();
		void PlayFromStart();
		void Play();
		void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
		bool IsReversing();
		bool IsPlaying();
		bool IsLooping();
		float GetPlayRate();
		int GetPlaybackPositionInFrames();
		float GetPlaybackPosition();
		int GetFlipbookLengthInFrames();
		float GetFlipbookLength();
		float GetFlipbookFramerate();
		class UPaperFlipbook* GetFlipbook();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperGroupedSpriteActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class APaperGroupedSpriteActor : public AActor
	{
	public:
		class UPaperGroupedSpriteComponent*                        RenderComponent;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperGroupedSpriteComponent
	 * Size -> 0x0030 (FullSize[0x0460] - InheritedSize[0x0430])
	 */
	class UPaperGroupedSpriteComponent : public UMeshComponent
	{
	public:
		TArray<class UMaterialInterface*>                          InstanceMaterials;                                       // 0x0430(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpriteInstanceData>                         PerInstanceSpriteData;                                   // 0x0440(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IQJR[0x10];                                  // 0x0450(0x0010) MISSED OFFSET (PADDING)

	public:
		bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
		bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
		void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
		bool RemoveInstance(int InstanceIndex);
		bool GetInstanceTransform(int InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
		int GetInstanceCount();
		void ClearInstances();
		int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperRuntimeSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPaperRuntimeSettings : public UObject
	{
	public:
		bool                                                       bEnableSpriteAtlasGroups;                                // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTerrainSplineEditing;                             // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResizeSpriteDataToMatchTextures;                        // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YR1W[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSprite
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UPaperSprite : public UObject
	{
	public:
		unsigned char                                              UnknownData_VYKR[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SourceUV;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           SourceDimension;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          SourceTexture;                                           // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTexture*>                                    AdditionalSourceTextures;                                // 0x0050(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           BakedSourceUV;                                           // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           BakedSourceDimension;                                    // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          BakedSourceTexture;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  AlternateMaterial;                                       // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPaperSpriteSocket>                          Sockets;                                                 // 0x0088(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		Paper2D_ESpriteCollisionMode                               SpriteCollisionDomain;                                   // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BV57[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PixelsPerUnrealUnit;                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBodySetup*                                          BodySetup;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        AlternateMaterialSplitIndex;                             // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTE8[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector4>                                    BakedRenderData;                                         // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class APaperSpriteActor : public AActor
	{
	public:
		class UPaperSpriteComponent*                               RenderComponent;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteAtlas
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPaperSpriteAtlas : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSlateBrush STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperSpriteComponent
	 * Size -> 0x0020 (FullSize[0x0450] - InheritedSize[0x0430])
	 */
	class UPaperSpriteComponent : public UMeshComponent
	{
	public:
		class UPaperSprite*                                        SourceSprite;                                            // 0x0430(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0438(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        SpriteColor;                                             // 0x0440(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSpriteColor(const struct FLinearColor& NewColor);
		bool SetSprite(class UPaperSprite* NewSprite);
		class UPaperSprite* GetSprite();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainActor
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class APaperTerrainActor : public AActor
	{
	public:
		class USceneComponent*                                     DummyRoot;                                               // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTerrainSplineComponent*                        SplineComponent;                                         // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTerrainComponent*                              RenderComponent;                                         // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainComponent
	 * Size -> 0x0050 (FullSize[0x0460] - InheritedSize[0x0410])
	 */
	class UPaperTerrainComponent : public UPrimitiveComponent
	{
	public:
		class UPaperTerrainMaterial*                               TerrainMaterial;                                         // 0x0408(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosedSpline;                                           // 0x0410(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilledSpline;                                           // 0x0411(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VHH[0x6];                                   // 0x0412(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPaperTerrainSplineComponent*                        AssociatedSpline;                                        // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        RandomSeed;                                              // 0x0420(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SegmentOverlapAmount;                                    // 0x0424(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TerrainColor;                                            // 0x0428(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        ReparamStepsPerSegment;                                  // 0x0438(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Paper2D_ESpriteCollisionMode                               SpriteCollisionDomain;                                   // 0x043C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D1LC[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionThickness;                                      // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SLAJ[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          CachedBodySetup;                                         // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZXYV[0x10];                                  // 0x0450(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTerrainColor(const struct FLinearColor& NewColor);
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainMaterial
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPaperTerrainMaterial : public UDataAsset
	{
	public:
		TArray<struct FPaperTerrainMaterialRule>                   Rules;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UPaperSprite*                                        InteriorFill;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTerrainSplineComponent
	 * Size -> 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
	 */
	class UPaperTerrainSplineComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_BC5K[0x10];                                  // 0x0500(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileLayer
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UPaperTileLayer : public UObject
	{
	public:
		class FText                                                LayerName;                                               // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int                                                        LayerWidth;                                              // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        LayerHeight;                                             // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHiddenInGame : 1;                                       // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bLayerCollides : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bOverrideCollisionThickness : 1;                         // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bOverrideCollisionOffset : 1;                            // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B40J[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionThicknessOverride;                              // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CollisionOffsetOverride;                                 // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        LayerColor;                                              // 0x0054(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        AllocatedWidth;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        AllocatedHeight;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HDV9[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPaperTileInfo>                              AllocatedCells;                                          // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UPaperTileSet*                                       TileSet;                                                 // 0x0080(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<int>                                                AllocatedGrid;                                           // 0x0088(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMap
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPaperTileMap : public UObject
	{
	public:
		int                                                        MapWidth;                                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MapHeight;                                               // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TileWidth;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TileHeight;                                              // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelsPerUnrealUnit;                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerTileX;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerTileY;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationPerLayer;                                      // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedTileSet[0x28];                                   // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
		class UMaterialInterface*                                  Material;                                                // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPaperTileLayer*>                             TileLayers;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Paper2D_ESpriteCollisionMode                               SpriteCollisionDomain;                                   // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Paper2D_ETileMapProjectionMode                             ProjectionMode;                                          // 0x008D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6BG[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        HexSideLength;                                           // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X1L[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LayerNameIndex;                                          // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU62[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMapActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class APaperTileMapActor : public AActor
	{
	public:
		class UPaperTileMapComponent*                              RenderComponent;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileMapComponent
	 * Size -> 0x0050 (FullSize[0x0480] - InheritedSize[0x0430])
	 */
	class UPaperTileMapComponent : public UMeshComponent
	{
	public:
		int                                                        MapWidth;                                                // 0x0430(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        MapHeight;                                               // 0x0434(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        TileWidth;                                               // 0x0438(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        TileHeight;                                              // 0x043C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPaperTileSet*                                       DefaultLayerTileSet;                                     // 0x0440(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0448(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPaperTileLayer*>                             TileLayers;                                              // 0x0450(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		struct FLinearColor                                        TileMapColor;                                            // 0x0460(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        UseSingleLayerIndex;                                     // 0x0470(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseSingleLayer;                                         // 0x0474(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PR41[0x3];                                   // 0x0475(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPaperTileMap*                                       TileMap;                                                 // 0x0478(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTileMapColor(const struct FLinearColor& NewColor);
		bool SetTileMap(class UPaperTileMap* NewTileMap);
		void SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
		void SetLayerColor(const struct FLinearColor& NewColor, int Layer);
		void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
		void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
		void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
		void RebuildCollision();
		bool OwnsTileMap();
		void MakeTileMapEditable();
		void GetTilePolygon(int TileX, int TileY, TArray<struct FVector>* Points, int LayerIndex, bool bWorldSpace);
		struct FLinearColor GetTileMapColor();
		struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
		struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
		struct FPaperTileInfo GetTile(int X, int Y, int Layer);
		void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
		struct FLinearColor GetLayerColor(int Layer);
		void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
		class UPaperTileLayer* AddNewLayer();
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.PaperTileSet
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UPaperTileSet : public UObject
	{
	public:
		struct FIntPoint                                           TileSize;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          TileSheet;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UTexture*>                                    AdditionalSourceTextures;                                // 0x0038(0x0010) Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate
		struct FIntMargin                                          BorderMargin;                                            // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		struct FIntPoint                                           PerTileSpacing;                                          // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FIntPoint                                           DrawingOffset;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        WidthInTiles;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        HeightInTiles;                                           // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        AllocatedWidth;                                          // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        AllocatedHeight;                                         // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPaperTileMetadata>                          PerTileData;                                             // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPaperTileSetTerrain>                        Terrains;                                                // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int                                                        TileWidth;                                               // 0x0098(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        TileHeight;                                              // 0x009C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        Margin;                                                  // 0x00A0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        Spacing;                                                 // 0x00A4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Paper2D.TileMapBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FPaperTileInfo STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
		class FName STATIC_GetTileUserData(const struct FPaperTileInfo& Tile);
		struct FTransform STATIC_GetTileTransform(const struct FPaperTileInfo& Tile);
		void STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
