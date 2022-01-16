/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "NightmareBedroomClosetDoors_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChildActorComponent*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event_OnDoorAngleChanged                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ANightmareBedroomClosetDoors_C::ConnectDoor(class UChildActorComponent* Door, const class FScriptDelegate& Event_OnDoorAngleChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor");
		
		ANightmareBedroomClosetDoors_C_ConnectDoor_Params params {};
		params.Door = Door;
		params.Event_OnDoorAngleChanged = Event_OnDoorAngleChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANightmareBedroomClosetDoors_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay");
		
		ANightmareBedroomClosetDoors_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANightmareBedroomClosetDoors_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick");
		
		ANightmareBedroomClosetDoors_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DoorAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABedroomClosetDoor_C*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANightmareBedroomClosetDoors_C::OnLeftDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged");
		
		ANightmareBedroomClosetDoors_C_OnLeftDoorAngleChanged_Params params {};
		params.DoorAngle = DoorAngle;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DoorAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABedroomClosetDoor_C*                        Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANightmareBedroomClosetDoors_C::OnRightDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged");
		
		ANightmareBedroomClosetDoors_C_OnRightDoorAngleChanged_Params params {};
		params.DoorAngle = DoorAngle;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ANightmareBedroomClosetDoors_C::Closed(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed");
		
		ANightmareBedroomClosetDoors_C_Closed_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANightmareBedroomClosetDoors_C::OnComponentEndOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1");
		
		ANightmareBedroomClosetDoors_C_OnComponentEndOverlap_Event_1_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.CloseDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANightmareBedroomClosetDoors_C::CloseDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.CloseDoors");
		
		ANightmareBedroomClosetDoors_C_CloseDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReleaseDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANightmareBedroomClosetDoors_C::ReleaseDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReleaseDoors");
		
		ANightmareBedroomClosetDoors_C_ReleaseDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANightmareBedroomClosetDoors_C::ExecuteUbergraph_NightmareBedroomClosetDoors(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors");
		
		ANightmareBedroomClosetDoors_C_ExecuteUbergraph_NightmareBedroomClosetDoors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ANightmareBedroomClosetDoors_C::SendDoorsOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature");
		
		ANightmareBedroomClosetDoors_C_SendDoorsOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ANightmareBedroomClosetDoors_C::SendDoorsClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature");
		
		ANightmareBedroomClosetDoors_C_SendDoorsClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANightmareBedroomClosetDoors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANightmareBedroomClosetDoors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C");
		return ptr;
	}

}


