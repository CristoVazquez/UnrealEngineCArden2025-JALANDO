// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/PathModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathModule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EUCARDEN_API UClass* Z_Construct_UClass_APathModule();
EUCARDEN_API UClass* Z_Construct_UClass_APathModule_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class APathModule
void APathModule::StaticRegisterNativesAPathModule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathModule);
UClass* Z_Construct_UClass_APathModule_NoRegister()
{
	return APathModule::StaticClass();
}
struct Z_Construct_UClass_APathModule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PathModule.h" },
		{ "ModuleRelativePath", "PathModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathModule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APathModule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathModule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APathModule_Statics::ClassParams = {
	&APathModule::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathModule_Statics::Class_MetaDataParams), Z_Construct_UClass_APathModule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APathModule()
{
	if (!Z_Registration_Info_UClass_APathModule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathModule.OuterSingleton, Z_Construct_UClass_APathModule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APathModule.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<APathModule>()
{
	return APathModule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APathModule);
APathModule::~APathModule() {}
// End Class APathModule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PathModule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APathModule, APathModule::StaticClass, TEXT("APathModule"), &Z_Registration_Info_UClass_APathModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathModule), 2518418291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PathModule_h_646189942(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PathModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PathModule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
