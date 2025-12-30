// Lean compiler output
// Module: Mathlib.Data.Rat.Encodable
// Imports: Init Mathlib.Logic.Encodable.Basic Mathlib.Data.Rat.Init
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
lean_object* lean_nat_gcd(lean_object*, lean_object*);
lean_object* l_Subtype_encodable___rarg(lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1;
extern lean_object* l_Nat_encodable;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Rat_instEncodable___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Rat_instEncodable___closed__2;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Rat_instEncodable;
LEAN_EXPORT uint8_t l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instEncodable___lambda__1(lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instEncodable___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__2(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2;
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1(lean_object*);
static lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1;
lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Int_encodable;
lean_object* l_Sigma_encodable___rarg(lean_object*, lean_object*);
static lean_object* l_Rat_instEncodable___closed__3;
LEAN_EXPORT uint8_t l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_nat_abs(x_1);
x_7 = lean_nat_gcd(x_6, x_2);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Nat_encodable;
x_4 = l_Subtype_encodable___rarg(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_encodable;
x_2 = l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1;
x_3 = l_Sigma_encodable___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2;
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2(x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Rat_instEncodable___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Rat_instEncodable___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
}
static lean_object* _init_l_Rat_instEncodable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instEncodable___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instEncodable___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instEncodable___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_instEncodable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instEncodable___closed__1;
x_2 = l_Rat_instEncodable___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_instEncodable() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instEncodable___closed__3;
x_2 = l_Encodable_ofEquiv___at_Rat_instEncodable___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Encodable_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Rat_Encodable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Encodable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1 = _init_l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__1);
l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2 = _init_l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2();
lean_mark_persistent(l_Encodable_ofLeftInjection___at_Rat_instEncodable___spec__3___closed__2);
l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1 = _init_l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___at_Rat_instEncodable___spec__2___closed__1);
l_Rat_instEncodable___closed__1 = _init_l_Rat_instEncodable___closed__1();
lean_mark_persistent(l_Rat_instEncodable___closed__1);
l_Rat_instEncodable___closed__2 = _init_l_Rat_instEncodable___closed__2();
lean_mark_persistent(l_Rat_instEncodable___closed__2);
l_Rat_instEncodable___closed__3 = _init_l_Rat_instEncodable___closed__3();
lean_mark_persistent(l_Rat_instEncodable___closed__3);
l_Rat_instEncodable = _init_l_Rat_instEncodable();
lean_mark_persistent(l_Rat_instEncodable);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
