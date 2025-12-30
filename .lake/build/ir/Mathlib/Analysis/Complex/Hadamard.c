// Lean compiler output
// Module: Mathlib.Analysis.Complex.Hadamard
// Imports: Init Mathlib.Analysis.SpecialFunctions.Pow.Deriv Mathlib.Analysis.Complex.PhragmenLindelof
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
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_Complex_HadamardThreeLines_scale(lean_object*);
static lean_object* l_Complex_HadamardThreeLines_scale___rarg___closed__1;
LEAN_EXPORT lean_object* l_Complex_HadamardThreeLines_scale___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
static lean_object* l_Complex_HadamardThreeLines_scale___rarg___closed__2;
static lean_object* _init_l_Complex_HadamardThreeLines_scale___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_1);
return x_2;
}
}
static lean_object* _init_l_Complex_HadamardThreeLines_scale___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = l_Complex_HadamardThreeLines_scale___rarg___closed__1;
x_3 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Complex_HadamardThreeLines_scale___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_2);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_2);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_3, x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_7);
x_8 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_7, x_6);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_Complex_HadamardThreeLines_scale___rarg___closed__2;
lean_inc(x_9);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_9, x_10);
x_12 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_11);
x_13 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_8, x_12);
x_14 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_7, x_10);
x_15 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_973_(x_9, x_6);
x_16 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_14, x_15);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_2, x_13);
x_18 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_19 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_18, x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_apply_1(x_1, x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Complex_HadamardThreeLines_scale(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Complex_HadamardThreeLines_scale___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Pow_Deriv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_PhragmenLindelof(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Complex_Hadamard(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Pow_Deriv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_PhragmenLindelof(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Complex_HadamardThreeLines_scale___rarg___closed__1 = _init_l_Complex_HadamardThreeLines_scale___rarg___closed__1();
lean_mark_persistent(l_Complex_HadamardThreeLines_scale___rarg___closed__1);
l_Complex_HadamardThreeLines_scale___rarg___closed__2 = _init_l_Complex_HadamardThreeLines_scale___rarg___closed__2();
lean_mark_persistent(l_Complex_HadamardThreeLines_scale___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
