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

// BlueprintGeneratedClass Office04_RoomInfo_BP.Office04_RoomInfo_BP_C
// 0x0001 (0x0379 - 0x0378)
class AOffice04_RoomInfo_BP_C : public ARoomInfo_Bp_C
{
public:
	TEnumAsByte<EOffice4_Locations>                    CurrentRoomType;                                          // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office04_RoomInfo_BP.Office04_RoomInfo_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
