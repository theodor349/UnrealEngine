// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_DoorOpener_generated_h
#error "DoorOpener.generated.h already included, missing '#pragma once' in DoorOpener.h"
#endif
#define BUILDINGESCAPE_DoorOpener_generated_h

#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorOpener(); \
	friend struct Z_Construct_UClass_UDoorOpener_Statics; \
public: \
	DECLARE_CLASS(UDoorOpener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDoorOpener)


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDoorOpener(); \
	friend struct Z_Construct_UClass_UDoorOpener_Statics; \
public: \
	DECLARE_CLASS(UDoorOpener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDoorOpener)


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorOpener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorOpener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorOpener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorOpener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorOpener(UDoorOpener&&); \
	NO_API UDoorOpener(const UDoorOpener&); \
public:


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorOpener(UDoorOpener&&); \
	NO_API UDoorOpener(const UDoorOpener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorOpener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorOpener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorOpener)


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UDoorOpener, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__ActorThatOpens() { return STRUCT_OFFSET(UDoorOpener, ActorThatOpens); } \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UDoorOpener, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__ClosedAngle() { return STRUCT_OFFSET(UDoorOpener, ClosedAngle); } \
	FORCEINLINE static uint32 __PPO__OpenSpeed() { return STRUCT_OFFSET(UDoorOpener, OpenSpeed); } \
	FORCEINLINE static uint32 __PPO__CloseSpeed() { return STRUCT_OFFSET(UDoorOpener, CloseSpeed); } \
	FORCEINLINE static uint32 __PPO__CloseDelay() { return STRUCT_OFFSET(UDoorOpener, CloseDelay); }


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_13_PROLOG
#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_DoorOpener_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UDoorOpener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_DoorOpener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
