// Lean compiler output
// Module: Mathlib.Data.Finsupp.Encodable
// Imports: Init Mathlib.Data.Finsupp.ToDFinsupp Mathlib.Data.DFinsupp.Encodable
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
lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEncodableFinsuppOfDecidableNeOfNat___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instEncodableDFinsuppOfDecidableNeOfNat___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Encodable_decidableEqOfEncodable___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEncodableFinsuppOfDecidableNeOfNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_finsuppEquivDFinsupp___elambda__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_finsuppEquivDFinsupp___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___lambda__1(lean_object*);
lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_Encodable_decidableEqOfEncodable___rarg___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_finsuppEquivDFinsupp___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_finsuppEquivDFinsupp___elambda__1___rarg), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_3);
x_9 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2___boxed), 3, 1);
lean_closure_set(x_10, 0, x_4);
x_11 = l_instEncodableDFinsuppOfDecidableNeOfNat___rarg(x_8, x_1, x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_5);
x_13 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1;
x_9 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_9, 0, x_8);
lean_closure_set(x_9, 1, x_6);
x_10 = l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_9, lean_box(0));
return x_10;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg), 7, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg(x_1, x_2, x_3, x_4, x_6, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instEncodableFinsuppOfDecidableNeOfNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_finsuppEquivDFinsupp___at_instEncodableFinsuppOfDecidableNeOfNat___spec__1___rarg(x_1, x_3, x_4);
x_6 = l_Encodable_ofEquiv___at_instEncodableFinsuppOfDecidableNeOfNat___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instEncodableFinsuppOfDecidableNeOfNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instEncodableFinsuppOfDecidableNeOfNat___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Encodable_ofLeftInjection___at_instEncodableFinsuppOfDecidableNeOfNat___spec__4___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_ToDFinsupp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Encodable(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finsupp_Encodable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_ToDFinsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Encodable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1 = _init_l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___at_instEncodableFinsuppOfDecidableNeOfNat___spec__3___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
