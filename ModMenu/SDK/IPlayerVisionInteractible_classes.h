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
	 * BlueprintGeneratedClass IPlayerVisionInteractible.IPlayerVisionInteractible_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPlayerVisionInteractible_C : public UInterface
	{
	public:
		void OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn);
		void OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
