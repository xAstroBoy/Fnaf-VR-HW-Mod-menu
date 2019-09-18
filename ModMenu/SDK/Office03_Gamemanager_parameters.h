#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData
struct AOffice03_Gamemanager_C_GetRMData_Params
{
	struct FOffice03_ResourceManagement_struct         AIData_Struct;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DataWasFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData
struct AOffice03_Gamemanager_C_GetPhantomAIData_Params
{
	TEnumAsByte<EOffice03_PhantomAi_enum>              PhantomType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOffice03_PhantomData                       AIData_Struct;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               DataWasFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.UserConstructionScript
struct AOffice03_Gamemanager_C_UserConstructionScript_Params
{
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed
struct AOffice03_Gamemanager_C_SoundPlayed_Params
{
	class ARoomInfo_Bp_C*                              Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay
struct AOffice03_Gamemanager_C_ReceiveBeginPlay_Params
{
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager
struct AOffice03_Gamemanager_C_ExecuteUbergraph_Office03_Gamemanager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature
struct AOffice03_Gamemanager_C_DisablePhantoms__DelegateSignature_Params
{
};

// Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature
struct AOffice03_Gamemanager_C_OnSoundPlayed__DelegateSignature_Params
{
	class ARoomInfo_Bp_C*                              Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
