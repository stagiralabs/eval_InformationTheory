// Lean compiler output
// Module: Mathlib.AlgebraicTopology.DoldKan.Decomposition
// Imports: Init Mathlib.AlgebraicTopology.DoldKan.PInfty
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
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp(lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_apply_1(x_8, x_1);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_apply_1(x_11, x_9);
x_13 = lean_apply_5(x_7, x_10, x_2, x_3, x_12, x_5);
return x_13;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_inc(x_9);
x_12 = lean_apply_1(x_9, x_11);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_14 = lean_apply_5(x_8, x_12, x_4, x_5, x_13, x_7);
x_15 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_4);
lean_closure_set(x_15, 2, x_5);
lean_closure_set(x_15, 3, x_6);
lean_closure_set(x_15, 4, x_7);
lean_closure_set(x_15, 5, x_1);
lean_closure_set(x_15, 6, x_8);
lean_closure_set(x_15, 7, x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_postComp___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AlgebraicTopology_DoldKan_MorphComponents_postComp___elambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_10 = lean_apply_1(x_6, x_1);
lean_inc(x_1);
x_11 = lean_apply_1(x_7, x_1);
x_12 = lean_apply_1(x_8, x_1);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_apply_1(x_13, x_9);
x_15 = lean_apply_5(x_5, x_10, x_11, x_2, x_12, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg___boxed), 9, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_inc(x_9);
lean_inc(x_11);
x_12 = lean_apply_1(x_9, x_11);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_13);
lean_inc(x_11);
x_14 = lean_apply_1(x_13, x_11);
lean_inc(x_7);
x_15 = lean_apply_1(x_7, x_11);
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
lean_inc(x_8);
lean_inc(x_5);
x_17 = lean_apply_5(x_8, x_12, x_14, x_5, x_15, x_16);
x_18 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg___boxed), 9, 8);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_5);
lean_closure_set(x_18, 2, x_6);
lean_closure_set(x_18, 3, x_1);
lean_closure_set(x_18, 4, x_8);
lean_closure_set(x_18, 5, x_9);
lean_closure_set(x_18, 6, x_13);
lean_closure_set(x_18, 7, x_7);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_AlgebraicTopology_DoldKan_MorphComponents_preComp___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_AlgebraicTopology_DoldKan_MorphComponents_preComp___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_PInfty(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_DoldKan_Decomposition(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_DoldKan_PInfty(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
