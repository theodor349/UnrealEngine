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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorOpener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorOpener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorOpener_Statics::ClassParams = {
		&UDoorOpener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UDoorOpener, 178590188);
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
