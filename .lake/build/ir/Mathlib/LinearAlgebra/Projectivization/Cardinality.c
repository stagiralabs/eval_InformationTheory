// Lean compiler output
// Module: Mathlib.LinearAlgebra.Projectivization.Cardinality
// Imports: Init Mathlib.Algebra.GeomSum Mathlib.Data.Finite.Sum Mathlib.Data.Fintype.Units Mathlib.GroupTheory.GroupAction.Quotient Mathlib.LinearAlgebra.Projectivization.Basic
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
static lean_object* l_Projectivization_equivQuotientOrbitRel___closed__2;
static lean_object* l_Projectivization_equivQuotientOrbitRel___closed__1;
LEAN_EXPORT lean_object* l_Projectivization_equivQuotientOrbitRel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Quot_congr___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Projectivization_equivQuotientOrbitRel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
static lean_object* _init_l_Projectivization_equivQuotientOrbitRel___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Projectivization_equivQuotientOrbitRel___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Projectivization_equivQuotientOrbitRel___closed__1;
x_2 = l_Quot_congr___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Projectivization_equivQuotientOrbitRel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Projectivization_equivQuotientOrbitRel___closed__2;
return x_6;
}
}
LEAN_EXPORT lean_object* l_Projectivization_equivQuotientOrbitRel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Projectivization_equivQuotientOrbitRel(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GeomSum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finite_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_GroupAction_Quotient(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Projectivization_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_LinearAlgebra_Projectivization_Cardinality(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GeomSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finite_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_GroupAction_Quotient(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Projectivization_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Projectivization_equivQuotientOrbitRel___closed__1 = _init_l_Projectivization_equivQuotientOrbitRel___closed__1();
lean_mark_persistent(l_Projectivization_equivQuotientOrbitRel___closed__1);
l_Projectivization_equivQuotientOrbitRel___closed__2 = _init_l_Projectivization_equivQuotientOrbitRel___closed__2();
lean_mark_persistent(l_Projectivization_equivQuotientOrbitRel___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
