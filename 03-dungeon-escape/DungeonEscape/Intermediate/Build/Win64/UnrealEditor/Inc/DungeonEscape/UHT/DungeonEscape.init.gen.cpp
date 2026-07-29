// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEscape_init() {}
	DUNGEONESCAPE_API UFunction* Z_Construct_UDelegateFunction_DungeonEscape_BulletCountUpdatedDelegate__DelegateSignature();
	DUNGEONESCAPE_API UFunction* Z_Construct_UDelegateFunction_DungeonEscape_DamagedDelegate__DelegateSignature();
	DUNGEONESCAPE_API UFunction* Z_Construct_UDelegateFunction_DungeonEscape_PawnDeathDelegate__DelegateSignature();
	DUNGEONESCAPE_API UFunction* Z_Construct_UDelegateFunction_DungeonEscape_SprintStateChangedDelegate__DelegateSignature();
	DUNGEONESCAPE_API UFunction* Z_Construct_UDelegateFunction_DungeonEscape_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonEscape;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonEscape()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonEscape.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonEscape_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonEscape_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonEscape_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonEscape_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonEscape_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonEscape",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x84F2D274,
				0x0CACF9CD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonEscape.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonEscape.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonEscape(Z_Construct_UPackage__Script_DungeonEscape, TEXT("/Script/DungeonEscape"), Z_Registration_Info_UPackage__Script_DungeonEscape, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84F2D274, 0x0CACF9CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
