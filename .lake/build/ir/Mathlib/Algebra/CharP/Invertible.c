// Lean compiler output
// Module: Mathlib.Algebra.CharP.Invertible
// Imports: Init Mathlib.Algebra.CharP.Defs Mathlib.Algebra.Field.Defs Mathlib.Algebra.GroupWithZero.Invertible
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
lean_object* l_DivisionRing_toDivisionSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invertibleTwo___rarg(lean_object*, lean_object*);
lean_object* l_Ring_toAddGroupWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleTwo(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfRingCharNotDvd(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfPos___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfPos(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleSucc(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toDivisionRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleSucc___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfRingCharNotDvd___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd(lean_object*);
LEAN_EXPORT lean_object* l_invertibleSucc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleThree(lean_object*);
LEAN_EXPORT lean_object* l_invertibleThree___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfRingCharNotDvd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_4 = l_Field_toDivisionRing___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Ring_toAddGroupWithOne___rarg(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_2);
x_10 = l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg(x_1, x_9, lean_box(0));
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_invertibleOfRingCharNotDvd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfRingCharNotDvd___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleOfRingCharNotDvd___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_6 = l_Field_toDivisionRing___rarg(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Ring_toAddGroupWithOne___rarg(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_10, x_4);
x_12 = l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg(x_1, x_11, lean_box(0));
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfCharPNotDvd___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleOfCharPNotDvd___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleOfCharPNotDvd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_invertibleOfCharPNotDvd___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Field_toSemifield___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfPos___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_5 = l_Field_toDivisionRing___rarg(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Ring_toAddGroupWithOne___rarg(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_1(x_9, x_3);
x_11 = l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg(x_1, x_10, lean_box(0));
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_invertibleOfPos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfPos___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleOfPos___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_DivisionRing_toDivisionSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleSucc___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Ring_toAddGroupWithOne___rarg(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
x_10 = lean_apply_1(x_7, x_9);
x_11 = l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg(x_1, x_10, lean_box(0));
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_invertibleSucc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleSucc___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleSucc___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleSucc___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleSucc___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_DivisionRing_toDivisionSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleTwo___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_apply_1(x_6, x_7);
x_9 = l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg(x_1, x_8, lean_box(0));
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_invertibleTwo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleTwo___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleTwo___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_DivisionRing_toDivisionSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleThree___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Ring_toAddGroupWithOne___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(3u);
x_8 = lean_apply_1(x_6, x_7);
x_9 = l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg(x_1, x_8, lean_box(0));
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_invertibleThree(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_invertibleThree___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_invertibleOfNonzero___at_invertibleThree___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_CharP_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Field_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Invertible(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_CharP_Invertible(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_CharP_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Field_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Invertible(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
