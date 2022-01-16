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
	 * BlueprintGeneratedClass NonVRZoomRelease.NonVRZoomRelease_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNonVRZoomRelease_C : public UInterface
	{
	public:
		void ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
