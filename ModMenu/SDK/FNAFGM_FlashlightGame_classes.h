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

// BlueprintGeneratedClass FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C
// 0x0021 (0x03E9 - 0x03C8)
class AFNAFGM_FlashlightGame_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFlashlight_Battery_C*                       Flashlight;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASaul_MotionControllerPawn_C*                MotionControllerPlayer;                                   // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               FlashlightState;                                          // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C");
		return ptr;
	}


	void UserConstructionScript();
	void Flashlight_State(bool Toggle);
	void ExecuteUbergraph_FNAFGM_FlashlightGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
