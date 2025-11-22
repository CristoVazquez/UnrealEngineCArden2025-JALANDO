// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/MyActor_prueba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor_prueba() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EUCARDEN_API UClass* Z_Construct_UClass_AMyActor_prueba();
EUCARDEN_API UClass* Z_Construct_UClass_AMyActor_prueba_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class AMyActor_prueba
void AMyActor_prueba::StaticRegisterNativesAMyActor_prueba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor_prueba);
UClass* Z_Construct_UClass_AMyActor_prueba_NoRegister()
{
	return AMyActor_prueba::StaticClass();
}
struct Z_Construct_UClass_AMyActor_prueba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor_prueba.h" },
		{ "ModuleRelativePath", "MyActor_prueba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor_prueba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActor_prueba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_prueba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_prueba_Statics::ClassParams = {
	&AMyActor_prueba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_prueba_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_prueba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor_prueba()
{
	if (!Z_Registration_Info_UClass_AMyActor_prueba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor_prueba.OuterSingleton, Z_Construct_UClass_AMyActor_prueba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor_prueba.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<AMyActor_prueba>()
{
	return AMyActor_prueba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor_prueba);
AMyActor_prueba::~AMyActor_prueba() {}
// End Class AMyActor_prueba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActor_prueba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor_prueba, AMyActor_prueba::StaticClass, TEXT("AMyActor_prueba"), &Z_Registration_Info_UClass_AMyActor_prueba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor_prueba), 420179798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActor_prueba_h_877663754(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActor_prueba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActor_prueba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
