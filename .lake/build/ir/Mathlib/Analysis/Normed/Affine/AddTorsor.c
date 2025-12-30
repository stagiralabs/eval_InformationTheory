// Lean compiler output
// Module: Mathlib.Analysis.Normed.Affine.AddTorsor
// Imports: Init Mathlib.Algebra.CharP.Invertible Mathlib.Analysis.Normed.Module.Basic Mathlib.Analysis.Normed.Group.AddTorsor Mathlib.LinearAlgebra.AffineSpace.AffineSubspace.Basic Mathlib.Topology.Instances.RealVectorSpace
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
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivisionRing_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_3, x_5);
x_8 = lean_apply_2(x_6, x_7, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, x_5, x_2);
x_8 = lean_apply_2(x_3, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_8);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_7);
x_11 = lean_alloc_closure((void*)(l_DilationEquiv_smulTorsor___rarg___lambda__1), 5, 4);
lean_closure_set(x_11, 0, x_7);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_9);
lean_closure_set(x_11, 3, x_8);
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_DivisionRing_toDivisionSemiring___rarg(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_1(x_14, x_9);
x_16 = lean_alloc_closure((void*)(l_DilationEquiv_smulTorsor___rarg___lambda__2), 5, 4);
lean_closure_set(x_16, 0, x_7);
lean_closure_set(x_16, 1, x_8);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DilationEquiv_smulTorsor___rarg___boxed), 10, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DilationEquiv_smulTorsor___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_DilationEquiv_smulTorsor___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Invertible(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_AddTorsor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_AffineSpace_AffineSubspace_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_RealVectorSpace(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Affine_AddTorsor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Invertible(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_AddTorsor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_AffineSpace_AffineSubspace_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_RealVectorSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
