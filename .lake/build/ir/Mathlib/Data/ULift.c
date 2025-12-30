// Lean compiler output
// Module: Mathlib.Data.ULift
// Imports: Init Mathlib.Control.ULift Mathlib.Logic.Equiv.Basic
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
lean_object* l_Function_Injective_decidableEq___at_Equiv_decidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PLift_instUnique___rarg(lean_object*);
LEAN_EXPORT lean_object* l_PLift_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PLift_instUnique(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDecidableEq__mathlib(lean_object*);
static lean_object* l_PLift_instUnique___rarg___closed__1;
lean_object* l_Equiv_ulift(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instUnique___rarg(lean_object*);
static lean_object* l_ULift_instUnique___rarg___closed__1;
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_plift(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instUnique(lean_object*);
LEAN_EXPORT lean_object* l_ULift_instDecidableEq__mathlib___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PLift_instDecidableEq__mathlib(lean_object*);
static lean_object* _init_l_PLift_instUnique___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_plift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_PLift_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_PLift_instUnique___rarg___closed__1;
x_3 = l_Equiv_symm___elambda__2___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PLift_instUnique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PLift_instUnique___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PLift_instDecidableEq__mathlib___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_PLift_instUnique___rarg___closed__1;
x_5 = l_Function_Injective_decidableEq___at_Equiv_decidableEq___spec__1___rarg(x_4, x_1, lean_box(0), x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PLift_instDecidableEq__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PLift_instDecidableEq__mathlib___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_ULift_instUnique___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULift_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULift_instUnique___rarg___closed__1;
x_3 = l_Equiv_symm___elambda__2___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_instUnique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_instUnique___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULift_instDecidableEq__mathlib___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_ULift_instUnique___rarg___closed__1;
x_5 = l_Function_Injective_decidableEq___at_Equiv_decidableEq___spec__1___rarg(x_4, x_1, lean_box(0), x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ULift_instDecidableEq__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_instDecidableEq__mathlib___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_ULift(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PLift_instUnique___rarg___closed__1 = _init_l_PLift_instUnique___rarg___closed__1();
lean_mark_persistent(l_PLift_instUnique___rarg___closed__1);
l_ULift_instUnique___rarg___closed__1 = _init_l_ULift_instUnique___rarg___closed__1();
lean_mark_persistent(l_ULift_instUnique___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
