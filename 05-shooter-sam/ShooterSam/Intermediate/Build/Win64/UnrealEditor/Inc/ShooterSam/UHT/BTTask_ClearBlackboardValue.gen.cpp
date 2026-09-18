// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_ClearBlackboardValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBlackboardValue() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ClearBlackboardValue *********************************************
void UBTTask_ClearBlackboardValue::StaticRegisterNativesUBTTask_ClearBlackboardValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue;
UClass* UBTTask_ClearBlackboardValue::GetPrivateStaticClass()
{
	using TClass = UBTTask_ClearBlackboardValue;
	if (!Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_ClearBlackboardValue"),
			Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.InnerSingleton,
			StaticRegisterNativesUBTTask_ClearBlackboardValue,
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
	return Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister()
{
	return UBTTask_ClearBlackboardValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_ClearBlackboardValue.h" },
		{ "ModuleRelativePath", "BTTask_ClearBlackboardValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBlackboardValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams = {
	&UBTTask_ClearBlackboardValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue()
{
	if (!Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton, Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBlackboardValue);
UBTTask_ClearBlackboardValue::~UBTTask_ClearBlackboardValue() {}
// ********** End Class UBTTask_ClearBlackboardValue ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTask_ClearBlackboardValue_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearBlackboardValue, UBTTask_ClearBlackboardValue::StaticClass, TEXT("UBTTask_ClearBlackboardValue"), &Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearBlackboardValue), 3655032927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTask_ClearBlackboardValue_h__Script_ShooterSam_1488629386(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTask_ClearBlackboardValue_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTask_ClearBlackboardValue_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
