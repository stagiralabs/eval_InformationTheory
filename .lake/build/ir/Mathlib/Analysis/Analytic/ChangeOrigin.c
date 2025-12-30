// Lean compiler output
// Module: Mathlib.Analysis.Analytic.ChangeOrigin
// Imports: Init Mathlib.Analysis.Analytic.Basic
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
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv;
static lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2;
static lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1;
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__2(lean_object*);
lean_object* l_finCongr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__1(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
static lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3;
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_3, x_4);
x_6 = lean_nat_sub(x_2, x_5);
x_7 = lean_nat_add(x_6, x_5);
x_8 = l_finCongr(x_2, x_7, lean_box(0));
lean_dec(x_7);
lean_dec(x_2);
x_9 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Multiset_map___rarg(x_9, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_nat_add(x_3, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_nat_add(x_3, x_7);
lean_dec(x_7);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
static lean_object* _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FormalMultilinearSeries_changeOriginIndexEquiv___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1;
x_2 = l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_FormalMultilinearSeries_changeOriginIndexEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Analytic_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Analytic_ChangeOrigin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Analytic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1 = _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1();
lean_mark_persistent(l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__1);
l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2 = _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2();
lean_mark_persistent(l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__2);
l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3 = _init_l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3();
lean_mark_persistent(l_FormalMultilinearSeries_changeOriginIndexEquiv___closed__3);
l_FormalMultilinearSeries_changeOriginIndexEquiv = _init_l_FormalMultilinearSeries_changeOriginIndexEquiv();
lean_mark_persistent(l_FormalMultilinearSeries_changeOriginIndexEquiv);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
