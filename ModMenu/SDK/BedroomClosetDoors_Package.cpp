/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BedroomClosetDoors_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChildActorComponent*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event_OnDoorAngleChanged                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ABedroomClosetDoors_C::ConnectDoor(class UChildActorComponent* Door, const class FScriptDelegate& Event_OnDoorAngleChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor");
		
		ABedroomClosetDoors_C_ConnectDoor_Params params {};
		params.Door = Door;
		params.Event_OnDoorAngleChanged = Event_OnDoorAngleChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::OpenCloset__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc");
		
		ABedroomClosetDoors_C_OpenCloset__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::OpenCloset__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc");
		
		ABedroomClosetDoors_C_OpenCloset__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::OpenCloset__TriggerDoorSound__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc");
		
		ABedroomClosetDoors_C_OpenCloset__TriggerDoorSound__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc");
		
		ABedroomClosetDoors_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc");
		
		ABedroomClosetDoors_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::Timeline_0__TriggerDoorSound__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc");
		
		ABedroomClosetDoors_C_Timeline_0__TriggerDoorSound__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OnNonVRLineTraceInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                MotionControllerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoors_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OnNonVRLineTraceInteract");
		
		ABedroomClosetDoors_C_OnNonVRLineTraceInteract_Params params {};
		params.MotionControllerPawn = MotionControllerPawn;
		params.HitComponent = HitComponent;
		params.Hit_Actor = Hit_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay");
		
		ABedroomClosetDoors_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoors_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick");
		
		ABedroomClosetDoors_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DoorAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABedroomClosetDoor_C*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoors_C::OnLeftDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged");
		
		ABedroomClosetDoors_C_OnLeftDoorAngleChanged_Params params {};
		params.DoorAngle = DoorAngle;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DoorAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABedroomClosetDoor_C*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoors_C::OnRightDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged");
		
		ABedroomClosetDoors_C_OnRightDoorAngleChanged_Params params {};
		params.DoorAngle = DoorAngle;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::InitClosetDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor");
		
		ABedroomClosetDoors_C_InitClosetDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::CloseClosetDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors");
		
		ABedroomClosetDoors_C_CloseClosetDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::OpenClosetDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors");
		
		ABedroomClosetDoors_C_OpenClosetDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::OpenDoorWide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide");
		
		ABedroomClosetDoors_C_OpenDoorWide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::KeepClosetDoorsShut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut");
		
		ABedroomClosetDoors_C_KeepClosetDoorsShut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.CloseDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::CloseDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.CloseDoors");
		
		ABedroomClosetDoors_C_CloseDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.ReleaseDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABedroomClosetDoors_C::ReleaseDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ReleaseDoors");
		
		ABedroomClosetDoors_C_ReleaseDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABedroomClosetDoors_C::ExecuteUbergraph_BedroomClosetDoors(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors");
		
		ABedroomClosetDoors_C_ExecuteUbergraph_BedroomClosetDoors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABedroomClosetDoors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABedroomClosetDoors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoors.BedroomClosetDoors_C");
		return ptr;
	}

}


