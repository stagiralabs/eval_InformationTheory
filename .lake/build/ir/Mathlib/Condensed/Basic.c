// Lean compiler output
// Module: Mathlib.Condensed.Basic
// Imports: Init Mathlib.CategoryTheory.Sites.Sheaf Mathlib.Topology.Category.CompHaus.EffectiveEpi
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
LEAN_EXPORT lean_object* l_instCategoryCondensed(lean_object*);
LEAN_EXPORT lean_object* l_instCategoryCondensed___rarg(lean_object*);
static lean_object* l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1;
lean_object* l_CategoryTheory_Sheaf_instCategorySheaf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_CompHausLike_category___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1(lean_object*);
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2;
static lean_object* l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3;
static lean_object* _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CompHausLike_category___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_TopCat_instCategory;
x_2 = l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1;
x_3 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3;
return x_2;
}
}
LEAN_EXPORT lean_object* l_instCategoryCondensed___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1(lean_box(0));
x_3 = l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2;
x_4 = l_CategoryTheory_Sheaf_instCategorySheaf___rarg(x_3, x_2, lean_box(0), x_1);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instCategoryCondensed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCategoryCondensed___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Sheaf(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHaus_EffectiveEpi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Condensed_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Sheaf(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHaus_EffectiveEpi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1 = _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__1);
l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2 = _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__2);
l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3 = _init_l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3();
lean_mark_persistent(l_CategoryTheory_coherentTopology___at_instCategoryCondensed___spec__1___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
