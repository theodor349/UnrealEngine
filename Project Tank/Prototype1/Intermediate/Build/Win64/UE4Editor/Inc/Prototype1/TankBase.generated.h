// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE1_TankBase_generated_h
#error "TankBase.generated.h already included, missing '#pragma once' in TankBase.h"
#endif
#define PROTOTYPE1_TankBase_generated_h

#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_SPARSE_DATA
#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_RPC_WRAPPERS
#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankBase(); \
	friend struct Z_Construct_UClass_ATankBase_Statics; \
public: \
	DECLARE_CLASS(ATankBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankBase)


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATankBase(); \
	friend struct Z_Construct_UClass_ATankBase_Statics; \
public: \
	DECLARE_CLASS(ATankBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(ATankBase)


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankBase(ATankBase&&); \
	NO_API ATankBase(const ATankBase&); \
public:


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankBase(ATankBase&&); \
	NO_API ATankBase(const ATankBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankBase)


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(ATankBase, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ATankBase, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATankBase, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__CannonMesh() { return STRUCT_OFFSET(ATankBase, CannonMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ATankBase, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(ATankBase, Target); } \
	FORCEINLINE static uint32 __PPO__TurretTurnSpeed() { return STRUCT_OFFSET(ATankBase, TurretTurnSpeed); } \
	FORCEINLINE static uint32 __PPO__TurretRotationOffset() { return STRUCT_OFFSET(ATankBase, TurretRotationOffset); } \
	FORCEINLINE static uint32 __PPO__TurretMaxYaw() { return STRUCT_OFFSET(ATankBase, TurretMaxYaw); } \
	FORCEINLINE static uint32 __PPO__TurretMinYaw() { return STRUCT_OFFSET(ATankBase, TurretMinYaw); } \
	FORCEINLINE static uint32 __PPO__CannonTurnSpeed() { return STRUCT_OFFSET(ATankBase, CannonTurnSpeed); } \
	FORCEINLINE static uint32 __PPO__CannonRotationOffset() { return STRUCT_OFFSET(ATankBase, CannonRotationOffset); } \
	FORCEINLINE static uint32 __PPO__CannonMaxRoll() { return STRUCT_OFFSET(ATankBase, CannonMaxRoll); } \
	FORCEINLINE static uint32 __PPO__CannonMinRoll() { return STRUCT_OFFSET(ATankBase, CannonMinRoll); }


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_14_PROLOG
#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_SPARSE_DATA \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_RPC_WRAPPERS \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_INCLASS \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_Prototype1_Pawns_TankBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_SPARSE_DATA \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Pawns_TankBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE1_API UClass* StaticClass<class ATankBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_Prototype1_Pawns_TankBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
