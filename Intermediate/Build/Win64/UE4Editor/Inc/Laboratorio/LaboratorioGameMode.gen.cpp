// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio/LaboratorioGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaboratorioGameMode() {}
// Cross Module References
	LABORATORIO_API UClass* Z_Construct_UClass_ALaboratorioGameMode_NoRegister();
	LABORATORIO_API UClass* Z_Construct_UClass_ALaboratorioGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Laboratorio();
// End Cross Module References
	void ALaboratorioGameMode::StaticRegisterNativesALaboratorioGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALaboratorioGameMode_NoRegister()
	{
		return ALaboratorioGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALaboratorioGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaboratorioGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaboratorioGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LaboratorioGameMode.h" },
		{ "ModuleRelativePath", "LaboratorioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaboratorioGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaboratorioGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaboratorioGameMode_Statics::ClassParams = {
		&ALaboratorioGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALaboratorioGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaboratorioGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaboratorioGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaboratorioGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaboratorioGameMode, 1800793146);
	template<> LABORATORIO_API UClass* StaticClass<ALaboratorioGameMode>()
	{
		return ALaboratorioGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaboratorioGameMode(Z_Construct_UClass_ALaboratorioGameMode, &ALaboratorioGameMode::StaticClass, TEXT("/Script/Laboratorio"), TEXT("ALaboratorioGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaboratorioGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
