// Lean compiler output
// Module: Mathlib.Data.Sym.Card
// Imports: Init Mathlib.Data.Finset.Sym Mathlib.Data.Fintype.Sum Mathlib.Data.Fintype.Prod Mathlib.Algebra.BigOperators.Group.Finset.Basic
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
lean_object* l_Fin_succAbove___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1;
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_erase___at_Sym_e1___elambda__2___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Sym_e2___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e2___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e2___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1___elambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e2___elambda__2(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1___elambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_erase___at_Sym_e1___elambda__2___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Fin_predAbove___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_erase___at_Sym_e1___elambda__2___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sym_e1___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_mod(x_6, x_5);
lean_dec(x_5);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
x_3 = x_8;
x_5 = x_10;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
x_3 = x_8;
x_5 = x_10;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_5);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_nat_dec_eq(x_6, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_array_push(x_5, x_6);
x_4 = x_7;
x_5 = x_9;
goto _start;
}
else
{
lean_object* x_11; uint8_t x_12; 
lean_dec(x_6);
x_11 = lean_array_get_size(x_5);
x_12 = lean_nat_dec_le(x_11, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_11);
if (x_14 == 0)
{
lean_dec(x_11);
lean_dec(x_5);
return x_7;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4(x_1, x_5, x_15, x_16, x_7);
lean_dec(x_5);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_11);
if (x_19 == 0)
{
lean_dec(x_11);
lean_dec(x_5);
return x_7;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = 0;
x_22 = l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5(x_1, x_5, x_20, x_21, x_7);
lean_dec(x_5);
return x_22;
}
}
}
}
}
}
static lean_object* _init_l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_erase___at_Sym_e1___elambda__2___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1;
lean_inc(x_2);
x_5 = l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3(x_1, x_2, x_3, x_2, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym_erase___at_Sym_e1___elambda__2___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Multiset_erase___at_Sym_e1___elambda__2___spec__2(x_1, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Sym_e1___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_mod(x_6, x_5);
lean_dec(x_5);
x_8 = l_Multiset_erase___at_Sym_e1___elambda__2___spec__2(x_1, x_3, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Sym_e1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Sym_e1___elambda__2___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Sym_e1___elambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym_e1___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sym_e1___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__4(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_Sym_e1___elambda__2___spec__5(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_eraseTR_go___at_Sym_e1___elambda__2___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Multiset_erase___at_Sym_e1___elambda__2___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym_erase___at_Sym_e1___elambda__2___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Sym_erase___at_Sym_e1___elambda__2___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Sym_e1___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sym_e1___elambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym_e2___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_nat_add(x_5, x_4);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_mod(x_7, x_6);
lean_dec(x_6);
x_9 = lean_alloc_closure((void*)(l_Fin_succAbove___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Multiset_map___rarg(x_9, x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Sym_e2___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_mod(x_6, x_5);
lean_dec(x_5);
x_8 = lean_alloc_closure((void*)(l_Fin_predAbove___rarg___boxed), 2, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = l_Multiset_map___rarg(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Sym_e2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Sym_e2___elambda__2___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Sym_e2___elambda__1___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sym_e2___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sym_e2___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sym_e2___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sym_e2___elambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Sym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Sum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Sym_Card(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Sym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Sum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1 = _init_l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1();
lean_mark_persistent(l_Multiset_erase___at_Sym_e1___elambda__2___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
