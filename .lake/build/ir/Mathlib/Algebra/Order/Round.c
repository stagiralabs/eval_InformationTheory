// Lean compiler output
// Module: Mathlib.Algebra.Order.Round
// Imports: Init Mathlib.Algebra.Order.Floor Mathlib.Algebra.Order.Interval.Set.Group
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
LEAN_EXPORT lean_object* l_round___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
lean_object* l_Int_ceil___rarg(lean_object*, lean_object*);
lean_object* l_Int_fract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLt__mathlib___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Ring_toNonAssocRing___rarg(lean_object*);
lean_object* l_LinearOrderedRing_toLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_round(lean_object*);
lean_object* l_Int_floor___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_round___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_inc(x_1);
x_4 = l_LinearOrderedRing_toLinearOrder___rarg(x_1);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_6);
x_7 = l_Ring_toNonAssocRing___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Ring_toAddGroupWithOne___rarg(x_6);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_apply_1(x_12, x_13);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Int_fract___rarg(x_1, x_2, x_3);
x_16 = lean_apply_2(x_9, x_14, x_15);
x_17 = lean_ctor_get(x_11, 2);
lean_inc(x_17);
lean_dec(x_11);
x_18 = l_instDecidableLt__mathlib___rarg(x_4, x_16, x_17);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Int_ceil___rarg(x_2, x_3);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = l_Int_floor___rarg(x_2, x_3);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_round(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_round___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Floor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Interval_Set_Group(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Round(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Floor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Interval_Set_Group(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
