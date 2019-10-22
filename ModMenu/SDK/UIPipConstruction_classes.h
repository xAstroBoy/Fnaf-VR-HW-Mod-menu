#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UIPipConstruction.UIPipConstruction_C
// 0x0000 (0x0028 - 0x0028)
class UUIPipConstruction_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIPipConstruction.UIPipConstruction_C");
		return ptr;
	}


	void STATIC_SetSelectedPip(int SelectedPipIndex, class UObject* __WorldContext, TArray<class UImage*>* PipArray);
	void STATIC_ConstructEndSpacer(class UHorizontalBox* PipContainer, class UObject* __WorldContext);
	void STATIC_ConstructPips(int NumPips, class UHorizontalBox* PipContainer, class UObject* __WorldContext, TArray<class UImage*>* PipArray);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
