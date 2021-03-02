// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE1_TankCharacter_generated_h
#error "TankCharacter.generated.h already included, missing '#pragma once' in TankCharacter.h"
#endif
#define PROTOTYPE1_TankCharacter_generated_h

#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_SPARSE_DATA
#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_RPC_WRAPPERS
#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankCharacter(); \
	friend struct Z_Construct_UClass_ATankCharacter_Statics; \
public: \
	DECLARE_CLASS(ATankCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankCharacter)


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public:


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankCharacter(ATankCharacter&&); \
	NO_API ATankCharacter(const ATankCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankCharacter)


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ATankCharacter, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATankCharacter, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__CannonMesh() { return STRUCT_OFFSET(ATankCharacter, CannonMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ATankCharacter, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(ATankCharacter, Target); } \
	FORCEINLINE static uint32 __PPO__TurretTurnSpeed() { return STRUCT_OFFSET(ATankCharacter, TurretTurnSpeed); } \
	FORCEINLINE static uint32 __PPO__TurretRotationOffset() { return STRUCT_OFFSET(ATankCharacter, TurretRotationOffset); } \
	FORCEINLINE static uint32 __PPO__TurretMaxYaw() { return STRUCT_OFFSET(ATankCharacter, TurretMaxYaw); } \
	FORCEINLINE static uint32 __PPO__TurretMinYaw() { return STRUCT_OFFSET(ATankCharacter, TurretMinYaw); } \
	FORCEINLINE static uint32 __PPO__CannonTurnSpeed() { return STRUCT_OFFSET(ATankCharacter, CannonTurnSpeed); } \
	FORCEINLINE static uint32 __PPO__CannonRotationOffset() { return STRUCT_OFFSET(ATankCharacter, CannonRotationOffset); } \
	FORCEINLINE static uint32 __PPO__CannonMaxRoll() { return STRUCT_OFFSET(ATankCharacter, CannonMaxRoll); } \
	FORCEINLINE static uint32 __PPO__CannonMinRoll() { return STRUCT_OFFSET(ATankCharacter, CannonMinRoll); }


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_11_PROLOG
#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_SPARSE_DATA \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_RPC_WRAPPERS \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_INCLASS \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_SPARSE_DATA \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Characters_TankCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE1_API UClass* StaticClass<class ATankCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_Prototype1_Characters_TankCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
