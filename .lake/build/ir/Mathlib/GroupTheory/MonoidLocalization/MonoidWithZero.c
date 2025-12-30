// Lean compiler output
// Module: Mathlib.GroupTheory.MonoidLocalization.MonoidWithZero
// Imports: Init Mathlib.Algebra.GroupWithZero.Hom Mathlib.Algebra.Regular.Basic Mathlib.GroupTheory.MonoidLocalization.Basic Mathlib.RingTheory.OreLocalization.Basic Mathlib.Algebra.GroupWithZero.Units.Basic
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
LEAN_EXPORT lean_object* l_Localization_instCommMonoidWithZero(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Monoid_toMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Localization_instCommMonoidWithZero___rarg___closed__2;
static lean_object* l_Localization_instCommMonoidWithZero___rarg___closed__1;
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_OreLocalization_zero___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_instCommMonoidWithZero___rarg(lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg(lean_object*);
lean_object* l_OreLocalization_instMonoid___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submonoid_LocalizationWithZeroMap_toMonoidWithZeroHom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_Localization_instCommMonoidWithZero___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Localization_instCommMonoidWithZero___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Localization_instCommMonoidWithZero___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Localization_instCommMonoidWithZero___rarg___closed__1;
x_5 = l_Localization_instCommMonoidWithZero___rarg___closed__2;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_3);
x_7 = l_OreLocalization_instMonoid___rarg(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Monoid_toMulAction___rarg___boxed), 3, 1);
lean_closure_set(x_9, 0, x_3);
x_10 = l_OreLocalization_zero___rarg(x_3, x_2, x_6, lean_box(0), x_8, x_9);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Localization_instCommMonoidWithZero(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_instCommMonoidWithZero___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Regular_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_OreLocalization_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_MonoidWithZero(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Regular_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_MonoidLocalization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_OreLocalization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Units_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Localization_instCommMonoidWithZero___rarg___closed__1 = _init_l_Localization_instCommMonoidWithZero___rarg___closed__1();
lean_mark_persistent(l_Localization_instCommMonoidWithZero___rarg___closed__1);
l_Localization_instCommMonoidWithZero___rarg___closed__2 = _init_l_Localization_instCommMonoidWithZero___rarg___closed__2();
lean_mark_persistent(l_Localization_instCommMonoidWithZero___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
