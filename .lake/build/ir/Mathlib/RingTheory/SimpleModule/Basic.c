// Lean compiler output
// Module: Mathlib.RingTheory.SimpleModule.Basic
// Imports: Init Mathlib.LinearAlgebra.DFinsupp Mathlib.Data.Matrix.Mul Mathlib.LinearAlgebra.Finsupp.Span Mathlib.LinearAlgebra.Isomorphisms Mathlib.LinearAlgebra.Projection Mathlib.Order.Atoms.Finite Mathlib.Order.CompactlyGenerated.Intervals Mathlib.Order.JordanHolder Mathlib.RingTheory.Ideal.Colon Mathlib.RingTheory.Noetherian.Defs
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
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_JordanHolderModule_instJordanHolderLattice___rarg___boxed), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_JordanHolderModule_instJordanHolderLattice___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_JordanHolderModule_instJordanHolderLattice___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_JordanHolderModule_instJordanHolderLattice(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_DFinsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Matrix_Mul(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Finsupp_Span(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Isomorphisms(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Projection(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Atoms_Finite(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompactlyGenerated_Intervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_JordanHolder(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Ideal_Colon(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Noetherian_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_SimpleModule_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_DFinsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Matrix_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Finsupp_Span(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Isomorphisms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Projection(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Atoms_Finite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompactlyGenerated_Intervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_JordanHolder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Ideal_Colon(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Noetherian_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
