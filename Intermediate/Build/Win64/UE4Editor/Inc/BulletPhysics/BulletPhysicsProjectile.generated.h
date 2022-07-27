// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BULLETPHYSICS_BulletPhysicsProjectile_generated_h
#error "BulletPhysicsProjectile.generated.h already included, missing '#pragma once' in BulletPhysicsProjectile.h"
#endif
#define BULLETPHYSICS_BulletPhysicsProjectile_generated_h

#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_SPARSE_DATA
#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletPhysicsProjectile(); \
	friend struct Z_Construct_UClass_ABulletPhysicsProjectile_Statics; \
public: \
	DECLARE_CLASS(ABulletPhysicsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BulletPhysics"), NO_API) \
	DECLARE_SERIALIZER(ABulletPhysicsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABulletPhysicsProjectile(); \
	friend struct Z_Construct_UClass_ABulletPhysicsProjectile_Statics; \
public: \
	DECLARE_CLASS(ABulletPhysicsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BulletPhysics"), NO_API) \
	DECLARE_SERIALIZER(ABulletPhysicsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletPhysicsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletPhysicsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletPhysicsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletPhysicsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletPhysicsProjectile(ABulletPhysicsProjectile&&); \
	NO_API ABulletPhysicsProjectile(const ABulletPhysicsProjectile&); \
public:


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletPhysicsProjectile(ABulletPhysicsProjectile&&); \
	NO_API ABulletPhysicsProjectile(const ABulletPhysicsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletPhysicsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletPhysicsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletPhysicsProjectile)


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABulletPhysicsProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABulletPhysicsProjectile, ProjectileMovement); }


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_12_PROLOG
#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_SPARSE_DATA \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_RPC_WRAPPERS \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_INCLASS \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_SPARSE_DATA \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLETPHYSICS_API UClass* StaticClass<class ABulletPhysicsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BulletPhysics_Source_BulletPhysics_BulletPhysicsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
