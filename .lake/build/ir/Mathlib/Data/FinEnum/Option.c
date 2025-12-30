// Lean compiler output
// Module: Mathlib.Data.FinEnum.Option
// Imports: Init Mathlib.Data.FinEnum Mathlib.Logic.Equiv.Fin
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
LEAN_EXPORT lean_object* l_FinEnum_insertNone___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1(lean_object*);
lean_object* l_Equiv_optionCongr___rarg(lean_object*);
lean_object* l_ULift_instFinEnum___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Nat_cast___at_FinEnum_recEmptyOption___spec__1(lean_object*, lean_object*);
extern lean_object* l_FinEnum_pempty;
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter(lean_object*);
lean_object* l_Equiv_ulift(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_insertNone___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_FinEnum_fin(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instFinEnumOptionLast___rarg(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recOnEmptyOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_insertNone___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recOnEmptyOption___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instFinEnumOptionLast(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_FinEnum_recEmptyOption___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_finSuccEquiv_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_insertNone(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_12, x_10, x_11);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_insertNone___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Option_Basic_0__Option_decEqOption____x40_Init_Data_Option_Basic___hyg_4____at_FinEnum_insertNone___elambda__1___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_insertNone___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_insertNone___elambda__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_insertNone___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = l_Equiv_optionCongr___rarg(x_6);
x_8 = l_finSuccEquiv_x27(x_3, x_2);
lean_dec(x_3);
x_9 = l_Equiv_symm___rarg(x_8);
x_10 = l_Equiv_trans___rarg(x_7, x_9);
x_11 = lean_alloc_closure((void*)(l_FinEnum_insertNone___elambda__1___rarg), 3, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_insertNone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_insertNone___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instFinEnumOptionLast___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_FinEnum_insertNone___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instFinEnumOptionLast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_instFinEnumOptionLast___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_FinEnum_recEmptyOption___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_FinEnum_fin(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_4);
x_7 = lean_nat_mod(x_2, x_6);
lean_dec(x_6);
return x_7;
}
}
static lean_object* _init_l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = l_FinEnum_fin(x_1);
lean_inc(x_3);
x_4 = l_ULift_instFinEnum___rarg(x_3);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_5, x_6);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1;
x_10 = l_Equiv_trans___rarg(x_9, x_8);
x_11 = l_Equiv_optionCongr___rarg(x_10);
x_12 = l_finSuccEquiv_x27(x_5, x_2);
lean_dec(x_5);
x_13 = l_Equiv_symm___rarg(x_12);
x_14 = l_Equiv_trans___rarg(x_11, x_13);
x_15 = lean_alloc_closure((void*)(l_FinEnum_insertNone___elambda__1___rarg), 3, 1);
lean_closure_set(x_15, 0, x_4);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_6(x_1, lean_box(0), lean_box(0), x_4, x_5, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_7, x_10);
lean_dec(x_7);
lean_inc(x_11);
x_12 = l_FinEnum_fin(x_11);
x_13 = l_ULift_instFinEnum___rarg(x_12);
lean_inc(x_1);
lean_inc(x_11);
x_14 = lean_apply_1(x_1, x_11);
lean_inc(x_11);
x_15 = l_Nat_cast___at_FinEnum_recEmptyOption___spec__1(x_11, x_14);
lean_dec(x_14);
x_16 = l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2(x_11, x_15);
lean_inc(x_2);
x_17 = lean_alloc_closure((void*)(l_FinEnum_recEmptyOption___rarg___lambda__1), 7, 1);
lean_closure_set(x_17, 0, x_2);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_FinEnum_recEmptyOption___rarg___lambda__2), 4, 1);
lean_closure_set(x_18, 0, x_4);
lean_inc(x_13);
x_19 = l_FinEnum_recEmptyOption___rarg(x_1, x_17, x_3, x_18, lean_box(0), x_13);
x_20 = lean_apply_3(x_4, lean_box(0), x_13, x_19);
x_21 = lean_apply_6(x_2, lean_box(0), lean_box(0), x_16, x_6, lean_box(0), x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_22 = l_FinEnum_pempty;
x_23 = lean_apply_6(x_2, lean_box(0), lean_box(0), x_22, x_6, lean_box(0), x_3);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_recEmptyOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_recEmptyOption___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_FinEnum_recEmptyOption___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_cast___at_FinEnum_recEmptyOption___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_2(x_3, x_7, lean_box(0));
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_1(x_2, lean_box(0));
return x_9;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_FinEnum_Option_0__FinEnum_recEmptyOption_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_recOnEmptyOption___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_FinEnum_recEmptyOption___rarg___lambda__1), 7, 1);
lean_closure_set(x_6, 0, x_3);
x_7 = lean_alloc_closure((void*)(l_FinEnum_recEmptyOption___rarg___lambda__2), 4, 1);
lean_closure_set(x_7, 0, x_5);
x_8 = l_FinEnum_recEmptyOption___rarg(x_2, x_6, x_4, x_7, lean_box(0), x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_recOnEmptyOption(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_recOnEmptyOption___rarg), 5, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_FinEnum(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Fin(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_FinEnum_Option(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_FinEnum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Fin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1 = _init_l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1();
lean_mark_persistent(l_FinEnum_insertNone___at_FinEnum_recEmptyOption___spec__2___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
