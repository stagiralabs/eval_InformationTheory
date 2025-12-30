// Lean compiler output
// Module: Mathlib.Data.Sym.Sym2.Order
// Imports: Init Mathlib.Data.Sym.Sym2 Mathlib.Order.Lattice
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
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___rarg(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym2_sup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym2_sup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Sym2_sup___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Function_uncurry___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym2_sup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_sup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Sym2_inf___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Function_uncurry___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_inf___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sym2_sortEquiv___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_LinearOrder_toLattice___rarg(x_1);
x_4 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Function_uncurry___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Function_uncurry___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg(x_1, x_2);
x_4 = l_Sym2_sup___at_Sym2_sortEquiv___elambda__2___spec__2___rarg(x_1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_sortEquiv___elambda__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Sym2_sortEquiv___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Sym2_sortEquiv___elambda__1___rarg___boxed), 1, 0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sym2_sortEquiv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Sym2_sortEquiv___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sym2_sortEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sym2_sortEquiv___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sym2_inf___at_Sym2_sortEquiv___elambda__2___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sym_Sym2(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Sym_Sym2_Order(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sym_Sym2(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
