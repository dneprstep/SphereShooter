// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SphereShooter/SphereShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereShooterGameMode() {}
// Cross Module References
	SPHERESHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
	UPackage* Z_Construct_UPackage__Script_SphereShooter();
	SPHERESHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnLocData();
	SPHERESHOOTER_API UClass* Z_Construct_UClass_ASphereShooterGameMode_NoRegister();
	SPHERESHOOTER_API UClass* Z_Construct_UClass_ASphereShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPHERESHOOTER_API UClass* Z_Construct_UClass_ABalloon_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameData;
class UScriptStruct* FGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameData, Z_Construct_UPackage__Script_SphereShooter(), TEXT("GameData"));
	}
	return Z_Registration_Info_UScriptStruct_GameData.OuterSingleton;
}
template<> SPHERESHOOTER_API UScriptStruct* StaticStruct<FGameData>()
{
	return FGameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBalloonsCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnBalloonsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinBallonsCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WinBallonsCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BalloonRateCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BalloonRateCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxBalloonSpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxBalloonSpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minBalloonSpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minBalloonSpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateBalloonSpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateBalloonSpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenBalloons_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenBalloons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BalloonRadiusPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BalloonRadiusPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnTries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnTries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebugSphere_MetaData[];
#endif
		static void NewProp_ShowDebugSphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDebugSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadiusStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadiusStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SpawnBalloonsCount_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "100" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SpawnBalloonsCount = { "SpawnBalloonsCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, SpawnBalloonsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SpawnBalloonsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SpawnBalloonsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_WinBallonsCount_MetaData[] = {
		{ "Category", "GameData" },
		{ "Comment", "// count of all balloons to spawn\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "count of all balloons to spawn" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_WinBallonsCount = { "WinBallonsCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, WinBallonsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_WinBallonsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_WinBallonsCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRateCount_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// count of balloons to hit for win\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "count of balloons to hit for win" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRateCount = { "BalloonRateCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, BalloonRateCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRateCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRateCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_maxBalloonSpawnRadius_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "100" },
		{ "Comment", "// balloons increase spawn rate count (percent of previous)\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "balloons increase spawn rate count (percent of previous)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_maxBalloonSpawnRadius = { "maxBalloonSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, maxBalloonSpawnRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_maxBalloonSpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_maxBalloonSpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_minBalloonSpawnRadius_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "100" },
		{ "Comment", "// max spawn balloons radius from player location\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "max spawn balloons radius from player location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_minBalloonSpawnRadius = { "minBalloonSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, minBalloonSpawnRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_minBalloonSpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_minBalloonSpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RateBalloonSpawnRadius_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// radius from player location with objective balloons to hit for win\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "radius from player location with objective balloons to hit for win" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RateBalloonSpawnRadius = { "RateBalloonSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, RateBalloonSpawnRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RateBalloonSpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RateBalloonSpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DistanceBetweenBalloons_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "// spawn balloons radius from player location rate\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "spawn balloons radius from player location rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DistanceBetweenBalloons = { "DistanceBetweenBalloons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, DistanceBetweenBalloons), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DistanceBetweenBalloons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DistanceBetweenBalloons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRadiusPercent_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "500" },
		{ "ClampMin", "5" },
		{ "Comment", "// min distance between balloons\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "min distance between balloons" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRadiusPercent = { "BalloonRadiusPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, BalloonRadiusPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRadiusPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRadiusPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MaxSpawnTries_MetaData[] = {
		{ "Category", "GameData" },
		{ "Comment", "// balloon radius in percent of normal\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "balloon radius in percent of normal" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MaxSpawnTries = { "MaxSpawnTries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, MaxSpawnTries), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MaxSpawnTries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MaxSpawnTries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Rounds_MetaData[] = {
		{ "Category", "GameData" },
		{ "Comment", "// max balloons spawn tries\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "max balloons spawn tries" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Rounds = { "Rounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, Rounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Rounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Rounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere_SetBit(void* Obj)
	{
		((FGameData*)Obj)->ShowDebugSphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere = { "ShowDebugSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameData), &Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MinSphereRadius_MetaData[] = {
		{ "Category", "GameData" },
		{ "Comment", "// show debug spheres for spawn radius\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "show debug spheres for spawn radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MinSphereRadius = { "MinSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, MinSphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MinSphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MinSphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SphereRadiusStep_MetaData[] = {
		{ "Category", "GameData" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// minimum sphere radius in percent of normal\n" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ToolTip", "minimum sphere radius in percent of normal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SphereRadiusStep = { "SphereRadiusStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, SphereRadiusStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SphereRadiusStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SphereRadiusStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SpawnBalloonsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_WinBallonsCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRateCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_maxBalloonSpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_minBalloonSpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RateBalloonSpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DistanceBetweenBalloons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_BalloonRadiusPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MaxSpawnTries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_Rounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_ShowDebugSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_MinSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_SphereRadiusStep,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SphereShooter,
		nullptr,
		&NewStructOps,
		"GameData",
		sizeof(FGameData),
		alignof(FGameData),
		Z_Construct_UScriptStruct_FGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameData.InnerSingleton, Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnLocData;
class UScriptStruct* FSpawnLocData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnLocData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnLocData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnLocData, Z_Construct_UPackage__Script_SphereShooter(), TEXT("SpawnLocData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnLocData.OuterSingleton;
}
template<> SPHERESHOOTER_API UScriptStruct* StaticStruct<FSpawnLocData>()
{
	return FSpawnLocData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnLocData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnLocData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnLocData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnLocData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnLocData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SphereShooter,
		nullptr,
		&NewStructOps,
		"SpawnLocData",
		sizeof(FSpawnLocData),
		alignof(FSpawnLocData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnLocData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnLocData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnLocData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnLocData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnLocData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnLocData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnLocData.InnerSingleton;
	}
	static FName NAME_ASphereShooterGameMode_GameOver = FName(TEXT("GameOver"));
	void ASphereShooterGameMode::GameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASphereShooterGameMode_GameOver),NULL);
	}
	void ASphereShooterGameMode::StaticRegisterNativesASphereShooterGameMode()
	{
	}
	struct Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASphereShooterGameMode, nullptr, "GameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASphereShooterGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASphereShooterGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASphereShooterGameMode);
	UClass* Z_Construct_UClass_ASphereShooterGameMode_NoRegister()
	{
		return ASphereShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASphereShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BallonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASphereShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SphereShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASphereShooterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASphereShooterGameMode_GameOver, "GameOver" }, // 230636089
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SphereShooterGameMode.h" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_BallonClass_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_BallonClass = { "BallonClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASphereShooterGameMode, BallonClass), Z_Construct_UClass_ABalloon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_BallonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_BallonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_PlayerSpawnLocation_MetaData[] = {
		{ "Category", "SphereShooterGameMode" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_PlayerSpawnLocation = { "PlayerSpawnLocation", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASphereShooterGameMode, PlayerSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_PlayerSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_PlayerSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_RestartDelay_MetaData[] = {
		{ "Category", "SphereShooterGameMode" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASphereShooterGameMode, RestartDelay), METADATA_PARAMS(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_RestartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_RestartDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_GameData_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "SphereShooterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASphereShooterGameMode, GameData), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_GameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_GameData_MetaData)) }; // 566681622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereShooterGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_BallonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_PlayerSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_RestartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereShooterGameMode_Statics::NewProp_GameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASphereShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphereShooterGameMode_Statics::ClassParams = {
		&ASphereShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASphereShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASphereShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASphereShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_ASphereShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphereShooterGameMode.OuterSingleton, Z_Construct_UClass_ASphereShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASphereShooterGameMode.OuterSingleton;
	}
	template<> SPHERESHOOTER_API UClass* StaticClass<ASphereShooterGameMode>()
	{
		return ASphereShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereShooterGameMode);
	struct Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ScriptStructInfo[] = {
		{ FGameData::StaticStruct, Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps, TEXT("GameData"), &Z_Registration_Info_UScriptStruct_GameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameData), 566681622U) },
		{ FSpawnLocData::StaticStruct, Z_Construct_UScriptStruct_FSpawnLocData_Statics::NewStructOps, TEXT("SpawnLocData"), &Z_Registration_Info_UScriptStruct_SpawnLocData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnLocData), 3716277512U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASphereShooterGameMode, ASphereShooterGameMode::StaticClass, TEXT("ASphereShooterGameMode"), &Z_Registration_Info_UClass_ASphereShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphereShooterGameMode), 550011753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_4131251811(TEXT("/Script/SphereShooter"),
		Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SphereShooter_Source_SphereShooter_SphereShooterGameMode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
