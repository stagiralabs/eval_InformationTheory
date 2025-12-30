// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Degree.Definitions
// Imports: Init Mathlib.Algebra.MonoidAlgebra.Degree Mathlib.Algebra.Order.Ring.WithTop Mathlib.Algebra.Polynomial.Basic Mathlib.Data.Nat.Cast.WithTop
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
lean_object* l_Finset_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Polynomial_natDegree___rarg___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable(lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Polynomial_degree___spec__2___lambda__1(lean_object*, lean_object*);
lean_object* l_Polynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sup___at_Polynomial_degree___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_max___at_Polynomial_degree___spec__1(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natDegree___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degree(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff___rarg(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff(lean_object*);
static lean_object* l_Finset_sup___at_Polynomial_degree___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degree___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_degree___rarg(lean_object*);
lean_object* l_WithBot_recBotCoe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natDegree(lean_object*, lean_object*);
lean_object* l_WithBot_some___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natDegree___rarg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Finset_max___at_Polynomial_degree___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Finset_sup___at_Polynomial_degree___spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_nat_dec_le(x_10, x_12);
if (x_13 == 0)
{
lean_dec(x_12);
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_dec(x_10);
return x_2;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_nat_dec_le(x_10, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_10);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
}
}
}
}
static lean_object* _init_l_Finset_sup___at_Polynomial_degree___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Finset_sup___at_Polynomial_degree___spec__2___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_sup___at_Polynomial_degree___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_Finset_sup___at_Polynomial_degree___spec__2___closed__1;
x_5 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_3, x_2, x_1);
return x_5;
}
}
static lean_object* _init_l_Finset_max___at_Polynomial_degree___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_max___at_Polynomial_degree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_max___at_Polynomial_degree___spec__1___closed__1;
x_3 = l_Finset_sup___at_Polynomial_degree___spec__2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_WithBot_some___rarg), 1, 0);
x_4 = l_Finset_sup___at_Polynomial_degree___spec__2(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degree(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_degree___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_degree___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_degree(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial_natDegree___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natDegree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Polynomial_degree___rarg(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Polynomial_natDegree___rarg___closed__1;
x_5 = l_WithBot_recBotCoe___rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natDegree(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_natDegree___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natDegree___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_natDegree(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = l_Polynomial_natDegree___rarg(x_1);
x_3 = l_Polynomial_coeff___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_leadingCoeff___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_leadingCoeff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_leadingCoeff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Polynomial_leadingCoeff___rarg(x_2);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_6 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_3, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_Monic_decidable___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_Monic_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_Monic_decidable___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
x_3 = l_Polynomial_natDegree___rarg(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = l_Polynomial_coeff___rarg(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_nextCoeff___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_nextCoeff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_nextCoeff___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Degree(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_WithTop(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Cast_WithTop(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Degree_Definitions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Degree(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Cast_WithTop(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_sup___at_Polynomial_degree___spec__2___closed__1 = _init_l_Finset_sup___at_Polynomial_degree___spec__2___closed__1();
lean_mark_persistent(l_Finset_sup___at_Polynomial_degree___spec__2___closed__1);
l_Finset_max___at_Polynomial_degree___spec__1___closed__1 = _init_l_Finset_max___at_Polynomial_degree___spec__1___closed__1();
lean_mark_persistent(l_Finset_max___at_Polynomial_degree___spec__1___closed__1);
l_Polynomial_natDegree___rarg___closed__1 = _init_l_Polynomial_natDegree___rarg___closed__1();
lean_mark_persistent(l_Polynomial_natDegree___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
