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
	 * Enum EditableMesh.ETriangleTessellationMode
	 */
	enum class EditableMesh_ETriangleTessellationMode : uint8_t
	{
		ETriangleTessellationMode__ThreeTriangles                = 0,
		ETriangleTessellationMode__FourTriangles                 = 1,
		ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2
	};

	/**
	 * Enum EditableMesh.EInsetPolygonsMode
	 */
	enum class EditableMesh_EInsetPolygonsMode : uint8_t
	{
		EInsetPolygonsMode__All                    = 0,
		EInsetPolygonsMode__CenterPolygonOnly      = 1,
		EInsetPolygonsMode__SidePolygonsOnly       = 2,
		EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3
	};

	/**
	 * Enum EditableMesh.EPolygonEdgeHardness
	 */
	enum class EditableMesh_EPolygonEdgeHardness : uint8_t
	{
		EPolygonEdgeHardness__NewEdgesSoft             = 0,
		EPolygonEdgeHardness__NewEdgesHard             = 1,
		EPolygonEdgeHardness__AllEdgesSoft             = 2,
		EPolygonEdgeHardness__AllEdgesHard             = 3,
		EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4
	};

	/**
	 * Enum EditableMesh.EMeshElementAttributeType
	 */
	enum class EditableMesh_EMeshElementAttributeType : uint8_t
	{
		EMeshElementAttributeType__None                          = 0,
		EMeshElementAttributeType__FVector4                      = 1,
		EMeshElementAttributeType__FVector                       = 2,
		EMeshElementAttributeType__FVector2D                     = 3,
		EMeshElementAttributeType__Float                         = 4,
		EMeshElementAttributeType__Int                           = 5,
		EMeshElementAttributeType__Bool                          = 6,
		EMeshElementAttributeType__FName                         = 7,
		EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8
	};

	/**
	 * Enum EditableMesh.EMeshTopologyChange
	 */
	enum class EditableMesh_EMeshTopologyChange : uint8_t
	{
		EMeshTopologyChange__NoTopologyChange        = 0,
		EMeshTopologyChange__TopologyChange          = 1,
		EMeshTopologyChange__EMeshTopologyChange_MAX = 2
	};

	/**
	 * Enum EditableMesh.EMeshModificationType
	 */
	enum class EditableMesh_EMeshModificationType : uint8_t
	{
		EMeshModificationType__FirstInterim              = 0,
		EMeshModificationType__Interim                   = 1,
		EMeshModificationType__Final                     = 2,
		EMeshModificationType__EMeshModificationType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EditableMesh.VertexPair
	 * Size -> 0x0008
	 */
	struct FVertexPair
	{
	public:
		struct FVertexID                                           VertexID0;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexID                                           VertexID1;                                               // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.MeshElementAttributeValue
	 * Size -> 0x0050
	 */
	struct FMeshElementAttributeValue
	{
	public:
		unsigned char                                              UnknownData_70IV[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.MeshElementAttributeData
	 * Size -> 0x0060
	 */
	struct FMeshElementAttributeData
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        AttributeIndex;                                          // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZSZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshElementAttributeValue                          AttributeValue;                                          // 0x0010(0x0050) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.MeshElementAttributeList
	 * Size -> 0x0010
	 */
	struct FMeshElementAttributeList
	{
	public:
		TArray<struct FMeshElementAttributeData>                   Attributes;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.AttributesForVertexInstance
	 * Size -> 0x0018
	 */
	struct FAttributesForVertexInstance
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y3L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshElementAttributeList                           VertexInstanceAttributes;                                // 0x0008(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VerticesForEdge
	 * Size -> 0x000C
	 */
	struct FVerticesForEdge
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexID                                           NewVertexID0;                                            // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexID                                           NewVertexID1;                                            // 0x0008(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.AttributesForEdge
	 * Size -> 0x0018
	 */
	struct FAttributesForEdge
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX2Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshElementAttributeList                           EdgeAttributes;                                          // 0x0008(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VertexToMove
	 * Size -> 0x0010
	 */
	struct FVertexToMove
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NewVertexPosition;                                       // 0x0004(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VertexAndAttributes
	 * Size -> 0x0018
	 */
	struct FVertexAndAttributes
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexID                                           VertexID;                                                // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMeshElementAttributeList                           PolygonVertexAttributes;                                 // 0x0008(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.SubdividedQuadVertex
	 * Size -> 0x0034
	 */
	struct FSubdividedQuadVertex
	{
	public:
		int                                                        VertexPositionIndex;                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TextureCoordinate0;                                      // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TextureCoordinate1;                                      // 0x000C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexColor;                                             // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VertexNormal;                                            // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VertexTangent;                                           // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexBinormalSign;                                      // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.SubdividedQuad
	 * Size -> 0x00D0
	 */
	struct FSubdividedQuad
	{
	public:
		struct FSubdividedQuadVertex                               QuadVertex0;                                             // 0x0000(0x0034) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubdividedQuadVertex                               QuadVertex1;                                             // 0x0034(0x0034) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubdividedQuadVertex                               QuadVertex2;                                             // 0x0068(0x0034) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubdividedQuadVertex                               QuadVertex3;                                             // 0x009C(0x0034) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.SubdividedWireEdge
	 * Size -> 0x000C
	 */
	struct FSubdividedWireEdge
	{
	public:
		int                                                        EdgeVertex0PositionIndex;                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EdgeVertex1PositionIndex;                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05LT[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.VertexToCreate
	 * Size -> 0x0018
	 */
	struct FVertexToCreate
	{
	public:
		struct FMeshElementAttributeList                           VertexAttributes;                                        // 0x0000(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVertexID                                           OriginalVertexID;                                        // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQQM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.VertexInstanceToCreate
	 * Size -> 0x0020
	 */
	struct FVertexInstanceToCreate
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BWY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshElementAttributeList                           VertexInstanceAttributes;                                // 0x0008(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVertexInstanceID                                   OriginalVertexInstanceID;                                // 0x0018(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRFX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.PolygonGroupToCreate
	 * Size -> 0x0018
	 */
	struct FPolygonGroupToCreate
	{
	public:
		struct FMeshElementAttributeList                           PolygonGroupAttributes;                                  // 0x0000(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPolygonGroupID                                     OriginalPolygonGroupID;                                  // 0x0010(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIJR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.VertexIndexAndInstanceID
	 * Size -> 0x0008
	 */
	struct FVertexIndexAndInstanceID
	{
	public:
		int                                                        ContourIndex;                                            // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.PolygonGroupForPolygon
	 * Size -> 0x0008
	 */
	struct FPolygonGroupForPolygon
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VertexInstancesForPolygonHole
	 * Size -> 0x0010
	 */
	struct FVertexInstancesForPolygonHole
	{
	public:
		TArray<struct FVertexIndexAndInstanceID>                   VertexIndicesAndInstanceIDs;                             // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
	 * Size -> 0x0028
	 */
	struct FChangeVertexInstancesForPolygon
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I62W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVertexIndexAndInstanceID>                   PerimeterVertexIndicesAndInstanceIDs;                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVertexInstancesForPolygonHole>              VertexIndicesAndInstanceIDsForEachHole;                  // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.EdgeToCreate
	 * Size -> 0x0030
	 */
	struct FEdgeToCreate
	{
	public:
		struct FVertexID                                           VertexID0;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexID                                           VertexID1;                                               // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPolygonID>                                  ConnectedPolygons;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMeshElementAttributeList                           EdgeAttributes;                                          // 0x0018(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		struct FEdgeID                                             OriginalEdgeID;                                          // 0x0028(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41SL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.PolygonToCreate
	 * Size -> 0x0020
	 */
	struct FPolygonToCreate
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y68M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVertexAndAttributes>                        PerimeterVertices;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPolygonID                                          OriginalPolygonID;                                       // 0x0018(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EditableMesh_EPolygonEdgeHardness                          PolygonEdgeHardness;                                     // 0x001C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBCQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.SubdivisionLimitSection
	 * Size -> 0x0010
	 */
	struct FSubdivisionLimitSection
	{
	public:
		TArray<struct FSubdividedQuad>                             SubdividedQuads;                                         // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.SubdivisionLimitData
	 * Size -> 0x0030
	 */
	struct FSubdivisionLimitData
	{
	public:
		TArray<struct FVector>                                     VertexPositions;                                         // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSubdivisionLimitSection>                    Sections;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSubdividedWireEdge>                         SubdividedWireEdges;                                     // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VertexAttributesForPolygonHole
	 * Size -> 0x0010
	 */
	struct FVertexAttributesForPolygonHole
	{
	public:
		TArray<struct FMeshElementAttributeList>                   VertexAttributeList;                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.VertexAttributesForPolygon
	 * Size -> 0x0028
	 */
	struct FVertexAttributesForPolygon
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMI5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMeshElementAttributeList>                   PerimeterVertexAttributeLists;                           // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVertexAttributesForPolygonHole>             VertexAttributeListsForEachHole;                         // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.AttributesForVertex
	 * Size -> 0x0018
	 */
	struct FAttributesForVertex
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshElementAttributeList                           VertexAttributes;                                        // 0x0008(0x0010) BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.PolygonToSplit
	 * Size -> 0x0018
	 */
	struct FPolygonToSplit
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVertexPair>                                 VertexPairsToSplitAt;                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.AdaptorPolygon2Group
	 * Size -> 0x0048
	 */
	struct FAdaptorPolygon2Group
	{
	public:
		uint32_t                                                   RenderingSectionIndex;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaterialIndex;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxTriangles;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2WO[0x3C];                                  // 0x000C(0x003C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.AdaptorTriangleID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FAdaptorTriangleID : public FElementID
	{
	};

	/**
	 * ScriptStruct EditableMesh.AdaptorPolygon
	 * Size -> 0x0018
	 */
	struct FAdaptorPolygon
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42H8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAdaptorTriangleID>                          TriangulatedPolygonTriangleIndices;                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct EditableMesh.RenderingPolygonGroup
	 * Size -> 0x0048
	 */
	struct FRenderingPolygonGroup
	{
	public:
		uint32_t                                                   RenderingSectionIndex;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaterialIndex;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxTriangles;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NNO[0x3C];                                  // 0x000C(0x003C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EditableMesh.TriangleID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FTriangleID : public FElementID
	{
	};

	/**
	 * ScriptStruct EditableMesh.RenderingPolygon
	 * Size -> 0x0018
	 */
	struct FRenderingPolygon
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NY6A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTriangleID>                                 TriangulatedPolygonTriangleIndices;                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
