// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LABORATORIO_LaboratorioProjectile_generated_h
#error "LaboratorioProjectile.generated.h already included, missing '#pragma once' in LaboratorioProjectile.h"
#endif
#define LABORATORIO_LaboratorioProjectile_generated_h

#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_SPARSE_DATA
#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaboratorioProjectile(); \
	friend struct Z_Construct_UClass_ALaboratorioProjectile_Statics; \
public: \
	DECLARE_CLASS(ALaboratorioProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Laboratorio"), NO_API) \
	DECLARE_SERIALIZER(ALaboratorioProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALaboratorioProjectile(); \
	friend struct Z_Construct_UClass_ALaboratorioProjectile_Statics; \
public: \
	DECLARE_CLASS(ALaboratorioProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Laboratorio"), NO_API) \
	DECLARE_SERIALIZER(ALaboratorioProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaboratorioProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaboratorioProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaboratorioProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaboratorioProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaboratorioProjectile(ALaboratorioProjectile&&); \
	NO_API ALaboratorioProjectile(const ALaboratorioProjectile&); \
public:


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaboratorioProjectile(ALaboratorioProjectile&&); \
	NO_API ALaboratorioProjectile(const ALaboratorioProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaboratorioProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaboratorioProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaboratorioProjectile)


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ALaboratorioProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALaboratorioProjectile, ProjectileMovement); }


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_12_PROLOG
#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_SPARSE_DATA \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_RPC_WRAPPERS \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_INCLASS \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_SPARSE_DATA \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Laboratorio_Source_Laboratorio_LaboratorioProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABORATORIO_API UClass* StaticClass<class ALaboratorioProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Laboratorio_Source_Laboratorio_LaboratorioProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
