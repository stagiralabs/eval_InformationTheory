// Lean compiler output
// Module: Mathlib.Topology.PartitionOfUnity
// Imports: Init Mathlib.Algebra.BigOperators.Finprod Mathlib.LinearAlgebra.Basis.VectorSpace Mathlib.Topology.ContinuousMap.Algebra Mathlib.Topology.Compactness.Paracompact Mathlib.Topology.ShrinkingLemma Mathlib.Topology.UrysohnsLemma Mathlib.Topology.ContinuousMap.Ordered
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
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_PartitionOfUnity_instFunLikeContinuousMapReal___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PartitionOfUnity_instFunLikeContinuousMapReal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PartitionOfUnity_instFunLikeContinuousMapReal(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_BumpCovering_instFunLikeContinuousMapReal___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BumpCovering_instFunLikeContinuousMapReal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_BumpCovering_instFunLikeContinuousMapReal(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Finprod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Compactness_Paracompact(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ShrinkingLemma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UrysohnsLemma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Ordered(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_PartitionOfUnity(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Finprod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Basis_VectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Compactness_Paracompact(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ShrinkingLemma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UrysohnsLemma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Ordered(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
