// Lean compiler output
// Module: Mathlib.Algebra.Ring.Nat
// Imports: Init Mathlib.Algebra.CharZero.Defs Mathlib.Algebra.GroupWithZero.Nat Mathlib.Algebra.Ring.Defs
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
extern lean_object* l_Nat_instMulZeroOneClass;
LEAN_EXPORT lean_object* l_Nat_instSemiring___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instAddCommMonoidWithOne;
static lean_object* l_Nat_instAddMonoidWithOne___closed__1;
static lean_object* l_Nat_instNonUnitalNonAssocSemiring___closed__1;
static lean_object* l_Nat_instSemiring___closed__2;
extern lean_object* l_Nat_instMulOneClass;
extern lean_object* l_Nat_instAddMonoid;
extern lean_object* l_instMulNat;
LEAN_EXPORT lean_object* l_Nat_instNonUnitalSemiring;
LEAN_EXPORT lean_object* l_Nat_instAddMonoidWithOne;
LEAN_EXPORT lean_object* l_Nat_instNonAssocSemiring;
LEAN_EXPORT lean_object* l_Nat_instAddMonoidWithOne___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instSemiring___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_instNonUnitalNonAssocSemiring;
LEAN_EXPORT lean_object* l_Nat_instAddMonoidWithOne___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_instCommSemiring;
LEAN_EXPORT lean_object* l_Nat_instDistrib;
static lean_object* l_Nat_instDistrib___closed__1;
lean_object* lean_nat_pow(lean_object*, lean_object*);
extern lean_object* l_instAddNat;
extern lean_object* l_Nat_instAddCommMonoid;
LEAN_EXPORT lean_object* l_Nat_instSemiring;
static lean_object* l_Nat_instNonAssocSemiring___closed__1;
static lean_object* l_Nat_instAddMonoidWithOne___closed__2;
static lean_object* l_Nat_instSemiring___closed__1;
LEAN_EXPORT lean_object* l_Nat_instAddMonoidWithOne___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Nat_instAddMonoidWithOne___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instAddMonoidWithOne___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instAddMonoidWithOne___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Nat_instMulOneClass;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Nat_instAddMonoidWithOne___closed__1;
x_4 = l_Nat_instAddMonoid;
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_2);
return x_5;
}
}
static lean_object* _init_l_Nat_instAddMonoidWithOne() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instAddMonoidWithOne___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instAddMonoidWithOne___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_instAddMonoidWithOne___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instAddCommMonoidWithOne() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instAddMonoidWithOne;
return x_1;
}
}
static lean_object* _init_l_Nat_instDistrib___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instMulNat;
x_2 = l_instAddNat;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_instDistrib() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instDistrib___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instNonUnitalNonAssocSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_instAddCommMonoid;
x_2 = l_instMulNat;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_instNonUnitalNonAssocSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instNonUnitalNonAssocSemiring___closed__1;
return x_1;
}
}
static lean_object* _init_l_Nat_instNonUnitalSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instNonUnitalNonAssocSemiring;
return x_1;
}
}
static lean_object* _init_l_Nat_instNonAssocSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Nat_instNonUnitalNonAssocSemiring;
x_2 = l_Nat_instMulZeroOneClass;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Nat_instAddMonoidWithOne;
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
static lean_object* _init_l_Nat_instNonAssocSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instNonAssocSemiring___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instSemiring___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_instSemiring___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instSemiring___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instSemiring___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Nat_instNonUnitalSemiring;
x_2 = l_Nat_instNonAssocSemiring;
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = l_Nat_instSemiring___closed__1;
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
return x_6;
}
}
static lean_object* _init_l_Nat_instSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instSemiring___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_instSemiring___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instSemiring___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_instCommSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instSemiring;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharZero_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Ring_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharZero_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instAddMonoidWithOne___closed__1 = _init_l_Nat_instAddMonoidWithOne___closed__1();
lean_mark_persistent(l_Nat_instAddMonoidWithOne___closed__1);
l_Nat_instAddMonoidWithOne___closed__2 = _init_l_Nat_instAddMonoidWithOne___closed__2();
lean_mark_persistent(l_Nat_instAddMonoidWithOne___closed__2);
l_Nat_instAddMonoidWithOne = _init_l_Nat_instAddMonoidWithOne();
lean_mark_persistent(l_Nat_instAddMonoidWithOne);
l_Nat_instAddCommMonoidWithOne = _init_l_Nat_instAddCommMonoidWithOne();
lean_mark_persistent(l_Nat_instAddCommMonoidWithOne);
l_Nat_instDistrib___closed__1 = _init_l_Nat_instDistrib___closed__1();
lean_mark_persistent(l_Nat_instDistrib___closed__1);
l_Nat_instDistrib = _init_l_Nat_instDistrib();
lean_mark_persistent(l_Nat_instDistrib);
l_Nat_instNonUnitalNonAssocSemiring___closed__1 = _init_l_Nat_instNonUnitalNonAssocSemiring___closed__1();
lean_mark_persistent(l_Nat_instNonUnitalNonAssocSemiring___closed__1);
l_Nat_instNonUnitalNonAssocSemiring = _init_l_Nat_instNonUnitalNonAssocSemiring();
lean_mark_persistent(l_Nat_instNonUnitalNonAssocSemiring);
l_Nat_instNonUnitalSemiring = _init_l_Nat_instNonUnitalSemiring();
lean_mark_persistent(l_Nat_instNonUnitalSemiring);
l_Nat_instNonAssocSemiring___closed__1 = _init_l_Nat_instNonAssocSemiring___closed__1();
lean_mark_persistent(l_Nat_instNonAssocSemiring___closed__1);
l_Nat_instNonAssocSemiring = _init_l_Nat_instNonAssocSemiring();
lean_mark_persistent(l_Nat_instNonAssocSemiring);
l_Nat_instSemiring___closed__1 = _init_l_Nat_instSemiring___closed__1();
lean_mark_persistent(l_Nat_instSemiring___closed__1);
l_Nat_instSemiring___closed__2 = _init_l_Nat_instSemiring___closed__2();
lean_mark_persistent(l_Nat_instSemiring___closed__2);
l_Nat_instSemiring = _init_l_Nat_instSemiring();
lean_mark_persistent(l_Nat_instSemiring);
l_Nat_instCommSemiring = _init_l_Nat_instCommSemiring();
lean_mark_persistent(l_Nat_instCommSemiring);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
