// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleAssault_init() {}
	OBSTACLEASSAULT_API UFunction* Z_Construct_UDelegateFunction_ObstacleAssault_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObstacleAssault;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObstacleAssault()
	{
		if (!Z_Registration_Info_UPackage__Script_ObstacleAssault.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ObstacleAssault_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObstacleAssault",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x63745192,
				0x4FE2ED79,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObstacleAssault.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObstacleAssault.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObstacleAssault(Z_Construct_UPackage__Script_ObstacleAssault, TEXT("/Script/ObstacleAssault"), Z_Registration_Info_UPackage__Script_ObstacleAssault, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x63745192, 0x4FE2ED79));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
