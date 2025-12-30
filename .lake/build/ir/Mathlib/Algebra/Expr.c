// Lean compiler output
// Module: Mathlib.Algebra.Expr
// Imports: Init Mathlib.Data.One.Defs Qq
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Expr_instOne___closed__6;
LEAN_EXPORT lean_object* l_Expr_instAdd___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Expr_instMul___elambda__1___closed__1;
lean_object* l_Lean_Expr_lit___override(lean_object*);
static lean_object* l_Expr_instOne___closed__7;
static lean_object* l_Expr_instZero___closed__4;
static lean_object* l_Expr_instOne___closed__4;
static lean_object* l_Expr_instAdd___elambda__1___closed__5;
static lean_object* l_Expr_instMul___elambda__1___closed__3;
LEAN_EXPORT lean_object* l_Expr_instZero(lean_object*, lean_object*, lean_object*);
static lean_object* l_Expr_instZero___closed__2;
static lean_object* l_Expr_instAdd___elambda__1___closed__4;
static lean_object* l_Expr_instMul___elambda__1___closed__2;
static lean_object* l_Expr_instAdd___elambda__1___closed__2;
static lean_object* l_Expr_instOne___closed__5;
static lean_object* l_Expr_instZero___closed__3;
static lean_object* l_Expr_instOne___closed__8;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Expr_instOne___closed__3;
static lean_object* l_Expr_instAdd___elambda__1___closed__1;
static lean_object* l_Expr_instMul___elambda__1___closed__4;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_object* l_Expr_instOne___closed__1;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Expr_instAdd(lean_object*, lean_object*, lean_object*);
static lean_object* l_Expr_instOne___closed__2;
static lean_object* l_Expr_instMul___elambda__1___closed__5;
static lean_object* l_Expr_instAdd___elambda__1___closed__3;
static lean_object* l_Expr_instZero___closed__5;
static lean_object* l_Expr_instZero___closed__1;
LEAN_EXPORT lean_object* l_Expr_instMul___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Expr_instOne(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Expr_instMul(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Expr_instOne___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Expr_instOne___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Expr_instOne___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Expr_instOne___closed__1;
x_2 = l_Expr_instOne___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Expr_instOne___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Expr_instOne___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Expr_instOne___closed__4;
x_2 = l_Lean_Expr_lit___override(x_1);
return x_2;
}
}
static lean_object* _init_l_Expr_instOne___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("One", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Expr_instOne___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOfNat1", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Expr_instOne___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Expr_instOne___closed__6;
x_2 = l_Expr_instOne___closed__7;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Expr_instOne(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Expr_instOne___closed__3;
lean_inc(x_5);
x_7 = l_Lean_Expr_const___override(x_6, x_5);
lean_inc(x_2);
x_8 = l_Lean_Expr_app___override(x_7, x_2);
x_9 = l_Expr_instOne___closed__5;
x_10 = l_Lean_Expr_app___override(x_8, x_9);
x_11 = l_Expr_instOne___closed__8;
x_12 = l_Lean_Expr_const___override(x_11, x_5);
x_13 = l_Lean_Expr_app___override(x_12, x_2);
x_14 = l_Lean_Expr_app___override(x_13, x_3);
x_15 = l_Lean_Expr_app___override(x_10, x_14);
return x_15;
}
}
static lean_object* _init_l_Expr_instZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Expr_instZero___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Expr_instZero___closed__1;
x_2 = l_Lean_Expr_lit___override(x_1);
return x_2;
}
}
static lean_object* _init_l_Expr_instZero___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Zero", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Expr_instZero___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toOfNat0", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Expr_instZero___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Expr_instZero___closed__3;
x_2 = l_Expr_instZero___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Expr_instZero(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Expr_instOne___closed__3;
lean_inc(x_5);
x_7 = l_Lean_Expr_const___override(x_6, x_5);
lean_inc(x_2);
x_8 = l_Lean_Expr_app___override(x_7, x_2);
x_9 = l_Expr_instZero___closed__2;
x_10 = l_Lean_Expr_app___override(x_8, x_9);
x_11 = l_Expr_instZero___closed__5;
x_12 = l_Lean_Expr_const___override(x_11, x_5);
x_13 = l_Lean_Expr_app___override(x_12, x_2);
x_14 = l_Lean_Expr_app___override(x_13, x_3);
x_15 = l_Lean_Expr_app___override(x_10, x_14);
return x_15;
}
}
static lean_object* _init_l_Expr_instMul___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Expr_instMul___elambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Expr_instMul___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Expr_instMul___elambda__1___closed__1;
x_2 = l_Expr_instMul___elambda__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Expr_instMul___elambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHMul", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Expr_instMul___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Expr_instMul___elambda__1___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Expr_instMul___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = lean_box(0);
lean_inc(x_1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Expr_instMul___elambda__1___closed__3;
x_11 = l_Lean_Expr_const___override(x_10, x_9);
lean_inc(x_2);
x_12 = l_Lean_Expr_app___override(x_11, x_2);
lean_inc(x_2);
x_13 = l_Lean_Expr_app___override(x_12, x_2);
lean_inc(x_2);
x_14 = l_Lean_Expr_app___override(x_13, x_2);
x_15 = l_Expr_instMul___elambda__1___closed__5;
x_16 = l_Lean_Expr_const___override(x_15, x_7);
x_17 = l_Lean_Expr_app___override(x_16, x_2);
x_18 = l_Lean_Expr_app___override(x_17, x_3);
x_19 = l_Lean_Expr_app___override(x_14, x_18);
x_20 = l_Lean_Expr_app___override(x_19, x_4);
x_21 = l_Lean_Expr_app___override(x_20, x_5);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Expr_instMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Expr_instMul___elambda__1), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Expr_instAdd___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Expr_instAdd___elambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Expr_instAdd___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Expr_instAdd___elambda__1___closed__1;
x_2 = l_Expr_instAdd___elambda__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Expr_instAdd___elambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("instHAdd", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Expr_instAdd___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Expr_instAdd___elambda__1___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Expr_instAdd___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = lean_box(0);
lean_inc(x_1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Expr_instAdd___elambda__1___closed__3;
x_11 = l_Lean_Expr_const___override(x_10, x_9);
lean_inc(x_2);
x_12 = l_Lean_Expr_app___override(x_11, x_2);
lean_inc(x_2);
x_13 = l_Lean_Expr_app___override(x_12, x_2);
lean_inc(x_2);
x_14 = l_Lean_Expr_app___override(x_13, x_2);
x_15 = l_Expr_instAdd___elambda__1___closed__5;
x_16 = l_Lean_Expr_const___override(x_15, x_7);
x_17 = l_Lean_Expr_app___override(x_16, x_2);
x_18 = l_Lean_Expr_app___override(x_17, x_3);
x_19 = l_Lean_Expr_app___override(x_14, x_18);
x_20 = l_Lean_Expr_app___override(x_19, x_4);
x_21 = l_Lean_Expr_app___override(x_20, x_5);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Expr_instAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Expr_instAdd___elambda__1), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_One_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Qq(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Expr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_One_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Qq(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Expr_instOne___closed__1 = _init_l_Expr_instOne___closed__1();
lean_mark_persistent(l_Expr_instOne___closed__1);
l_Expr_instOne___closed__2 = _init_l_Expr_instOne___closed__2();
lean_mark_persistent(l_Expr_instOne___closed__2);
l_Expr_instOne___closed__3 = _init_l_Expr_instOne___closed__3();
lean_mark_persistent(l_Expr_instOne___closed__3);
l_Expr_instOne___closed__4 = _init_l_Expr_instOne___closed__4();
lean_mark_persistent(l_Expr_instOne___closed__4);
l_Expr_instOne___closed__5 = _init_l_Expr_instOne___closed__5();
lean_mark_persistent(l_Expr_instOne___closed__5);
l_Expr_instOne___closed__6 = _init_l_Expr_instOne___closed__6();
lean_mark_persistent(l_Expr_instOne___closed__6);
l_Expr_instOne___closed__7 = _init_l_Expr_instOne___closed__7();
lean_mark_persistent(l_Expr_instOne___closed__7);
l_Expr_instOne___closed__8 = _init_l_Expr_instOne___closed__8();
lean_mark_persistent(l_Expr_instOne___closed__8);
l_Expr_instZero___closed__1 = _init_l_Expr_instZero___closed__1();
lean_mark_persistent(l_Expr_instZero___closed__1);
l_Expr_instZero___closed__2 = _init_l_Expr_instZero___closed__2();
lean_mark_persistent(l_Expr_instZero___closed__2);
l_Expr_instZero___closed__3 = _init_l_Expr_instZero___closed__3();
lean_mark_persistent(l_Expr_instZero___closed__3);
l_Expr_instZero___closed__4 = _init_l_Expr_instZero___closed__4();
lean_mark_persistent(l_Expr_instZero___closed__4);
l_Expr_instZero___closed__5 = _init_l_Expr_instZero___closed__5();
lean_mark_persistent(l_Expr_instZero___closed__5);
l_Expr_instMul___elambda__1___closed__1 = _init_l_Expr_instMul___elambda__1___closed__1();
lean_mark_persistent(l_Expr_instMul___elambda__1___closed__1);
l_Expr_instMul___elambda__1___closed__2 = _init_l_Expr_instMul___elambda__1___closed__2();
lean_mark_persistent(l_Expr_instMul___elambda__1___closed__2);
l_Expr_instMul___elambda__1___closed__3 = _init_l_Expr_instMul___elambda__1___closed__3();
lean_mark_persistent(l_Expr_instMul___elambda__1___closed__3);
l_Expr_instMul___elambda__1___closed__4 = _init_l_Expr_instMul___elambda__1___closed__4();
lean_mark_persistent(l_Expr_instMul___elambda__1___closed__4);
l_Expr_instMul___elambda__1___closed__5 = _init_l_Expr_instMul___elambda__1___closed__5();
lean_mark_persistent(l_Expr_instMul___elambda__1___closed__5);
l_Expr_instAdd___elambda__1___closed__1 = _init_l_Expr_instAdd___elambda__1___closed__1();
lean_mark_persistent(l_Expr_instAdd___elambda__1___closed__1);
l_Expr_instAdd___elambda__1___closed__2 = _init_l_Expr_instAdd___elambda__1___closed__2();
lean_mark_persistent(l_Expr_instAdd___elambda__1___closed__2);
l_Expr_instAdd___elambda__1___closed__3 = _init_l_Expr_instAdd___elambda__1___closed__3();
lean_mark_persistent(l_Expr_instAdd___elambda__1___closed__3);
l_Expr_instAdd___elambda__1___closed__4 = _init_l_Expr_instAdd___elambda__1___closed__4();
lean_mark_persistent(l_Expr_instAdd___elambda__1___closed__4);
l_Expr_instAdd___elambda__1___closed__5 = _init_l_Expr_instAdd___elambda__1___closed__5();
lean_mark_persistent(l_Expr_instAdd___elambda__1___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
