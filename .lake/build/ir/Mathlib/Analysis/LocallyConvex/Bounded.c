// Lean compiler output
// Module: Mathlib.Analysis.LocallyConvex.Bounded
// Imports: Init Mathlib.GroupTheory.GroupAction.Pointwise Mathlib.Analysis.LocallyConvex.Basic Mathlib.Analysis.LocallyConvex.BalancedCoreHull Mathlib.Analysis.Seminorm Mathlib.LinearAlgebra.Basis.VectorSpace Mathlib.Topology.Bornology.Basic Mathlib.Topology.Algebra.UniformGroup.Basic Mathlib.Topology.UniformSpace.Cauchy
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
LEAN_EXPORT lean_object* l_Bornology_vonNBornology(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_vonNBornology___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bornology_vonNBornology(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Bornology_vonNBornology___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Bornology_vonNBornology(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Pointwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_LocallyConvex_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_LocallyConvex_BalancedCoreHull(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Seminorm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Bornology_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Cauchy(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_LocallyConvex_Bounded(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Pointwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_LocallyConvex_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_LocallyConvex_BalancedCoreHull(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Seminorm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Bornology_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_UniformGroup_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Cauchy(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
