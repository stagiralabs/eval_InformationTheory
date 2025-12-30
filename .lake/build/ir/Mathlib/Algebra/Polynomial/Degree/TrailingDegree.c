// Lean compiler output
// Module: Mathlib.Algebra.Polynomial.Degree.TrailingDegree
// Imports: Init Mathlib.Algebra.Polynomial.Degree.Support Mathlib.Data.ENat.Basic
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
LEAN_EXPORT lean_object* l_Finset_inf___at_Polynomial_trailingDegree___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp___rarg(lean_object*, lean_object*);
lean_object* l_Polynomial_coeff___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable(lean_object*);
lean_object* l_WithTop_some___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
static lean_object* l_Polynomial_natTrailingDegree___rarg___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp___rarg___boxed(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inf___at_Polynomial_trailingDegree___spec__2(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree___boxed(lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_min___at_Polynomial_trailingDegree___spec__1(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
static lean_object* l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1;
static lean_object* l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff___boxed(lean_object*, lean_object*);
lean_object* l_WithTop_recTopCoe___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instLinearOrder;
LEAN_EXPORT lean_object* l_Finset_inf___at_Polynomial_trailingDegree___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_13);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_11, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
static lean_object* _init_l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrder;
x_2 = l_LinearOrder_toLattice___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inf___at_Polynomial_trailingDegree___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1;
x_4 = lean_alloc_closure((void*)(l_Finset_inf___at_Polynomial_trailingDegree___spec__2___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = l_Finset_fold___rarg(x_4, lean_box(0), lean_box(0), x_5, x_2, x_1);
return x_6;
}
}
static lean_object* _init_l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_min___at_Polynomial_trailingDegree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1;
x_3 = l_Finset_inf___at_Polynomial_trailingDegree___spec__2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_WithTop_some___rarg), 1, 0);
x_4 = l_Finset_inf___at_Polynomial_trailingDegree___spec__2(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_trailingDegree___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingDegree___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_trailingDegree(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Polynomial_natTrailingDegree___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Polynomial_trailingDegree___rarg(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Polynomial_natTrailingDegree___rarg___closed__1;
x_5 = l_WithTop_recTopCoe___rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_natTrailingDegree___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_natTrailingDegree___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_natTrailingDegree(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
lean_inc(x_1);
x_2 = l_Polynomial_natTrailingDegree___rarg(x_1);
x_3 = l_Polynomial_coeff___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Polynomial_trailingCoeff___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_trailingCoeff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_trailingCoeff(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Polynomial_trailingCoeff___rarg(x_2);
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
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_TrailingMonic_decidable___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_TrailingMonic_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Polynomial_TrailingMonic_decidable___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
x_3 = l_Polynomial_natTrailingDegree___rarg(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_3, x_6);
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
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Polynomial_nextCoeffUp___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Polynomial_nextCoeffUp___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Polynomial_nextCoeffUp___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Polynomial_Degree_Support(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Polynomial_Degree_TrailingDegree(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Polynomial_Degree_Support(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1 = _init_l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1();
lean_mark_persistent(l_Finset_inf___at_Polynomial_trailingDegree___spec__2___closed__1);
l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1 = _init_l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1();
lean_mark_persistent(l_Finset_min___at_Polynomial_trailingDegree___spec__1___closed__1);
l_Polynomial_natTrailingDegree___rarg___closed__1 = _init_l_Polynomial_natTrailingDegree___rarg___closed__1();
lean_mark_persistent(l_Polynomial_natTrailingDegree___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
