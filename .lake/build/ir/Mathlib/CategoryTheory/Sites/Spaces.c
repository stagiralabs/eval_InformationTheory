// Lean compiler output
// Module: Mathlib.CategoryTheory.Sites.Spaces
// Imports: Init Mathlib.CategoryTheory.Sites.Grothendieck Mathlib.CategoryTheory.Sites.Pretopology Mathlib.CategoryTheory.Limits.Lattice Mathlib.Topology.Sets.Opens
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
LEAN_EXPORT lean_object* l_Opens_pretopology___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Opens_pretopology___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology(lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Opens_pretopology(lean_object*);
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Opens_grothendieckTopology___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_grothendieckTopology___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Opens_grothendieckTopology___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_pretopology___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_pretopology(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Opens_pretopology___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Opens_pretopology___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Opens_pretopology___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Grothendieck(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Sites_Pretopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sets_Opens(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_CategoryTheory_Sites_Spaces(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Grothendieck(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Sites_Pretopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sets_Opens(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
