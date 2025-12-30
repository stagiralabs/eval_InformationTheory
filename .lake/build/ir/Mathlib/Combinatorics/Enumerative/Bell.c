// Lean compiler output
// Module: Mathlib.Combinatorics.Enumerative.Bell
// Imports: Init Mathlib.Data.Nat.Choose.Multinomial Mathlib.Data.Nat.Choose.Mul
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
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Multiset_bell___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_erase___at_Multiset_bell___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_Multiset_erase___at_Multiset_bell___spec__10___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Finset_prod___at_Multiset_bell___spec__13(lean_object*, lean_object*);
lean_object* l_List_countP_go___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_countP___at_Multiset_bell___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_erase___at_Multiset_bell___spec__9___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Multiset_erase___at_Multiset_bell___spec__10(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_Multiset_bell___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Multiset_bell___spec__5(lean_object*, lean_object*);
lean_object* l_List_replicateTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
static lean_object* l_Finset_prod___at_Multiset_bell___spec__13___closed__1;
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_erase___at_Multiset_bell___spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_bell(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Multiset_bell___spec__2(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_multinomial___rarg(lean_object*, lean_object*);
lean_object* l_Nat_decEq___boxed(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Nat_uniformBell(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_count___at_Multiset_bell___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_Multiset_bell___spec__4(lean_object*);
lean_object* l_Nat_fast__choose(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Multiset_bell___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Multiset_bell___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_nat_dec_eq(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Multiset_bell___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_Multiset_bell___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_Multiset_bell___spec__5(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_Multiset_bell___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Multiset_bell___spec__4(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_dedup___at_Multiset_bell___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Multiset_bell___spec__4(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_toFinset___at_Multiset_bell___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_Multiset_bell___spec__4(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_countP___at_Multiset_bell___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Nat_decEq___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_countP_go___rarg(x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_count___at_Multiset_bell___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_countP___at_Multiset_bell___spec__8(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Multiset_bell___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_4);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_nat_dec_eq(x_5, x_2);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_array_push(x_4, x_5);
x_3 = x_6;
x_4 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_5);
x_10 = lean_array_get_size(x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_4);
return x_6;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12(x_4, x_13, x_14, x_6);
lean_dec(x_4);
return x_15;
}
}
}
}
}
static lean_object* _init_l_Multiset_erase___at_Multiset_bell___spec__10___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_erase___at_Multiset_bell___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Multiset_erase___at_Multiset_bell___spec__10___closed__1;
lean_inc(x_1);
x_4 = l_List_eraseTR_go___at_Multiset_bell___spec__11(x_1, x_2, x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_erase___at_Multiset_bell___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_erase___at_Multiset_bell___spec__10(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Finset_prod___at_Multiset_bell___spec__13___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Finset_prod___at_Multiset_bell___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = l_Finset_prod___at_Multiset_bell___spec__13___closed__1;
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Multiset_countP___at_Multiset_bell___spec__8(x_2, x_1);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_nat_mul(x_2, x_1);
x_4 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = lean_nat_sub(x_1, x_5);
x_8 = l_Nat_fast__choose(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_3 = l_Multiset_countP___at_Multiset_bell___spec__8(x_2, x_1);
x_4 = l_List_range(x_3);
x_5 = lean_alloc_closure((void*)(l_Multiset_bell___lambda__2___boxed), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Finset_prod___at_Multiset_bell___spec__13(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Multiset_bell(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = l_List_pwFilter___at_Multiset_bell___spec__4(x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Multiset_bell___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_2);
x_4 = l_Nat_multinomial___rarg(x_2, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Multiset_erase___at_Multiset_bell___spec__10(x_2, x_5);
x_7 = lean_alloc_closure((void*)(l_Multiset_bell___lambda__3), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Finset_prod___at_Multiset_bell___spec__13(x_6, x_7);
x_9 = lean_nat_mul(x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_Multiset_bell___spec__12(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_Multiset_bell___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_eraseTR_go___at_Multiset_bell___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Multiset_erase___at_Multiset_bell___spec__10___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_erase___at_Multiset_bell___spec__10(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_erase___at_Multiset_bell___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Finset_erase___at_Multiset_bell___spec__9(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_bell___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Multiset_bell___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_uniformBell(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_replicateTR___rarg(x_1, x_2);
x_4 = l_Multiset_bell(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Multinomial(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Choose_Mul(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_Enumerative_Bell(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Multinomial(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Choose_Mul(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_erase___at_Multiset_bell___spec__10___closed__1 = _init_l_Multiset_erase___at_Multiset_bell___spec__10___closed__1();
lean_mark_persistent(l_Multiset_erase___at_Multiset_bell___spec__10___closed__1);
l_Finset_prod___at_Multiset_bell___spec__13___closed__1 = _init_l_Finset_prod___at_Multiset_bell___spec__13___closed__1();
lean_mark_persistent(l_Finset_prod___at_Multiset_bell___spec__13___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
