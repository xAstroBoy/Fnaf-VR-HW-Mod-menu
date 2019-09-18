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

// BlueprintGeneratedClass RoomInfo_Bp.RoomInfo_Bp_C
// 0x0020 (0x0348 - 0x0328)
class ARoomInfo_Bp_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      ListofLocPonts;                                           // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       RoomName;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RoomInfo_Bp.RoomInfo_Bp_C");
		return ptr;
	}


	void GetAvailableLocationsForChar(class AOfficeAiBase_Bp_C* CharacterInstance, TArray<class ALocPoint_BP_C*>* ListOfLocations);
	void GetAvailableLocationsForCharType(class UClass* CharacterType, TArray<class ALocPoint_BP_C*>* ListOfLocations);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
