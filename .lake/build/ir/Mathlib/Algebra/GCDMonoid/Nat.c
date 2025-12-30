// Lean compiler output
// Module: Mathlib.Algebra.GCDMonoid.Nat
// Imports: Init Mathlib.Algebra.GCDMonoid.Basic Mathlib.Algebra.Order.Group.Unbundled.Int Mathlib.Algebra.Ring.Int.Units Mathlib.Data.Int.GCD
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
static lean_object* l_Int_normalizationMonoid___closed__4;
lean_object* l_Int_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instNormalizedGCDMonoidNat;
lean_object* l_Int_lcm(lean_object*, lean_object*);
static lean_object* l_Int_instNormalizedGCDMonoid___closed__1;
static lean_object* l_associatesIntEquivNat___closed__1;
LEAN_EXPORT lean_object* l_Associates_out___at_associatesIntEquivNat___elambda__2___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_normalizationMonoid___boxed(lean_object*);
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__2(lean_object*);
lean_object* l_CommMonoidWithZero_toMonoidWithZero___rarg(lean_object*);
static lean_object* l_associatesIntEquivNat___closed__3;
LEAN_EXPORT lean_object* l_associatesIntEquivNat;
LEAN_EXPORT lean_object* l_normalize___at_associatesIntEquivNat___elambda__2___spec__2___boxed(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_gcd___boxed(lean_object*, lean_object*);
static lean_object* l_Int_normalizationMonoid___closed__3;
static lean_object* l_Int_normalizationMonoid___closed__1;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_instNormalizedGCDMonoidNat___closed__2;
static lean_object* l_Int_normalizationMonoid___closed__6;
LEAN_EXPORT lean_object* l_Int_normalizationMonoid(lean_object*);
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_normalize___at_associatesIntEquivNat___elambda__2___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Int_instNormalizedGCDMonoid;
LEAN_EXPORT lean_object* l_Int_instGCDMonoid;
lean_object* l_Nat_lcm___boxed(lean_object*, lean_object*);
lean_object* l_NormalizationMonoid_ofUniqueUnits___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_instNormalizedGCDMonoidNat___closed__1;
static lean_object* l_Int_normalizationMonoid___closed__2;
LEAN_EXPORT lean_object* l_instGCDMonoidNat;
static lean_object* l_instGCDMonoidNat___closed__3;
LEAN_EXPORT lean_object* l_Associates_out___at_associatesIntEquivNat___elambda__2___spec__1___boxed(lean_object*);
static lean_object* l_Int_instNormalizedGCDMonoid___closed__2;
extern lean_object* l_Nat_instCancelCommMonoidWithZero;
lean_object* lean_nat_abs(lean_object*);
static lean_object* l_Int_instGCDMonoid___closed__3;
lean_object* lean_int_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__2(lean_object*, lean_object*);
extern lean_object* l_Int_instCancelCommMonoidWithZero;
static lean_object* l_associatesIntEquivNat___closed__2;
static lean_object* l_instGCDMonoidNat___closed__2;
static lean_object* l_Int_normalizationMonoid___closed__5;
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__1(lean_object*);
static lean_object* l_instGCDMonoidNat___closed__1;
static lean_object* l_Int_instGCDMonoid___closed__2;
static lean_object* l_Int_instGCDMonoid___closed__1;
lean_object* lean_int_neg(lean_object*);
static lean_object* _init_l_instGCDMonoidNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_gcd___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instGCDMonoidNat___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_lcm___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instGCDMonoidNat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instGCDMonoidNat___closed__1;
x_2 = l_instGCDMonoidNat___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_instGCDMonoidNat() {
_start:
{
lean_object* x_1; 
x_1 = l_instGCDMonoidNat___closed__3;
return x_1;
}
}
static lean_object* _init_l_instNormalizedGCDMonoidNat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instCancelCommMonoidWithZero;
x_2 = lean_alloc_closure((void*)(l_NormalizationMonoid_ofUniqueUnits___rarg___boxed), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_instNormalizedGCDMonoidNat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instGCDMonoidNat;
x_2 = l_instNormalizedGCDMonoidNat___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_instNormalizedGCDMonoidNat() {
_start:
{
lean_object* x_1; 
x_1 = l_instNormalizedGCDMonoidNat___closed__2;
return x_1;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instCancelCommMonoidWithZero;
x_2 = l_CommMonoidWithZero_toMonoidWithZero___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_normalizationMonoid___closed__3;
x_2 = lean_int_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_normalizationMonoid___closed__4;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Int_normalizationMonoid___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_normalizationMonoid___closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_normalizationMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Int_normalizationMonoid___closed__1;
x_3 = lean_int_dec_le(x_2, x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l_Int_normalizationMonoid___closed__5;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l_Int_normalizationMonoid___closed__6;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Int_normalizationMonoid___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Int_normalizationMonoid(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Int_gcd(x_1, x_2);
x_4 = lean_nat_to_int(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Int_lcm(x_1, x_2);
x_4 = lean_nat_to_int(x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instGCDMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instGCDMonoid___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instGCDMonoid___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instGCDMonoid___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instGCDMonoid___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_instGCDMonoid___closed__1;
x_2 = l_Int_instGCDMonoid___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Int_instGCDMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instGCDMonoid___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instGCDMonoid___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Int_instGCDMonoid___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instGCDMonoid___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Int_instNormalizedGCDMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_normalizationMonoid___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instNormalizedGCDMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_instNormalizedGCDMonoid___closed__1;
x_2 = l_Int_instGCDMonoid;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Int_instNormalizedGCDMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instNormalizedGCDMonoid___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_normalize___at_associatesIntEquivNat___elambda__2___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Int_normalizationMonoid___closed__1;
x_3 = lean_int_dec_le(x_2, x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Int_normalizationMonoid___closed__4;
x_5 = lean_int_mul(x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Int_normalizationMonoid___closed__3;
x_7 = lean_int_mul(x_1, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Associates_out___at_associatesIntEquivNat___elambda__2___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_normalize___at_associatesIntEquivNat___elambda__2___spec__2(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_normalize___at_associatesIntEquivNat___elambda__2___spec__2(x_1);
x_3 = lean_nat_abs(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_associatesIntEquivNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_associatesIntEquivNat___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_associatesIntEquivNat___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_associatesIntEquivNat___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_associatesIntEquivNat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_associatesIntEquivNat___closed__1;
x_2 = l_associatesIntEquivNat___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_associatesIntEquivNat() {
_start:
{
lean_object* x_1; 
x_1 = l_associatesIntEquivNat___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_normalize___at_associatesIntEquivNat___elambda__2___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_normalize___at_associatesIntEquivNat___elambda__2___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Associates_out___at_associatesIntEquivNat___elambda__2___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Associates_out___at_associatesIntEquivNat___elambda__2___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_associatesIntEquivNat___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_associatesIntEquivNat___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GCDMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Int_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_GCD(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GCDMonoid_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GCDMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Int_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_GCD(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instGCDMonoidNat___closed__1 = _init_l_instGCDMonoidNat___closed__1();
lean_mark_persistent(l_instGCDMonoidNat___closed__1);
l_instGCDMonoidNat___closed__2 = _init_l_instGCDMonoidNat___closed__2();
lean_mark_persistent(l_instGCDMonoidNat___closed__2);
l_instGCDMonoidNat___closed__3 = _init_l_instGCDMonoidNat___closed__3();
lean_mark_persistent(l_instGCDMonoidNat___closed__3);
l_instGCDMonoidNat = _init_l_instGCDMonoidNat();
lean_mark_persistent(l_instGCDMonoidNat);
l_instNormalizedGCDMonoidNat___closed__1 = _init_l_instNormalizedGCDMonoidNat___closed__1();
lean_mark_persistent(l_instNormalizedGCDMonoidNat___closed__1);
l_instNormalizedGCDMonoidNat___closed__2 = _init_l_instNormalizedGCDMonoidNat___closed__2();
lean_mark_persistent(l_instNormalizedGCDMonoidNat___closed__2);
l_instNormalizedGCDMonoidNat = _init_l_instNormalizedGCDMonoidNat();
lean_mark_persistent(l_instNormalizedGCDMonoidNat);
l_Int_normalizationMonoid___closed__1 = _init_l_Int_normalizationMonoid___closed__1();
lean_mark_persistent(l_Int_normalizationMonoid___closed__1);
l_Int_normalizationMonoid___closed__2 = _init_l_Int_normalizationMonoid___closed__2();
lean_mark_persistent(l_Int_normalizationMonoid___closed__2);
l_Int_normalizationMonoid___closed__3 = _init_l_Int_normalizationMonoid___closed__3();
lean_mark_persistent(l_Int_normalizationMonoid___closed__3);
l_Int_normalizationMonoid___closed__4 = _init_l_Int_normalizationMonoid___closed__4();
lean_mark_persistent(l_Int_normalizationMonoid___closed__4);
l_Int_normalizationMonoid___closed__5 = _init_l_Int_normalizationMonoid___closed__5();
lean_mark_persistent(l_Int_normalizationMonoid___closed__5);
l_Int_normalizationMonoid___closed__6 = _init_l_Int_normalizationMonoid___closed__6();
lean_mark_persistent(l_Int_normalizationMonoid___closed__6);
l_Int_instGCDMonoid___closed__1 = _init_l_Int_instGCDMonoid___closed__1();
lean_mark_persistent(l_Int_instGCDMonoid___closed__1);
l_Int_instGCDMonoid___closed__2 = _init_l_Int_instGCDMonoid___closed__2();
lean_mark_persistent(l_Int_instGCDMonoid___closed__2);
l_Int_instGCDMonoid___closed__3 = _init_l_Int_instGCDMonoid___closed__3();
lean_mark_persistent(l_Int_instGCDMonoid___closed__3);
l_Int_instGCDMonoid = _init_l_Int_instGCDMonoid();
lean_mark_persistent(l_Int_instGCDMonoid);
l_Int_instNormalizedGCDMonoid___closed__1 = _init_l_Int_instNormalizedGCDMonoid___closed__1();
lean_mark_persistent(l_Int_instNormalizedGCDMonoid___closed__1);
l_Int_instNormalizedGCDMonoid___closed__2 = _init_l_Int_instNormalizedGCDMonoid___closed__2();
lean_mark_persistent(l_Int_instNormalizedGCDMonoid___closed__2);
l_Int_instNormalizedGCDMonoid = _init_l_Int_instNormalizedGCDMonoid();
lean_mark_persistent(l_Int_instNormalizedGCDMonoid);
l_associatesIntEquivNat___closed__1 = _init_l_associatesIntEquivNat___closed__1();
lean_mark_persistent(l_associatesIntEquivNat___closed__1);
l_associatesIntEquivNat___closed__2 = _init_l_associatesIntEquivNat___closed__2();
lean_mark_persistent(l_associatesIntEquivNat___closed__2);
l_associatesIntEquivNat___closed__3 = _init_l_associatesIntEquivNat___closed__3();
lean_mark_persistent(l_associatesIntEquivNat___closed__3);
l_associatesIntEquivNat = _init_l_associatesIntEquivNat();
lean_mark_persistent(l_associatesIntEquivNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
