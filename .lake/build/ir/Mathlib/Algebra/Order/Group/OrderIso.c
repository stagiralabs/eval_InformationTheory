// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.OrderIso
// Imports: Init Mathlib.Algebra.Group.Units.Equiv Mathlib.Algebra.Order.Group.Unbundled.Basic Mathlib.Order.Hom.Basic
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
LEAN_EXPORT lean_object* l_OrderIso_addLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_OrderIso_inv___rarg___closed__1;
lean_object* l_Equiv_addLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_divRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulLeft(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_addRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_inv(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_OrderIso_neg___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_addRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divLeft(lean_object*);
lean_object* l_Equiv_mulLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_addRight(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_neg(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_addRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_neg___at_OrderIso_neg___spec__1(lean_object*);
lean_object* l_Equiv_divLeft___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_inv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_inv___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_inv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_addLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulRight___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_neg___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_OrderIso_inv___spec__1(lean_object*);
lean_object* l_Equiv_neg___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subLeft(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_OrderIso_inv___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulLeft___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulRight(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_neg___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_addLeft(lean_object*);
lean_object* l_Equiv_subRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_mulRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulRight___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subRight(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_subLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_divRight(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_mulLeft___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_inv___at_OrderIso_inv___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_inv___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_inv___at_OrderIso_inv___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_inv___at_OrderIso_inv___spec__1___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_OrderIso_inv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderIso_inv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_inv___at_OrderIso_inv___spec__1___rarg(x_1);
x_6 = l_OrderIso_inv___rarg___closed__1;
x_7 = l_Equiv_trans___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_inv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_inv___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_inv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_inv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_OrderIso_neg___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_neg___at_OrderIso_neg___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_neg___at_OrderIso_neg___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_neg___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Equiv_neg___at_OrderIso_neg___spec__1___rarg(x_1);
x_6 = l_OrderIso_inv___rarg___closed__1;
x_7 = l_Equiv_trans___rarg(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_OrderIso_neg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_neg___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_neg___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_neg___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Equiv_divLeft___rarg(x_1, x_5);
x_7 = l_OrderIso_inv___rarg___closed__1;
x_8 = l_Equiv_trans___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_divLeft___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIso_divLeft___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Equiv_subLeft___rarg(x_1, x_5);
x_7 = l_OrderIso_inv___rarg___closed__1;
x_8 = l_Equiv_trans___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_subLeft___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OrderIso_subLeft___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_mulRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_mulRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_mulRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_addRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_addRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_addRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_divRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_divRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_divRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_divRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subRight___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_subRight___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subRight(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_subRight___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_subRight___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_subRight___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_mulLeft___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_mulLeft___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_mulLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_mulLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addLeft___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Equiv_addLeft___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderIso_addLeft___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderIso_addLeft___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OrderIso_addLeft___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_OrderIso(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_OrderIso_inv___rarg___closed__1 = _init_l_OrderIso_inv___rarg___closed__1();
lean_mark_persistent(l_OrderIso_inv___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
