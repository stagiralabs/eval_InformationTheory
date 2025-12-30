// Lean compiler output
// Module: Mathlib.Order.Interval.Set.ProjIcc
// Imports: Init Mathlib.Data.Set.Function Mathlib.Order.Interval.Set.OrdConnected
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
LEAN_EXPORT lean_object* l_Set_IciExtend___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_IicExtend___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIcc(lean_object*);
LEAN_EXPORT lean_object* l_Set_IciExtend(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIci(lean_object*);
LEAN_EXPORT lean_object* l_Set_IicExtend___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIic(lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_projIcc___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIci___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIic___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_IccExtend___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_IicExtend(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_IccExtend(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIic___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_projIci___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Set_projIci(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_projIci___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_projIic___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_LinearOrder_toLattice___rarg(x_1);
x_5 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_projIic(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_projIic___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_projIic___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_projIic___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_projIcc___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_LinearOrder_toLattice___rarg(x_1);
x_7 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_6, x_3, x_5);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_2, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Set_projIcc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Set_projIcc___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_IciExtend___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Set_projIci___rarg(x_1, x_2, x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_IciExtend(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_IciExtend___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_IicExtend___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Set_projIic___rarg(x_1, x_2, x_4);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_IicExtend(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_IicExtend___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_IicExtend___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Set_IicExtend___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_IccExtend___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Set_projIcc___rarg(x_1, x_2, x_3, lean_box(0), x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Set_IccExtend(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_IccExtend___rarg), 6, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Function(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Interval_Set_OrdConnected(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Interval_Set_ProjIcc(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Function(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Interval_Set_OrdConnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
