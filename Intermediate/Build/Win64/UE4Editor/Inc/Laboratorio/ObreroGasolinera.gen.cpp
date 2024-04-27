// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio/ObreroGasolinera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObreroGasolinera() {}
// Cross Module References
	LABORATORIO_API UClass* Z_Construct_UClass_AObreroGasolinera_NoRegister();
	LABORATORIO_API UClass* Z_Construct_UClass_AObreroGasolinera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Laboratorio();
	LABORATORIO_API UClass* Z_Construct_UClass_ABoqueron_NoRegister();
	LABORATORIO_API UClass* Z_Construct_UClass_UObrero_NoRegister();
// End Cross Module References
	void AObreroGasolinera::StaticRegisterNativesAObreroGasolinera()
	{
	}
	UClass* Z_Construct_UClass_AObreroGasolinera_NoRegister()
	{
		return AObreroGasolinera::StaticClass();
	}
	struct Z_Construct_UClass_AObreroGasolinera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boqueron_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boqueron;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObreroGasolinera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObreroGasolinera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObreroGasolinera.h" },
		{ "ModuleRelativePath", "ObreroGasolinera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObreroGasolinera_Statics::NewProp_Boqueron_MetaData[] = {
		{ "Category", "Gasolinera Obrero" },
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "ObreroGasolinera.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObreroGasolinera_Statics::NewProp_Boqueron = { "Boqueron", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObreroGasolinera, Boqueron), Z_Construct_UClass_ABoqueron_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObreroGasolinera_Statics::NewProp_Boqueron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObreroGasolinera_Statics::NewProp_Boqueron_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObreroGasolinera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObreroGasolinera_Statics::NewProp_Boqueron,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AObreroGasolinera_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObrero_NoRegister, (int32)VTABLE_OFFSET(AObreroGasolinera, IObrero), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObreroGasolinera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObreroGasolinera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObreroGasolinera_Statics::ClassParams = {
		&AObreroGasolinera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObreroGasolinera_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObreroGasolinera_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObreroGasolinera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObreroGasolinera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObreroGasolinera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObreroGasolinera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObreroGasolinera, 3044071048);
	template<> LABORATORIO_API UClass* StaticClass<AObreroGasolinera>()
	{
		return AObreroGasolinera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObreroGasolinera(Z_Construct_UClass_AObreroGasolinera, &AObreroGasolinera::StaticClass, TEXT("/Script/Laboratorio"), TEXT("AObreroGasolinera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObreroGasolinera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
