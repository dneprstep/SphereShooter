// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereShooter_init() {}
	SPHERESHOOTER_API UFunction* Z_Construct_UDelegateFunction_SphereShooter_OnPickUp__DelegateSignature();
	SPHERESHOOTER_API UFunction* Z_Construct_UDelegateFunction_SphereShooter_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SphereShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SphereShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_SphereShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SphereShooter_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SphereShooter_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SphereShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9AA8C8FB,
				0x28CF7361,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SphereShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SphereShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SphereShooter(Z_Construct_UPackage__Script_SphereShooter, TEXT("/Script/SphereShooter"), Z_Registration_Info_UPackage__Script_SphereShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9AA8C8FB, 0x28CF7361));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
