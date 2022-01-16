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
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData
	 */
	struct AOffice03_Gamemanager_C_GetRMData_Params
	{
	public:
		struct FOffice03_ResourceManagement_struct                 AIData_Struct;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DataWasFound;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData
	 */
	struct AOffice03_Gamemanager_C_GetPhantomAIData_Params
	{
	public:
		Office03_PhantomAi_enum_EOffice03_PhantomAi_enum           PhantomType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FOffice03_PhantomData                               AIData_Struct;                                           // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DataWasFound;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed
	 */
	struct AOffice03_Gamemanager_C_SoundPlayed_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay
	 */
	struct AOffice03_Gamemanager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager
	 */
	struct AOffice03_Gamemanager_C_ExecuteUbergraph_Office03_Gamemanager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature
	 */
	struct AOffice03_Gamemanager_C_DisablePhantoms__DelegateSignature_Params
	{
	};

	/**
	 * Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature
	 */
	struct AOffice03_Gamemanager_C_OnSoundPlayed__DelegateSignature_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
