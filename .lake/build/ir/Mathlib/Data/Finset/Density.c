// Lean compiler output
// Module: Mathlib.Data.Finset.Density
// Imports: Init Mathlib.Algebra.Order.Field.Rat Mathlib.Data.Fintype.Card Mathlib.Data.NNRat.Order Mathlib.Data.Rat.Cast.CharZero Mathlib.Tactic.Positivity.Basic
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
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_cast___at_Finset_dens___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__1(lean_object*);
static lean_object* l_Nat_cast___at_Finset_dens___spec__1___closed__4;
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_dens(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_LinearOrderedField_toLinearOrderedSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_dens___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_cast___at_Finset_dens___spec__1___closed__2;
lean_object* l_Rat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_dens___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Rat_instLinearOrderedField;
lean_object* l_StrictOrderedSemiring_toOrderedSemiring___rarg(lean_object*);
static lean_object* l_Nat_cast___at_Finset_dens___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Nat_cast___at_Finset_dens___spec__2___rarg), 2, 0);
return x_4;
}
}
static lean_object* _init_l_Nat_cast___at_Finset_dens___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLinearOrderedField;
x_2 = l_LinearOrderedField_toLinearOrderedSemifield___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_cast___at_Finset_dens___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_cast___at_Finset_dens___spec__1___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_StrictOrderedSemiring_toOrderedSemiring___rarg(x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_cast___at_Finset_dens___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Nat_cast___at_Finset_dens___spec__1___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_Nat_cast___at_Finset_dens___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_cast___at_Finset_dens___spec__1___closed__3;
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_cast___at_Finset_dens___spec__1___closed__4;
x_3 = l_Nat_cast___at_Finset_dens___spec__2___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_dens___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_2, x_3);
x_5 = l_Nat_cast___at_Finset_dens___spec__1(x_4);
x_6 = l_List_lengthTRAux___rarg(x_1, x_3);
x_7 = l_Nat_cast___at_Finset_dens___spec__1(x_6);
x_8 = l_Rat_div(x_5, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Finset_dens(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_dens___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_Finset_dens___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_cast___at_Finset_dens___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_dens___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_dens___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Field_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNRat_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Cast_CharZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Density(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Field_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNRat_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Cast_CharZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_cast___at_Finset_dens___spec__1___closed__1 = _init_l_Nat_cast___at_Finset_dens___spec__1___closed__1();
lean_mark_persistent(l_Nat_cast___at_Finset_dens___spec__1___closed__1);
l_Nat_cast___at_Finset_dens___spec__1___closed__2 = _init_l_Nat_cast___at_Finset_dens___spec__1___closed__2();
lean_mark_persistent(l_Nat_cast___at_Finset_dens___spec__1___closed__2);
l_Nat_cast___at_Finset_dens___spec__1___closed__3 = _init_l_Nat_cast___at_Finset_dens___spec__1___closed__3();
lean_mark_persistent(l_Nat_cast___at_Finset_dens___spec__1___closed__3);
l_Nat_cast___at_Finset_dens___spec__1___closed__4 = _init_l_Nat_cast___at_Finset_dens___spec__1___closed__4();
lean_mark_persistent(l_Nat_cast___at_Finset_dens___spec__1___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
