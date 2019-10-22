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

// BlueprintGeneratedClass GM_Cornfield_Maze.GM_Cornfield_Maze_C
// 0x0049 (0x0411 - 0x03C8)
class AGM_Cornfield_Maze_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ASpawnable_Key_Location_C*>           Key_Location_Array;                                       // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AMaze_Key_C*>                         Maze_Key_Array;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<TEnumAsByte<EKey_Color>>                    Key_Obtained;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFlashlight_Battery_C*                       Flashlight_Battery;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AllKeysObtained;                                          // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_Cornfield_Maze.GM_Cornfield_Maze_C");
		return ptr;
	}


	void CheckAllKeysCollected();
	void Set_Keys_for_Map();
	void Pick_Location_for_Keys(int Set_Key_ID, TEnumAsByte<EKey_Color> Set_Key_Type);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Player_Picked_Up_Key(class AMaze_Key_C* CollectedKey);
	void Toggle_Flashlight(bool OFF);
	void JumpScare();
	void ExecuteUbergraph_GM_Cornfield_Maze(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
