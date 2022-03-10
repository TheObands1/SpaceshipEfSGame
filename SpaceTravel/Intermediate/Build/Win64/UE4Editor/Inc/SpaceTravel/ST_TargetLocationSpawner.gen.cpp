// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceTravel/Public/ST_TargetLocationSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeST_TargetLocationSpawner() {}
// Cross Module References
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_TargetLocationSpawner_NoRegister();
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_TargetLocationSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpaceTravel();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_Planet_NoRegister();
// End Cross Module References
	void AST_TargetLocationSpawner::StaticRegisterNativesAST_TargetLocationSpawner()
	{
	}
	UClass* Z_Construct_UClass_AST_TargetLocationSpawner_NoRegister()
	{
		return AST_TargetLocationSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AST_TargetLocationSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryTargetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VictoryTargetTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetClassReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlanetClassReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AST_TargetLocationSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceTravel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_TargetLocationSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ST_TargetLocationSpawner.h" },
		{ "ModuleRelativePath", "Public/ST_TargetLocationSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ST_TargetLocationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_TargetLocationSpawner, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_VictoryTargetTransform_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/ST_TargetLocationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_VictoryTargetTransform = { "VictoryTargetTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_TargetLocationSpawner, VictoryTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_VictoryTargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_VictoryTargetTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Spawn" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/ST_TargetLocationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_TargetLocationSpawner, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_PlanetClassReference_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Public/ST_TargetLocationSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_PlanetClassReference = { "PlanetClassReference", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_TargetLocationSpawner, PlanetClassReference), Z_Construct_UClass_AST_Planet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_PlanetClassReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_PlanetClassReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AST_TargetLocationSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_VictoryTargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_SpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_TargetLocationSpawner_Statics::NewProp_PlanetClassReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AST_TargetLocationSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AST_TargetLocationSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AST_TargetLocationSpawner_Statics::ClassParams = {
		&AST_TargetLocationSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AST_TargetLocationSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AST_TargetLocationSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AST_TargetLocationSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AST_TargetLocationSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AST_TargetLocationSpawner, 293918640);
	template<> SPACETRAVEL_API UClass* StaticClass<AST_TargetLocationSpawner>()
	{
		return AST_TargetLocationSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AST_TargetLocationSpawner(Z_Construct_UClass_AST_TargetLocationSpawner, &AST_TargetLocationSpawner::StaticClass, TEXT("/Script/SpaceTravel"), TEXT("AST_TargetLocationSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AST_TargetLocationSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
