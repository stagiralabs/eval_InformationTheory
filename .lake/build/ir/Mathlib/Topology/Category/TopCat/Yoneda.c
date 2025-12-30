// Lean compiler output
// Module: Mathlib.Topology.Category.TopCat.Yoneda
// Imports: Init Mathlib.CategoryTheory.Limits.Preserves.Finite Mathlib.CategoryTheory.Limits.Opposites Mathlib.CategoryTheory.Limits.Preserves.Shapes.Products Mathlib.CategoryTheory.Limits.Shapes.Types Mathlib.Topology.Category.TopCat.Limits.Products
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
extern lean_object* l_TopCat_instCategory;
static lean_object* l_ContinuousMap_yonedaPresheaf_x27___closed__3;
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_ContinuousMap_yonedaPresheaf_x27___closed__1;
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf(lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27(lean_object*, lean_object*);
static lean_object* l_ContinuousMap_yonedaPresheaf_x27___closed__2;
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_6, x_3, x_2, x_4);
x_8 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_yonedaPresheaf___rarg___lambda__1), 5, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, lean_box(0));
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_yonedaPresheaf___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_yonedaPresheaf___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_ContinuousMap_comp___elambda__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
return x_5;
}
}
static lean_object* _init_l_ContinuousMap_yonedaPresheaf_x27___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_TopCat_instCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_ContinuousMap_yonedaPresheaf_x27___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContinuousMap_yonedaPresheaf_x27___lambda__1___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_ContinuousMap_yonedaPresheaf_x27___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ContinuousMap_yonedaPresheaf_x27___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, lean_box(0));
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_yonedaPresheaf_x27___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ContinuousMap_yonedaPresheaf_x27___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_yonedaPresheaf_x27(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Opposites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Products(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_TopCat_Limits_Products(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_TopCat_Yoneda(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Opposites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Shapes_Products(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_TopCat_Limits_Products(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ContinuousMap_yonedaPresheaf_x27___closed__1 = _init_l_ContinuousMap_yonedaPresheaf_x27___closed__1();
lean_mark_persistent(l_ContinuousMap_yonedaPresheaf_x27___closed__1);
l_ContinuousMap_yonedaPresheaf_x27___closed__2 = _init_l_ContinuousMap_yonedaPresheaf_x27___closed__2();
lean_mark_persistent(l_ContinuousMap_yonedaPresheaf_x27___closed__2);
l_ContinuousMap_yonedaPresheaf_x27___closed__3 = _init_l_ContinuousMap_yonedaPresheaf_x27___closed__3();
lean_mark_persistent(l_ContinuousMap_yonedaPresheaf_x27___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
