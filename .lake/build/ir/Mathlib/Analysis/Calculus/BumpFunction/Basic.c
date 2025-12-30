// Lean compiler output
// Module: Mathlib.Analysis.Calculus.BumpFunction.Basic
// Imports: Init Mathlib.Analysis.Calculus.ContDiff.Operations Mathlib.Analysis.Normed.Module.FiniteDimension
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
lean_object* l_Nat_cast___at_Real_instNatCast___spec__2(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited(lean_object*);
static lean_object* l_ContDiffBump_instInhabited___rarg___closed__1;
static lean_object* _init_l_ContDiffBump_instInhabited___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_Nat_cast___at_Real_instNatCast___spec__2(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_3 = l_ContDiffBump_instInhabited___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ContDiffBump_instInhabited___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ContDiffBump_instInhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ContDiffBump_instInhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Calculus_ContDiff_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Calculus_BumpFunction_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Calculus_ContDiff_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Module_FiniteDimension(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ContDiffBump_instInhabited___rarg___closed__1 = _init_l_ContDiffBump_instInhabited___rarg___closed__1();
lean_mark_persistent(l_ContDiffBump_instInhabited___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
