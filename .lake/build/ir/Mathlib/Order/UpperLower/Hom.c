// Lean compiler output
// Module: Mathlib.Order.UpperLower.Hom
// Imports: Init Mathlib.Order.UpperLower.Basic Mathlib.Order.Hom.CompleteLattice
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
lean_object* l_CompleteLattice_toCompleteSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_UpperSet_Ici___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___rarg(lean_object*);
lean_object* l_LowerSet_Iic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom(lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_Ici___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_iciSupHom___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_UpperSet_iciSupHom___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_iciSupHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_iciSupHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_iciSupHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_Ici___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_icisSupHom___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_UpperSet_icisSupHom___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_UpperSet_icisSupHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UpperSet_icisSupHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_UpperSet_icisSupHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_Iic___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_iicInfHom___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_LowerSet_iicInfHom___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_iicInfHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicInfHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_iicInfHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_Iic___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_iicsInfHom___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_CompleteLattice_toCompleteSemilatticeInf___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_alloc_closure((void*)(l_LowerSet_iicsInfHom___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_LowerSet_iicsInfHom___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_LowerSet_iicsInfHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LowerSet_iicsInfHom___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_UpperLower_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_CompleteLattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_UpperLower_Hom(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_UpperLower_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_CompleteLattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
