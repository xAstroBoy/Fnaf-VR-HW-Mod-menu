/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office03_Gamemanager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOffice03_ResourceManagement_struct         AIData_Struct                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DataWasFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_Gamemanager_C::GetRMData(struct FOffice03_ResourceManagement_struct* AIData_Struct, bool* DataWasFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.GetRMData");
		
		AOffice03_Gamemanager_C_GetRMData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIData_Struct != nullptr)
			*AIData_Struct = params.AIData_Struct;
		if (DataWasFound != nullptr)
			*DataWasFound = params.DataWasFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Office03_PhantomAi_enum_EOffice03_PhantomAi_enum   PhantomType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOffice03_PhantomData                       AIData_Struct                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DataWasFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOffice03_Gamemanager_C::GetPhantomAIData(Office03_PhantomAi_enum_EOffice03_PhantomAi_enum PhantomType, struct FOffice03_PhantomData* AIData_Struct, bool* DataWasFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.GetPhantomAIData");
		
		AOffice03_Gamemanager_C_GetPhantomAIData_Params params {};
		params.PhantomType = PhantomType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIData_Struct != nullptr)
			*AIData_Struct = params.AIData_Struct;
		if (DataWasFound != nullptr)
			*DataWasFound = params.DataWasFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_Gamemanager_C::SoundPlayed(class ARoomInfo_Bp_C* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.SoundPlayed");
		
		AOffice03_Gamemanager_C_SoundPlayed_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice03_Gamemanager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.ReceiveBeginPlay");
		
		AOffice03_Gamemanager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_Gamemanager_C::ExecuteUbergraph_Office03_Gamemanager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.ExecuteUbergraph_Office03_Gamemanager");
		
		AOffice03_Gamemanager_C_ExecuteUbergraph_Office03_Gamemanager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_Gamemanager_C::DisablePhantoms__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.DisablePhantoms__DelegateSignature");
		
		AOffice03_Gamemanager_C_DisablePhantoms__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_Gamemanager_C::OnSoundPlayed__DelegateSignature(class ARoomInfo_Bp_C* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_Gamemanager.Office03_Gamemanager_C.OnSoundPlayed__DelegateSignature");
		
		AOffice03_Gamemanager_C_OnSoundPlayed__DelegateSignature_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice03_Gamemanager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice03_Gamemanager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office03_Gamemanager.Office03_Gamemanager_C");
		return ptr;
	}

}


