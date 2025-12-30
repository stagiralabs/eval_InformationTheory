// Lean compiler output
// Module: Mathlib.Order.SuccPred.Archimedean
// Imports: Init Mathlib.Order.SuccPred.Basic
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
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OrderDual_instLinearOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder(lean_object*);
LEAN_EXPORT uint8_t l_IsSuccArchimedean_linearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder(lean_object*);
lean_object* l_OrderDual_instPreorder(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IsPredArchimedean_linearOrder___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT uint8_t l_IsSuccArchimedean_linearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_IsSuccArchimedean_linearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_5);
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_IsSuccArchimedean_linearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_9, 0, x_5);
lean_inc(x_4);
lean_inc(x_6);
x_10 = lean_alloc_closure((void*)(l_IsSuccArchimedean_linearOrder___rarg___lambda__3___boxed), 4, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_4);
x_11 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
lean_ctor_set(x_11, 4, x_5);
lean_ctor_set(x_11, 5, x_4);
lean_ctor_set(x_11, 6, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsSuccArchimedean_linearOrder___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_IsSuccArchimedean_linearOrder___rarg___lambda__3(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsSuccArchimedean_linearOrder___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IsSuccArchimedean_linearOrder___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_apply_2(x_1, x_3, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_3);
x_4 = lean_apply_2(x_1, x_3, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT uint8_t l_IsPredArchimedean_linearOrder___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
lean_inc(x_4);
x_5 = lean_apply_2(x_1, x_4, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = 0;
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = l_OrderDual_instPreorder(lean_box(0), x_1);
lean_inc(x_5);
x_9 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_5);
lean_inc(x_6);
x_10 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___lambda__1), 3, 1);
lean_closure_set(x_10, 0, x_6);
lean_inc(x_5);
x_11 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___lambda__2), 3, 1);
lean_closure_set(x_11, 0, x_5);
x_12 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___lambda__3), 3, 1);
lean_closure_set(x_12, 0, x_5);
lean_inc(x_4);
x_13 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___lambda__4___boxed), 4, 2);
lean_closure_set(x_13, 0, x_6);
lean_closure_set(x_13, 1, x_4);
x_14 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_9);
lean_ctor_set(x_14, 5, x_4);
lean_ctor_set(x_14, 6, x_10);
x_15 = l_OrderDual_instLinearOrder___rarg(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsPredArchimedean_linearOrder___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_IsPredArchimedean_linearOrder___rarg___lambda__4(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsPredArchimedean_linearOrder___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_IsPredArchimedean_linearOrder___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SuccPred_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_SuccPred_Archimedean(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SuccPred_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
