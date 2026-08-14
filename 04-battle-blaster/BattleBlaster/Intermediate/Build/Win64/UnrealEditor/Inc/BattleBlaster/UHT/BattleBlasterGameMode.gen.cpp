// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleBlaster/BattleBlasterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBattleBlasterGameMode() {}

// ********** Begin Cross Module References ********************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode();
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister();
BATTLEBLASTER_API UClass* Z_Construct_UClass_ATank_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BattleBlaster();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABattleBlasterGameMode ***************************************************
void ABattleBlasterGameMode::StaticRegisterNativesABattleBlasterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABattleBlasterGameMode;
UClass* ABattleBlasterGameMode::GetPrivateStaticClass()
{
	using TClass = ABattleBlasterGameMode;
	if (!Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BattleBlasterGameMode"),
			Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton,
			StaticRegisterNativesABattleBlasterGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABattleBlasterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABattleBlasterGameMode_NoRegister()
{
	return ABattleBlasterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABattleBlasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BattleBlasterGameMode.h" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tank_MetaData[] = {
		{ "Category", "BattleBlasterGameMode" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TowerCount_MetaData[] = {
		{ "Category", "BattleBlasterGameMode" },
		{ "ModuleRelativePath", "BattleBlasterGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TowerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleBlasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_Tank = { "Tank", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleBlasterGameMode, Tank), Z_Construct_UClass_ATank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tank_MetaData), NewProp_Tank_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_TowerCount = { "TowerCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleBlasterGameMode, TowerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TowerCount_MetaData), NewProp_TowerCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_Tank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleBlasterGameMode_Statics::NewProp_TowerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABattleBlasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BattleBlaster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleBlasterGameMode_Statics::ClassParams = {
	&ABattleBlasterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleBlasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleBlasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleBlasterGameMode()
{
	if (!Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton, Z_Construct_UClass_ABattleBlasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleBlasterGameMode.OuterSingleton;
}
ABattleBlasterGameMode::ABattleBlasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleBlasterGameMode);
ABattleBlasterGameMode::~ABattleBlasterGameMode() {}
// ********** End Class ABattleBlasterGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleBlasterGameMode, ABattleBlasterGameMode::StaticClass, TEXT("ABattleBlasterGameMode"), &Z_Registration_Info_UClass_ABattleBlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleBlasterGameMode), 3896665634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_3010090114(TEXT("/Script/BattleBlaster"),
	Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BattleBlaster_Source_BattleBlaster_BattleBlasterGameMode_h__Script_BattleBlaster_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
