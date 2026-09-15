// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterSam_init() {}
	SHOOTERSAM_API UFunction* Z_Construct_UDelegateFunction_ShooterSam_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShooterSam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShooterSam()
	{
		if (!Z_Registration_Info_UPackage__Script_ShooterSam.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShooterSam_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShooterSam",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA7D3C15C,
				0x5B02E0D8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShooterSam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShooterSam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShooterSam(Z_Construct_UPackage__Script_ShooterSam, TEXT("/Script/ShooterSam"), Z_Registration_Info_UPackage__Script_ShooterSam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA7D3C15C, 0x5B02E0D8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
