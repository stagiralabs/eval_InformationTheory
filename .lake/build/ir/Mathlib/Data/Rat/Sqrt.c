// Lean compiler output
// Module: Mathlib.Data.Rat.Sqrt
// Imports: Init Mathlib.Algebra.Order.Ring.Abs Mathlib.Algebra.Order.Ring.Rat Mathlib.Data.Rat.Lemmas Mathlib.Data.Int.Sqrt
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
LEAN_EXPORT lean_object* l_Rat_instDecidablePredIsSquare___boxed(lean_object*);
lean_object* l_Nat_sqrt(lean_object*);
LEAN_EXPORT lean_object* l_Rat_sqrt___boxed(lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_mkRat(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Rat_instDecidablePredIsSquare(lean_object*);
lean_object* l_Int_sqrt(lean_object*);
uint8_t l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_sqrt(lean_object*);
LEAN_EXPORT lean_object* l_Rat_sqrt(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Int_sqrt(x_2);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Nat_sqrt(x_4);
x_6 = l_mkRat(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Rat_sqrt___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_sqrt(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Rat_instDecidablePredIsSquare(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Rat_sqrt(x_1);
x_3 = l_Rat_mul(x_2, x_2);
lean_dec(x_2);
x_4 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_3, x_1);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_instDecidablePredIsSquare___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Rat_instDecidablePredIsSquare(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Abs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Sqrt(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Sqrt(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Abs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Sqrt(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
