/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "freddys_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0068F820
	 * 		Name   -> Function freddys.AchievementsFunctions.ClearAllAchievements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAchievementsFunctions::STATIC_ClearAllAchievements(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.AchievementsFunctions.ClearAllAchievements");
		
		UAchievementsFunctions_ClearAllAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAchievementsFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementsFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.AchievementsFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAICharacterBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAICharacterBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.AICharacterBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0068FC80
	 * 		Name   -> Function freddys.AICommonFunctionalities.isVerticalAxis
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		freddys_EAIScareDirection                          Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAICommonFunctionalities::STATIC_isVerticalAxis(freddys_EAIScareDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isVerticalAxis");
		
		UAICommonFunctionalities_isVerticalAxis_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0068FBC0
	 * 		Name   -> Function freddys.AICommonFunctionalities.isValidAxisDirection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		freddys_EAIBaseAxisDirection                       Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		freddys_EAIScareDirection                          Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAICommonFunctionalities::STATIC_isValidAxisDirection(freddys_EAIBaseAxisDirection Axis, freddys_EAIScareDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isValidAxisDirection");
		
		UAICommonFunctionalities_isValidAxisDirection_Params params {};
		params.Axis = Axis;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0068FB40
	 * 		Name   -> Function freddys.AICommonFunctionalities.isHorizontalAxis
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		freddys_EAIScareDirection                          Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAICommonFunctionalities::STATIC_isHorizontalAxis(freddys_EAIScareDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.AICommonFunctionalities.isHorizontalAxis");
		
		UAICommonFunctionalities_isHorizontalAxis_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAICommonFunctionalities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICommonFunctionalities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.AICommonFunctionalities");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphConnector.OnDisconnected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlowGraphConnector::OnDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnDisconnected");
		
		UFlowGraphConnector_OnDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphConnector.OnConnectorRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlowGraphConnector::OnConnectorRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnConnectorRegistered");
		
		UFlowGraphConnector_OnConnectorRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphConnector.OnConnected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         OtherConnector                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlowGraphConnector::OnConnected(class UFlowGraphConnector* OtherConnector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.OnConnected");
		
		UFlowGraphConnector_OnConnected_Params params {};
		params.OtherConnector = OtherConnector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006902A0
	 * 		Name   -> Function freddys.FlowGraphConnector.HasFlow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlowGraphConnector::HasFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.HasFlow");
		
		UFlowGraphConnector_HasFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690270
	 * 		Name   -> Function freddys.FlowGraphConnector.GetNodeOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AFlowGraphNode* UFlowGraphConnector::GetNodeOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetNodeOwner");
		
		UFlowGraphConnector_GetNodeOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690220
	 * 		Name   -> Function freddys.FlowGraphConnector.GetConnectedNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AFlowGraphNode* UFlowGraphConnector::GetConnectedNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetConnectedNode");
		
		UFlowGraphConnector_GetConnectedNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690200
	 * 		Name   -> Function freddys.FlowGraphConnector.GetConnectedConnector
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UFlowGraphConnector* UFlowGraphConnector::GetConnectedConnector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.GetConnectedConnector");
		
		UFlowGraphConnector_GetConnectedConnector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006901E0
	 * 		Name   -> Function freddys.FlowGraphConnector.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlowGraphConnector::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.Disconnect");
		
		UFlowGraphConnector_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690160
	 * 		Name   -> Function freddys.FlowGraphConnector.Connect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         OtherConnector                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlowGraphConnector::Connect(class UFlowGraphConnector* OtherConnector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.Connect");
		
		UFlowGraphConnector_Connect_Params params {};
		params.OtherConnector = OtherConnector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690140
	 * 		Name   -> Function freddys.FlowGraphConnector.CheckConnection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlowGraphConnector::CheckConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphConnector.CheckConnection");
		
		UFlowGraphConnector_CheckConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFlowGraphConnector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlowGraphConnector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FlowGraphConnector");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00514820
	 * 		Name   -> Function freddys.FlowGraphNode.UnregisterConnector
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         Connector                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::UnregisterConnector(class UFlowGraphConnector* Connector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.UnregisterConnector");
		
		AFlowGraphNode_UnregisterConnector_Params params {};
		params.Connector = Connector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690AA0
	 * 		Name   -> Function freddys.FlowGraphNode.SetFlowSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               EnableAsFlowSource                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::SetFlowSource(bool EnableAsFlowSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.SetFlowSource");
		
		AFlowGraphNode_SetFlowSource_Params params {};
		params.EnableAsFlowSource = EnableAsFlowSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00514820
	 * 		Name   -> Function freddys.FlowGraphNode.RegisterConnector
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         Connector                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::RegisterConnector(class UFlowGraphConnector* Connector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.RegisterConnector");
		
		AFlowGraphNode_RegisterConnector_Params params {};
		params.Connector = Connector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphNode.OnFlowChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFlowGraphNode::OnFlowChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnFlowChanged");
		
		AFlowGraphNode_OnFlowChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphNode.OnConnectorDisconnected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         MyConnector                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::OnConnectorDisconnected(class UFlowGraphConnector* MyConnector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnConnectorDisconnected");
		
		AFlowGraphNode_OnConnectorDisconnected_Params params {};
		params.MyConnector = MyConnector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FlowGraphNode.OnConnectorConnected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UFlowGraphConnector*                         MyConnector                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFlowGraphConnector*                         TheirConnector                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::OnConnectorConnected(class UFlowGraphConnector* MyConnector, class UFlowGraphConnector* TheirConnector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.OnConnectorConnected");
		
		AFlowGraphNode_OnConnectorConnected_Params params {};
		params.MyConnector = MyConnector;
		params.TheirConnector = TheirConnector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690A80
	 * 		Name   -> Function freddys.FlowGraphNode.IsFlowSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AFlowGraphNode::IsFlowSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.IsFlowSource");
		
		AFlowGraphNode_IsFlowSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690A50
	 * 		Name   -> Function freddys.FlowGraphNode.HasFlow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AFlowGraphNode::HasFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.HasFlow");
		
		AFlowGraphNode_HasFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690830
	 * 		Name   -> Function freddys.FlowGraphNode.GetConnectors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UFlowGraphConnector*> AFlowGraphNode::GetConnectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.GetConnectors");
		
		AFlowGraphNode_GetConnectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690790
	 * 		Name   -> Function freddys.FlowGraphNode.FlowTypeSwitch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		freddys_EFlowGraphFlowType                         FlowType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlowGraphNode::FlowTypeSwitch(freddys_EFlowGraphFlowType* FlowType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.FlowTypeSwitch");
		
		AFlowGraphNode_FlowTypeSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlowType != nullptr)
			*FlowType = params.FlowType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00690770
	 * 		Name   -> Function freddys.FlowGraphNode.CheckConnections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AFlowGraphNode::CheckConnections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FlowGraphNode.CheckConnections");
		
		AFlowGraphNode_CheckConnections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFlowGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlowGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FlowGraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FNAFEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691070
	 * 		Name   -> Function freddys.FNAFGameMode.SpawnLevelDB
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AFNAFGameMode::SpawnLevelDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGameMode.SpawnLevelDB");
		
		AFNAFGameMode_SpawnLevelDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.FNAFGameMode.OnSetLevelDB
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFNAFGameMode::OnSetLevelDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGameMode.OnSetLevelDB");
		
		AFNAFGameMode_OnSetLevelDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FNAFGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006915B0
	 * 		Name   -> Function freddys.FNAFGamestate.SetVictoryCondition
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLVictoryState                            victory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFGamestate::SetVictoryCondition(freddys_EGLVictoryState victory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.SetVictoryCondition");
		
		AFNAFGamestate_SetVictoryCondition_Params params {};
		params.victory = victory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691530
	 * 		Name   -> Function freddys.FNAFGamestate.SetGameState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EGLGameState                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFGamestate::SetGameState(freddys_EGLGameState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.SetGameState");
		
		AFNAFGamestate_SetGameState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691500
	 * 		Name   -> Function freddys.FNAFGamestate.GetVictoryCondition
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	freddys_EGLVictoryState AFNAFGamestate::GetVictoryCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.GetVictoryCondition");
		
		AFNAFGamestate_GetVictoryCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006914D0
	 * 		Name   -> Function freddys.FNAFGamestate.GetGameState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	freddys_EGLGameState AFNAFGamestate::GetGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAFGamestate.GetGameState");
		
		AFNAFGamestate_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFGamestate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFGamestate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FNAFGamestate");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAF_Collectables.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAF_Collectables::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FNAF_Collectables");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006920B0
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		freddys_EFNAFGameType                              GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAF_GameInstanceBase::SwitchFNAFGameType(freddys_EFNAFGameType* GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.SwitchFNAFGameType");
		
		UFNAF_GameInstanceBase_SwitchFNAFGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameType != nullptr)
			*GameType = params.GameType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691F90
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USaveGame*                                   SaveGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAF_GameInstanceBase::StartAsyncSaveGame(class USaveGame* SaveGame, const class FString& SlotName, int UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.StartAsyncSaveGame");
		
		UFNAF_GameInstanceBase_StartAsyncSaveGame_Params params {};
		params.SaveGame = SaveGame;
		params.SlotName = SlotName;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691F00
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.LoadLevelAsync
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAF_GameInstanceBase::LoadLevelAsync(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.LoadLevelAsync");
		
		UFNAF_GameInstanceBase_LoadLevelAsync_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691ED0
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.IsInDemoMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAF_GameInstanceBase::IsInDemoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.IsInDemoMode");
		
		UFNAF_GameInstanceBase_IsInDemoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691E40
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.HasDLC
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		freddys_EFNAFDLCType                               DLC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAF_GameInstanceBase::HasDLC(freddys_EFNAFDLCType DLC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.HasDLC");
		
		UFNAF_GameInstanceBase_HasDLC_Params params {};
		params.DLC = DLC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691DC0
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UFNAF_GameInstanceBase::STATIC_GetPrimaryGPUBrand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetPrimaryGPUBrand");
		
		UFNAF_GameInstanceBase_GetPrimaryGPUBrand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691D10
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.GetGPUBrandName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UFNAF_GameInstanceBase::STATIC_GetGPUBrandName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetGPUBrandName");
		
		UFNAF_GameInstanceBase_GetGPUBrandName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691D90
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.GetGameType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	freddys_EFNAFGameType UFNAF_GameInstanceBase::GetGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetGameType");
		
		UFNAF_GameInstanceBase_GetGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00691CF0
	 * 		Name   -> Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int UFNAF_GameInstanceBase::GetForcedVariantNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.FNAF_GameInstanceBase.GetForcedVariantNumber");
		
		UFNAF_GameInstanceBase_GetForcedVariantNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAF_GameInstanceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAF_GameInstanceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.FNAF_GameInstanceBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameConstants.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameConstants::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.GameConstants");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.GridCalculatorActor.SetCellDebugDisplay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int                                                CellID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::SetCellDebugDisplay(int CellID, int CellX, int CellY, int CellDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.SetCellDebugDisplay");
		
		AGridCalculatorActor_SetCellDebugDisplay_Params params {};
		params.CellID = CellID;
		params.CellX = CellX;
		params.CellY = CellY;
		params.CellDistance = CellDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693370
	 * 		Name   -> Function freddys.GridCalculatorActor.ResetDistances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGridCalculatorActor::ResetDistances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.ResetDistances");
		
		AGridCalculatorActor_ResetDistances_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693290
	 * 		Name   -> Function freddys.GridCalculatorActor.GetGridSize
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::GetGridSize(int* Width, int* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetGridSize");
		
		AGridCalculatorActor_GetGridSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006931F0
	 * 		Name   -> Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int AGridCalculatorActor::GetDistanceToCellAtWorldPosition(const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetDistanceToCellAtWorldPosition");
		
		AGridCalculatorActor_GetDistanceToCellAtWorldPosition_Params params {};
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693160
	 * 		Name   -> Function freddys.GridCalculatorActor.GetDistanceToCell
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CellID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int AGridCalculatorActor::GetDistanceToCell(int CellID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetDistanceToCell");
		
		AGridCalculatorActor_GetDistanceToCell_Params params {};
		params.CellID = CellID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692EC0
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CellX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AGridCalculatorActor::GetCellWorldPositionByCellPos(int CellX, int CellY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellWorldPositionByCellPos");
		
		AGridCalculatorActor_GetCellWorldPositionByCellPos_Params params {};
		params.CellX = CellX;
		params.CellY = CellY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692E20
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellWorldPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CellID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AGridCalculatorActor::GetCellWorldPosition(int CellID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellWorldPosition");
		
		AGridCalculatorActor_GetCellWorldPosition_Params params {};
		params.CellID = CellID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693060
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellsBetweenDistances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int> AGridCalculatorActor::GetCellsBetweenDistances(int MinDistance, int MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellsBetweenDistances");
		
		AGridCalculatorActor_GetCellsBetweenDistances_Params params {};
		params.MinDistance = MinDistance;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692F90
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellsAtDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int> AGridCalculatorActor::GetCellsAtDistance(int Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellsAtDistance");
		
		AGridCalculatorActor_GetCellsAtDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692D00
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CellID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::GetCellPosition(int CellID, int* CellX, int* CellY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellPosition");
		
		AGridCalculatorActor_GetCellPosition_Params params {};
		params.CellID = CellID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CellX != nullptr)
			*CellX = params.CellX;
		if (CellY != nullptr)
			*CellY = params.CellY;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692BD0
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::GetCellPosFromWorldPosition(const struct FVector& WorldPosition, int* CellX, int* CellY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellPosFromWorldPosition");
		
		AGridCalculatorActor_GetCellPosFromWorldPosition_Params params {};
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CellX != nullptr)
			*CellX = params.CellX;
		if (CellY != nullptr)
			*CellY = params.CellY;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692B30
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int AGridCalculatorActor::GetCellIDFromWorldPosition(const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellIDFromWorldPosition");
		
		AGridCalculatorActor_GetCellIDFromWorldPosition_Params params {};
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692A70
	 * 		Name   -> Function freddys.GridCalculatorActor.GetCellIDFromGridPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                CellX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                CellY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int AGridCalculatorActor::GetCellIDFromGridPosition(int CellX, int CellY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.GetCellIDFromGridPosition");
		
		AGridCalculatorActor_GetCellIDFromGridPosition_Params params {};
		params.CellX = CellX;
		params.CellY = CellY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692930
	 * 		Name   -> Function freddys.GridCalculatorActor.FindPathFromWorldPositions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldPositionStart                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPositionEnd                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int> AGridCalculatorActor::FindPathFromWorldPositions(const struct FVector& WorldPositionStart, const struct FVector& WorldPositionEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.FindPathFromWorldPositions");
		
		AGridCalculatorActor_FindPathFromWorldPositions_Params params {};
		params.WorldPositionStart = WorldPositionStart;
		params.WorldPositionEnd = WorldPositionEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00692830
	 * 		Name   -> Function freddys.GridCalculatorActor.FindPathFromCellIDs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int                                                StartCellID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                EndCellID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int> AGridCalculatorActor::FindPathFromCellIDs(int StartCellID, int EndCellID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.FindPathFromCellIDs");
		
		AGridCalculatorActor_FindPathFromCellIDs_Params params {};
		params.StartCellID = StartCellID;
		params.EndCellID = EndCellID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006927A0
	 * 		Name   -> Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::CalculateDistancesFromWorldPosition(const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.CalculateDistancesFromWorldPosition");
		
		AGridCalculatorActor_CalculateDistancesFromWorldPosition_Params params {};
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006926E0
	 * 		Name   -> Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                GridX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GridY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGridCalculatorActor::CalculateDistancesFromGridPosition(int GridX, int GridY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.GridCalculatorActor.CalculateDistancesFromGridPosition");
		
		AGridCalculatorActor_CalculateDistancesFromGridPosition_Params params {};
		params.GridX = GridX;
		params.GridY = GridY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGridCalculatorActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGridCalculatorActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.GridCalculatorActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693C90
	 * 		Name   -> Function freddys.LevelDB.LoadLevelByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelDB::LoadLevelByName(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevelByName");
		
		ULevelDB_LoadLevelByName_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693C10
	 * 		Name   -> Function freddys.LevelDB.LoadLevelByID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                LevelID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelDB::LoadLevelByID(int LevelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevelByID");
		
		ULevelDB_LoadLevelByID_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693B00
	 * 		Name   -> Function freddys.LevelDB.LoadLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ULevelDB::LoadLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.LoadLevel");
		
		ULevelDB_LoadLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693A10
	 * 		Name   -> Function freddys.LevelDB.GetLevelIDByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int ULevelDB::GetLevelIDByName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.GetLevelIDByName");
		
		ULevelDB_GetLevelIDByName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693900
	 * 		Name   -> Function freddys.LevelDB.GetLevelID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int ULevelDB::GetLevelID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.GetLevelID");
		
		ULevelDB_GetLevelID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00693880
	 * 		Name   -> Function freddys.LevelDB.CreateLevelDB
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelDB* ULevelDB::STATIC_CreateLevelDB(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.LevelDB.CreateLevelDB");
		
		ULevelDB_CreateLevelDB_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelDB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelDB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.LevelDB");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.NPCBaseInterface.SetHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              health                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNPCBaseInterface::SetHealth(float health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.SetHealth");
		
		UNPCBaseInterface_SetHealth_Params params {};
		params.health = health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.NPCBaseInterface.SetAILifeCycle
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		freddys_EAILifeCycle                               lifeCycle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNPCBaseInterface::SetAILifeCycle(freddys_EAILifeCycle lifeCycle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.SetAILifeCycle");
		
		UNPCBaseInterface_SetAILifeCycle_Params params {};
		params.lifeCycle = lifeCycle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.NPCBaseInterface.GetHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	float UNPCBaseInterface::GetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.NPCBaseInterface.GetHealth");
		
		UNPCBaseInterface_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNPCBaseInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCBaseInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.NPCBaseInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASwitchBoard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwitchBoard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SwitchBoard");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      buttonidentification                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASwitchboardbuttons::OnSwitchBoardButtonPessed(const class FString& buttonidentification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.Switchboardbuttons.OnSwitchBoardButtonPessed");
		
		ASwitchboardbuttons_OnSwitchBoardButtonPessed_Params params {};
		params.buttonidentification = buttonidentification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00694BD0
	 * 		Name   -> Function freddys.Switchboardbuttons.BeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASwitchboardbuttons::BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.Switchboardbuttons.BeginOverlap");
		
		ASwitchboardbuttons_BeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASwitchboardbuttons.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwitchboardbuttons::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.Switchboardbuttons");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASWS_AudioGroups.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASWS_AudioGroups::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_AudioGroups");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696070
	 * 		Name   -> Function freddys.SWS_AudioManager.StopAudioByID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioManager::StopAudioByID(int ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByID");
		
		ASWS_AudioManager_StopAudioByID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695FB0
	 * 		Name   -> Function freddys.SWS_AudioManager.StopAudioByHandle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAudioHandle                                AudioHandle                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioManager::StopAudioByHandle(const struct FAudioHandle& AudioHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByHandle");
		
		ASWS_AudioManager_StopAudioByHandle_Params params {};
		params.AudioHandle = AudioHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695F30
	 * 		Name   -> Function freddys.SWS_AudioManager.StopAudioByAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Base                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioManager::StopAudioByAsset(class USoundBase* Base)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.StopAudioByAsset");
		
		ASWS_AudioManager_StopAudioByAsset_Params params {};
		params.Base = Base;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695E70
	 * 		Name   -> Function freddys.SWS_AudioManager.RefreshAudioHandlePool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAudioHandle                                Handle                                                     (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioManager::RefreshAudioHandlePool(struct FAudioHandle* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.RefreshAudioHandlePool");
		
		ASWS_AudioManager_RefreshAudioHandlePool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handle != nullptr)
			*Handle = params.Handle;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695B20
	 * 		Name   -> Function freddys.SWS_AudioManager.PlayAudioByName
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAudioHandle ASWS_AudioManager::PlayAudioByName(const class FString& Name, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByName");
		
		ASWS_AudioManager_PlayAudioByName_Params params {};
		params.Name = Name;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695830
	 * 		Name   -> Function freddys.SWS_AudioManager.PlayAudioByID
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAudioHandle ASWS_AudioManager::PlayAudioByID(int ID, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByID");
		
		ASWS_AudioManager_PlayAudioByID_Params params {};
		params.ID = ID;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695540
	 * 		Name   -> Function freddys.SWS_AudioManager.PlayAudioByAsset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAudioHandle ASWS_AudioManager::PlayAudioByAsset(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.PlayAudioByAsset");
		
		ASWS_AudioManager_PlayAudioByAsset_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006954B0
	 * 		Name   -> Function freddys.SWS_AudioManager.GetSoundID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundCue*                                   cue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int ASWS_AudioManager::GetSoundID(class USoundCue* cue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundID");
		
		ASWS_AudioManager_GetSoundID_Params params {};
		params.cue = cue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006953C0
	 * 		Name   -> Function freddys.SWS_AudioManager.GetSoundCueByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundCue* ASWS_AudioManager::GetSoundCueByName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundCueByName");
		
		ASWS_AudioManager_GetSoundCueByName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00695330
	 * 		Name   -> Function freddys.SWS_AudioManager.GetSoundByID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundCue* ASWS_AudioManager::GetSoundByID(int ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetSoundByID");
		
		ASWS_AudioManager_GetSoundByID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006952B0
	 * 		Name   -> Function freddys.SWS_AudioManager.GetAudioManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ASWS_AudioManager* ASWS_AudioManager::STATIC_GetAudioManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioManager.GetAudioManager");
		
		ASWS_AudioManager_GetAudioManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASWS_AudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASWS_AudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_AudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006965B0
	 * 		Name   -> Function freddys.SWS_AudioSource.StopAudio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioSource::StopAudio(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.StopAudio");
		
		ASWS_AudioSource_StopAudio_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006962D0
	 * 		Name   -> Function freddys.SWS_AudioSource.PlayAudio
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundConcurrency*                           ConcurrencySettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASWS_AudioSource::PlayAudio(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.PlayAudio");
		
		ASWS_AudioSource_PlayAudio_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Sound = Sound;
		params.Location = Location;
		params.Rotation = Rotation;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.StartTime = StartTime;
		params.AttenuationSettings = AttenuationSettings;
		params.ConcurrencySettings = ConcurrencySettings;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006962B0
	 * 		Name   -> Function freddys.SWS_AudioSource.DestroyHandle
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ASWS_AudioSource::DestroyHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_AudioSource.DestroyHandle");
		
		ASWS_AudioSource_DestroyHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASWS_AudioSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASWS_AudioSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_AudioSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWS_AudioStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWS_AudioStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_AudioStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006971C0
	 * 		Name   -> Function freddys.SWS_GroupComponent.UnRegisterAudioSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASWS_AudioSource*                            cue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::UnRegisterAudioSource(class ASWS_AudioSource* cue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.UnRegisterAudioSource");
		
		USWS_GroupComponent_UnRegisterAudioSource_Params params {};
		params.cue = cue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00697140
	 * 		Name   -> Function freddys.SWS_GroupComponent.RegisterAudioSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASWS_AudioSource*                            cue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::RegisterAudioSource(class ASWS_AudioSource* cue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.RegisterAudioSource");
		
		USWS_GroupComponent_RegisterAudioSource_Params params {};
		params.cue = cue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006970C0
	 * 		Name   -> Function freddys.SWS_GroupComponent.OnVolumeModified
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::OnVolumeModified(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.OnVolumeModified");
		
		USWS_GroupComponent_OnVolumeModified_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00697040
	 * 		Name   -> Function freddys.SWS_GroupComponent.OnPitchModified
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::OnPitchModified(float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.OnPitchModified");
		
		USWS_GroupComponent_OnPitchModified_Params params {};
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696FC0
	 * 		Name   -> Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::ModifyGroupVolumeMultiplier(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.ModifyGroupVolumeMultiplier");
		
		USWS_GroupComponent_ModifyGroupVolumeMultiplier_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696F40
	 * 		Name   -> Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWS_GroupComponent::ModifyGroupPitchMultiplier(float Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.ModifyGroupPitchMultiplier");
		
		USWS_GroupComponent_ModifyGroupPitchMultiplier_Params params {};
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696F10
	 * 		Name   -> Function freddys.SWS_GroupComponent.GetTotalFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int USWS_GroupComponent::GetTotalFrequency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.GetTotalFrequency");
		
		USWS_GroupComponent_GetTotalFrequency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00696F10
	 * 		Name   -> Function freddys.SWS_GroupComponent.GetTotalAmplitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int USWS_GroupComponent::GetTotalAmplitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function freddys.SWS_GroupComponent.GetTotalAmplitude");
		
		USWS_GroupComponent_GetTotalAmplitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWS_GroupComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWS_GroupComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_GroupComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWS_SaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWS_SaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class freddys.SWS_SaveGame");
		return ptr;
	}

}


