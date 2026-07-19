// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssaultPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObstacleAssaultPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultPlayerController();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AObstacleAssaultPlayerController *****************************************
void AObstacleAssaultPlayerController::StaticRegisterNativesAObstacleAssaultPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AObstacleAssaultPlayerController;
UClass* AObstacleAssaultPlayerController::GetPrivateStaticClass()
{
	using TClass = AObstacleAssaultPlayerController;
	if (!Z_Registration_Info_UClass_AObstacleAssaultPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObstacleAssaultPlayerController"),
			Z_Registration_Info_UClass_AObstacleAssaultPlayerController.InnerSingleton,
			StaticRegisterNativesAObstacleAssaultPlayerController,
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
	return Z_Registration_Info_UClass_AObstacleAssaultPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AObstacleAssaultPlayerController_NoRegister()
{
	return AObstacleAssaultPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AObstacleAssaultPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ObstacleAssaultPlayerController.h" },
		{ "ModuleRelativePath", "ObstacleAssaultPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "ObstacleAssaultPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "ObstacleAssaultPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "ObstacleAssaultPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleAssaultPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleAssaultPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleAssaultPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleAssaultPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::NewProp_MobileControlsWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::ClassParams = {
	&AObstacleAssaultPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacleAssaultPlayerController()
{
	if (!Z_Registration_Info_UClass_AObstacleAssaultPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacleAssaultPlayerController.OuterSingleton, Z_Construct_UClass_AObstacleAssaultPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacleAssaultPlayerController.OuterSingleton;
}
AObstacleAssaultPlayerController::AObstacleAssaultPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleAssaultPlayerController);
AObstacleAssaultPlayerController::~AObstacleAssaultPlayerController() {}
// ********** End Class AObstacleAssaultPlayerController *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h__Script_ObstacleAssault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacleAssaultPlayerController, AObstacleAssaultPlayerController::StaticClass, TEXT("AObstacleAssaultPlayerController"), &Z_Registration_Info_UClass_AObstacleAssaultPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacleAssaultPlayerController), 3127431334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h__Script_ObstacleAssault_1501237093(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h__Script_ObstacleAssault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
