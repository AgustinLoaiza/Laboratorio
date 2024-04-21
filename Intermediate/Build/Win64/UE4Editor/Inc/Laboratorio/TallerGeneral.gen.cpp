// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio/TallerGeneral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallerGeneral() {}
// Cross Module References
	LABORATORIO_API UClass* Z_Construct_UClass_ATallerGeneral_NoRegister();
	LABORATORIO_API UClass* Z_Construct_UClass_ATallerGeneral();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Laboratorio();
// End Cross Module References
	void ATallerGeneral::StaticRegisterNativesATallerGeneral()
	{
	}
	UClass* Z_Construct_UClass_ATallerGeneral_NoRegister()
	{
		return ATallerGeneral::StaticClass();
	}
	struct Z_Construct_UClass_ATallerGeneral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATallerGeneral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATallerGeneral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TallerGeneral.h" },
		{ "ModuleRelativePath", "TallerGeneral.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATallerGeneral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATallerGeneral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATallerGeneral_Statics::ClassParams = {
		&ATallerGeneral::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATallerGeneral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATallerGeneral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATallerGeneral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATallerGeneral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATallerGeneral, 2164187374);
	template<> LABORATORIO_API UClass* StaticClass<ATallerGeneral>()
	{
		return ATallerGeneral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATallerGeneral(Z_Construct_UClass_ATallerGeneral, &ATallerGeneral::StaticClass, TEXT("/Script/Laboratorio"), TEXT("ATallerGeneral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATallerGeneral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
