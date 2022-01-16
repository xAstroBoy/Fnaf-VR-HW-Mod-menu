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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARQS[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusCreateSessionCallbackProxy* STATIC_CreateSession(int PublicConnections, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UOculusEntitlementCallbackProxy* STATIC_VerifyEntitlement();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ2V[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusFindSessionsCallbackProxy* STATIC_FindModeratedSessions(int MaxResults);
		class UOculusFindSessionsCallbackProxy* STATIC_FindMatchmakingSessions(int MaxResults, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZO5[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int LocalUserNum);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetConnection
	 * Size -> 0x0010 (FullSize[0x1A10] - InheritedSize[0x1A00])
	 */
	class UOculusNetConnection : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_LV4K[0x10];                                  // 0x1A00(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetDriver
	 * Size -> 0x00B8 (FullSize[0x0848] - InheritedSize[0x0790])
	 */
	class UOculusNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_4IX1[0xB8];                                  // 0x0790(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RYJ[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOculusUpdateSessionCallbackProxy* STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
