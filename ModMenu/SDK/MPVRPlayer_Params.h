#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MPVRPlayer.MPVRPlayer_C.Get Flash Light
	 */
	struct AMPVRPlayer_C_Get_Flash_Light_Params
	{
	public:
		class AFlashlightBase_C*                                   Flashlight;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MPVRPlayer.MPVRPlayer_C.ReceiveBeginPlay
	 */
	struct AMPVRPlayer_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MPVRPlayer.MPVRPlayer_C.OnFlashlightChanged
	 */
	struct AMPVRPlayer_C_OnFlashlightChanged_Params
	{
	public:
		bool                                                       FlashLightOn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MPVRPlayer.MPVRPlayer_C.ExecuteUbergraph_MPVRPlayer
	 */
	struct AMPVRPlayer_C_ExecuteUbergraph_MPVRPlayer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
