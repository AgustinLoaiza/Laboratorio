// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABORATORIO_Obrero_generated_h
#error "Obrero.generated.h already included, missing '#pragma once' in Obrero.h"
#endif
#define LABORATORIO_Obrero_generated_h

#define Laboratorio_Source_Laboratorio_Obrero_h_13_SPARSE_DATA
#define Laboratorio_Source_Laboratorio_Obrero_h_13_RPC_WRAPPERS
#define Laboratorio_Source_Laboratorio_Obrero_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Laboratorio_Source_Laboratorio_Obrero_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LABORATORIO_API UObrero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObrero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LABORATORIO_API, UObrero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObrero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LABORATORIO_API UObrero(UObrero&&); \
	LABORATORIO_API UObrero(const UObrero&); \
public:


#define Laboratorio_Source_Laboratorio_Obrero_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LABORATORIO_API UObrero(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LABORATORIO_API UObrero(UObrero&&); \
	LABORATORIO_API UObrero(const UObrero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LABORATORIO_API, UObrero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObrero); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObrero)


#define Laboratorio_Source_Laboratorio_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObrero(); \
	friend struct Z_Construct_UClass_UObrero_Statics; \
public: \
	DECLARE_CLASS(UObrero, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Laboratorio"), LABORATORIO_API) \
	DECLARE_SERIALIZER(UObrero)


#define Laboratorio_Source_Laboratorio_Obrero_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Laboratorio_Source_Laboratorio_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
	Laboratorio_Source_Laboratorio_Obrero_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Laboratorio_Source_Laboratorio_Obrero_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Laboratorio_Source_Laboratorio_Obrero_h_13_GENERATED_UINTERFACE_BODY() \
	Laboratorio_Source_Laboratorio_Obrero_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Laboratorio_Source_Laboratorio_Obrero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObrero() {} \
public: \
	typedef UObrero UClassType; \
	typedef IObrero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Laboratorio_Source_Laboratorio_Obrero_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IObrero() {} \
public: \
	typedef UObrero UClassType; \
	typedef IObrero ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Laboratorio_Source_Laboratorio_Obrero_h_10_PROLOG
#define Laboratorio_Source_Laboratorio_Obrero_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laboratorio_Source_Laboratorio_Obrero_h_13_SPARSE_DATA \
	Laboratorio_Source_Laboratorio_Obrero_h_13_RPC_WRAPPERS \
	Laboratorio_Source_Laboratorio_Obrero_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Laboratorio_Source_Laboratorio_Obrero_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laboratorio_Source_Laboratorio_Obrero_h_13_SPARSE_DATA \
	Laboratorio_Source_Laboratorio_Obrero_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Laboratorio_Source_Laboratorio_Obrero_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABORATORIO_API UClass* StaticClass<class UObrero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Laboratorio_Source_Laboratorio_Obrero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
