// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletPhysics/BulletPhysicsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletPhysicsHUD() {}
// Cross Module References
	BULLETPHYSICS_API UClass* Z_Construct_UClass_ABulletPhysicsHUD_NoRegister();
	BULLETPHYSICS_API UClass* Z_Construct_UClass_ABulletPhysicsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_BulletPhysics();
// End Cross Module References
	void ABulletPhysicsHUD::StaticRegisterNativesABulletPhysicsHUD()
	{
	}
	UClass* Z_Construct_UClass_ABulletPhysicsHUD_NoRegister()
	{
		return ABulletPhysicsHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABulletPhysicsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletPhysicsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BulletPhysics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletPhysicsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "BulletPhysicsHUD.h" },
		{ "ModuleRelativePath", "BulletPhysicsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletPhysicsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletPhysicsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABulletPhysicsHUD_Statics::ClassParams = {
		&ABulletPhysicsHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABulletPhysicsHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPhysicsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABulletPhysicsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABulletPhysicsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABulletPhysicsHUD, 2437280370);
	template<> BULLETPHYSICS_API UClass* StaticClass<ABulletPhysicsHUD>()
	{
		return ABulletPhysicsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABulletPhysicsHUD(Z_Construct_UClass_ABulletPhysicsHUD, &ABulletPhysicsHUD::StaticClass, TEXT("/Script/BulletPhysics"), TEXT("ABulletPhysicsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletPhysicsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
