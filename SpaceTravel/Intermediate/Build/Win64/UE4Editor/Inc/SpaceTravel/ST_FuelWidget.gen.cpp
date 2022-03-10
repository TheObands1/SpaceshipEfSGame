// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceTravel/Public/ST_FuelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeST_FuelWidget() {}
// Cross Module References
	SPACETRAVEL_API UClass* Z_Construct_UClass_UST_FuelWidget_NoRegister();
	SPACETRAVEL_API UClass* Z_Construct_UClass_UST_FuelWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceTravel();
// End Cross Module References
	DEFINE_FUNCTION(UST_FuelWidget::execUpdateFuel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentFuel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxFuel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFuel(Z_Param_CurrentFuel,Z_Param_MaxFuel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UST_FuelWidget::execInitializeThisWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeThisWidget();
		P_NATIVE_END;
	}
	void UST_FuelWidget::StaticRegisterNativesUST_FuelWidget()
	{
		UClass* Class = UST_FuelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeThisWidget", &UST_FuelWidget::execInitializeThisWidget },
			{ "UpdateFuel", &UST_FuelWidget::execUpdateFuel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_FuelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UST_FuelWidget, nullptr, "InitializeThisWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics
	{
		struct ST_FuelWidget_eventUpdateFuel_Parms
		{
			float CurrentFuel;
			float MaxFuel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFuel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFuel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::NewProp_CurrentFuel = { "CurrentFuel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ST_FuelWidget_eventUpdateFuel_Parms, CurrentFuel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::NewProp_MaxFuel = { "MaxFuel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ST_FuelWidget_eventUpdateFuel_Parms, MaxFuel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::NewProp_CurrentFuel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::NewProp_MaxFuel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_FuelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UST_FuelWidget, nullptr, "UpdateFuel", nullptr, nullptr, sizeof(ST_FuelWidget_eventUpdateFuel_Parms), Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UST_FuelWidget_UpdateFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UST_FuelWidget_UpdateFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UST_FuelWidget_NoRegister()
	{
		return UST_FuelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UST_FuelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFuelAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFuelAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UST_FuelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceTravel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UST_FuelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UST_FuelWidget_InitializeThisWidget, "InitializeThisWidget" }, // 3946883181
		{ &Z_Construct_UFunction_UST_FuelWidget_UpdateFuel, "UpdateFuel" }, // 3340570723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UST_FuelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ST_FuelWidget.h" },
		{ "ModuleRelativePath", "Public/ST_FuelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UST_FuelWidget_Statics::NewProp_CurrentFuelAmount_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ModuleRelativePath", "Public/ST_FuelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UST_FuelWidget_Statics::NewProp_CurrentFuelAmount = { "CurrentFuelAmount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UST_FuelWidget, CurrentFuelAmount), METADATA_PARAMS(Z_Construct_UClass_UST_FuelWidget_Statics::NewProp_CurrentFuelAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UST_FuelWidget_Statics::NewProp_CurrentFuelAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UST_FuelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UST_FuelWidget_Statics::NewProp_CurrentFuelAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UST_FuelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UST_FuelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UST_FuelWidget_Statics::ClassParams = {
		&UST_FuelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UST_FuelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UST_FuelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UST_FuelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UST_FuelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UST_FuelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UST_FuelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UST_FuelWidget, 463109471);
	template<> SPACETRAVEL_API UClass* StaticClass<UST_FuelWidget>()
	{
		return UST_FuelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UST_FuelWidget(Z_Construct_UClass_UST_FuelWidget, &UST_FuelWidget::StaticClass, TEXT("/Script/SpaceTravel"), TEXT("UST_FuelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UST_FuelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
