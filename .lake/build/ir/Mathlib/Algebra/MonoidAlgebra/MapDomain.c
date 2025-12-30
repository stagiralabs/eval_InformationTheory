// Lean compiler output
// Module: Mathlib.Algebra.MonoidAlgebra.MapDomain
// Imports: Init Mathlib.Algebra.BigOperators.Finsupp Mathlib.Algebra.Module.BigOperators Mathlib.Data.Finsupp.SMul Mathlib.LinearAlgebra.Finsupp.LSum Mathlib.Algebra.Module.Submodule.Basic Mathlib.Algebra.MonoidAlgebra.Defs
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
lean_object* l_Finsupp_equivMapDomain___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Finsupp_domCongr___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Additive_ofMul(lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive(lean_object*, lean_object*);
static lean_object* l_MonoidAlgebra_toAdditive___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative(lean_object*, lean_object*);
lean_object* l_Multiplicative_ofAdd(lean_object*);
static lean_object* l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1;
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative___rarg(lean_object*, lean_object*);
static lean_object* _init_l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiplicative_ofAdd(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1;
x_7 = l_Finsupp_domCongr___rarg(x_5, x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_4);
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___rarg___boxed), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_6);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidAlgebra_toMultiplicative___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toMultiplicative___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidAlgebra_toMultiplicative___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_MonoidAlgebra_toAdditive___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Additive_ofMul(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_MonoidAlgebra_toAdditive___rarg___closed__1;
x_7 = l_Finsupp_domCongr___rarg(x_5, x_6);
x_8 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_4);
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_Finsupp_equivMapDomain___rarg___boxed), 3, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_6);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_7, 0);
lean_dec(x_12);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonoidAlgebra_toAdditive___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidAlgebra_toAdditive___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MonoidAlgebra_toAdditive___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_BigOperators(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_SMul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_LSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Module_Submodule_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_MapDomain(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_BigOperators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_SMul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_LSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Module_Submodule_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1 = _init_l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1();
lean_mark_persistent(l_AddMonoidAlgebra_toMultiplicative___rarg___closed__1);
l_MonoidAlgebra_toAdditive___rarg___closed__1 = _init_l_MonoidAlgebra_toAdditive___rarg___closed__1();
lean_mark_persistent(l_MonoidAlgebra_toAdditive___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
