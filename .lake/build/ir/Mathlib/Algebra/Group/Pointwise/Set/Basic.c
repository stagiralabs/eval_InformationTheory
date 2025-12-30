// Lean compiler output
// Module: Mathlib.Algebra.Group.Pointwise.Set.Basic
// Imports: Init Mathlib.Algebra.Group.Equiv.Basic Mathlib.Algebra.Group.Prod Mathlib.Algebra.Group.Units.Hom Mathlib.Algebra.Opposites Mathlib.Algebra.Order.Monoid.Unbundled.Pow Mathlib.Data.Set.Lattice
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
LEAN_EXPORT lean_object* l_Set_vsub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_NPow___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_ZPow(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_vaddSet___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_mul___closed__1;
LEAN_EXPORT lean_object* l_Set_sub___boxed(lean_object*, lean_object*);
static lean_object* l_Set_ZSMul___closed__1;
LEAN_EXPORT lean_object* l_Set_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_vaddSet(lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_NSMul___closed__1;
LEAN_EXPORT lean_object* l_Set_ZPow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_vsub___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_div___boxed(lean_object*, lean_object*);
lean_object* l_nsmulRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_inv___closed__1;
LEAN_EXPORT lean_object* l_Set_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_inv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_ZSMul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_NPow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_inv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_neg(lean_object*, lean_object*);
lean_object* l_zsmulRec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_smulSet___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_neg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_NSMul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_vadd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_vadd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_NSMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_smulSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_ZSMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_mul___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Set_inv___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_inv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_inv___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_inv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_inv(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_neg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_inv___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_neg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_neg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Set_mul___closed__1() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_mul___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_mul(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_mul___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_add(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_div(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_mul___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_div(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_sub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_mul___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_sub(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_smulSet(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_smulSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_smulSet(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_vaddSet(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_vaddSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_vaddSet(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_mul___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_vadd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_mul___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_vadd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_vadd(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_vsub(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_mul___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_vsub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_vsub(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Set_NSMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_nsmulRec___rarg___boxed), 4, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_NSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_NSMul___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_NSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_NSMul(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_NPow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_NPow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_NPow(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Set_ZSMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_zsmulRec___rarg___boxed), 4, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Set_ZSMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_ZSMul___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_ZSMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_ZSMul(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_ZPow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_ZPow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_ZPow(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Equiv_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Hom(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Opposites(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_Pow(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Hom(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Opposites(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_Pow(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_inv___closed__1 = _init_l_Set_inv___closed__1();
lean_mark_persistent(l_Set_inv___closed__1);
l_Set_mul___closed__1 = _init_l_Set_mul___closed__1();
lean_mark_persistent(l_Set_mul___closed__1);
l_Set_NSMul___closed__1 = _init_l_Set_NSMul___closed__1();
lean_mark_persistent(l_Set_NSMul___closed__1);
l_Set_ZSMul___closed__1 = _init_l_Set_ZSMul___closed__1();
lean_mark_persistent(l_Set_ZSMul___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
