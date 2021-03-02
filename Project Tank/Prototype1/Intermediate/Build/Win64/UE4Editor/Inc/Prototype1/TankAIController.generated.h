// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef PROTOTYPE1_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define PROTOTYPE1_TankAIController_generated_h

#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_SPARSE_DATA
#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend struct Z_Construct_UClass_ATankAIController_Statics; \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController)


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(ATankAIController, Waypoints); }


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_15_PROLOG
#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_SPARSE_DATA \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_RPC_WRAPPERS \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_INCLASS \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_SPARSE_DATA \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Controllers_TankAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE1_API UClass* StaticClass<class ATankAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_Prototype1_Controllers_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
