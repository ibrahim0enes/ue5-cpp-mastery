// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BT_Service_PlayerLocationIfSeen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBT_Service_PlayerLocationIfSeen() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBT_Service_PlayerLocationIfSeen *****************************************
void UBT_Service_PlayerLocationIfSeen::StaticRegisterNativesUBT_Service_PlayerLocationIfSeen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen;
UClass* UBT_Service_PlayerLocationIfSeen::GetPrivateStaticClass()
{
	using TClass = UBT_Service_PlayerLocationIfSeen;
	if (!Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BT_Service_PlayerLocationIfSeen"),
			Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.InnerSingleton,
			StaticRegisterNativesUBT_Service_PlayerLocationIfSeen,
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
	return Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.InnerSingleton;
}
UClass* Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_NoRegister()
{
	return UBT_Service_PlayerLocationIfSeen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_Service_PlayerLocationIfSeen.h" },
		{ "ModuleRelativePath", "BT_Service_PlayerLocationIfSeen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Service_PlayerLocationIfSeen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::ClassParams = {
	&UBT_Service_PlayerLocationIfSeen::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen()
{
	if (!Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.OuterSingleton, Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Service_PlayerLocationIfSeen);
UBT_Service_PlayerLocationIfSeen::~UBT_Service_PlayerLocationIfSeen() {}
// ********** End Class UBT_Service_PlayerLocationIfSeen *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BT_Service_PlayerLocationIfSeen_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Service_PlayerLocationIfSeen, UBT_Service_PlayerLocationIfSeen::StaticClass, TEXT("UBT_Service_PlayerLocationIfSeen"), &Z_Registration_Info_UClass_UBT_Service_PlayerLocationIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Service_PlayerLocationIfSeen), 2949246607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BT_Service_PlayerLocationIfSeen_h__Script_ShooterSam_2535258305(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BT_Service_PlayerLocationIfSeen_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BT_Service_PlayerLocationIfSeen_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
