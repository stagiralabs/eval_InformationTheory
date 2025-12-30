// Lean compiler output
// Module: Mathlib.Data.NNRat.Order
// Imports: Init Mathlib.Data.NNRat.Defs Mathlib.Algebra.Order.Ring.Rat Mathlib.Algebra.Order.Nonneg.Ring
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
static lean_object* l_instNNRatLinearOrderedAddCommMonoid___closed__1;
LEAN_EXPORT lean_object* l_instNNRatLinearOrderedAddCommMonoid;
lean_object* l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(lean_object*);
lean_object* l_Nonneg_orderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNNRatOrderedCommSemiring;
static lean_object* l_instNNRatOrderedCommSemiring___closed__2;
static lean_object* l_instNNRatLinearOrderedAddCommMonoid___closed__2;
static lean_object* l_instNNRatOrderedCommSemiring___closed__3;
extern lean_object* l_Rat_instLinearOrderedSemiring;
lean_object* l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(lean_object*);
lean_object* l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(lean_object*);
static lean_object* l_instNNRatOrderedCommSemiring___closed__1;
lean_object* l_Nonneg_linearOrderedAddCommMonoid___rarg(lean_object*);
extern lean_object* l_Rat_instLinearOrderedCommRing;
static lean_object* _init_l_instNNRatOrderedCommSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedCommRing;
x_2 = l_LinearOrderedCommRing_toLinearOrderedCommSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatOrderedCommSemiring___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instNNRatOrderedCommSemiring___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_StrictOrderedCommSemiring_toOrderedCommSemiring___rarg(x_2);
return x_3;
}
}
static lean_object* _init_l_instNNRatOrderedCommSemiring___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instNNRatOrderedCommSemiring___closed__2;
x_2 = l_Nonneg_orderedSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatOrderedCommSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatOrderedCommSemiring___closed__3;
return x_1;
}
}
static lean_object* _init_l_instNNRatLinearOrderedAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedSemiring;
x_2 = l_LinearOrderedSemiring_toLinearOrderedAddCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrderedAddCommMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instNNRatLinearOrderedAddCommMonoid___closed__1;
x_2 = l_Nonneg_linearOrderedAddCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrderedAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatLinearOrderedAddCommMonoid___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNRat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_NNRat_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNRat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Nonneg_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instNNRatOrderedCommSemiring___closed__1 = _init_l_instNNRatOrderedCommSemiring___closed__1();
lean_mark_persistent(l_instNNRatOrderedCommSemiring___closed__1);
l_instNNRatOrderedCommSemiring___closed__2 = _init_l_instNNRatOrderedCommSemiring___closed__2();
lean_mark_persistent(l_instNNRatOrderedCommSemiring___closed__2);
l_instNNRatOrderedCommSemiring___closed__3 = _init_l_instNNRatOrderedCommSemiring___closed__3();
lean_mark_persistent(l_instNNRatOrderedCommSemiring___closed__3);
l_instNNRatOrderedCommSemiring = _init_l_instNNRatOrderedCommSemiring();
lean_mark_persistent(l_instNNRatOrderedCommSemiring);
l_instNNRatLinearOrderedAddCommMonoid___closed__1 = _init_l_instNNRatLinearOrderedAddCommMonoid___closed__1();
lean_mark_persistent(l_instNNRatLinearOrderedAddCommMonoid___closed__1);
l_instNNRatLinearOrderedAddCommMonoid___closed__2 = _init_l_instNNRatLinearOrderedAddCommMonoid___closed__2();
lean_mark_persistent(l_instNNRatLinearOrderedAddCommMonoid___closed__2);
l_instNNRatLinearOrderedAddCommMonoid = _init_l_instNNRatLinearOrderedAddCommMonoid();
lean_mark_persistent(l_instNNRatLinearOrderedAddCommMonoid);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
