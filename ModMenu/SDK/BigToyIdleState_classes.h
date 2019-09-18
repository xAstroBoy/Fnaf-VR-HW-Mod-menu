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

// BlueprintGeneratedClass BigToyIdleState.BigToyIdleState_C
// 0x0000 (0x0028 - 0x0028)
class UBigToyIdleState_C : public UBigToy_O4_State_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BigToyIdleState.BigToyIdleState_C");
		return ptr;
	}


	void Init(bool* NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
