// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterAI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterAI() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterAI();
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterAI_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterAI ***************************************************************
void AShooterAI::StaticRegisterNativesAShooterAI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterAI;
UClass* AShooterAI::GetPrivateStaticClass()
{
	using TClass = AShooterAI;
	if (!Z_Registration_Info_UClass_AShooterAI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterAI"),
			Z_Registration_Info_UClass_AShooterAI.InnerSingleton,
			StaticRegisterNativesAShooterAI,
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
	return Z_Registration_Info_UClass_AShooterAI.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterAI_NoRegister()
{
	return AShooterAI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAI.h" },
		{ "ModuleRelativePath", "ShooterAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAIBehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "ShooterAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyAIBehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAI_Statics::NewProp_EnemyAIBehaviorTree = { "EnemyAIBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAI, EnemyAIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyAIBehaviorTree_MetaData), NewProp_EnemyAIBehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAI_Statics::NewProp_EnemyAIBehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAI_Statics::ClassParams = {
	&AShooterAI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAI_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterAI()
{
	if (!Z_Registration_Info_UClass_AShooterAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAI.OuterSingleton, Z_Construct_UClass_AShooterAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterAI.OuterSingleton;
}
AShooterAI::AShooterAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAI);
AShooterAI::~AShooterAI() {}
// ********** End Class AShooterAI *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterAI_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAI, AShooterAI::StaticClass, TEXT("AShooterAI"), &Z_Registration_Info_UClass_AShooterAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAI), 3667396897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterAI_h__Script_ShooterSam_1857359142(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterAI_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterAI_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
