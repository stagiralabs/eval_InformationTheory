// Lean compiler output
// Module: Mathlib.Combinatorics.SetFamily.FourFunctions
// Imports: Init Mathlib.Algebra.Order.BigOperators.Group.Finset Mathlib.Algebra.Order.Pi Mathlib.Data.Finset.Sups Mathlib.Order.Birkhoff Mathlib.Order.Booleanisation Mathlib.Order.Sublattice Mathlib.Tactic.Positivity.Basic Mathlib.Tactic.Ring
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
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2(lean_object*);
lean_object* l_Multiset_erase___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4(lean_object*, lean_object*);
lean_object* l_Multiset_sum___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__1(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_List_reverse___rarg(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_2);
lean_inc(x_8);
lean_inc(x_1);
x_10 = l_Multiset_erase___rarg(x_1, x_8, x_2);
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_10, x_3);
if (x_11 == 0)
{
lean_free_object(x_4);
lean_dec(x_8);
x_4 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_5);
{
lean_object* _tmp_3 = x_9;
lean_object* _tmp_4 = x_4;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_14);
lean_inc(x_1);
x_16 = l_Multiset_erase___rarg(x_1, x_14, x_2);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_1, x_16, x_3);
if (x_17 == 0)
{
lean_dec(x_14);
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_5);
x_4 = x_15;
x_5 = x_19;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_filterTR_loop___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_LinearOrderedCommSemiring_toLinearOrderedSemiring___rarg(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Semiring_toNonAssocSemiring___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Multiset_map___rarg(x_3, x_2);
x_11 = l_Multiset_sum___rarg(x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Multiset_filter___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__2___rarg(x_1, x_4, x_6, x_3);
x_8 = l_Finset_sum___at___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___spec__4___rarg(x_2, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SetFamily_FourFunctions_0__collapse___rarg), 6, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sups(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Birkhoff(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Booleanisation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Sublattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Positivity_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SetFamily_FourFunctions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_BigOperators_Group_Finset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sups(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Birkhoff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Booleanisation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Sublattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Positivity_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
