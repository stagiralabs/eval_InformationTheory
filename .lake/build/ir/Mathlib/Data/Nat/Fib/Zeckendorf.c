// Lean compiler output
// Module: Mathlib.Data.Nat.Fib.Zeckendorf
// Imports: Init Mathlib.Data.Nat.Fib.Basic
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
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_sum___at_Nat_zeckendorfEquiv___elambda__1___spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Nat_zeckendorfEquiv___elambda__1___spec__1(lean_object*, lean_object*);
static lean_object* l_Nat_zeckendorfEquiv___closed__3;
LEAN_EXPORT lean_object* l_Nat_zeckendorf(lean_object*);
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv;
LEAN_EXPORT lean_object* l_Nat_greatestFib___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__1(lean_object*);
lean_object* l_List_foldr___at_Nat_sum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___at_Nat_zeckendorfEquiv___elambda__1___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_greatestFib(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findGreatest___at_Nat_greatestFib___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_zeckendorfEquiv___closed__1;
lean_object* l_Nat_fib(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Nat_zeckendorfEquiv___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nat_zeckendorf___boxed(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findGreatest___at_Nat_greatestFib___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findGreatest___at_Nat_greatestFib___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
x_7 = lean_nat_add(x_6, x_5);
lean_inc(x_7);
x_8 = l_Nat_fib(x_7);
x_9 = lean_nat_dec_le(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_7);
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_6);
return x_7;
}
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(0u);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Nat_greatestFib(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = l_Nat_findGreatest___at_Nat_greatestFib___spec__1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_findGreatest___at_Nat_greatestFib___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_findGreatest___at_Nat_greatestFib___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_greatestFib___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_greatestFib(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_zeckendorf(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Nat_greatestFib(x_1);
lean_inc(x_4);
x_5 = l_Nat_fib(x_4);
x_6 = lean_nat_sub(x_1, x_5);
lean_dec(x_5);
x_7 = l_Nat_zeckendorf(x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Nat_zeckendorf___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_zeckendorf(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Nat_Fib_Zeckendorf_0__Nat_zeckendorf_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Nat_zeckendorfEquiv___elambda__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Nat_fib(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Nat_fib(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_sum___at_Nat_zeckendorfEquiv___elambda__1___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_foldr___at_Nat_sum___spec__1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_List_mapTR_loop___at_Nat_zeckendorfEquiv___elambda__1___spec__1(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_foldr___at_Nat_sum___spec__1(x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_zeckendorf(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_zeckendorfEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_zeckendorfEquiv___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_zeckendorfEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_zeckendorfEquiv___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_zeckendorfEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_zeckendorfEquiv___closed__1;
x_2 = l_Nat_zeckendorfEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_zeckendorfEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_zeckendorfEquiv___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_sum___at_Nat_zeckendorfEquiv___elambda__1___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_sum___at_Nat_zeckendorfEquiv___elambda__1___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_zeckendorfEquiv___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nat_zeckendorfEquiv___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Fib_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Nat_Fib_Zeckendorf(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Fib_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_zeckendorfEquiv___closed__1 = _init_l_Nat_zeckendorfEquiv___closed__1();
lean_mark_persistent(l_Nat_zeckendorfEquiv___closed__1);
l_Nat_zeckendorfEquiv___closed__2 = _init_l_Nat_zeckendorfEquiv___closed__2();
lean_mark_persistent(l_Nat_zeckendorfEquiv___closed__2);
l_Nat_zeckendorfEquiv___closed__3 = _init_l_Nat_zeckendorfEquiv___closed__3();
lean_mark_persistent(l_Nat_zeckendorfEquiv___closed__3);
l_Nat_zeckendorfEquiv = _init_l_Nat_zeckendorfEquiv();
lean_mark_persistent(l_Nat_zeckendorfEquiv);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
