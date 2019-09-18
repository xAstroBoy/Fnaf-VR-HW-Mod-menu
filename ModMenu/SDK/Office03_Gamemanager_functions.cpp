
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOffice03_ResourceManagement_struct AIData_Struct                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DataWasFound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice03_Gamemanager_C::GetRMData(struct FOffice03_ResourceManagement_struct* AIData_Struct, bool* DataWasFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData");

	AOffice03_Gamemanager_C_GetRMData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIData_Struct != nullptr)
		*AIData_Struct = params.AIData_Struct;
	if (DataWasFound != nullptr)
		*DataWasFound = params.DataWasFound;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOffice03_PhantomAi_enum> PhantomType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOffice03_PhantomData   AIData_Struct                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DataWasFound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice03_Gamemanager_C::GetPhantomAIData(TEnumAsByte<EOffice03_PhantomAi_enum> PhantomType, struct FOffice03_PhantomData* AIData_Struct, bool* DataWasFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData");

	AOffice03_Gamemanager_C_GetPhantomAIData_Params params;
	params.PhantomType = PhantomType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIData_Struct != nullptr)
		*AIData_Struct = params.AIData_Struct;
	if (DataWasFound != nullptr)
		*DataWasFound = params.DataWasFound;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice03_Gamemanager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.UserConstructionScript");

	AOffice03_Gamemanager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_Gamemanager_C::SoundPlayed(class ARoomInfo_Bp_C* Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed");

	AOffice03_Gamemanager_C_SoundPlayed_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice03_Gamemanager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay");

	AOffice03_Gamemanager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_Gamemanager_C::ExecuteUbergraph_Office03_Gamemanager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager");

	AOffice03_Gamemanager_C_ExecuteUbergraph_Office03_Gamemanager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AOffice03_Gamemanager_C::DisablePhantoms__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature");

	AOffice03_Gamemanager_C_DisablePhantoms__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice03_Gamemanager_C::OnSoundPlayed__DelegateSignature(class ARoomInfo_Bp_C* Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature");

	AOffice03_Gamemanager_C_OnSoundPlayed__DelegateSignature_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
