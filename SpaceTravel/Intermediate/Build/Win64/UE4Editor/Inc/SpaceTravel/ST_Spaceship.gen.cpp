// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceTravel/Public/ST_Spaceship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeST_Spaceship() {}
// Cross Module References
	SPACETRAVEL_API UFunction* Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpaceTravel();
	SPACETRAVEL_API UFunction* Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature();
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_Spaceship_NoRegister();
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_Spaceship();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPACETRAVEL_API UClass* Z_Construct_UClass_AST_Planet_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics
	{
		struct _Script_SpaceTravel_eventOnUpdateNumberOfLives_Parms
		{
			float CurrentNumberOfLives;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentNumberOfLives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::NewProp_CurrentNumberOfLives = { "CurrentNumberOfLives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpaceTravel_eventOnUpdateNumberOfLives_Parms, CurrentNumberOfLives), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::NewProp_CurrentNumberOfLives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpaceTravel, nullptr, "OnUpdateNumberOfLives__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpaceTravel_eventOnUpdateNumberOfLives_Parms), Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics
	{
		struct _Script_SpaceTravel_eventOnUpdateFuelSignature_Parms
		{
			float CurrentAmountOfFuel;
			float MaxAmountOfFuel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmountOfFuel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAmountOfFuel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::NewProp_CurrentAmountOfFuel = { "CurrentAmountOfFuel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpaceTravel_eventOnUpdateFuelSignature_Parms, CurrentAmountOfFuel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::NewProp_MaxAmountOfFuel = { "MaxAmountOfFuel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpaceTravel_eventOnUpdateFuelSignature_Parms, MaxAmountOfFuel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::NewProp_CurrentAmountOfFuel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::NewProp_MaxAmountOfFuel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpaceTravel, nullptr, "OnUpdateFuelSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpaceTravel_eventOnUpdateFuelSignature_Parms), Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AST_Spaceship::execGetSpaceshipMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetSpaceshipMeshComponent();
		P_NATIVE_END;
	}
	static FName NAME_AST_Spaceship_BP_Land = FName(TEXT("BP_Land"));
	void AST_Spaceship::BP_Land()
	{
		ProcessEvent(FindFunctionChecked(NAME_AST_Spaceship_BP_Land),NULL);
	}
	static FName NAME_AST_Spaceship_BP_MaintainRotationTowardsPlanet = FName(TEXT("BP_MaintainRotationTowardsPlanet"));
	void AST_Spaceship::BP_MaintainRotationTowardsPlanet()
	{
		ProcessEvent(FindFunctionChecked(NAME_AST_Spaceship_BP_MaintainRotationTowardsPlanet),NULL);
	}
	void AST_Spaceship::StaticRegisterNativesAST_Spaceship()
	{
		UClass* Class = AST_Spaceship::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpaceshipMeshComponent", &AST_Spaceship::execGetSpaceshipMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AST_Spaceship, nullptr, "BP_Land", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AST_Spaceship_BP_Land()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AST_Spaceship_BP_Land_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AST_Spaceship, nullptr, "BP_MaintainRotationTowardsPlanet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics
	{
		struct ST_Spaceship_eventGetSpaceshipMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ST_Spaceship_eventGetSpaceshipMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AST_Spaceship, nullptr, "GetSpaceshipMeshComponent", nullptr, nullptr, sizeof(ST_Spaceship_eventGetSpaceshipMeshComponent_Parms), Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AST_Spaceship_NoRegister()
	{
		return AST_Spaceship::StaticClass();
	}
	struct Z_Construct_UClass_AST_Spaceship_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceshipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpaceshipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceshipPawnMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpaceshipPawnMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLanding_MetaData[];
#endif
		static void NewProp_bIsLanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFuelAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFuelAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFuelAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFuelAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipRotatingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShipRotatingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetClassReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlanetClassReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlanetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPlanetReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateFuelDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateFuelDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateNumberOfLivesDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateNumberOfLivesDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AST_Spaceship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceTravel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AST_Spaceship_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AST_Spaceship_BP_Land, "BP_Land" }, // 4221963934
		{ &Z_Construct_UFunction_AST_Spaceship_BP_MaintainRotationTowardsPlanet, "BP_MaintainRotationTowardsPlanet" }, // 1648236931
		{ &Z_Construct_UFunction_AST_Spaceship_GetSpaceshipMeshComponent, "GetSpaceshipMeshComponent" }, // 3428876414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ST_Spaceship.h" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipMeshComponent = { "SpaceshipMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, SpaceshipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipPawnMovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipPawnMovementComponent = { "SpaceshipPawnMovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, SpaceshipPawnMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipPawnMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipPawnMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	void Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding_SetBit(void* Obj)
	{
		((AST_Spaceship*)Obj)->bIsLanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding = { "bIsLanding", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AST_Spaceship), &Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentFuelAmount_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentFuelAmount = { "CurrentFuelAmount", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, CurrentFuelAmount), METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentFuelAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentFuelAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_MaxFuelAmount_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_MaxFuelAmount = { "MaxFuelAmount", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, MaxFuelAmount), METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_MaxFuelAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_MaxFuelAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_ShipRotatingSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_ShipRotatingSpeed = { "ShipRotatingSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, ShipRotatingSpeed), METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_ShipRotatingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_ShipRotatingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_PlanetClassReference_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_PlanetClassReference = { "PlanetClassReference", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, PlanetClassReference), Z_Construct_UClass_AST_Planet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_PlanetClassReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_PlanetClassReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentPlanetReference_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentPlanetReference = { "CurrentPlanetReference", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, CurrentPlanetReference), Z_Construct_UClass_AST_Planet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentPlanetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentPlanetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateFuelDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateFuelDelegate = { "OnUpdateFuelDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, OnUpdateFuelDelegate), Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateFuelSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateFuelDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateFuelDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateNumberOfLivesDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ST_Spaceship.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateNumberOfLivesDelegate = { "OnUpdateNumberOfLivesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AST_Spaceship, OnUpdateNumberOfLivesDelegate), Z_Construct_UDelegateFunction_SpaceTravel_OnUpdateNumberOfLives__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateNumberOfLivesDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateNumberOfLivesDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AST_Spaceship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_SpaceshipPawnMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_bIsLanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentFuelAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_MaxFuelAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_ShipRotatingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_PlanetClassReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_CurrentPlanetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateFuelDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AST_Spaceship_Statics::NewProp_OnUpdateNumberOfLivesDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AST_Spaceship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AST_Spaceship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AST_Spaceship_Statics::ClassParams = {
		&AST_Spaceship::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AST_Spaceship_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AST_Spaceship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AST_Spaceship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AST_Spaceship()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AST_Spaceship_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AST_Spaceship, 2391014492);
	template<> SPACETRAVEL_API UClass* StaticClass<AST_Spaceship>()
	{
		return AST_Spaceship::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AST_Spaceship(Z_Construct_UClass_AST_Spaceship, &AST_Spaceship::StaticClass, TEXT("/Script/SpaceTravel"), TEXT("AST_Spaceship"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AST_Spaceship);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
