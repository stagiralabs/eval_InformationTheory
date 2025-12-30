// Lean compiler output
// Module: Mathlib.Analysis.CStarAlgebra.Matrix
// Imports: Init Mathlib.Analysis.InnerProductSpace.Adjoint Mathlib.Analysis.Matrix Mathlib.Analysis.RCLike.Basic Mathlib.LinearAlgebra.UnitaryGroup Mathlib.Topology.UniformSpace.Matrix
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
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Algebra_id___rarg(lean_object*);
lean_object* l_Matrix_module___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_RCLike_innerProductSpace___rarg(lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
lean_object* l_Matrix_instAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NormedField_toNormedCommRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_RCLike_innerProductSpace___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Matrix_module___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Matrix_instL2OpNormedSpace___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedSpace___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Matrix_instL2OpNormedSpace___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = l_Field_toSemifield___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_NormedField_toNormedCommRing___rarg(x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_7);
x_11 = l_Algebra_id___rarg(x_7);
x_12 = l_Matrix_instAlgebra___rarg(x_2, x_3, x_7, x_10, x_11);
lean_dec(x_10);
lean_dec(x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Matrix_instL2OpNormedAlgebra___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Matrix_instL2OpNormedAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Matrix_instL2OpNormedAlgebra___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_InnerProductSpace_Adjoint(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Matrix(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_RCLike_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_UnitaryGroup(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Matrix(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_CStarAlgebra_Matrix(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_InnerProductSpace_Adjoint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Matrix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_RCLike_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_UnitaryGroup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Matrix(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
