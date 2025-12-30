// Lean compiler output
// Module: Mathlib.Data.Finset.Empty
// Imports: Init Mathlib.Data.Finset.Defs Mathlib.Data.Multiset.Nodup
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__5;
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__9;
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableNonempty___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Finset_inhabitedFinset(lean_object*);
lean_object* l_Aesop_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__3;
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__13;
LEAN_EXPORT uint8_t l_Finset_decidableNonempty___rarg(lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__8;
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__7;
LEAN_EXPORT lean_object* l_Finset_empty(lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__2;
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__10;
lean_object* l_Aesop_Frontend_getGlobalRuleSets(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Finset_decidableNonempty(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__6;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__4;
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__1;
lean_object* l_Aesop_mkLocalRuleSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__11;
lean_object* lean_array_mk(lean_object*);
extern lean_object* l_Lean_Meta_Simp_defaultMaxSteps;
LEAN_EXPORT lean_object* l_Finset_instOrderBot(lean_object*);
extern lean_object* l_Aesop_Stats_empty;
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_proveFinsetNonempty___closed__12;
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT uint8_t l_Finset_decidableNonempty___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Finset_decidableNonempty(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_decidableNonempty___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_decidableNonempty___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Finset_decidableNonempty___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Finset_empty(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instEmptyCollection(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_inhabitedFinset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instOrderBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_1, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_dec(x_11);
x_12 = lean_array_get_size(x_10);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_free_object(x_3);
lean_dec(x_2);
x_15 = l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
return x_15;
}
else
{
lean_ctor_set(x_3, 1, x_8);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_array_get_size(x_16);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_17);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassQuick_x3f___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_8);
return x_21;
}
}
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Finset", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nonempty", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Meta_proveFinsetNonempty___closed__1;
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("builtin", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("finsetNonempty", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Meta_proveFinsetNonempty___closed__5;
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Meta_proveFinsetNonempty___closed__9;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__11() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_unsigned_to_nat(30u);
x_4 = lean_unsigned_to_nat(200u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_unsigned_to_nat(100u);
x_7 = lean_unsigned_to_nat(50u);
x_8 = 1;
x_9 = 2;
x_10 = 1;
x_11 = 0;
x_12 = lean_alloc_ctor(0, 9, 11);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_4);
lean_ctor_set(x_12, 2, x_5);
lean_ctor_set(x_12, 3, x_6);
lean_ctor_set(x_12, 4, x_7);
lean_ctor_set(x_12, 5, x_5);
lean_ctor_set(x_12, 6, x_5);
lean_ctor_set(x_12, 7, x_5);
lean_ctor_set(x_12, 8, x_1);
lean_ctor_set_uint8(x_12, sizeof(void*)*9, x_2);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 1, x_8);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 2, x_8);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 3, x_9);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 4, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 5, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 6, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 7, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 8, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 9, x_11);
lean_ctor_set_uint8(x_12, sizeof(void*)*9 + 10, x_10);
return x_12;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Meta_proveFinsetNonempty___closed__11;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Meta_proveFinsetNonempty___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_Simp_defaultMaxSteps;
x_2 = lean_unsigned_to_nat(2u);
x_3 = 0;
x_4 = 1;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 2, 20);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 5, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 6, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 7, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 8, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 9, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 10, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 11, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 12, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 13, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 14, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 15, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 16, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 17, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 18, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 19, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Mathlib_Meta_proveFinsetNonempty___closed__3;
x_12 = l_Lean_Expr_const___override(x_11, x_10);
x_13 = l_Lean_Expr_app___override(x_12, x_2);
x_14 = l_Lean_Expr_app___override(x_13, x_3);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = 0;
x_17 = lean_box(0);
lean_inc(x_4);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_15, x_16, x_17, x_4, x_5, x_6, x_7, x_8);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Expr_mvarId_x21(x_19);
lean_dec(x_19);
x_22 = l_Mathlib_Meta_proveFinsetNonempty___closed__10;
x_23 = l_Aesop_Frontend_getGlobalRuleSets(x_22, x_6, x_7, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_box(0);
x_27 = l_Mathlib_Meta_proveFinsetNonempty___closed__12;
x_28 = l_Aesop_mkLocalRuleSet(x_24, x_27, x_6, x_7, x_25);
lean_dec(x_24);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_29);
x_32 = l_Mathlib_Meta_proveFinsetNonempty___closed__11;
x_33 = l_Mathlib_Meta_proveFinsetNonempty___closed__13;
x_34 = l_Aesop_Stats_empty;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_21);
x_35 = l_Aesop_search(x_21, x_31, x_32, x_33, x_26, x_34, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Mathlib_Meta_proveFinsetNonempty___lambda__2(x_21, x_26, x_36, x_4, x_5, x_6, x_7, x_37);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_21);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = l_Lean_Exception_isInterrupt(x_40);
if (x_41 == 0)
{
uint8_t x_42; 
x_42 = l_Lean_Exception_isRuntime(x_40);
if (x_42 == 0)
{
lean_dec(x_40);
lean_ctor_set_tag(x_35, 0);
lean_ctor_set(x_35, 0, x_26);
return x_35;
}
else
{
return x_35;
}
}
else
{
return x_35;
}
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_43 = lean_ctor_get(x_35, 0);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_35);
x_45 = l_Lean_Exception_isInterrupt(x_43);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = l_Lean_Exception_isRuntime(x_43);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_26);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
}
else
{
lean_object* x_49; 
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_44);
return x_49;
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
return x_23;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_23, 0);
x_52 = lean_ctor_get(x_23, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_23);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Mathlib_Meta_proveFinsetNonempty___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_proveFinsetNonempty___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Meta_proveFinsetNonempty___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Nodup(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_Empty(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Nodup(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Meta_proveFinsetNonempty___closed__1 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__1();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__1);
l_Mathlib_Meta_proveFinsetNonempty___closed__2 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__2();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__2);
l_Mathlib_Meta_proveFinsetNonempty___closed__3 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__3();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__3);
l_Mathlib_Meta_proveFinsetNonempty___closed__4 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__4();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__4);
l_Mathlib_Meta_proveFinsetNonempty___closed__5 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__5();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__5);
l_Mathlib_Meta_proveFinsetNonempty___closed__6 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__6();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__6);
l_Mathlib_Meta_proveFinsetNonempty___closed__7 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__7();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__7);
l_Mathlib_Meta_proveFinsetNonempty___closed__8 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__8();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__8);
l_Mathlib_Meta_proveFinsetNonempty___closed__9 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__9();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__9);
l_Mathlib_Meta_proveFinsetNonempty___closed__10 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__10();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__10);
l_Mathlib_Meta_proveFinsetNonempty___closed__11 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__11();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__11);
l_Mathlib_Meta_proveFinsetNonempty___closed__12 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__12();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__12);
l_Mathlib_Meta_proveFinsetNonempty___closed__13 = _init_l_Mathlib_Meta_proveFinsetNonempty___closed__13();
lean_mark_persistent(l_Mathlib_Meta_proveFinsetNonempty___closed__13);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
