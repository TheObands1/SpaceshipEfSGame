// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SPACETRAVEL_ST_Planet_generated_h
#error "ST_Planet.generated.h already included, missing '#pragma once' in ST_Planet.h"
#endif
#define SPACETRAVEL_ST_Planet_generated_h

#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_SPARSE_DATA
#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDetectShipTakeOff); \
	DECLARE_FUNCTION(execDetectShipLanding); \
	DECLARE_FUNCTION(execGetGravityAcceleration);


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDetectShipTakeOff); \
	DECLARE_FUNCTION(execDetectShipLanding); \
	DECLARE_FUNCTION(execGetGravityAcceleration);


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAST_Planet(); \
	friend struct Z_Construct_UClass_AST_Planet_Statics; \
public: \
	DECLARE_CLASS(AST_Planet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(AST_Planet)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAST_Planet(); \
	friend struct Z_Construct_UClass_AST_Planet_Statics; \
public: \
	DECLARE_CLASS(AST_Planet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(AST_Planet)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AST_Planet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AST_Planet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AST_Planet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AST_Planet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AST_Planet(AST_Planet&&); \
	NO_API AST_Planet(const AST_Planet&); \
public:


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AST_Planet(AST_Planet&&); \
	NO_API AST_Planet(const AST_Planet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AST_Planet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AST_Planet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AST_Planet)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlanetMeshComponent() { return STRUCT_OFFSET(AST_Planet, PlanetMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SpaceshipDetectorComponent() { return STRUCT_OFFSET(AST_Planet, SpaceshipDetectorComponent); } \
	FORCEINLINE static uint32 __PPO__GravityAcceleration() { return STRUCT_OFFSET(AST_Planet, GravityAcceleration); } \
	FORCEINLINE static uint32 __PPO__CurrentRotation() { return STRUCT_OFFSET(AST_Planet, CurrentRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentSpaceshipReference() { return STRUCT_OFFSET(AST_Planet, CurrentSpaceshipReference); }


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_13_PROLOG
#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_RPC_WRAPPERS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_INCLASS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_INCLASS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACETRAVEL_API UClass* StaticClass<class AST_Planet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTravel_Source_SpaceTravel_Public_ST_Planet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
