// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BRICK_BREAKER/Tiempo_Limite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiempo_Limite() {}
// Cross Module References
	BRICK_BREAKER_API UClass* Z_Construct_UClass_ATiempo_Limite_NoRegister();
	BRICK_BREAKER_API UClass* Z_Construct_UClass_ATiempo_Limite();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BRICK_BREAKER();
// End Cross Module References
	void ATiempo_Limite::StaticRegisterNativesATiempo_Limite()
	{
	}
	UClass* Z_Construct_UClass_ATiempo_Limite_NoRegister()
	{
		return ATiempo_Limite::StaticClass();
	}
	struct Z_Construct_UClass_ATiempo_Limite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiempo_Limite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BRICK_BREAKER,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiempo_Limite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tiempo_Limite.h" },
		{ "ModuleRelativePath", "Tiempo_Limite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiempo_Limite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiempo_Limite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATiempo_Limite_Statics::ClassParams = {
		&ATiempo_Limite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATiempo_Limite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATiempo_Limite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiempo_Limite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATiempo_Limite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATiempo_Limite, 3961774296);
	template<> BRICK_BREAKER_API UClass* StaticClass<ATiempo_Limite>()
	{
		return ATiempo_Limite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATiempo_Limite(Z_Construct_UClass_ATiempo_Limite, &ATiempo_Limite::StaticClass, TEXT("/Script/BRICK_BREAKER"), TEXT("ATiempo_Limite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiempo_Limite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
