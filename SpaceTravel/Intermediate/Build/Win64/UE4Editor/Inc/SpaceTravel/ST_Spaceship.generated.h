// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef SPACETRAVEL_ST_Spaceship_generated_h
#error "ST_Spaceship.generated.h already included, missing '#pragma once' in ST_Spaceship.h"
#endif
#define SPACETRAVEL_ST_Spaceship_generated_h

#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_10_DELEGATE \
struct _Script_SpaceTravel_eventOnUpdateNumberOfLives_Parms \
{ \
	float CurrentNumberOfLives; \
}; \
static inline void FOnUpdateNumberOfLives_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateNumberOfLives, float CurrentNumberOfLives) \
{ \
	_Script_SpaceTravel_eventOnUpdateNumberOfLives_Parms Parms; \
	Parms.CurrentNumberOfLives=CurrentNumberOfLives; \
	OnUpdateNumberOfLives.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_9_DELEGATE \
struct _Script_SpaceTravel_eventOnUpdateFuelSignature_Parms \
{ \
	float CurrentAmountOfFuel; \
	float MaxAmountOfFuel; \
}; \
static inline void FOnUpdateFuelSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateFuelSignature, float CurrentAmountOfFuel, float MaxAmountOfFuel) \
{ \
	_Script_SpaceTravel_eventOnUpdateFuelSignature_Parms Parms; \
	Parms.CurrentAmountOfFuel=CurrentAmountOfFuel; \
	Parms.MaxAmountOfFuel=MaxAmountOfFuel; \
	OnUpdateFuelSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_SPARSE_DATA
#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpaceshipMeshComponent);


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpaceshipMeshComponent);


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_EVENT_PARMS
#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_CALLBACK_WRAPPERS
#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAST_Spaceship(); \
	friend struct Z_Construct_UClass_AST_Spaceship_Statics; \
public: \
	DECLARE_CLASS(AST_Spaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(AST_Spaceship)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAST_Spaceship(); \
	friend struct Z_Construct_UClass_AST_Spaceship_Statics; \
public: \
	DECLARE_CLASS(AST_Spaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceTravel"), NO_API) \
	DECLARE_SERIALIZER(AST_Spaceship)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AST_Spaceship(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AST_Spaceship) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AST_Spaceship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AST_Spaceship); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AST_Spaceship(AST_Spaceship&&); \
	NO_API AST_Spaceship(const AST_Spaceship&); \
public:


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AST_Spaceship(AST_Spaceship&&); \
	NO_API AST_Spaceship(const AST_Spaceship&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AST_Spaceship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AST_Spaceship); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AST_Spaceship)


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpaceshipMeshComponent() { return STRUCT_OFFSET(AST_Spaceship, SpaceshipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SpaceshipPawnMovementComponent() { return STRUCT_OFFSET(AST_Spaceship, SpaceshipPawnMovementComponent); } \
	FORCEINLINE static uint32 __PPO__bIsLanding() { return STRUCT_OFFSET(AST_Spaceship, bIsLanding); } \
	FORCEINLINE static uint32 __PPO__CurrentFuelAmount() { return STRUCT_OFFSET(AST_Spaceship, CurrentFuelAmount); } \
	FORCEINLINE static uint32 __PPO__MaxFuelAmount() { return STRUCT_OFFSET(AST_Spaceship, MaxFuelAmount); } \
	FORCEINLINE static uint32 __PPO__ShipRotatingSpeed() { return STRUCT_OFFSET(AST_Spaceship, ShipRotatingSpeed); } \
	FORCEINLINE static uint32 __PPO__PlanetClassReference() { return STRUCT_OFFSET(AST_Spaceship, PlanetClassReference); } \
	FORCEINLINE static uint32 __PPO__CurrentPlanetReference() { return STRUCT_OFFSET(AST_Spaceship, CurrentPlanetReference); }


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_17_PROLOG \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_EVENT_PARMS


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_RPC_WRAPPERS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_CALLBACK_WRAPPERS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_INCLASS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_SPARSE_DATA \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_CALLBACK_WRAPPERS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_INCLASS_NO_PURE_DECLS \
	SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACETRAVEL_API UClass* StaticClass<class AST_Spaceship>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTravel_Source_SpaceTravel_Public_ST_Spaceship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
