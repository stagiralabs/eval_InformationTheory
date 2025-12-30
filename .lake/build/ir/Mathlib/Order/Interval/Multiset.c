// Lean compiler output
// Module: Mathlib.Order.Interval.Multiset
// Imports: Init Mathlib.Order.Interval.Finset.Basic
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
LEAN_EXPORT lean_object* l_Multiset_Ici___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Icc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Icc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iio(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ico___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iio___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ico___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioo___boxed(lean_object*, lean_object*);
lean_object* l_Finset_Iio___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioi___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ici(lean_object*, lean_object*);
lean_object* l_Finset_Ico___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ico(lean_object*, lean_object*);
lean_object* l_Finset_Ici___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Icc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iio___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ici___boxed(lean_object*, lean_object*);
lean_object* l_Finset_Iic___rarg(lean_object*, lean_object*);
lean_object* l_Finset_Icc___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Ioi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioi(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioo___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Finset_Ioc___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Iic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Ioi___rarg(lean_object*, lean_object*);
lean_object* l_Finset_Ioo___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Icc___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_Icc___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Icc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Icc___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Icc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Icc(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ico___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_Ico___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ico(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Ico___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ico___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Ico(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioc___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_Ioc___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Ioc___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Ioc(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioo___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Finset_Ioo___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Ioo___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Ioo(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ici___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Ici___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ici(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Ici___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ici___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Ici(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Ioi___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioi(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Ioi___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Ioi___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Ioi(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iic___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Iic___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iic(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Iic___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iic___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Iic(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iio___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_Iio___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iio(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_Iio___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_Iio___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_Iio(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Multiset(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
