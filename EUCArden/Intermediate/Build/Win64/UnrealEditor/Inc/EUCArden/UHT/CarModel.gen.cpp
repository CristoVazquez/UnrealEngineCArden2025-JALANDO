// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/CarModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarModel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
EUCARDEN_API UClass* Z_Construct_UClass_UCarModel();
EUCARDEN_API UClass* Z_Construct_UClass_UCarModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class UCarModel
void UCarModel::StaticRegisterNativesUCarModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCarModel);
UClass* Z_Construct_UClass_UCarModel_NoRegister()
{
	return UCarModel::StaticClass();
}
struct Z_Construct_UClass_UCarModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CarModel.h" },
		{ "ModuleRelativePath", "CarModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCarModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCarModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCarModel_Statics::ClassParams = {
	&UCarModel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCarModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UCarModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCarModel()
{
	if (!Z_Registration_Info_UClass_UCarModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCarModel.OuterSingleton, Z_Construct_UClass_UCarModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCarModel.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<UCarModel>()
{
	return UCarModel::StaticClass();
}
UCarModel::UCarModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCarModel);
UCarModel::~UCarModel() {}
// End Class UCarModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_CarModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCarModel, UCarModel::StaticClass, TEXT("UCarModel"), &Z_Registration_Info_UClass_UCarModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCarModel), 1505174405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_CarModel_h_3977482430(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_CarModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_CarModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
