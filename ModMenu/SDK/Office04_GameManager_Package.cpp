/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office04_GameManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOffice04_LightCollider_C*                   LightCollider                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AOffice04_GameManager_C::CheckLightBoxCollision(class AOffice04_LightCollider_C* LightCollider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision");
		
		AOffice04_GameManager_C_CheckLightBoxCollision_Params params {};
		params.LightCollider = LightCollider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable_Collision                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AOffice04_LightCollider_C*                   Light_Collider                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice04_GameManager_C::EnableLightBoxCollision(bool Enable_Collision, class AOffice04_LightCollider_C* Light_Collider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision");
		
		AOffice04_GameManager_C_EnableLightBoxCollision_Params params {};
		params.Enable_Collision = Enable_Collision;
		params.Light_Collider = Light_Collider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOfficeRoomTransition_Struct>        RoomTransitions                                            (Parm, OutParm, ZeroConstructor)
	 */
	void AOffice04_GameManager_C::GetRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions");
		
		AOffice04_GameManager_C_GetRoomTransitions_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomTransitions != nullptr)
			*RoomTransitions = params.RoomTransitions;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice04_GameManager_C::PlayerAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor");
		
		AOffice04_GameManager_C_PlayerAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.StartGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice04_GameManager_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.StartGame");
		
		AOffice04_GameManager_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice04_GameManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.ReceiveTick");
		
		AOffice04_GameManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.FlashlightHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice04_GameManager_C::FlashlightHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.FlashlightHit");
		
		AOffice04_GameManager_C_FlashlightHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.EventStartClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice04_GameManager_C::EventStartClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.EventStartClock");
		
		AOffice04_GameManager_C_EventStartClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice04_GameManager_C::ExecuteUbergraph_Office04_GameManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager");
		
		AOffice04_GameManager_C_ExecuteUbergraph_Office04_GameManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice04_GameManager_C::OnFlashlightHit__DelegateSignature(class ARoomInfo_Bp_C* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature");
		
		AOffice04_GameManager_C_OnFlashlightHit__DelegateSignature_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice04_GameManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice04_GameManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office04_GameManager.Office04_GameManager_C");
		return ptr;
	}

}


