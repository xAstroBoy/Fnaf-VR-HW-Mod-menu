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
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
	 */
	struct USWGPlatformUtilFunctions_SwitchOnPlatform_Params
	{
	public:
		SWGPlatformUtil_ESWGPlatform                               Platform;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
	 */
	struct USWGPlatformUtilFunctions_IsInEditorSwitch_Params
	{
	public:
		SWGPlatformUtil_ESWGEditor                                 Editor;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
	 */
	struct USWGPlatformUtilFunctions_IsInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
	 */
	struct USWGPlatformUtilFunctions_GetVersionString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
	 */
	struct USWGPlatformUtilFunctions_GetBuildPlatform_Params
	{
	public:
		SWGPlatformUtil_ESWGPlatform                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
