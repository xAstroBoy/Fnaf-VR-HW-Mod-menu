#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SWGPlatformUtil.SWGPlatformSettings
// 0x0008 (0x0040 - 0x0038)
class USWGPlatformSettings : public UDeveloperSettings
{
public:
	ESWGPlatform                                       BuildPlatform;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformSettings");
		return ptr;
	}

};


// Class SWGPlatformUtil.SWGPlatformUtilFunctions
// 0x0000 (0x0028 - 0x0028)
class USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformUtilFunctions");
		return ptr;
	}


	void STATIC_SwitchOnPlatform(ESWGPlatform* Platform);
	void STATIC_IsInEditorSwitch(ESWGEditor* Editor);
	bool STATIC_IsInEditor();
	ESWGPlatform STATIC_GetBuildPlatform();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
