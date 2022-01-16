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
	 * BlueprintGeneratedClass UIPipConstruction.UIPipConstruction_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIPipConstruction_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ConstructPipSpacer(class UHorizontalBox* PipHolder, class UObject* __WorldContext);
		void STATIC_ConstructButtonIcon(class UHorizontalBox* Pip_Box, ControllerButtonsEnum_EControllerButtonsEnum Button, class UObject* __WorldContext);
		void STATIC_SetSelectedPip(TArray<class UImage*>* PipArray, int SelectedPipIndex, class UObject* __WorldContext);
		void STATIC_ConstructEndSpacer(class UHorizontalBox* PipContainer, class UObject* __WorldContext);
		void STATIC_ConstructPips(int NumPips, TArray<class UImage*>* PipArray, class UHorizontalBox* PipContainer, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
