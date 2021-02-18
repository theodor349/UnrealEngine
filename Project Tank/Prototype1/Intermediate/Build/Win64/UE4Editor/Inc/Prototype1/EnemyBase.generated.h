// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE1_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define PROTOTYPE1_EnemyBase_generated_h

#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_SPARSE_DATA
#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_RPC_WRAPPERS
#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(AEnemyBase, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(AEnemyBase, BaseMesh); }


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_12_PROLOG
#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_SPARSE_DATA \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_RPC_WRAPPERS \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_INCLASS \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_SPARSE_DATA \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_Prototype1_Pawns_EnemyBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE1_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_Prototype1_Pawns_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
