// Lean compiler output
// Module: Mathlib.CategoryTheory.Closed.Enrichment
// Imports: Init Mathlib.CategoryTheory.Enriched.Ordinary.Basic Mathlib.CategoryTheory.Closed.Monoidal
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
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_MonoidalClosed_id___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf(lean_object*);
lean_object* l_CategoryTheory_MonoidalClosed_curryHomEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_MonoidalClosed_comp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_CategoryTheory_MonoidalClosed_id___rarg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
lean_inc(x_4);
x_7 = lean_apply_1(x_1, x_4);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = l_CategoryTheory_MonoidalClosed_comp___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__2), 4, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg___lambda__3), 6, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedCategorySelf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_4);
x_6 = lean_apply_1(x_1, x_4);
x_7 = l_CategoryTheory_MonoidalClosed_curryHomEquiv_x27___rarg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_CategoryTheory_MonoidalClosed_enrichedCategorySelf___rarg(x_1, x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg___lambda__1), 5, 3);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_MonoidalClosed_enrichedOrdinaryCategorySelf___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Closed_Monoidal(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Closed_Enrichment(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Closed_Monoidal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
