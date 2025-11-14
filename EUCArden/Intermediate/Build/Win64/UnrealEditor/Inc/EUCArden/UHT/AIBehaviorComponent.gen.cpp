// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/AIBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBehaviorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
EUCARDEN_API UClass* Z_Construct_UClass_APathModule_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_UAIBehaviorComponent();
EUCARDEN_API UClass* Z_Construct_UClass_UAIBehaviorComponent_NoRegister();
EUCARDEN_API UScriptStruct* Z_Construct_UScriptStruct_FPathConfig();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin ScriptStruct FPathConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PathConfig;
class UScriptStruct* FPathConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PathConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PathConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathConfig, (UObject*)Z_Construct_UPackage__Script_EUCArden(), TEXT("PathConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PathConfig.OuterSingleton;
}
template<> EUCARDEN_API UScriptStruct* StaticStruct<FPathConfig>()
{
	return FPathConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPathConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AIBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[] = {
		{ "Category", "PathConfig" },
		{ "ModuleRelativePath", "AIBehaviorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathConfig_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathConfig, WaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitTime_MetaData), NewProp_WaitTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathConfig_Statics::NewProp_WaitTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
	nullptr,
	&NewStructOps,
	"PathConfig",
	Z_Construct_UScriptStruct_FPathConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathConfig_Statics::PropPointers),
	sizeof(FPathConfig),
	alignof(FPathConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PathConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PathConfig.InnerSingleton, Z_Construct_UScriptStruct_FPathConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PathConfig.InnerSingleton;
}
// End ScriptStruct FPathConfig

// Begin Class UAIBehaviorComponent
void UAIBehaviorComponent::StaticRegisterNativesUAIBehaviorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIBehaviorComponent);
UClass* Z_Construct_UClass_UAIBehaviorComponent_NoRegister()
{
	return UAIBehaviorComponent::StaticClass();
}
struct Z_Construct_UClass_UAIBehaviorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AIBehaviorComponent.h" },
		{ "ModuleRelativePath", "AIBehaviorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointConfigs_MetaData[] = {
		{ "Category", "NPCConfig" },
		{ "ModuleRelativePath", "AIBehaviorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointConfigs_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PointConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBehaviorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs_ValueProp = { "PointConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPathConfig, METADATA_PARAMS(0, nullptr) }; // 4175132277
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs_Key_KeyProp = { "PointConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APathModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs = { "PointConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIBehaviorComponent, PointConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointConfigs_MetaData), NewProp_PointConfigs_MetaData) }; // 4175132277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIBehaviorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIBehaviorComponent_Statics::NewProp_PointConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIBehaviorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIBehaviorComponent_Statics::ClassParams = {
	&UAIBehaviorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAIBehaviorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBehaviorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIBehaviorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIBehaviorComponent()
{
	if (!Z_Registration_Info_UClass_UAIBehaviorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIBehaviorComponent.OuterSingleton, Z_Construct_UClass_UAIBehaviorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIBehaviorComponent.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<UAIBehaviorComponent>()
{
	return UAIBehaviorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBehaviorComponent);
UAIBehaviorComponent::~UAIBehaviorComponent() {}
// End Class UAIBehaviorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPathConfig::StaticStruct, Z_Construct_UScriptStruct_FPathConfig_Statics::NewStructOps, TEXT("PathConfig"), &Z_Registration_Info_UScriptStruct_PathConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathConfig), 4175132277U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIBehaviorComponent, UAIBehaviorComponent::StaticClass, TEXT("UAIBehaviorComponent"), &Z_Registration_Info_UClass_UAIBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIBehaviorComponent), 1091437653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_3887928074(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_AIBehaviorComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
