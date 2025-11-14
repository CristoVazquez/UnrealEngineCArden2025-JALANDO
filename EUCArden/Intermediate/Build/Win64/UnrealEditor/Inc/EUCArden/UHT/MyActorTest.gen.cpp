// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/MyActorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EUCARDEN_API UClass* Z_Construct_UClass_AMyActorTest();
EUCARDEN_API UClass* Z_Construct_UClass_AMyActorTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class AMyActorTest
void AMyActorTest::StaticRegisterNativesAMyActorTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorTest);
UClass* Z_Construct_UClass_AMyActorTest_NoRegister()
{
	return AMyActorTest::StaticClass();
}
struct Z_Construct_UClass_AMyActorTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest.h" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFloatVariable_MetaData[] = {
		{ "Category", "MyActorTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "MyActorTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una variable de instancia publica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_esInstructor_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[] = {
		{ "Category", "MyActorTest" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloatVariable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_edad;
	static void NewProp_esInstructor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_esInstructor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_MyFloatVariable = { "MyFloatVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, MyFloatVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFloatVariable_MetaData), NewProp_MyFloatVariable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, edad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_edad_MetaData), NewProp_edad_MetaData) };
void Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor_SetBit(void* Obj)
{
	((AMyActorTest*)Obj)->esInstructor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor = { "esInstructor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActorTest), &Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_esInstructor_MetaData), NewProp_esInstructor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyActorTest_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorTest, nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nombre_MetaData), NewProp_nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_MyFloatVariable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_edad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_esInstructor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorTest_Statics::NewProp_nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Statics::ClassParams = {
	&AMyActorTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyActorTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest()
{
	if (!Z_Registration_Info_UClass_AMyActorTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest.OuterSingleton, Z_Construct_UClass_AMyActorTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<AMyActorTest>()
{
	return AMyActorTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest);
AMyActorTest::~AMyActorTest() {}
// End Class AMyActorTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActorTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest, AMyActorTest::StaticClass, TEXT("AMyActorTest"), &Z_Registration_Info_UClass_AMyActorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest), 30494310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActorTest_h_1732214726(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_MyActorTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
