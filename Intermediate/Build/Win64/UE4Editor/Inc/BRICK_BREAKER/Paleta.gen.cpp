// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BRICK_BREAKER/Paleta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaleta() {}
// Cross Module References
	BRICK_BREAKER_API UClass* Z_Construct_UClass_APaleta_NoRegister();
	BRICK_BREAKER_API UClass* Z_Construct_UClass_APaleta();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BRICK_BREAKER();
// End Cross Module References
	void APaleta::StaticRegisterNativesAPaleta()
	{
	}
	UClass* Z_Construct_UClass_APaleta_NoRegister()
	{
		return APaleta::StaticClass();
	}
	struct Z_Construct_UClass_APaleta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaleta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BRICK_BREAKER,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaleta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Paleta.h" },
		{ "ModuleRelativePath", "Paleta.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaleta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaleta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaleta_Statics::ClassParams = {
		&APaleta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaleta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaleta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaleta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaleta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaleta, 1347498172);
	template<> BRICK_BREAKER_API UClass* StaticClass<APaleta>()
	{
		return APaleta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaleta(Z_Construct_UClass_APaleta, &APaleta::StaticClass, TEXT("/Script/BRICK_BREAKER"), TEXT("APaleta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaleta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
