// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACETRAVEL_ST_FuelWidget_generated_h
#error "ST_FuelWidget.generated.h already included, missing '#pragma once' in ST_FuelWidget.h"
#endif
#define SPACETRAVEL_ST_FuelWidget_generated_h

#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_SPARSE_DATA
#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateFuel); \
	DECLARE_FUNCTION(execInitializeThisWidget);


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateFuel); \
	DECLARE_FUNCTION(execInitializeThisWidget);


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUST_FuelWidget(); \
	friend struct Z_Construct_UClass_UST_FuelWidget_Statics; \
public: \
	DECLARE_CLASS(UST_FuelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(UST_FuelWidget)


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUST_FuelWidget(); \
	friend struct Z_Construct_UClass_UST_FuelWidget_Statics; \
public: \
	DECLARE_CLASS(UST_FuelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(UST_FuelWidget)


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UST_FuelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UST_FuelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UST_FuelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UST_FuelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UST_FuelWidget(UST_FuelWidget&&); \
	NO_API UST_FuelWidget(const UST_FuelWidget&); \
public:


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UST_FuelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UST_FuelWidget(UST_FuelWidget&&); \
	NO_API UST_FuelWidget(const UST_FuelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UST_FuelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UST_FuelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UST_FuelWidget)


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentFuelAmount() { return STRUCT_OFFSET(UST_FuelWidget, CurrentFuelAmount); }


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_12_PROLOG
#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_RPC_WRAPPERS \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_INCLASS \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_INCLASS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACETRAVEL_API UClass* StaticClass<class UST_FuelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTravel_Source_SpaceTravel_Public_ST_FuelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
