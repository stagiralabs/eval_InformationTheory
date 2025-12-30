// Lean compiler output
// Module: Mathlib.Algebra.Lie.Basic
// Imports: Init Mathlib.Algebra.Module.Submodule.Equiv Mathlib.Algebra.Module.Equiv.Basic Mathlib.Data.Bracket Mathlib.Tactic.Abel
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_LieEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasZSMul___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3;
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instModule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg___boxed(lean_object**);
static lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1___rarg___boxed(lean_object*);
lean_object* l_LinearMap_addCommMonoid___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__12;
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_comp___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instInhabited___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_instLieRingModule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__4;
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__5;
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3;
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instAdd___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieRingSelfModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_term___u2243_u2097_u2045___x2c___u2046__;
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instOne(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieRingSelfModule___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModuleEquiv_instEquivLike___closed__1;
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__10;
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_inverse___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_id___spec__2___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_inverse___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasNSMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__3(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6;
LEAN_EXPORT lean_object* l_LieModuleHom_id___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1;
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__11;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_refl___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__14;
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__3;
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instOne___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__6;
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__2;
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_id___spec__2(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7;
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___rarg(lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__2;
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieEquiv__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_trans___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSub___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__6;
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_inverse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instInhabited___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instZero___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instModule___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instAddCommGroup(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instZero___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Pi_instNeg___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__4(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__9;
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__4;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2;
LEAN_EXPORT lean_object* l_LieHom_instInhabited___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__8;
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instInhabited___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_Injective_addMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__7;
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleEquiv__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_Dual_instLieRingModule___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSMul___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_refl___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instAdd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14;
LEAN_EXPORT lean_object* l_LieHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1___rarg___boxed(lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__13;
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_id___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instOne___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasNSMul___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instInhabited___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__7;
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__3;
LEAN_EXPORT lean_object* l_LieHom_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__3;
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleHom_id___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instOne___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasZSMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieHom_id___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instInhabited___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_refl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_inverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_id___spec__2(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__6;
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieEquiv_instEquivLike___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleHom_id___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_comp___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_toLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instNeg___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__5;
lean_object* l_Function_Injective_subNegMonoid___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__3___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__10;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__3(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__8;
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__4;
static lean_object* l_LieEquiv_instEquivLike___closed__2;
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__3___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__8;
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_trans___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_SubNegZeroMonoid_toNegZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instOne___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1;
LEAN_EXPORT lean_object* l_LieModuleHom_instOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_toLinearEquiv___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2;
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instOne___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_id___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_Dual_instLieRingModule___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSMul___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLinearEquiv(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__2;
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_inverse___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___x2c___u2046_____closed__1;
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13;
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u2243_u2097_u2045___u2046__;
LEAN_EXPORT lean_object* l_LieEquiv_refl___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__5;
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_id___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_inverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7;
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_refl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModuleEquiv_instEquivLike___closed__3;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_LinearEquiv_trans___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__15;
LEAN_EXPORT lean_object* l_LieModuleHom_instAddCommGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instInhabited___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_instSub___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u2192_u2097_u2045___x2c___u2046__;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_symm___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_LieModuleEquiv_instEquivLike___closed__2;
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_term___u2192_u2097_u2045___u2046__;
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11;
LEAN_EXPORT lean_object* l_LieEquiv_trans(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearEquiv_refl___elambda__1___rarg___boxed(lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__16;
LEAN_EXPORT lean_object* l_LieModuleHom_id(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1(lean_object*, lean_object*);
lean_object* l_LinearMap_instSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2;
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_inverse___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_comp___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__1;
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instZero___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_trans___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_refl___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instInhabited___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instNeg___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__5;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6;
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7;
LEAN_EXPORT lean_object* l_LieEquiv_symm___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_toLinearEquiv___spec__1(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4;
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6;
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__7;
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instAdd___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSub___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instZero___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8;
LEAN_EXPORT lean_object* l_LieHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instOne___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__3;
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___lambda__2(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__1;
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleHom__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instInhabited___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_toLinearEquiv___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_symm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5;
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1(lean_object*, lean_object*);
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__1;
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3;
static lean_object* l_term___u2243_u2097_u2045___u2046_____closed__7;
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_symm___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_inverse___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_comp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_trans___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_symm___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_LieEquiv_instEquivLike___closed__3;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieHom_id___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lieRingSelfModule(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLinearEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4;
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__9;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__3___boxed(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3;
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_comp___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieHom_id(lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1;
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieEquiv__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleHom__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10;
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_id___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_symm___spec__1(lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__6;
static lean_object* l_term___u2243_u2097_u2045___x2c___u2046_____closed__2;
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_trans___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__3(lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleEquiv__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_refl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instZero___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term___u2192_u2097_u2045___u2046_____closed__4;
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9;
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6;
LEAN_EXPORT lean_object* l_lieRingSelfModule___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lieRingSelfModule(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_lieRingSelfModule___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lieRingSelfModule___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_lieRingSelfModule___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieRing_instLieAlgebra___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieRing_instLieAlgebra___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieRing_instLieAlgebra___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_instLieRingModule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_3, 2);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_8);
lean_inc(x_9);
x_11 = lean_apply_1(x_8, x_9);
lean_inc(x_7);
x_12 = lean_apply_2(x_5, x_7, x_11);
x_13 = lean_apply_2(x_1, x_7, x_9);
x_14 = lean_apply_1(x_8, x_13);
x_15 = lean_apply_2(x_10, x_12, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_instLieRingModule___rarg___boxed), 9, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_instLieRingModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LinearMap_instLieRingModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_instLieRingModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_Dual_instLieRingModule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_2, x_3, x_5);
x_9 = lean_apply_1(x_4, x_8);
x_10 = lean_apply_1(x_7, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Ring_toAddCommGroup___rarg(x_1);
x_9 = lean_alloc_closure((void*)(l_Module_Dual_instLieRingModule___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Module_Dual_instLieRingModule___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_Module_Dual_instLieRingModule___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_Module_Dual_instLieRingModule___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Module_Dual_instLieRingModule___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Module_Dual_instLieRingModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Module_Dual_instLieRingModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_→ₗ⁅_⁆_", 19, 11);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" →ₗ⁅", 10, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__8;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__6;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("⁆ ", 4, 2);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__11;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__10;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__13;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046_____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_term___u2192_u2097_u2045___u2046_____closed__15;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___u2046__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__16;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1;
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2;
x_3 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3;
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieHom", 6, 6);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9;
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2192_u2097_u2045___u2046_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 5);
lean_inc(x_14);
x_15 = 0;
x_16 = l_Lean_SourceInfo_fromRef(x_14, x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8;
x_20 = l_Lean_addMacroScope(x_18, x_19, x_17);
x_21 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7;
x_22 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12;
lean_inc(x_16);
x_23 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_20);
lean_ctor_set(x_23, 3, x_22);
x_24 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14;
lean_inc(x_16);
x_25 = l_Lean_Syntax_node3(x_16, x_24, x_11, x_9, x_13);
x_26 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
x_27 = l_Lean_Syntax_node2(x_16, x_26, x_23, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_15, x_22);
lean_dec(x_15);
x_24 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_25 = 0;
x_26 = l_Lean_SourceInfo_fromRef(x_24, x_25);
lean_dec(x_24);
x_27 = l_term___u2192_u2097_u2045___u2046_____closed__5;
lean_inc(x_26);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_term___u2192_u2097_u2045___u2046_____closed__11;
lean_inc(x_26);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_term___u2192_u2097_u2045___u2046_____closed__2;
x_32 = l_Lean_Syntax_node5(x_26, x_31, x_21, x_28, x_20, x_30, x_23);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieHom_instCoeLinearMapId___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieHom_instCoeLinearMapId___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieHom_instCoeLinearMapId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieHom_instCoeLinearMapId(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieHom_instFunLike___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieHom_instFunLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_id___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieHom_id___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieHom_id___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieHom_id(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieHom_id___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_id___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieHom_id___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieHom_id___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieHom_id___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieHom_id___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieHom_id___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instZero___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_LieHom_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LieHom_instZero___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instZero___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieHom_instZero___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieHom_instZero___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieHom_instZero___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieHom_instZero(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieHom_instOne(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieHom_instOne___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieHom_instOne(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instInhabited___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_closure((void*)(l_LieHom_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_6, 0, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieHom_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_LieHom_instInhabited___rarg___boxed), 2, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_instInhabited___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieHom_instInhabited___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieHom_instInhabited___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieHom_instInhabited(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_comp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LieHom_comp___spec__2___rarg), 2, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieHom_comp___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_comp___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieHom_comp___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieHom_comp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_comp___at_LieHom_comp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LieHom_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieHom_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_inverse___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg___boxed), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieHom_inverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_inc(x_7);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieHom_inverse(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieHom_inverse___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieHom_inverse___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieHom_inverse___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LieHom_inverse___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieHom_inverse___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_inverse___at_LieHom_inverse___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieHom_inverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieHom_inverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_2(x_1, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_LieRingModule_compLieHom___rarg), 4, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LieRingModule_compLieHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LieRingModule_compLieHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_≃ₗ⁅_⁆_", 19, 11);
return x_1;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2243_u2097_u2045___u2046_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ≃ₗ⁅", 10, 4);
return x_1;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2243_u2097_u2045___u2046_____closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___u2046_____closed__4;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___u2046_____closed__5;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___u2046_____closed__6;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_term___u2243_u2097_u2045___u2046_____closed__2;
x_2 = lean_unsigned_to_nat(50u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_term___u2243_u2097_u2045___u2046_____closed__7;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___u2046__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2243_u2097_u2045___u2046_____closed__8;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieEquiv", 8, 8);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4;
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2243_u2097_u2045___u2046_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 5);
lean_inc(x_14);
x_15 = 0;
x_16 = l_Lean_SourceInfo_fromRef(x_14, x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3;
x_20 = l_Lean_addMacroScope(x_18, x_19, x_17);
x_21 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2;
x_22 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7;
lean_inc(x_16);
x_23 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_20);
lean_ctor_set(x_23, 3, x_22);
x_24 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14;
lean_inc(x_16);
x_25 = l_Lean_Syntax_node3(x_16, x_24, x_11, x_9, x_13);
x_26 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
x_27 = l_Lean_Syntax_node2(x_16, x_26, x_23, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieEquiv__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(3u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_15, x_22);
lean_dec(x_15);
x_24 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_25 = 0;
x_26 = l_Lean_SourceInfo_fromRef(x_24, x_25);
lean_dec(x_24);
x_27 = l_term___u2243_u2097_u2045___u2046_____closed__3;
lean_inc(x_26);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_term___u2192_u2097_u2045___u2046_____closed__11;
lean_inc(x_26);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_term___u2243_u2097_u2045___u2046_____closed__2;
x_32 = l_Lean_Syntax_node5(x_26, x_31, x_21, x_28, x_20, x_30, x_23);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieEquiv__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieEquiv__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_toLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
lean_ctor_set(x_6, 1, x_8);
return x_6;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_toLinearEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_toLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_toLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_toLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieEquiv_hasCoeToLieHom___rarg___boxed), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieEquiv_hasCoeToLieHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLieHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_hasCoeToLieHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LieEquiv_toLinearEquiv___rarg___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_hasCoeToLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieEquiv_hasCoeToLinearEquiv___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_LieEquiv_instEquivLike___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LieEquiv_instEquivLike___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_LieEquiv_instEquivLike___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LieEquiv_instEquivLike___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_LieEquiv_instEquivLike___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieEquiv_instEquivLike___closed__1;
x_2 = l_LieEquiv_instEquivLike___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_instEquivLike___closed__3;
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instEquivLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_instEquivLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instOne___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LinearEquiv_refl___elambda__1___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instOne___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
x_7 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
lean_ctor_set(x_4, 1, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instOne(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieEquiv_instOne___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_instOne___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instOne___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieEquiv_instOne___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instOne___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_instOne___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instOne___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieEquiv_instOne___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instInhabited___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
x_7 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
lean_ctor_set(x_4, 1, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieEquiv_instInhabited___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_instInhabited___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_instInhabited___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieEquiv_instInhabited___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_instInhabited___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_instInhabited___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_instInhabited___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieEquiv_instInhabited___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieEquiv_refl___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_refl___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg(x_1, x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
x_7 = lean_alloc_closure((void*)(l_LieEquiv_refl___elambda__1___rarg___boxed), 1, 0);
lean_ctor_set(x_4, 1, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_alloc_closure((void*)(l_LieEquiv_refl___elambda__1___rarg___boxed), 1, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieEquiv_refl___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieEquiv_refl___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_refl___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieEquiv_refl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieEquiv_refl___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_refl___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_refl___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieEquiv_refl___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_refl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LieEquiv_refl___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieEquiv_symm___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_symm___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg___boxed), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = l_LieHom_inverse___rarg(x_1, x_2, x_4, x_3, x_5, x_7, x_8, lean_box(0), lean_box(0));
lean_dec(x_8);
lean_dec(x_7);
x_10 = l_LieEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_12 = l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_11, x_11, lean_box(0), lean_box(0), x_10);
lean_dec(x_11);
x_13 = lean_alloc_closure((void*)(l_LieEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieEquiv_symm___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_symm___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_symm___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_symm___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LieEquiv_symm___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieEquiv_symm___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_inverse___at_LieEquiv_symm___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieEquiv_symm___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieEquiv_symm___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_LieEquiv_symm___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_symm___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieEquiv_symm___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieEquiv_trans___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_trans___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LieEquiv_trans___spec__3___rarg), 2, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
x_26 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
x_27 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___rarg(x_22);
x_28 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___rarg(x_23);
x_29 = l_Equiv_trans___rarg(x_27, x_28);
x_30 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg___boxed), 23, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = l_LieHom_comp___rarg(x_1, x_2, x_5, x_3, x_6, x_4, x_7, x_10, x_11);
x_13 = l_LieEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_5, x_6, x_8);
x_14 = l_LieEquiv_toLinearEquiv___rarg(x_1, x_3, x_4, x_6, x_7, x_9);
x_15 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_16 = l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_15, x_15, x_15, x_15, x_15, x_15, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_13, x_14);
lean_dec(x_15);
x_17 = lean_alloc_closure((void*)(l_LieEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieEquiv_trans___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieEquiv_trans___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieEquiv_trans___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieEquiv_trans___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieEquiv_trans___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_comp___at_LieEquiv_trans___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieEquiv_trans___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieEquiv_trans___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l_LinearEquiv_trans___at_LieEquiv_trans___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LieEquiv_trans___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieEquiv_trans___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_→ₗ⁅_,_⁆_", 21, 13);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___u2046_____closed__6;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__4;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__3;
x_3 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__6;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__7;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__8;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__9;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_term___u2192_u2097_u2045___x2c___u2046__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__10;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieModuleHom", 12, 12);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4;
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(6u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 5);
lean_inc(x_16);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_16, x_17);
lean_dec(x_16);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3;
x_22 = l_Lean_addMacroScope(x_20, x_21, x_19);
x_23 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2;
x_24 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7;
lean_inc(x_18);
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
x_26 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14;
lean_inc(x_18);
x_27 = l_Lean_Syntax_node4(x_18, x_26, x_11, x_13, x_9, x_15);
x_28 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
x_29 = l_Lean_Syntax_node2(x_18, x_28, x_25, x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleHom__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(4u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_15, x_22);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_15, x_24);
lean_dec(x_15);
x_26 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_27 = 0;
x_28 = l_Lean_SourceInfo_fromRef(x_26, x_27);
lean_dec(x_26);
x_29 = l_term___u2192_u2097_u2045___u2046_____closed__5;
lean_inc(x_28);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__4;
lean_inc(x_28);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_term___u2192_u2097_u2045___u2046_____closed__11;
lean_inc(x_28);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__2;
x_36 = l_Lean_Syntax_node7(x_28, x_35, x_23, x_30, x_20, x_32, x_21, x_34, x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleHom__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleHom__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LieModuleHom_instCoeOutLinearMapId___rarg___boxed), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieModuleHom_instCoeOutLinearMapId___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instCoeOutLinearMapId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleHom_instCoeOutLinearMapId(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LieModuleHom_instFunLike___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instFunLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleHom_instFunLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_id___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleHom_id___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_id___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_id(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModuleHom_id___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_id___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_id___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleHom_id___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieModuleHom_id___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_id___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleHom_id___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instZero___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_LieHom_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instZero___rarg___boxed), 5, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instZero___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instZero___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleHom_instZero___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instZero___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instZero(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instOne(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instOne___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModuleHom_instOne(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instInhabited___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_LieHom_instZero___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Pi_instZero___elambda__1___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instInhabited___rarg___boxed), 5, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instInhabited___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instInhabited___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleHom_instInhabited___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instInhabited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instInhabited(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_comp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LieModuleHom_comp___spec__2___rarg), 2, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_comp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_comp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LieModuleHom_comp___rarg___boxed), 13, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_comp___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_comp___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleHom_comp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_comp___at_LieModuleHom_comp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_comp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LieModuleHom_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_inverse___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg___boxed), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_inverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_inc(x_10);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_inverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleHom_inverse___rarg___boxed), 12, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_inverse___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_inverse___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_inverse___at_LieModuleHom_inverse___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_inverse___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleHom_inverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instAdd___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_LieModuleHom_instAdd___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_Pi_instAdd___elambda__1___rarg), 4, 3);
lean_closure_set(x_11, 0, x_10);
lean_closure_set(x_11, 1, x_6);
lean_closure_set(x_11, 2, x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instAdd___rarg___boxed), 7, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instAdd___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instAdd___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieModuleHom_instAdd___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instAdd___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instAdd(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSub___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instSub___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_closure((void*)(l_Pi_instSub___elambda__1___rarg), 4, 3);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instSub___rarg___boxed), 7, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSub___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instSub___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieModuleHom_instSub___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instSub___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instSub(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instNeg___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_SubNegZeroMonoid_toNegZeroClass___rarg(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_LieModuleHom_instNeg___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_Pi_instNeg___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_instNeg___rarg___boxed), 6, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instNeg___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instNeg___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LieModuleHom_instNeg___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_LieModuleHom_instNeg___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instNeg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_instNeg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasNSMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_13 = l_LinearMap_addCommMonoid___rarg(x_11, x_5, x_6, x_12);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, x_9, x_10);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleHom_hasNSMul___rarg___boxed), 10, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasNSMul___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_hasNSMul___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasNSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LieModuleHom_hasNSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasZSMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_closure((void*)(l_LinearMap_instSMul___rarg), 5, 4);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_LieModuleHom_hasZSMul___rarg___boxed), 7, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_hasZSMul___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_hasZSMul___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_hasZSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_hasZSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_LieModuleHom_hasZSMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAddCommGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_LieModuleHom_instAdd___rarg___boxed), 7, 5);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_8);
lean_inc(x_4);
x_10 = l_LieModuleHom_instZero___rarg(x_4, x_5, x_6, x_7, x_8);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_LieModuleHom_hasNSMul___rarg___boxed), 10, 8);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
lean_closure_set(x_11, 5, x_6);
lean_closure_set(x_11, 6, x_7);
lean_closure_set(x_11, 7, x_8);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_LieModuleHom_instNeg___rarg___boxed), 6, 5);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
lean_closure_set(x_12, 3, x_7);
lean_closure_set(x_12, 4, x_8);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_alloc_closure((void*)(l_LieModuleHom_instSub___rarg___boxed), 7, 5);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_6);
lean_closure_set(x_13, 3, x_7);
lean_closure_set(x_13, 4, x_8);
x_14 = lean_alloc_closure((void*)(l_LieModuleHom_hasZSMul___rarg___boxed), 7, 5);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_8);
x_15 = lean_alloc_closure((void*)(l_Function_Injective_addMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_11);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_10);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_alloc_closure((void*)(l_Function_Injective_subNegMonoid___elambda__1___rarg), 3, 1);
lean_closure_set(x_17, 0, x_14);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_13);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instAddCommGroup(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleHom_instAddCommGroup___rarg), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSMul___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_1(x_7, x_8);
x_10 = lean_apply_2(x_1, x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LieModuleHom_instSMul___rarg___boxed), 8, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instSMul___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instSMul___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModuleHom_instSMul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieModuleHom_instSMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instModule___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_1(x_7, x_8);
x_10 = lean_apply_2(x_1, x_6, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LieModuleHom_instModule___rarg___boxed), 8, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleHom_instModule___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleHom_instModule___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModuleHom_instModule___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleHom_instModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieModuleHom_instModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_10;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term_≃ₗ⁅_,_⁆_", 21, 13);
return x_1;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___u2046_____closed__5;
x_3 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__3;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__4;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term___u2192_u2097_u2045___u2046_____closed__4;
x_2 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__5;
x_3 = l_term___u2192_u2097_u2045___u2046_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__2;
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__6;
x_5 = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_term___u2243_u2097_u2045___x2c___u2046__() {
_start:
{
lean_object* x_1; 
x_1 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__7;
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LieModuleEquiv", 14, 14);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4;
x_2 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(6u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 5);
lean_inc(x_16);
x_17 = 0;
x_18 = l_Lean_SourceInfo_fromRef(x_16, x_17);
lean_dec(x_16);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3;
x_22 = l_Lean_addMacroScope(x_20, x_21, x_19);
x_23 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2;
x_24 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7;
lean_inc(x_18);
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
x_26 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14;
lean_inc(x_18);
x_27 = l_Lean_Syntax_node4(x_18, x_26, x_11, x_13, x_9, x_15);
x_28 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
x_29 = l_Lean_Syntax_node2(x_18, x_28, x_25, x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleEquiv__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(4u);
lean_inc(x_15);
x_17 = l_Lean_Syntax_matchesNull(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_20 = l_Lean_Syntax_getArg(x_15, x_8);
x_21 = l_Lean_Syntax_getArg(x_15, x_14);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_Lean_Syntax_getArg(x_15, x_22);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_15, x_24);
lean_dec(x_15);
x_26 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_27 = 0;
x_28 = l_Lean_SourceInfo_fromRef(x_26, x_27);
lean_dec(x_26);
x_29 = l_term___u2243_u2097_u2045___u2046_____closed__3;
lean_inc(x_28);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_term___u2192_u2097_u2045___x2c___u2046_____closed__4;
lean_inc(x_28);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_term___u2192_u2097_u2045___u2046_____closed__11;
lean_inc(x_28);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_term___u2243_u2097_u2045___x2c___u2046_____closed__2;
x_36 = l_Lean_Syntax_node7(x_28, x_35, x_23, x_30, x_20, x_32, x_21, x_34, x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleEquiv__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieModuleEquiv__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LieModuleEquiv_toLinearEquiv___elambda__1___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_toLinearEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_inc(x_9);
x_11 = lean_alloc_closure((void*)(l_LieModuleEquiv_toLinearEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_11, 0, x_9);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_9, 0);
lean_dec(x_14);
lean_ctor_set(x_9, 1, x_11);
return x_9;
}
else
{
lean_object* x_15; 
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_toLinearEquiv___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleEquiv_toLinearEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_toLinearEquiv___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_toLinearEquiv___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toLinearEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieModuleEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___elambda__1___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___elambda__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___elambda__2___rarg), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___elambda__1___rarg), 2, 1);
lean_closure_set(x_12, 0, x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleEquiv_toEquiv___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LieModuleEquiv_toEquiv___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_toEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieModuleEquiv_toEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieModuleEquiv_toEquiv___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_hasCoeToEquiv___rarg), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LieModuleEquiv_hasCoeToLieModuleHom___rarg___boxed), 1, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieModuleEquiv_hasCoeToLieModuleHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLieModuleHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleEquiv_hasCoeToLieModuleHom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLinearEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieModuleEquiv_toLinearEquiv___rarg___boxed), 9, 8);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_4);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
lean_closure_set(x_9, 6, x_7);
lean_closure_set(x_9, 7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_hasCoeToLinearEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_hasCoeToLinearEquiv___rarg), 8, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_LieModuleEquiv_instEquivLike___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LieModuleEquiv_instEquivLike___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_LieModuleEquiv_instEquivLike___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_LieModuleEquiv_instEquivLike___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_LieModuleEquiv_instEquivLike___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_LieModuleEquiv_instEquivLike___closed__1;
x_2 = l_LieModuleEquiv_instEquivLike___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleEquiv_instEquivLike___closed__3;
return x_13;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instEquivLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LieModuleEquiv_instEquivLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instOne___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg(x_1, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModuleEquiv_instOne___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_instOne___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instOne___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieModuleEquiv_instOne___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instOne___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_instOne___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieModuleEquiv_instOne___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instOne___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleEquiv_instOne___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instInhabited___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg(x_1, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModuleEquiv_instInhabited___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_instInhabited___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieModuleEquiv_instInhabited___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_instInhabited___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieModuleEquiv_instInhabited___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_instInhabited___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleEquiv_instInhabited___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LieModuleEquiv_refl___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_refl___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_5 = l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg(x_1, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_alloc_closure((void*)(l_LieModuleEquiv_refl___elambda__1___rarg___boxed), 1, 0);
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_closure((void*)(l_LieModuleEquiv_refl___elambda__1___rarg___boxed), 1, 0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LieModuleEquiv_refl___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_LieModuleEquiv_refl___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_refl___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_id___at_LieModuleEquiv_refl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LinearMap_id___at_LieModuleEquiv_refl___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_refl___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_refl___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearEquiv_refl___at_LieModuleEquiv_refl___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_refl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_LieModuleEquiv_refl___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieModuleEquiv_symm___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_symm___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg___boxed), 3, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___rarg(x_10);
x_13 = lean_alloc_closure((void*)(l_LinearEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = l_LieModuleHom_inverse___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10, x_11, lean_box(0), lean_box(0));
lean_dec(x_11);
lean_dec(x_10);
x_13 = l_LieModuleEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_15 = l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg(x_1, x_3, x_4, x_5, x_6, x_14, x_14, lean_box(0), lean_box(0), x_13);
lean_dec(x_14);
x_16 = lean_alloc_closure((void*)(l_LieModuleEquiv_symm___elambda__1___rarg), 2, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LieModuleEquiv_symm___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModuleEquiv_symm___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_symm___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_symm___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_LinearMap_inverse___at_LieModuleEquiv_symm___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_symm___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieModuleEquiv_symm___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_symm___at_LieModuleEquiv_symm___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_symm___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LieModuleEquiv_symm___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_LieModuleEquiv_trans___elambda__1___rarg), 2, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_trans___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = lean_alloc_closure((void*)(l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3___rarg), 2, 0);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = lean_alloc_closure((void*)(l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___rarg), 1, 0);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___rarg(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
x_26 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
x_27 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___rarg(x_22);
x_28 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___rarg(x_23);
x_29 = l_Equiv_trans___rarg(x_27, x_28);
x_30 = lean_alloc_closure((void*)(l_LinearEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg___boxed), 23, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
x_16 = l_LieModuleHom_comp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_14, x_15);
x_17 = l_LieModuleEquiv_toLinearEquiv___rarg(x_1, x_2, x_3, x_4, x_6, x_7, x_9, x_10, x_12);
x_18 = l_LieModuleEquiv_toLinearEquiv___rarg(x_1, x_2, x_4, x_5, x_7, x_8, x_10, x_11, x_13);
x_19 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_20 = l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_19, x_19, x_19, x_19, x_19, x_19, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), x_17, x_18);
lean_dec(x_19);
x_21 = lean_alloc_closure((void*)(l_LieModuleEquiv_trans___elambda__1___rarg), 2, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_LieModuleEquiv_trans___rarg___boxed), 13, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_LieModuleEquiv_trans___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_LieModuleEquiv_trans___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_LieModuleEquiv_trans___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_LinearMap_comp___at_LieModuleEquiv_trans___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_LinearEquiv_toAddEquiv___at_LieModuleEquiv_trans___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_LinearEquiv_toEquiv___at_LieModuleEquiv_trans___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l_LinearEquiv_trans___at_LieModuleEquiv_trans___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
}
LEAN_EXPORT lean_object* l_LieModuleEquiv_trans___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_LieModuleEquiv_trans___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Submodule_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Bracket(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Abel(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Submodule_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Bracket(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Abel(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1 = _init_l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_LinearMap_instLieRingModule___spec__1___closed__1);
l_term___u2192_u2097_u2045___u2046_____closed__1 = _init_l_term___u2192_u2097_u2045___u2046_____closed__1();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__1);
l_term___u2192_u2097_u2045___u2046_____closed__2 = _init_l_term___u2192_u2097_u2045___u2046_____closed__2();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__2);
l_term___u2192_u2097_u2045___u2046_____closed__3 = _init_l_term___u2192_u2097_u2045___u2046_____closed__3();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__3);
l_term___u2192_u2097_u2045___u2046_____closed__4 = _init_l_term___u2192_u2097_u2045___u2046_____closed__4();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__4);
l_term___u2192_u2097_u2045___u2046_____closed__5 = _init_l_term___u2192_u2097_u2045___u2046_____closed__5();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__5);
l_term___u2192_u2097_u2045___u2046_____closed__6 = _init_l_term___u2192_u2097_u2045___u2046_____closed__6();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__6);
l_term___u2192_u2097_u2045___u2046_____closed__7 = _init_l_term___u2192_u2097_u2045___u2046_____closed__7();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__7);
l_term___u2192_u2097_u2045___u2046_____closed__8 = _init_l_term___u2192_u2097_u2045___u2046_____closed__8();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__8);
l_term___u2192_u2097_u2045___u2046_____closed__9 = _init_l_term___u2192_u2097_u2045___u2046_____closed__9();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__9);
l_term___u2192_u2097_u2045___u2046_____closed__10 = _init_l_term___u2192_u2097_u2045___u2046_____closed__10();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__10);
l_term___u2192_u2097_u2045___u2046_____closed__11 = _init_l_term___u2192_u2097_u2045___u2046_____closed__11();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__11);
l_term___u2192_u2097_u2045___u2046_____closed__12 = _init_l_term___u2192_u2097_u2045___u2046_____closed__12();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__12);
l_term___u2192_u2097_u2045___u2046_____closed__13 = _init_l_term___u2192_u2097_u2045___u2046_____closed__13();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__13);
l_term___u2192_u2097_u2045___u2046_____closed__14 = _init_l_term___u2192_u2097_u2045___u2046_____closed__14();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__14);
l_term___u2192_u2097_u2045___u2046_____closed__15 = _init_l_term___u2192_u2097_u2045___u2046_____closed__15();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__15);
l_term___u2192_u2097_u2045___u2046_____closed__16 = _init_l_term___u2192_u2097_u2045___u2046_____closed__16();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046_____closed__16);
l_term___u2192_u2097_u2045___u2046__ = _init_l_term___u2192_u2097_u2045___u2046__();
lean_mark_persistent(l_term___u2192_u2097_u2045___u2046__);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__1);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__2);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__3);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__4);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__5);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__6);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__7);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__8);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__9);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__10);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__11);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__12);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__13);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___u2046____1___closed__14);
l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1 = _init_l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__1);
l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2 = _init_l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______unexpand__LieHom__1___closed__2);
l_term___u2243_u2097_u2045___u2046_____closed__1 = _init_l_term___u2243_u2097_u2045___u2046_____closed__1();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__1);
l_term___u2243_u2097_u2045___u2046_____closed__2 = _init_l_term___u2243_u2097_u2045___u2046_____closed__2();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__2);
l_term___u2243_u2097_u2045___u2046_____closed__3 = _init_l_term___u2243_u2097_u2045___u2046_____closed__3();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__3);
l_term___u2243_u2097_u2045___u2046_____closed__4 = _init_l_term___u2243_u2097_u2045___u2046_____closed__4();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__4);
l_term___u2243_u2097_u2045___u2046_____closed__5 = _init_l_term___u2243_u2097_u2045___u2046_____closed__5();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__5);
l_term___u2243_u2097_u2045___u2046_____closed__6 = _init_l_term___u2243_u2097_u2045___u2046_____closed__6();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__6);
l_term___u2243_u2097_u2045___u2046_____closed__7 = _init_l_term___u2243_u2097_u2045___u2046_____closed__7();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__7);
l_term___u2243_u2097_u2045___u2046_____closed__8 = _init_l_term___u2243_u2097_u2045___u2046_____closed__8();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046_____closed__8);
l_term___u2243_u2097_u2045___u2046__ = _init_l_term___u2243_u2097_u2045___u2046__();
lean_mark_persistent(l_term___u2243_u2097_u2045___u2046__);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__1);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__2);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__3);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__4);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__5);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__6);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___u2046____1___closed__7);
l_LieEquiv_instEquivLike___closed__1 = _init_l_LieEquiv_instEquivLike___closed__1();
lean_mark_persistent(l_LieEquiv_instEquivLike___closed__1);
l_LieEquiv_instEquivLike___closed__2 = _init_l_LieEquiv_instEquivLike___closed__2();
lean_mark_persistent(l_LieEquiv_instEquivLike___closed__2);
l_LieEquiv_instEquivLike___closed__3 = _init_l_LieEquiv_instEquivLike___closed__3();
lean_mark_persistent(l_LieEquiv_instEquivLike___closed__3);
l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1 = _init_l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1();
lean_mark_persistent(l_LinearEquiv_refl___at_LieEquiv_instOne___spec__1___rarg___closed__1);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__1 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__1();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__1);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__2 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__2();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__2);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__3 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__3();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__3);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__4 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__4();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__4);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__5 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__5();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__5);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__6 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__6();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__6);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__7 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__7();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__7);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__8 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__8();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__8);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__9 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__9();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__9);
l_term___u2192_u2097_u2045___x2c___u2046_____closed__10 = _init_l_term___u2192_u2097_u2045___x2c___u2046_____closed__10();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046_____closed__10);
l_term___u2192_u2097_u2045___x2c___u2046__ = _init_l_term___u2192_u2097_u2045___x2c___u2046__();
lean_mark_persistent(l_term___u2192_u2097_u2045___x2c___u2046__);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__1);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__2);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__3);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__4);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__5);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__6);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2192_u2097_u2045___x2c___u2046____1___closed__7);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__1 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__1();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__1);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__2 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__2();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__2);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__3 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__3();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__3);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__4 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__4();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__4);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__5 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__5();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__5);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__6 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__6();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__6);
l_term___u2243_u2097_u2045___x2c___u2046_____closed__7 = _init_l_term___u2243_u2097_u2045___x2c___u2046_____closed__7();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046_____closed__7);
l_term___u2243_u2097_u2045___x2c___u2046__ = _init_l_term___u2243_u2097_u2045___x2c___u2046__();
lean_mark_persistent(l_term___u2243_u2097_u2045___x2c___u2046__);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__1);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__2);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__3);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__4);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__5);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__6);
l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7 = _init_l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7();
lean_mark_persistent(l___aux__Mathlib__Algebra__Lie__Basic______macroRules__term___u2243_u2097_u2045___x2c___u2046____1___closed__7);
l_LieModuleEquiv_instEquivLike___closed__1 = _init_l_LieModuleEquiv_instEquivLike___closed__1();
lean_mark_persistent(l_LieModuleEquiv_instEquivLike___closed__1);
l_LieModuleEquiv_instEquivLike___closed__2 = _init_l_LieModuleEquiv_instEquivLike___closed__2();
lean_mark_persistent(l_LieModuleEquiv_instEquivLike___closed__2);
l_LieModuleEquiv_instEquivLike___closed__3 = _init_l_LieModuleEquiv_instEquivLike___closed__3();
lean_mark_persistent(l_LieModuleEquiv_instEquivLike___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
