// Lean compiler output
// Module: Mathlib.Algebra.Module.ZLattice.Basic
// Imports: Init Mathlib.LinearAlgebra.Countable Mathlib.LinearAlgebra.FreeModule.PID Mathlib.MeasureTheory.Group.FundamentalDomain Mathlib.MeasureTheory.Measure.Lebesgue.EqHaar Mathlib.RingTheory.Localization.Module
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
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZLattice_comap___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZLattice_comap(lean_object*);
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ZLattice_comap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_RingHom_id___at_AddMonoidHom_toIntLinearMap___spec__1;
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___rarg), 2, 0);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Submodule_comap___at_ZLattice_comap___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZLattice_comap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_closure((void*)(l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = l_RingHom_id___at_AddMonoidHom_toIntLinearMap___spec__1;
x_12 = l_Submodule_comap___at_ZLattice_comap___spec__2___rarg(x_6, x_11, lean_box(0), x_10, x_8);
lean_dec(x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_ZLattice_comap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ZLattice_comap___rarg___boxed), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_LinearMap_restrictScalars___at_ZLattice_comap___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Submodule_comap___at_ZLattice_comap___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Submodule_comap___at_ZLattice_comap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Submodule_comap___at_ZLattice_comap___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ZLattice_comap___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_ZLattice_comap___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_Countable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_LinearAlgebra_FreeModule_PID(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Group_FundamentalDomain(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_MeasureTheory_Measure_Lebesgue_EqHaar(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Localization_Module(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Module_ZLattice_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_Countable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_LinearAlgebra_FreeModule_PID(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Group_FundamentalDomain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_MeasureTheory_Measure_Lebesgue_EqHaar(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Localization_Module(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
