// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/BTTask_PatrolPath.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PatrolPath() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
EUCARDEN_API UClass* Z_Construct_UClass_UBTTask_PatrolPath();
EUCARDEN_API UClass* Z_Construct_UClass_UBTTask_PatrolPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class UBTTask_PatrolPath
void UBTTask_PatrolPath::StaticRegisterNativesUBTTask_PatrolPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PatrolPath);
UClass* Z_Construct_UClass_UBTTask_PatrolPath_NoRegister()
{
	return UBTTask_PatrolPath::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PatrolPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Esta tarea selecciona el siguiente punto del array 'Waypoints' del NPC\n * y lo guarda en el Blackboard para que el nodo MoveTo sepa a d\xef\xbf\xbdnde ir.\n */" },
#endif
		{ "IncludePath", "BTTask_PatrolPath.h" },
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Esta tarea selecciona el siguiente punto del array 'Waypoints' del NPC\ny lo guarda en el Blackboard para que el nodo MoveTo sepa a d\xef\xbf\xbdnde ir." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolIndexKey_MetaData[] = {
		{ "Category", "Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nombre de la clave en el Blackboard donde guardamos el \xef\xbf\xbdNDICE actual (0, 1, 2...)\n// Puedes editarlo en el editor si quieres, por defecto ser\xef\xbf\xbd \"PatrolIndex\"\n" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nombre de la clave en el Blackboard donde guardamos el \xef\xbf\xbdNDICE actual (0, 1, 2...)\nPuedes editarlo en el editor si quieres, por defecto ser\xef\xbf\xbd \"PatrolIndex\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolIndexKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PatrolPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_PatrolIndexKey = { "PatrolIndexKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, PatrolIndexKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolIndexKey_MetaData), NewProp_PatrolIndexKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_PatrolIndexKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PatrolPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::ClassParams = {
	&UBTTask_PatrolPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PatrolPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PatrolPath()
{
	if (!Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton, Z_Construct_UClass_UBTTask_PatrolPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<UBTTask_PatrolPath>()
{
	return UBTTask_PatrolPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PatrolPath);
UBTTask_PatrolPath::~UBTTask_PatrolPath() {}
// End Class UBTTask_PatrolPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PatrolPath, UBTTask_PatrolPath::StaticClass, TEXT("UBTTask_PatrolPath"), &Z_Registration_Info_UClass_UBTTask_PatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PatrolPath), 4146629049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_2354175120(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
