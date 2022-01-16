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
	 * Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
	 */
	struct UOculusCreateSessionCallbackProxy_CreateSession_Params
	{
	public:
		int                                                        PublicConnections;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OculusMatchmakingPool;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOculusCreateSessionCallbackProxy*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
	 */
	struct UOculusEntitlementCallbackProxy_VerifyEntitlement_Params
	{
	public:
		class UOculusEntitlementCallbackProxy*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	 */
	struct UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params
	{
	public:
		int                                                        MaxResults;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOculusFindSessionsCallbackProxy*                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
	 */
	struct UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params
	{
	public:
		int                                                        MaxResults;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OculusMatchmakingPool;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOculusFindSessionsCallbackProxy*                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
	 */
	struct UOculusIdentityCallbackProxy_GetOculusIdentity_Params
	{
	public:
		int                                                        LocalUserNum;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOculusIdentityCallbackProxy*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
	 */
	struct UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params
	{
	public:
		bool                                                       bShouldEnqueueInMatchmakingPool;                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOculusUpdateSessionCallbackProxy*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
