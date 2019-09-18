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

// BlueprintGeneratedClass IFNAFVisionFilter.IFNAFVisionFilter_C
// 0x0000 (0x0028 - 0x0028)
class UIFNAFVisionFilter_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IFNAFVisionFilter.IFNAFVisionFilter_C");
		return ptr;
	}


	void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
