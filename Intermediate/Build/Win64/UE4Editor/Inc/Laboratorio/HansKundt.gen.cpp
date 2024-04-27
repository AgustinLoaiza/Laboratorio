// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio/HansKundt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHansKundt() {}
// Cross Module References
	LABORATORIO_API UClass* Z_Construct_UClass_AHansKundt_NoRegister();
	LABORATORIO_API UClass* Z_Construct_UClass_AHansKundt();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Laboratorio();
// End Cross Module References
	void AHansKundt::StaticRegisterNativesAHansKundt()
	{
	}
	UClass* Z_Construct_UClass_AHansKundt_NoRegister()
	{
		return AHansKundt::StaticClass();
	}
	struct Z_Construct_UClass_AHansKundt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHansKundt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHansKundt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HansKundt.h" },
		{ "ModuleRelativePath", "HansKundt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHansKundt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHansKundt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHansKundt_Statics::ClassParams = {
		&AHansKundt::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHansKundt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHansKundt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHansKundt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHansKundt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHansKundt, 936914182);
	template<> LABORATORIO_API UClass* StaticClass<AHansKundt>()
	{
		return AHansKundt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHansKundt(Z_Construct_UClass_AHansKundt, &AHansKundt::StaticClass, TEXT("/Script/Laboratorio"), TEXT("AHansKundt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHansKundt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
