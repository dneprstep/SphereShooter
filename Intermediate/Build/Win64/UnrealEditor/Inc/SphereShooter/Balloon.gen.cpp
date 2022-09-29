// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SphereShooter/Public/Balloon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalloon() {}
// Cross Module References
	SPHERESHOOTER_API UClass* Z_Construct_UClass_ABalloon_NoRegister();
	SPHERESHOOTER_API UClass* Z_Construct_UClass_ABalloon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SphereShooter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void ABalloon::StaticRegisterNativesABalloon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABalloon);
	UClass* Z_Construct_UClass_ABalloon_NoRegister()
	{
		return ABalloon::StaticClass();
	}
	struct Z_Construct_UClass_ABalloon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_particleDeath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_particleDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAlive_MetaData[];
#endif
		static void NewProp_isAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalloon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SphereShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Balloon.h" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_particleDeath_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_particleDeath = { "particleDeath", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, particleDeath), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_particleDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_particleDeath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_deathSound_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_deathSound = { "deathSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, deathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_deathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_deathSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive_MetaData[] = {
		{ "Category", "Balloon" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	void Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive_SetBit(void* Obj)
	{
		((ABalloon*)Obj)->isAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive = { "isAlive", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABalloon), &Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Balloon" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, Health), METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Balloon" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, CollisionRadius), METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_mColor_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_mColor = { "mColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABalloon, mColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::NewProp_mColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_mColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABalloon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_particleDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_deathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_isAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_CollisionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_mColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalloon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalloon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABalloon_Statics::ClassParams = {
		&ABalloon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABalloon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalloon()
	{
		if (!Z_Registration_Info_UClass_ABalloon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABalloon.OuterSingleton, Z_Construct_UClass_ABalloon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABalloon.OuterSingleton;
	}
	template<> SPHERESHOOTER_API UClass* StaticClass<ABalloon>()
	{
		return ABalloon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalloon);
	struct Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_Public_Balloon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_Public_Balloon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABalloon, ABalloon::StaticClass, TEXT("ABalloon"), &Z_Registration_Info_UClass_ABalloon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABalloon), 3661374501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_Public_Balloon_h_4264438155(TEXT("/Script/SphereShooter"),
		Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_Public_Balloon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_Public_Balloon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
