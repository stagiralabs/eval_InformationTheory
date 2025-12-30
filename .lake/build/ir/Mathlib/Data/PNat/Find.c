// Lean compiler output
// Module: Mathlib.Data.PNat.Find
// Imports: Init Mathlib.Data.Nat.Find Mathlib.Data.PNat.Basic
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
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat(lean_object*);
LEAN_EXPORT lean_object* l_PNat_find___rarg(lean_object*, lean_object*);
lean_object* l_exists__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_findX___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_PNat_findX___spec__1(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_PNat_findX___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_findX(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_find(lean_object*);
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
x_5 = lean_alloc_closure((void*)(l_PNat_decidablePredExistsNat___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_exists__prop__decidable___rarg(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_PNat_decidablePredExistsNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PNat_decidablePredExistsNat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_PNat_decidablePredExistsNat___rarg(x_1, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_2, x_6);
lean_dec(x_2);
x_2 = x_7;
x_3 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_PNat_findX___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_PNat_findX___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_PNat_findX___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PNat_findX___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_findX(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PNat_findX___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PNat_find___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l___private_Batteries_WF_0__WellFounded_fixC___at_PNat_findX___spec__2___rarg(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_find(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PNat_find___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_PNat_Find(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
