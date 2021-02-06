// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/DoorOpener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorOpener() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDoorOpener_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDoorOpener();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void UDoorOpener::StaticRegisterNativesUDoorOpener()
	{
	}
	UClass* Z_Construct_UClass_UDoorOpener_NoRegister()
	{
		return UDoorOpener::StaticClass();
	}
	struct Z_Construct_UClass_UDoorOpener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosedAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeededMass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorOpener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorOpener.h" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_PressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenAngle_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, OpenAngle), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_ClosedAngle_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_ClosedAngle = { "ClosedAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, ClosedAngle), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_ClosedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_ClosedAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenSpeed_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenSpeed = { "OpenSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, OpenSpeed), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseSpeed_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseSpeed = { "CloseSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, CloseSpeed), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseDelay_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseDelay = { "CloseDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, CloseDelay), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpener_Statics::NewProp_NeededMass_MetaData[] = {
		{ "Category", "DoorOpener" },
		{ "ModuleRelativePath", "DoorOpener.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpener_Statics::NewProp_NeededMass = { "NeededMass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorOpener, NeededMass), METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::NewProp_NeededMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::NewProp_NeededMass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorOpener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_ClosedAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_OpenSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_CloseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpener_Statics::NewProp_NeededMass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorOpener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorOpener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorOpener_Statics::ClassParams = {
		&UDoorOpener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorOpener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorOpener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorOpener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorOpener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorOpener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorOpener, 4223080842);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UDoorOpener>()
	{
		return UDoorOpener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorOpener(Z_Construct_UClass_UDoorOpener, &UDoorOpener::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UDoorOpener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorOpener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
