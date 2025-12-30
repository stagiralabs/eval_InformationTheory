// Lean compiler output
// Module: Mathlib.Algebra.Group.Center
// Imports: Init Mathlib.Algebra.Group.Commute.Units Mathlib.Algebra.Group.Invertible.Basic Mathlib.Logic.Basic Mathlib.Data.Set.Basic
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
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCenter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCenter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCenter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_decidableMemCentralizer___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_decidableMemCentralizer(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_decidableMemAddCentralizer___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCentralizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_decidableMemAddCentralizer(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemCenter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemCenter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_decidableMemCenter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemCenter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_decidableMemCenter(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Set_decidableMemAddCenter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Set_decidableMemAddCenter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_decidableMemAddCenter(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Commute_Units(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Invertible_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_Center(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Commute_Units(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Invertible_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
