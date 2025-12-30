// Lean compiler output
// Module: Mathlib.RingTheory.Localization.AtPrime
// Imports: Init Mathlib.RingTheory.Localization.Ideal Mathlib.RingTheory.LocalRing.MaximalIdeal.Basic Mathlib.Algebra.Group.Units.Hom Mathlib.RingTheory.Ideal.Over
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
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime(lean_object*);
lean_object* l_Ideal_primeCompl___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IsLocalization_orderIsoOfPrime___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1;
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1;
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Ideal_primeCompl___rarg(x_1, x_5, lean_box(0));
x_9 = l_IsLocalization_orderIsoOfPrime___rarg(x_1, x_8, lean_box(0), x_3, x_4, lean_box(0));
lean_dec(x_8);
x_10 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
x_11 = l_Equiv_trans___rarg(x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsLocalization_AtPrime_orderIsoOfPrime___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_AtPrime_orderIsoOfPrime___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IsLocalization_AtPrime_orderIsoOfPrime___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Ideal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Over(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Localization_AtPrime(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Ideal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_LocalRing_MaximalIdeal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Over(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1 = _init_l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1();
lean_mark_persistent(l_OrderIso_setCongr___at_IsLocalization_AtPrime_orderIsoOfPrime___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
