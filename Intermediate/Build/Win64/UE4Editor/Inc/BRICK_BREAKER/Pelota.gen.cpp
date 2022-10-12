// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BRICK_BREAKER/Pelota.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePelota() {}
// Cross Module References
	BRICK_BREAKER_API UClass* Z_Construct_UClass_APelota_NoRegister();
	BRICK_BREAKER_API UClass* Z_Construct_UClass_APelota();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BRICK_BREAKER();
// End Cross Module References
	void APelota::StaticRegisterNativesAPelota()
	{
	}
	UClass* Z_Construct_UClass_APelota_NoRegister()
	{
		return APelota::StaticClass();
	}
	struct Z_Construct_UClass_APelota_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APelota_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BRICK_BREAKER,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APelota_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pelota.h" },
		{ "ModuleRelativePath", "Pelota.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APelota_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APelota>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APelota_Statics::ClassParams = {
		&APelota::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APelota_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APelota_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APelota()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APelota_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APelota, 182791097);
	template<> BRICK_BREAKER_API UClass* StaticClass<APelota>()
	{
		return APelota::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APelota(Z_Construct_UClass_APelota, &APelota::StaticClass, TEXT("/Script/BRICK_BREAKER"), TEXT("APelota"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APelota);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
