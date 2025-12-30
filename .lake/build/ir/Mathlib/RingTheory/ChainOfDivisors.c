// Lean compiler output
// Module: Mathlib.RingTheory.ChainOfDivisors
// Imports: Init Mathlib.Algebra.GCDMonoid.Basic Mathlib.Algebra.IsPrimePow Mathlib.RingTheory.UniqueFactorizationDomain.Multiplicity Mathlib.Data.ZMod.Defs Mathlib.Order.Atoms Mathlib.Order.Hom.Bounded
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
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_associatesEquivOfUniqueUnits___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv(lean_object*);
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_associatesEquivOfUniqueUnits___rarg(x_1, lean_box(0));
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_associatesEquivOfUniqueUnits___rarg(x_1, lean_box(0));
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_3);
x_7 = l_Equiv_symm___elambda__2___rarg(x_2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__1), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
x_11 = lean_alloc_closure((void*)(l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___lambda__2), 3, 2);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_mkFactorOrderIsoOfFactorDvdEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_mkFactorOrderIsoOfFactorDvdEquiv___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_IsPrimePow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Multiplicity(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ZMod_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Atoms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Bounded(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_ChainOfDivisors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_IsPrimePow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_UniqueFactorizationDomain_Multiplicity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ZMod_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Bounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
