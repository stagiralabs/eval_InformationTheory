// Lean compiler output
// Module: Mathlib.Data.Int.Range
// Imports: Init Mathlib.Algebra.Order.Ring.Int
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
LEAN_EXPORT lean_object* l_Int_decidableLELE(lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLELT(lean_object*);
static lean_object* l_Int_decidableLELE___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Int_range___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_decidableLTLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLELT___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLTLE___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLTLT___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_Int_range(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_decidableLELE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_range___boxed(lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLTLT(lean_object*);
LEAN_EXPORT uint8_t l_Int_decidableLELT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLTLE(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Int_range___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Int_decidableLELE___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_decidableLTLT___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Int_range___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_nat_to_int(x_6);
x_9 = lean_int_add(x_1, x_8);
lean_dec(x_8);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_9);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_nat_to_int(x_11);
x_14 = lean_int_add(x_1, x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_range(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_int_sub(x_2, x_1);
x_4 = l_Int_toNat(x_3);
lean_dec(x_3);
x_5 = l_List_range(x_4);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_Int_range___spec__1(x_1, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Int_range___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_Int_range___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Int_range___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_range(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Int_decidableLELT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Int_range(x_2, x_3);
x_5 = l_List_decidableBAll___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLELT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_decidableLELT___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLELT___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Int_decidableLELT___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_l_Int_decidableLELE___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Int_decidableLELE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Int_decidableLELE___rarg___closed__1;
x_5 = lean_int_add(x_3, x_4);
x_6 = l_Int_range(x_2, x_5);
lean_dec(x_5);
x_7 = l_List_decidableBAll___rarg(x_1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLELE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_decidableLELE___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLELE___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Int_decidableLELE___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Int_decidableLTLT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Int_decidableLELE___rarg___closed__1;
x_5 = lean_int_add(x_2, x_4);
x_6 = l_Int_decidableLELT___rarg(x_1, x_5, x_3);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLTLT(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_decidableLTLT___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLTLT___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Int_decidableLTLT___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Int_decidableLTLE___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Int_decidableLELE___rarg___closed__1;
x_5 = lean_int_add(x_2, x_4);
x_6 = l_Int_decidableLELE___rarg(x_1, x_5, x_3);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLTLE(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Int_decidableLTLE___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Int_decidableLTLE___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Int_decidableLTLE___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Int(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Int_Range(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_decidableLELE___rarg___closed__1 = _init_l_Int_decidableLELE___rarg___closed__1();
lean_mark_persistent(l_Int_decidableLELE___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
