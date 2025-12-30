// Lean compiler output
// Module: Mathlib.Algebra.Group.Pi.Units
// Imports: Init Mathlib.Algebra.Group.Equiv.Defs Mathlib.Algebra.Group.Pi.Basic Mathlib.Algebra.Group.Units.Defs Mathlib.Util.Delaborators
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
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_addMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__4(lean_object*, lean_object*);
lean_object* l_Pi_monoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg(lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_MulEquiv_piUnits___rarg___lambda__2), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_MulEquiv_piUnits___rarg___lambda__3), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_Pi_monoid___rarg(x_1);
x_3 = lean_alloc_closure((void*)(l_MulEquiv_piUnits___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_MulEquiv_piUnits___rarg___lambda__4___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulEquiv_piUnits___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_MulEquiv_piUnits___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulEquiv_piUnits___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulEquiv_piUnits___rarg___lambda__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_AddEquiv_piAddUnits___rarg___lambda__2), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_AddEquiv_piAddUnits___rarg___lambda__3), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_Pi_addMonoid___rarg(x_1);
x_3 = lean_alloc_closure((void*)(l_AddEquiv_piAddUnits___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_AddEquiv_piAddUnits___rarg___lambda__4___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddEquiv_piAddUnits___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_AddEquiv_piAddUnits___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_AddEquiv_piAddUnits___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddEquiv_piAddUnits___rarg___lambda__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Equiv_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Units_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_Delaborators(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Pi_Units(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Equiv_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Units_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_Delaborators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
