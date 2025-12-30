// Lean compiler output
// Module: Mathlib.AlgebraicTopology.SimplicialCategory.Basic
// Imports: Init Mathlib.AlgebraicTopology.SimplicialSet.Monoidal Mathlib.CategoryTheory.Enriched.Ordinary.Basic
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
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_SSet_unitHomEquiv(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_SimplicialCategory_sHom___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_SimplicialCategory_sHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_3(x_6, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___rarg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_SimplicialCategory_sHomComp___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_eComp___at_CategoryTheory_SimplicialCategory_sHomComp___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_sHomComp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_CategoryTheory_SimplicialCategory_sHomComp___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_5 = l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___rarg(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, x_3, x_4);
x_9 = l_SSet_unitHomEquiv(x_8);
x_10 = l_Equiv_trans___rarg(x_5, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_eHomEquiv___at_CategoryTheory_SimplicialCategory_homEquiv_x27___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_CategoryTheory_SimplicialCategory_homEquiv_x27___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Monoidal(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialCategory_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialSet_Monoidal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Enriched_Ordinary_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
