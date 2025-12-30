// Lean compiler output
// Module: Mathlib.Order.ConditionallyCompleteLattice.Defs
// Imports: Init Mathlib.Order.Bounds.Basic Mathlib.Order.SetNotation Mathlib.Order.WellFounded
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
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsInf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsSup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsInf(lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup(lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsInf(lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsInf___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsSup(lean_object*);
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_2);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsSup___rarg___lambda__2), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsSup___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsSup___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_2);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsSup___rarg___lambda__2), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfsInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfsInf___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = l_Lattice_toSemilatticeInf___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = l_conditionallyCompleteLatticeOfsSup___rarg(x_5, x_2, lean_box(0), lean_box(0), lean_box(0));
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 0, x_1);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfLatticeOfsSup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = l_Lattice_toSemilatticeInf___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = l_conditionallyCompleteLatticeOfsInf___rarg(x_5, x_2, lean_box(0), lean_box(0), lean_box(0));
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 0, x_1);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_2);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_conditionallyCompleteLatticeOfLatticeOfsInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_conditionallyCompleteLatticeOfLatticeOfsInf___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Bounds_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_SetNotation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_WellFounded(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_ConditionallyCompleteLattice_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Bounds_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_SetNotation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_WellFounded(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
