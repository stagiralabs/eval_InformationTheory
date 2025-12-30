// Lean compiler output
// Module: Mathlib.Algebra.Order.Field.Rat
// Imports: Init Mathlib.Algebra.Field.Rat Mathlib.Algebra.Order.Nonneg.Field Mathlib.Algebra.Order.Ring.Rat Mathlib.Data.NNRat.Defs
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
static lean_object* l_Rat_instLinearOrderedField___closed__2;
static lean_object* l_instNNRatLinearOrderedSemifield___closed__1;
lean_object* l_Rat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Nonneg_linearOrderedCommGroupWithZero___rarg(lean_object*);
lean_object* l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_instNNRatLinearOrderedSemifield___closed__2;
lean_object* l_Nonneg_linearOrderedSemifield___rarg(lean_object*);
static lean_object* l_Rat_instLinearOrderedField___closed__1;
lean_object* l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Rat_instLinearOrderedField___closed__4;
LEAN_EXPORT lean_object* l_instNNRatLinearOrderedCommGroupWithZero;
lean_object* l_instRatCastRat___boxed(lean_object*);
static lean_object* l_Rat_instLinearOrderedField___closed__3;
static lean_object* l_Rat_instLinearOrderedField___closed__6;
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
extern lean_object* l_Rat_instInv;
LEAN_EXPORT lean_object* l_instNNRatLinearOrderedSemifield;
lean_object* l_Rat_instNNRatCast___boxed(lean_object*);
static lean_object* l_Rat_instLinearOrderedField___closed__5;
static lean_object* l_instNNRatLinearOrderedCommGroupWithZero___closed__1;
LEAN_EXPORT lean_object* l_Rat_instLinearOrderedField;
extern lean_object* l_Rat_instLinearOrderedCommRing;
extern lean_object* l_Rat_instDiv;
static lean_object* _init_l_Rat_instLinearOrderedField___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_npowRec___at_Rat_commGroupWithZero___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedField___closed__1;
x_2 = lean_alloc_closure((void*)(l_zpowRec___at_Rat_commGroupWithZero___spec__2___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instNNRatCast___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instRatCastRat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Rat_instLinearOrderedCommRing;
x_2 = l_Rat_instInv;
x_3 = l_Rat_instDiv;
x_4 = l_Rat_instLinearOrderedField___closed__2;
x_5 = l_Rat_instLinearOrderedField___closed__3;
x_6 = l_Rat_instLinearOrderedField___closed__4;
x_7 = l_Rat_instLinearOrderedField___closed__5;
x_8 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
lean_ctor_set(x_8, 7, x_7);
return x_8;
}
}
static lean_object* _init_l_Rat_instLinearOrderedField() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instLinearOrderedField___closed__6;
return x_1;
}
}
static lean_object* _init_l_instNNRatLinearOrderedSemifield___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedField;
x_2 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrderedSemifield___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instNNRatLinearOrderedSemifield___closed__1;
x_2 = l_Nonneg_linearOrderedSemifield___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrderedSemifield() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatLinearOrderedSemifield___closed__2;
return x_1;
}
}
static lean_object* _init_l_instNNRatLinearOrderedCommGroupWithZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedField;
x_2 = l_Nonneg_linearOrderedCommGroupWithZero___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrderedCommGroupWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatLinearOrderedCommGroupWithZero___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Field(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNRat_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Field_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Nonneg_Field(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNRat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_instLinearOrderedField___closed__1 = _init_l_Rat_instLinearOrderedField___closed__1();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__1);
l_Rat_instLinearOrderedField___closed__2 = _init_l_Rat_instLinearOrderedField___closed__2();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__2);
l_Rat_instLinearOrderedField___closed__3 = _init_l_Rat_instLinearOrderedField___closed__3();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__3);
l_Rat_instLinearOrderedField___closed__4 = _init_l_Rat_instLinearOrderedField___closed__4();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__4);
l_Rat_instLinearOrderedField___closed__5 = _init_l_Rat_instLinearOrderedField___closed__5();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__5);
l_Rat_instLinearOrderedField___closed__6 = _init_l_Rat_instLinearOrderedField___closed__6();
lean_mark_persistent(l_Rat_instLinearOrderedField___closed__6);
l_Rat_instLinearOrderedField = _init_l_Rat_instLinearOrderedField();
lean_mark_persistent(l_Rat_instLinearOrderedField);
l_instNNRatLinearOrderedSemifield___closed__1 = _init_l_instNNRatLinearOrderedSemifield___closed__1();
lean_mark_persistent(l_instNNRatLinearOrderedSemifield___closed__1);
l_instNNRatLinearOrderedSemifield___closed__2 = _init_l_instNNRatLinearOrderedSemifield___closed__2();
lean_mark_persistent(l_instNNRatLinearOrderedSemifield___closed__2);
l_instNNRatLinearOrderedSemifield = _init_l_instNNRatLinearOrderedSemifield();
lean_mark_persistent(l_instNNRatLinearOrderedSemifield);
l_instNNRatLinearOrderedCommGroupWithZero___closed__1 = _init_l_instNNRatLinearOrderedCommGroupWithZero___closed__1();
lean_mark_persistent(l_instNNRatLinearOrderedCommGroupWithZero___closed__1);
l_instNNRatLinearOrderedCommGroupWithZero = _init_l_instNNRatLinearOrderedCommGroupWithZero();
lean_mark_persistent(l_instNNRatLinearOrderedCommGroupWithZero);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
