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
	 * BlueprintGeneratedClass IFlashLightInteractible.IFlashLightInteractible_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIFlashLightInteractible_C : public UInterface
	{
	public:
		void OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight);
		void OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
