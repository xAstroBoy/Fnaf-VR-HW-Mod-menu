﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NiagaraShader.FNiagaraCompileEventSeverity
	 */
	enum class NiagaraShader_EFNiagaraCompileEventSeverity : uint8_t
	{
		FNiagaraCompileEventSeverity__Log                              = 0,
		FNiagaraCompileEventSeverity__Warning                          = 1,
		FNiagaraCompileEventSeverity__Error                            = 2,
		FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
	 * Size -> 0x0020
	 */
	struct FNiagaraDataInterfaceGPUParamInfo
	{
	public:
		class FString                                              DataInterfaceHLSLSymbol;                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIClassName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct NiagaraShader.NiagaraCompileEvent
	 * Size -> 0x0048
	 */
	struct FNiagaraCompileEvent
	{
	public:
		NiagaraShader_EFNiagaraCompileEventSeverity                Severity;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGB6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               NodeGuid;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PinGuid;                                                 // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       StackGuids;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
