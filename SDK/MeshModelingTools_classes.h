#pragma once

// Name: DBD, Version: 540


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MeshModelingTools.AddPatchToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_E3WA[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AddPatchToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Width;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Shift;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.AddPatchTool
// 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
class UAddPatchTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_FAOH[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAddPatchToolProperties*                     ShapeSettings;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WX6G[0x58];                                    // 0x00B0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AddPatchTool");
		return ptr;
	}



};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_YCSR[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.ProceduralShapeToolProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bInstanceIfPossible;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUHG[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMakeMeshShapeType               Shape;                                                     // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HB08[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeatureRadius;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slices;                                                    // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPolygroupMode           PolygroupMode;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPlacementType           PlaceMode;                                                 // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPivotLocation           PivotLocation;                                             // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_31Y3[0x1];                                     // 0x0077(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rotation;                                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignShapeToPlacementSurface;                             // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LF4F[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.LastActorInfo
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULastActorInfo : public UObject
{
public:
	unsigned char                                      UnknownData_967H[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Actor;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.LastActorInfo");
		return ptr;
	}



};

// Class MeshModelingTools.AddPrimitiveTool
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UAddPrimitiveTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_8HJF[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULastActorInfo*                              LastGenerated;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_APAS[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EAlignObjectsAlignTypes          AlignType;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XE8[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsAlignToOptions      AlignTo;                                                   // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFOW[0x3];                                     // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsBoxPoint            BoxPosition;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FF7[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bAlignX;                                                   // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignY;                                                   // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignZ;                                                   // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W4PM[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsTool
// 0x00B0 (FullSize[0x0148] - InheritedSize[0x0098])
class UAlignObjectsTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_056A[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAlignObjectsToolProperties*                 AlignProps;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJDP[0xA0];                                    // 0x00A8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsTool");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_5HZ7[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bBakeRotation;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EBakeScaleMethod                 BakeScale;                                                 // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecenterPivot;                                            // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFGA[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformTool
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UBakeTransformTool : public UMultiSelectionTool
{
public:
	class UBakeTransformToolProperties*                BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_93SP[0x20];                                    // 0x00A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformTool");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesToolBuilder
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_YUFQ[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bDeleteSourceActors;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZCB[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesTool
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
class UCombineMeshesTool : public UMultiSelectionTool
{
public:
	class UCombineMeshesToolProperties*                BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E941[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EConvertToPolygonsMode           ConversionMode;                                            // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LT5A[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCalculateNormals;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1I5[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsTool
// 0x0480 (FullSize[0x0510] - InheritedSize[0x0090])
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FB3N[0x470];                                   // 0x00A0(0x0470) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EGroupTopologyDeformationStrategy DeformationStrategy;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EQuickTransformerMode            TransformMode;                                             // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectFaces;                                              // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                              // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                           // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y2Y3[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EWeightScheme                    SelectedWeightScheme;                                      // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNVX[0x3];                                     // 0x005F(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_CR4P[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             HandleWeight;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPostFixHandles;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZN0N[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTransformProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsTool
// 0x15B8 (FullSize[0x1680] - InheritedSize[0x00C8])
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_IC50[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                            // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OCAR[0x15A0];                                  // 0x00E0(0x15A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DisplaceMeshTool
// 0x02C8 (FullSize[0x0358] - InheritedSize[0x0090])
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	MeshModelingTools_EDisplaceMeshToolDisplaceType    DisplacementType;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQQ1[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisplaceIntensity;                                         // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DisplacementMap;                                           // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplaceFrequency;                                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplacePhaseShift;                                        // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWKB[0x2A8];                                   // 0x00B0(0x02A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_2VCM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolygonDrawMode             PolygonType;                                               // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolygonOutputMode           OutputMode;                                                // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WRJ5[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeatureSizeRatio;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtrudeHeight;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSelfIntersections;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2DI4[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapping;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToVertices;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToEdges;                                              // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToAngles;                                             // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToLengths;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QEW4[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SegmentLength;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitSceneObjects;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BEO[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HitNormalOffset;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CA8M[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonTool
// 0x0528 (FullSize[0x05B0] - InheritedSize[0x0088])
class UDrawPolygonTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_U9B4[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ATHV[0xB8];                                    // 0x00A8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3Q6O[0x408];                                   // 0x0178(0x0408) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                            // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0RZY[0x28];                                    // 0x0588(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_QOEB[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathOutputMode          OutputType;                                                // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2F0K[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EDrawPolyPathWidthMode           WidthMode;                                                 // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VMAM[0x3];                                     // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolyPathHeightMode          HeightMode;                                                // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GDYW[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Height;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RampStartRatio;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQEJ[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathExtrudeDirection    Direction;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_89H5[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_FGHJ[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathExtrudeProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathTool
// 0x0188 (FullSize[0x0210] - InheritedSize[0x0088])
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_GX37[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolyPathProperties*                     TransformProps;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                         // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XIYV[0x80];                                    // 0x00C0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6W4C[0xA0];                                    // 0x0148(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JQZR[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathTool");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshBrushTool
// 0x0040 (FullSize[0x0210] - InheritedSize[0x01D0])
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                                PreviewMesh;                                               // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YMLC[0x38];                                    // 0x01D8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_KP5E[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SculptBrushProperties
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class USculptBrushProperties : public UBrushBaseProperties
{
public:
	float                                              Depth;                                                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I01E[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.SculptBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BrushSculptProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bIsRemeshingEnabled;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDynamicMeshSculptBrushType      PrimaryBrushType;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPN4[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrimaryBrushSpeed;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeTarget;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W53L[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothBrushSpeed;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetailPreservingSmooth;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Y8G[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneBrushProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GMH[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PlaneBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.FixedPlaneBrushProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPropertySetEnabled;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLB5[0x1];                                     // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Position;                                                  // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79G3[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0070(0x0010) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.SculptMaxBrushProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                              MaxHeight;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeCurrentHeight;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3LTL[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshConstraintProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPreserveSharpEdges;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMeshBoundaryConstraint          MeshBoundaryConstraint;                                    // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EGroupBoundaryConstraint         GroupBoundaryConstraint;                                   // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMaterialBoundaryConstraint      MaterialBoundaryConstraint;                                // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreventNormalFlips;                                       // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1R3[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshConstraintProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                              SmoothingStrength;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlips;                                                    // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSplits;                                                   // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollapses;                                                // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2LN7[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemeshProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BrushRemeshProperties
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                               bEnableRemeshing;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QC3T[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TriangleSize;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreserveDetail;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6HH[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshSculptTool
// 0x0BF8 (FullSize[0x0CC0] - InheritedSize[0x00C8])
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                      BrushProperties;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushSculptProperties*                      SculptProperties;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaneBrushProperties*                       PlaneBrushProperties;                                      // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                  // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushRemeshProperties*                      RemeshProperties;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshEditingViewProperties*                  ViewProperties;                                            // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_502O[0x40];                                    // 0x0100(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBrushStampIndicator*                        BrushIndicator;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                    // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPreviewMesh*                                BrushIndicatorMesh;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                    // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_294A[0xB40];                                   // 0x0168(0x0B40) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0CA8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0CB0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VLY1[0x8];                                     // 0x0CB8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_3UWN[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditTransformProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UPolyEditTransformProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RHAN[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ELocalFrameMode                  LocalFrameMode;                                            // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KWL[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bLockRotation;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPRY[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PolyEditTransformProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_Z4LT[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		return ptr;
	}



	void Retriangulate();
	void RecalcNormals();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		return ptr;
	}



	void RecalcNormals();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		return ptr;
	}



	void PlanarProjection();
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		return ptr;
	}



	void Weld();
	void Straighten();
	void FillHole();
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		return ptr;
	}



	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditExtrudeDirection        Direction;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZXN[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_8A7H[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditCutProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditCutPlaneOrientation     Orientation;                                               // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8HLB[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bSnapToVertices;                                           // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGH2[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditSetUVProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowMaterial;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62L7[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsTool
// 0x0908 (FullSize[0x09D0] - InheritedSize[0x00C8])
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_J8AM[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditTransformProperties*                TransformProps;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZL7R[0x128];                                   // 0x00E8(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditMeshPolygonsToolActions*                EditActions;                                               // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                     // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                           // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                 // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                         // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GEQU[0x90];                                    // 0x0240(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditCutProperties*                      CutProperties;                                             // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditSetUVProperties*                    SetUVProperties;                                           // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RDRT[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F634[0x3A8];                                   // 0x02F8(0x03A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x06A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7F63[0x8];                                     // 0x06A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x06B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x06B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GW8G[0x308];                                   // 0x06C8(0x0308) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_I8FW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bRecomputeNormals;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ENormalCalculationMethod         NormalCalculationMethod;                                   // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixInconsistentNormals;                                   // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertNormals;                                            // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ESplitNormalMethod               SplitNormalMethod;                                         // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OLD[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SharpEdgeAngleThreshold;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSharpVertices;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOMS[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UEditNormalsOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_WEWF[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditNormalsTool*                            Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4FK[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsTool
// 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JEV8[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapDragging;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EEditPivotSnapDragRotationMode   RotationMode;                                              // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OIDA[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_7H8L[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseWorldBox;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOD4[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolActionPropertySet");
		return ptr;
	}



	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
};

// Class MeshModelingTools.EditPivotTool
// 0x0178 (FullSize[0x0210] - InheritedSize[0x0098])
class UEditPivotTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_HNZ6[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditPivotToolProperties*                    TransformProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02EZ[0xD0];                                    // 0x00B0(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEditPivotTarget>                    ActiveGizmos;                                              // 0x0180(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8H1S[0x80];                                    // 0x0190(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditPivotTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditUVIslandsTool
// 0x02F8 (FullSize[0x03C0] - InheritedSize[0x00C8])
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_7TM7[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D00M[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRJA[0x2D0];                                   // 0x00F0(0x02D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshAnalysisProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     SurfaceArea;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Volume;                                                    // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bWireframe;                                                // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoundaryEdges;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPolygonBorders;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUVSeams;                                                  // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalSeams;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalVectors;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTangentVectors;                                           // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7D79[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalLength;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TangentLength;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorTool
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*                    Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UAED[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2PND[0x40];                                    // 0x00B8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		return ptr;
	}



};

// Class MeshModelingTools.NewMeshMaterialProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UVScale;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWireframe;                                                // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowExtendedOptions;                                      // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PEB[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}



};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ESetMeshMaterialMode             MaterialMode;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R22M[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CheckerDensity;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshEditingViewProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HV71[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshEditingMaterialModes        MaterialMode;                                              // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49UI[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFlatShading;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NSF[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXXX[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Image;                                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_GTLK[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_63ME[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionEditActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		return ptr;
	}



	void Shrink();
	void SelectLargestComponentByTriCount();
	void SelectLargestComponentByArea();
	void SelectAll();
	void OptimizeSelection();
	void Invert();
	void Grow();
	void ExpandToConnected();
	void Clear();
};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		return ptr;
	}



	void SeparateTriangles();
	void FlipNormals();
	void DisconnectTriangles();
	void DeleteTriangles();
	void CreatePolygroup();
};

// Class MeshModelingTools.MeshSelectionToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EMeshSelectionToolPrimaryMode    SelectionMode;                                             // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGO7[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CF1[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshFacesColorMode              FaceColorMode;                                             // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7RV0[0x3];                                     // 0x0062(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionTool
// 0x03D0 (FullSize[0x05E0] - InheritedSize[0x0210])
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                            // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionEditActions*                   SelectionActions;                                          // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionToolActionPropertySet*         EditActions;                                               // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionSet*                           Selection;                                                 // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              SpawnedActors;                                             // 0x0230(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ED64[0x3A0];                                   // 0x0240(0x03A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpaceDeformerOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_108V[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.SpaceDeformerOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSpaceDeformerTool
// 0x00E8 (FullSize[0x01B0] - InheritedSize[0x00C8])
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	MeshModelingTools_ENonlinearOperationType          SelectedOperationType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BSG[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpperBoundsInterval;                                       // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowerBoundsInterval;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModifierPercent;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0MPO[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AMMC[0x20];                                    // 0x00F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     GizmoCenter;                                               // 0x0110(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T8OQ[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       GizmoOrientation;                                          // 0x0120(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UIntervalGizmo*                              IntervalGizmo;                                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             TransformProxy;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                     // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOW4[0x50];                                    // 0x0160(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshStatisticsProperties
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     Mesh;                                                      // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UV;                                                        // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Attributes;                                                // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_JQWW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AcceptOutputProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVIU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.AcceptOutputProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSnapToWorldGrid;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepBothHalves;                                           // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVC6[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpacingBetweenHalves;                                      // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillCutHole;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPreview;                                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillSpans;                                                // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RMW0[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UPlaneCutOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_LLMW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutTool*                               CutTool;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPVQ[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutTool
// 0x00D8 (FullSize[0x0170] - InheritedSize[0x0098])
class UPlaneCutTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_GF4A[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutToolProperties*                     BasicProperties;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAcceptOutputProperties*                     AcceptProperties;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     CutPlaneOrigin;                                            // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IEKL[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       CutPlaneOrientation;                                       // 0x00C0(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00D0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                               // 0x00E0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2BLC[0x68];                                    // 0x00F0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5KAV[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		return ptr;
	}



	void Cut();
};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.PositionPlaneGizmo
// 0x04E0 (FullSize[0x0520] - InheritedSize[0x0040])
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_IVTS[0x48];                                    // 0x0040(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                CenterBallShape;                                           // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           CenterBallMaterial;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKTG[0x488];                                   // 0x0098(0x0488) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		return ptr;
	}



};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_RMEL[0x30];                                    // 0x0080(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_XDIM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshToolProperties
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int                                                TargetTriangleCount;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ERemeshSmoothingType             SmoothingType;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NYTF[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RemeshIterations;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDiscardAttributes;                                        // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTargetEdgeLength;                                      // 0x0077(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetEdgeLength;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReproject;                                                // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_32FH[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshTool
// 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
class URemeshMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_PNJ7[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemeshMeshToolProperties*                   BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJ8Z[0x160];                                   // 0x00B0(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_39C2[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EOcclusionCalculationUIMode      OcclusionTestMethod;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EOcclusionTriangleSamplingUIMode TriangleSampling;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1HTW[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             WindingIsoValue;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddRandomRays;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddTriangleSamples;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlySelfOcclude;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63IL[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_1UPI[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_PYS4[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemoveOccludedTrianglesTool*                Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHPO[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// 0x00C8 (FullSize[0x0160] - InheritedSize[0x0098])
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPreviewMesh*>                        PreviewCopies;                                             // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4J8P[0x98];                                    // 0x00C8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesTool");
		return ptr;
	}



};

// Class MeshModelingTools.SmoothMeshToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USmoothMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_8TPX[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SmoothMeshTool
// 0x0290 (FullSize[0x0320] - InheritedSize[0x0090])
class USmoothMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_1805[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ESmoothMeshToolSmoothType        SmoothType;                                                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UU8K[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothSpeed;                                               // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SmoothIterations;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0JUM[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UKDP[0x270];                                   // 0x00B0(0x0270) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ETransformMeshesTransformMode    TransformMode;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPivot;                                                 // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSnapDragging;                                       // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragSource   SnapDragSource;                                            // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragRotationMode RotationMode;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INWC[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesTool
// 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_6IGN[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformMeshesToolProperties*              TransformProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PV8W[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransformMeshesTarget>              ActiveGizmos;                                              // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UXO4[0x88];                                    // 0x00C8(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_OGIU[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionToolProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_EUVProjectionMethod              UVProjectionMethod;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SC9[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ProjectionPrimitiveScale;                                  // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CylinderProjectToTopOrBottomAngleThreshold;                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVScale;                                                   // 0x006C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVOffset;                                                  // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JCEY[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UUVProjectionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_5NKK[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUVProjectionTool*                           Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BA1C[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionTool
// 0x0188 (FullSize[0x0220] - InheritedSize[0x0098])
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                           // 0x00C8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>                     TransformProxies;                                          // 0x00D8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QOJF[0x138];                                   // 0x00E8(0x0138) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}



};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.WeldMeshEdgesTool
// 0x0278 (FullSize[0x0308] - InheritedSize[0x0090])
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                              Tolerance;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyUnique;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9V6J[0x273];                                   // 0x0095(0x0273) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
