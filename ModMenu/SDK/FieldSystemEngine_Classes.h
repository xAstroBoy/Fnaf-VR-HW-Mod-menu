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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FieldSystemEngine.FieldSystemActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class AFieldSystemActor : public AActor
	{
	public:
		class UFieldSystemComponent*                               FieldSystemComponent;                                    // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystem
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFieldSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_JRGW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemComponent
	 * Size -> 0x0030 (FullSize[0x0440] - InheritedSize[0x0410])
	 */
	class UFieldSystemComponent : public UPrimitiveComponent
	{
	public:
		class UFieldSystem*                                        FieldSystem;                                             // 0x0408(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNN1[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SupportedSolvers[0x10];                                  // 0x0410(0x0010) UNKNOWN PROPERTY: ArrayProperty FieldSystemEngine.FieldSystemComponent.SupportedSolvers
		unsigned char                                              UnknownData_1LLW[0x10];                                  // 0x0430(0x0010) MISSED OFFSET (PADDING)

	public:
		void ResetFieldSystem();
		void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
		void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);
		void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
		void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
		void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
		void ApplyPhysicsField(bool Enabled, FieldSystemCore_EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
		void AddFieldCommand(bool Enabled, FieldSystemCore_EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaData
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UFieldSystemMetaData : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaDataIteration
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
	{
	public:
		int                                                        Iterations;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G073[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
	{
	public:
		FieldSystemCore_EFieldResolutionType                       ResolutionType;                                          // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJK0[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(FieldSystemCore_EFieldResolutionType ResolutionType);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeBase
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UFieldNodeBase : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeInt
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UFieldNodeInt : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeFloat
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UFieldNodeFloat : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.FieldNodeVector
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UFieldNodeVector : public UFieldNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformInteger
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UUniformInteger : public UFieldNodeInt
	{
	public:
		int                                                        Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y89[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UUniformInteger* SetUniformInteger(int Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialIntMask
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class URadialIntMask : public UFieldNodeInt
	{
	public:
		float                                                      Radius;                                                  // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x00DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        InteriorValue;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ExteriorValue;                                           // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		FieldSystemCore_ESetMaskConditionType                      SetMaskCondition;                                        // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWBE[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, FieldSystemCore_ESetMaskConditionType SetMaskConditionIn);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformScalar
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UUniformScalar : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QX4[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		class UUniformScalar* SetUniformScalar(float Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialFalloff
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class URadialFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x00EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		FieldSystemCore_EFieldFalloffType                          Falloff;                                                 // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60TA[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, FieldSystemCore_EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.PlaneFalloff
	 * Size -> 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
	 */
	class UPlaneFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x00EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x00F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		FieldSystemCore_EFieldFalloffType                          Falloff;                                                 // 0x0104(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLX0[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (PADDING)

	public:
		class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, FieldSystemCore_EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.BoxFalloff
	 * Size -> 0x0058 (FullSize[0x0130] - InheritedSize[0x00D8])
	 */
	class UBoxFalloff : public UFieldNodeFloat
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRange;                                                // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Default;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOV2[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		FieldSystemCore_EFieldFalloffType                          Falloff;                                                 // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VUE[0xF];                                   // 0x0121(0x000F) MISSED OFFSET (PADDING)

	public:
		class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, FieldSystemCore_EFieldFalloffType Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.NoiseField
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class UNoiseField : public UFieldNodeFloat
	{
	public:
		float                                                      MinRange;                                                // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x00E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.UniformVector
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UUniformVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x00DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RadialVector
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class URadialVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x00DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.RandomVector
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class URandomVector : public UFieldNodeVector
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DUE[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		class URandomVector* SetRandomVector(float Magnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.OperatorField
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UOperatorField : public UFieldNodeBase
	{
	public:
		float                                                      Magnitude;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYDS[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFieldNodeBase*                                      RightField;                                              // 0x00E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFieldNodeBase*                                      LeftField;                                               // 0x00E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		FieldSystemCore_EFieldOperationType                        Operation;                                               // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94HU[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, FieldSystemCore_EFieldOperationType Operation);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ToIntegerField
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UToIntegerField : public UFieldNodeInt
	{
	public:
		class UFieldNodeFloat*                                     FloatField;                                              // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ToFloatField
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UToFloatField : public UFieldNodeFloat
	{
	public:
		class UFieldNodeInt*                                       IntField;                                                // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.CullingField
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	class UCullingField : public UFieldNodeBase
	{
	public:
		class UFieldNodeBase*                                      Culling;                                                 // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFieldNodeBase*                                      Field;                                                   // 0x00E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		FieldSystemCore_EFieldCullingOperationType                 Operation;                                               // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ74[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, FieldSystemCore_EFieldCullingOperationType Operation);
		static UClass* StaticClass();
	};

	/**
	 * Class FieldSystemEngine.ReturnResultsTerminal
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UReturnResultsTerminal : public UFieldNodeBase
	{
	public:
		class UReturnResultsTerminal* SetReturnResultsTerminal();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
