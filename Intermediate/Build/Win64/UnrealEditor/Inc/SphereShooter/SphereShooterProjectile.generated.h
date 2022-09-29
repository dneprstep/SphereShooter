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
struct FHitResult;
#ifdef SPHERESHOOTER_SphereShooterProjectile_generated_h
#error "SphereShooterProjectile.generated.h already included, missing '#pragma once' in SphereShooterProjectile.h"
#endif
#define SPHERESHOOTER_SphereShooterProjectile_generated_h

#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_SPARSE_DATA
#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASphereShooterProjectile(); \
	friend struct Z_Construct_UClass_ASphereShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ASphereShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SphereShooter"), NO_API) \
	DECLARE_SERIALIZER(ASphereShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASphereShooterProjectile(); \
	friend struct Z_Construct_UClass_ASphereShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ASphereShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SphereShooter"), NO_API) \
	DECLARE_SERIALIZER(ASphereShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASphereShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASphereShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASphereShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASphereShooterProjectile(ASphereShooterProjectile&&); \
	NO_API ASphereShooterProjectile(const ASphereShooterProjectile&); \
public:


#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASphereShooterProjectile(ASphereShooterProjectile&&); \
	NO_API ASphereShooterProjectile(const ASphereShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASphereShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASphereShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASphereShooterProjectile)


#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_12_PROLOG
#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_SPARSE_DATA \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_RPC_WRAPPERS \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_INCLASS \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_SPARSE_DATA \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPHERESHOOTER_API UClass* StaticClass<class ASphereShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SphereShooter_Source_SphereShooter_SphereShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
