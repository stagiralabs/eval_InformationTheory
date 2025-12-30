// Lean compiler output
// Module: Mathlib.Data.Char
// Imports: Init Mathlib.Data.Nat.Basic Mathlib.Order.Defs.LinearOrder
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
static lean_object* l_instLinearOrderChar___closed__2;
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instLinearOrderChar___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_instLinearOrderChar___closed__4;
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2(uint32_t, uint32_t);
static lean_object* l_instLinearOrderChar___closed__7;
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
static lean_object* l_instLinearOrderChar___closed__8;
LEAN_EXPORT lean_object* l_instLinearOrderChar;
extern lean_object* l_Char_instLE;
static lean_object* l_instLinearOrderChar___closed__6;
LEAN_EXPORT lean_object* l_instLinearOrderChar___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_instLinearOrderChar___closed__1;
LEAN_EXPORT uint32_t l_instLinearOrderChar___lambda__2(uint32_t, uint32_t);
static lean_object* l_instLinearOrderChar___closed__3;
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1(uint32_t, uint32_t);
LEAN_EXPORT uint32_t l_instLinearOrderChar___lambda__1(uint32_t, uint32_t);
extern lean_object* l_Char_instLT;
static lean_object* l_instLinearOrderChar___closed__5;
lean_object* l_Char_instDecidableLe___boxed(lean_object*, lean_object*);
lean_object* l_instOrdChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1(uint32_t x_1, uint32_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint32_dec_le(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = lean_uint32_dec_le(x_2, x_1);
return x_5;
}
}
}
LEAN_EXPORT uint8_t l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2(uint32_t x_1, uint32_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint32_dec_le(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = lean_uint32_dec_le(x_2, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
}
LEAN_EXPORT uint32_t l_instLinearOrderChar___lambda__1(uint32_t x_1, uint32_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint32_dec_le(x_1, x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
return x_1;
}
}
}
LEAN_EXPORT uint32_t l_instLinearOrderChar___lambda__2(uint32_t x_1, uint32_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint32_dec_le(x_1, x_2);
if (x_3 == 0)
{
return x_1;
}
else
{
return x_2;
}
}
}
static lean_object* _init_l_instLinearOrderChar___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_instLE;
x_2 = l_Char_instLT;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instLinearOrderChar___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instLinearOrderChar___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instOrdChar___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Char_instDecidableLe___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instLinearOrderChar___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_instLinearOrderChar___closed__1;
x_2 = l_instLinearOrderChar___closed__2;
x_3 = l_instLinearOrderChar___closed__3;
x_4 = l_instLinearOrderChar___closed__4;
x_5 = l_instLinearOrderChar___closed__5;
x_6 = l_instLinearOrderChar___closed__6;
x_7 = l_instLinearOrderChar___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_instLinearOrderChar() {
_start:
{
lean_object* x_1; 
x_1 = l_instLinearOrderChar___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_decidableEqOfDecidableLE___at_instLinearOrderChar___spec__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_decidableLTOfDecidableLE___at_instLinearOrderChar___spec__2(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instLinearOrderChar___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_instLinearOrderChar___lambda__1(x_3, x_4);
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_instLinearOrderChar___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_instLinearOrderChar___lambda__2(x_3, x_4);
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Defs_LinearOrder(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Char(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Defs_LinearOrder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instLinearOrderChar___closed__1 = _init_l_instLinearOrderChar___closed__1();
lean_mark_persistent(l_instLinearOrderChar___closed__1);
l_instLinearOrderChar___closed__2 = _init_l_instLinearOrderChar___closed__2();
lean_mark_persistent(l_instLinearOrderChar___closed__2);
l_instLinearOrderChar___closed__3 = _init_l_instLinearOrderChar___closed__3();
lean_mark_persistent(l_instLinearOrderChar___closed__3);
l_instLinearOrderChar___closed__4 = _init_l_instLinearOrderChar___closed__4();
lean_mark_persistent(l_instLinearOrderChar___closed__4);
l_instLinearOrderChar___closed__5 = _init_l_instLinearOrderChar___closed__5();
lean_mark_persistent(l_instLinearOrderChar___closed__5);
l_instLinearOrderChar___closed__6 = _init_l_instLinearOrderChar___closed__6();
lean_mark_persistent(l_instLinearOrderChar___closed__6);
l_instLinearOrderChar___closed__7 = _init_l_instLinearOrderChar___closed__7();
lean_mark_persistent(l_instLinearOrderChar___closed__7);
l_instLinearOrderChar___closed__8 = _init_l_instLinearOrderChar___closed__8();
lean_mark_persistent(l_instLinearOrderChar___closed__8);
l_instLinearOrderChar = _init_l_instLinearOrderChar();
lean_mark_persistent(l_instLinearOrderChar);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
