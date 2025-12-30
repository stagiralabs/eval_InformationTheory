// Lean compiler output
// Module: Mathlib.AlgebraicTopology.SimplicialSet.Subcomplex
// Imports: Init Mathlib.AlgebraicTopology.SimplicialSet.Basic Mathlib.CategoryTheory.Subpresheaf.Basic
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
LEAN_EXPORT lean_object* l_SSet_Subcomplex_toSSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf__u03b9___at_SSet_Subcomplex__u03b9___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SSet_Subcomplex_toSSet___boxed(lean_object*, lean_object*);
lean_object* l_CategoryTheory_Subpresheaf__u03b9___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___closed__1;
LEAN_EXPORT lean_object* l_SSet_instCoeOutSubcomplex(lean_object*);
LEAN_EXPORT lean_object* l_SSet_Subcomplex__u03b9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1(lean_object*, lean_object*);
extern lean_object* l_SimplexCategory_smallCategory;
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_4(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_SimplexCategory_smallCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___lambda__1), 5, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, lean_box(0));
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_Subcomplex_toSSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SSet_Subcomplex_toSSet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SSet_Subcomplex_toSSet(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SSet_instCoeOutSubcomplex(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Subpresheaf__u03b9___at_SSet_Subcomplex__u03b9___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_SimplexCategory_smallCategory;
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Subpresheaf__u03b9___elambda__1___boxed), 5, 4);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_3);
lean_closure_set(x_4, 2, x_1);
lean_closure_set(x_4, 3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SSet_Subcomplex__u03b9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_SimplexCategory_smallCategory;
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_Subpresheaf__u03b9___elambda__1___boxed), 5, 4);
lean_closure_set(x_4, 0, lean_box(0));
lean_closure_set(x_4, 1, x_3);
lean_closure_set(x_4, 2, x_1);
lean_closure_set(x_4, 3, x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Subpresheaf_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_AlgebraicTopology_SimplicialSet_Subcomplex(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_AlgebraicTopology_SimplicialSet_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Subpresheaf_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___closed__1 = _init_l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_Subpresheaf_toPresheaf___at_SSet_Subcomplex_toSSet___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
