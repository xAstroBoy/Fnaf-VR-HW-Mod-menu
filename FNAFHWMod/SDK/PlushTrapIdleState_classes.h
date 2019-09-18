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

// BlueprintGeneratedClass PlushTrapIdleState.PlushTrapIdleState_C
// 0x0000 (0x0028 - 0x0028)
class UPlushTrapIdleState_C : public UPlushTrapState_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlushTrapIdleState.PlushTrapIdleState_C");
		return ptr;
	}


	void Init(bool* NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
