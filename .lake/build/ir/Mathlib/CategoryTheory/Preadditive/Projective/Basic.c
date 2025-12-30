// Lean compiler output
// Module: Mathlib.CategoryTheory.Preadditive.Projective.Basic
// Imports: Init Mathlib.CategoryTheory.Adjunction.FullyFaithful Mathlib.CategoryTheory.Adjunction.Limits Mathlib.CategoryTheory.Limits.Constructions.EpiMono Mathlib.CategoryTheory.Limits.Preserves.Finite Mathlib.CategoryTheory.Limits.Shapes.BinaryBiproducts
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
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_inc(x_9);
x_10 = lean_apply_1(x_8, x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_3(x_11, x_9, x_6, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_Adjunction_mapProjectivePresentation___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Adjunction_mapProjectivePresentation___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_Adjunction_mapProjectivePresentation(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_9);
x_10 = lean_apply_1(x_8, x_9);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_5);
x_14 = lean_apply_1(x_13, x_5);
lean_inc(x_14);
x_15 = lean_apply_1(x_8, x_14);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_dec(x_6);
x_18 = lean_apply_3(x_16, x_9, x_14, x_17);
x_19 = lean_ctor_get(x_4, 2);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_5);
x_21 = lean_apply_1(x_20, x_5);
lean_inc(x_10);
x_22 = lean_apply_5(x_11, x_10, x_15, x_5, x_18, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_CategoryTheory_Equivalence_projectivePresentationOfMapProjectivePresentation___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_FullyFaithful(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Adjunction_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryBiproducts(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Preadditive_Projective_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_FullyFaithful(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Adjunction_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Constructions_EpiMono(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_BinaryBiproducts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
