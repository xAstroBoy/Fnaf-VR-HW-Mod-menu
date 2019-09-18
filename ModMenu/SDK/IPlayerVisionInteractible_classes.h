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

// BlueprintGeneratedClass IPlayerVisionInteractible.IPlayerVisionInteractible_C
// 0x0000 (0x0028 - 0x0028)
class UIPlayerVisionInteractible_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IPlayerVisionInteractible.IPlayerVisionInteractible_C");
		return ptr;
	}


	void OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn);
	void OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
