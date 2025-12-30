// Lean compiler output
// Module: Mathlib.Topology.Category.CompHaus.Frm
// Imports: Init Mathlib.Order.Category.Frm Mathlib.Topology.Category.CompHaus.Basic Mathlib.Topology.Sets.Opens
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
LEAN_EXPORT lean_object* l_topCatOpToFrm;
static lean_object* l_topCatOpToFrm___closed__1;
static lean_object* l_topCatOpToFrm___closed__4;
lean_object* l_TopologicalSpace_Opens_instFrame___rarg(lean_object*);
LEAN_EXPORT lean_object* l_topCatOpToFrm___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
static lean_object* l_topCatOpToFrm___closed__2;
lean_object* l_TopologicalSpace_Opens_comap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_topCatOpToFrm___closed__3;
LEAN_EXPORT lean_object* l_topCatOpToFrm___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_TopologicalSpace_Opens_comap___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_1);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_topCatOpToFrm___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_TopCat_instCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_topCatOpToFrm___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_TopologicalSpace_Opens_instFrame___rarg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_topCatOpToFrm___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_topCatOpToFrm___lambda__1), 3, 0);
return x_1;
}
}
static lean_object* _init_l_topCatOpToFrm___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_topCatOpToFrm___closed__2;
x_2 = l_topCatOpToFrm___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_topCatOpToFrm() {
_start:
{
lean_object* x_1; 
x_1 = l_topCatOpToFrm___closed__4;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Category_Frm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHaus_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sets_Opens(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_CompHaus_Frm(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Category_Frm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHaus_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sets_Opens(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_topCatOpToFrm___closed__1 = _init_l_topCatOpToFrm___closed__1();
lean_mark_persistent(l_topCatOpToFrm___closed__1);
l_topCatOpToFrm___closed__2 = _init_l_topCatOpToFrm___closed__2();
lean_mark_persistent(l_topCatOpToFrm___closed__2);
l_topCatOpToFrm___closed__3 = _init_l_topCatOpToFrm___closed__3();
lean_mark_persistent(l_topCatOpToFrm___closed__3);
l_topCatOpToFrm___closed__4 = _init_l_topCatOpToFrm___closed__4();
lean_mark_persistent(l_topCatOpToFrm___closed__4);
l_topCatOpToFrm = _init_l_topCatOpToFrm();
lean_mark_persistent(l_topCatOpToFrm);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
