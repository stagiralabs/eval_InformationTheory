// Lean compiler output
// Module: Mathlib.Topology.Algebra.UniformGroup.Defs
// Imports: Init Mathlib.Topology.Algebra.Group.Basic Mathlib.Topology.UniformSpace.Basic
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
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsTopologicalGroup_toUniformSpace___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalGroup_toUniformSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsTopologicalGroup_toUniformSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IsTopologicalAddGroup_toUniformSpace___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsTopologicalAddGroup_toUniformSpace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsTopologicalAddGroup_toUniformSpace(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
