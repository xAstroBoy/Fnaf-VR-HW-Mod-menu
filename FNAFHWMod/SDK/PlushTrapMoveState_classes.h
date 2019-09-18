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

// BlueprintGeneratedClass PlushTrapMoveState.PlushTrapMoveState_C
// 0x0004 (0x002C - 0x0028)
class UPlushTrapMoveState_C : public UPlushTrapState_C
{
public:
	int                                                DirectionID;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlushTrapMoveState.PlushTrapMoveState_C");
		return ptr;
	}


	void GetMovementDirection(int* Direction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
