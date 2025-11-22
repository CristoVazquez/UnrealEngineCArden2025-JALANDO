// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/C_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_NPC() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
EUCARDEN_API UClass* Z_Construct_UClass_AC_NPC();
EUCARDEN_API UClass* Z_Construct_UClass_AC_NPC_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_UAIBehaviorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class AC_NPC
void AC_NPC::StaticRegisterNativesAC_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_NPC);
UClass* Z_Construct_UClass_AC_NPC_NoRegister()
{
	return AC_NPC::StaticClass();
}
struct Z_Construct_UClass_AC_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_NPC.h" },
		{ "ModuleRelativePath", "C_NPC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- ESTO ES LO QUE TE FALTABA ---\n// Array de actores (puntos) para patrullar. \n// 'EditAnywhere' te deja arrastrar los puntos en el editor.\n" },
#endif
		{ "ModuleRelativePath", "C_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- ESTO ES LO QUE TE FALTABA ---\nArray de actores (puntos) para patrullar.\n'EditAnywhere' te deja arrastrar los puntos en el editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// El asset del Behavior Tree que asignas en el editor\n" },
#endif
		{ "ModuleRelativePath", "C_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El asset del Behavior Tree que asignas en el editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorComp_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tu componente personalizado\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_NPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tu componente personalizado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_NPC_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC_NPC_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_NPC, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Waypoints_MetaData), NewProp_Waypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_NPC_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_NPC, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_NPC_Statics::NewProp_AIBehaviorComp = { "AIBehaviorComp", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_NPC, AIBehaviorComp), Z_Construct_UClass_UAIBehaviorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIBehaviorComp_MetaData), NewProp_AIBehaviorComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_NPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_NPC_Statics::NewProp_Waypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_NPC_Statics::NewProp_Waypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_NPC_Statics::NewProp_Tree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_NPC_Statics::NewProp_AIBehaviorComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_NPC_Statics::ClassParams = {
	&AC_NPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_NPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_NPC()
{
	if (!Z_Registration_Info_UClass_AC_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_NPC.OuterSingleton, Z_Construct_UClass_AC_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_NPC.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<AC_NPC>()
{
	return AC_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_NPC);
AC_NPC::~AC_NPC() {}
// End Class AC_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_C_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_NPC, AC_NPC::StaticClass, TEXT("AC_NPC"), &Z_Registration_Info_UClass_AC_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_NPC), 3950059994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_C_NPC_h_4037883192(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_C_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_C_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
