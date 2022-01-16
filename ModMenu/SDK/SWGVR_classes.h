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
	 * Class SWGVR.SWGGrabbable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGGrabbable : public UInterface
	{
	public:
		void OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity);
		void OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		bool AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRCameraLocator
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class ASWGVRCameraLocator : public AActor
	{
	public:
		unsigned char                                              UnknownData_CSI6[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRCharacter
	 * Size -> 0x0350 (FullSize[0x09B0] - InheritedSize[0x0660])
	 */
	class ASWGVRCharacter : public ACharacter
	{
	public:
		class FScriptMulticastDelegate                             OnControllerTrackingChanged;                             // 0x0658(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerDeviceChanged;                               // 0x0668(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorGrabbed;                                          // 0x0678(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorReleased;                                         // 0x0688(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCameraComponent*                                    CameraComp;                                              // 0x0698(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     VROriginComp;                                            // 0x06A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     VRCameraAdjuster;                                        // 0x06A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPositionalHeadTracking;                                 // 0x06B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6C5K[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMotionControllerComponent*                          LeftHandComponent;                                       // 0x06B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          RightHandComponent;                                      // 0x06C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          PadMotionComponent;                                      // 0x06C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    LeftHandTrigger;                                         // 0x06D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    RightHandTrigger;                                        // 0x06D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    PadTrigger;                                              // 0x06E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     LeftAttachPoint;                                         // 0x06E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     RightAttachPoint;                                        // 0x06F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     PadAttachPoint;                                          // 0x06F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UArrowComponent*                                     PadInteractionPointer;                                   // 0x0700(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		SWGVR_EVRHandType                                          HandsThatGrab;                                           // 0x0708(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RIE2[0x3];                                   // 0x0709(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LeftGrabActionName;                                      // 0x070C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightGrabActionName;                                     // 0x0714(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThrowMagnitude;                                          // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGrabClosest;                                            // 0x0720(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHoldMultiple;                                           // 0x0721(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		SWGVR_EVRHandType                                          HandsThatInteract;                                       // 0x0722(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A0WQ[0x1];                                   // 0x0723(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LeftInteractActionName;                                  // 0x0724(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightInteractActionName;                                 // 0x072C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		HeadMountedDisplay_EHMDTrackingOrigin                      VRTrackingOrigin;                                        // 0x0734(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseEyeOffsetForEyeTracking;                             // 0x0735(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MZL5[0x2];                                   // 0x0736(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EyeOffset;                                               // 0x0738(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseHandForPad;                                          // 0x073C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		SWGVR_EVRHandType                                          HandToUseAsPad;                                          // 0x073D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6UPU[0x2];                                   // 0x073E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PadLineTraceDistance;                                    // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LerpGrabSpeed;                                           // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPerfCounterEnabled;                                     // 0x0748(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T9RW[0x3];                                   // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FPSMin;                                                  // 0x074C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FPSMax;                                                  // 0x0750(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FPSAverageOverTime;                                      // 0x0754(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FPSImmediate;                                            // 0x0758(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PerfCounterSeconds;                                      // 0x075C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PerfCounterImmediateSeconds;                             // 0x0760(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TotalPerfSeconds;                                        // 0x0764(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        FrameCounterForAverage;                                  // 0x0768(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       VRModeEnabled;                                           // 0x076C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PVEG[0x243];                                 // 0x076D(0x0243) MISSED OFFSET (PADDING)

	public:
		void StopFrameCounters();
		void StartFrameCounters();
		void SetVRModeEnabled(bool enable);
		void SetHeldOffset(SWGVR_EVRHandType Hand, const struct FVector& NewOffset, int ItemIndex);
		void SetCameraWorldRotation(const struct FRotator& Rotation);
		void SetCameraWorldLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
		void SetCameraWorldLocation(const struct FVector& Location);
		void SetCameraRelativeRotation(const struct FRotator& Rotation);
		void SetCameraRelativeLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
		void SetCameraRelativeLocation(const struct FVector& Location);
		void ReleaseGrabbable(class AActor* Grabbable, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity);
		void ReleaseAll(SWGVR_EVRHandType Hand, bool bForce, bool bOverrideVelocity, const struct FVector& Velocity);
		void ProcessInterpolatedGrab(const struct FTransform& AttachmentTransform, struct FHeldGrabbableInfo* ActorGrabbablePair, class AActor* HeldActor, SWGVR_EVRHandType Hand);
		void OnTrackedControllerChanged();
		void OnRightEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void OnRightBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnRelease(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		void OnLeftEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void OnLeftBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnHoverEnd(class AActor* HoveredActor, SWGVR_EVRHandType Hand);
		void OnHoverBegin(class AActor* HoveredActor, SWGVR_EVRHandType Hand);
		void OnHeldActorDestroyed(class AActor* DestroyedActor);
		void OnGrabHoverEnd(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		void OnGrabHoverBegin(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		void OnGrab(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		bool IsUsingPad();
		bool IsInVRMode();
		void GrabGrabbable(class AActor* Grabbable, SWGVR_EVRHandType Hand, bool bForce);
		class FName GetPadTrackingSource();
		struct FVector GetHeldOffset(SWGVR_EVRHandType Hand, int ItemIndex);
		struct FMotionControllerInfo GetHandInfo(SWGVR_EVRHandType Hand);
		SWGVR_EVRHandType GetHandForPad();
		class USceneComponent* GetHandAttachPoint(SWGVR_EVRHandType Hand);
		struct FHeldGrabbableInfo GetGrabbableInfo(class AActor* HeldActor);
		SWGVR_ESWGVRControllerType GetControllerDeviceType();
		void AddHeldOffset(SWGVR_EVRHandType Hand, const struct FVector& AdditiveValue, int ItemIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRHoverReceiver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGVRHoverReceiver : public UInterface
	{
	public:
		void OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRInteractive
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGVRInteractive : public UInterface
	{
	public:
		void OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRPlayerControllerBase
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class ASWGVRPlayerControllerBase : public APlayerController
	{
	public:
		void OnUsingGamepadChanged();
		bool IsUsingGamepad();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USWGVRSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bEnableCameraLocator;                                    // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcePickupTesting;                                     // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcePickupDebugDisplay;                                // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDS4Enabled;                                        // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNonVR;                                             // 0x003C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX6F[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVR.SWGVRUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGVRUtil : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SwitchOnPlayType(SWGVR_EVRPlayType* VRPlayMode);
		SWGVR_EVRPlayType STATIC_GetPlayType();
		void STATIC_ChangePlayType(SWGVR_EVRPlayType VRPlayMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
