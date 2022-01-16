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
	 * BlueprintGeneratedClass HeldActionInfoProvider.HeldActionInfoProvider_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHeldActionInfoProvider_C : public UInterface
	{
	public:
		void GetAvailableButtons(TArray<ControllerButtonsEnum_EControllerButtonsEnum>* AvailableButtons);
		void GetHeldActionsText(class FText* Left_Text, class FText* Right_Text, class FText* Bottom_Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
