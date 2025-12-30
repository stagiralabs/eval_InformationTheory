// Lean compiler output
// Module: Mathlib.Condensed.TopComparison
// Imports: Init Mathlib.CategoryTheory.Limits.Preserves.Opposites Mathlib.CategoryTheory.Sites.Coherent.SheafComparison Mathlib.Condensed.Basic Mathlib.Topology.Category.TopCat.Yoneda
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
static lean_object* l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2;
static lean_object* l_TopCat_toSheafCompHausLike___rarg___closed__1;
extern lean_object* l_TopCat_instCategory;
static lean_object* l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1;
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2(lean_object*, lean_object*);
static lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___closed__1;
lean_object* l_CategoryTheory_inducedFunctor___at_CompHausLike_compHausLikeToTop___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CompHausLike_category___lambda__1___boxed(lean_object*);
lean_object* l_ContinuousMap_comp___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1(lean_object*, lean_object*);
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3;
static lean_object* _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CompHausLike_category___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_TopCat_instCategory;
x_2 = l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1;
x_3 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
static lean_object* _init_l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___lambda__1), 5, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, lean_box(0));
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_TopCat_toSheafCompHausLike___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1;
x_2 = l_CategoryTheory_inducedFunctor___at_CompHausLike_compHausLikeToTop___spec__1___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_TopCat_toSheafCompHausLike___rarg___closed__1;
x_6 = l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TopCat_toSheafCompHausLike___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TopCat_toSheafCompHausLike___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_TopCat_toSheafCompHausLike___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Preserves_Opposites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Coherent_SheafComparison(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Condensed_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_TopCat_Yoneda(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Condensed_TopComparison(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Preserves_Opposites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Coherent_SheafComparison(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Condensed_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_TopCat_Yoneda(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1 = _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__1);
l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2 = _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__2);
l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3 = _init_l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_TopCat_toSheafCompHausLike___spec__1___closed__3);
l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___closed__1 = _init_l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___closed__1();
lean_mark_persistent(l_ContinuousMap_yonedaPresheaf___at_TopCat_toSheafCompHausLike___spec__2___rarg___closed__1);
l_TopCat_toSheafCompHausLike___rarg___closed__1 = _init_l_TopCat_toSheafCompHausLike___rarg___closed__1();
lean_mark_persistent(l_TopCat_toSheafCompHausLike___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
