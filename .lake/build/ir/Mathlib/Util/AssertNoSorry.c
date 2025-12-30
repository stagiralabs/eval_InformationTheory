// Lean compiler output
// Module: Mathlib.Util.AssertNoSorry
// Imports: Init Mathlib.Init Lean.Util.CollectAxioms Lean.Elab.Command
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
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectAxioms_collect(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Linter_UnusedTactic___aux__Mathlib__Tactic__Linter__UnusedTacticExtension______elabRules__Mathlib__Linter__UnusedTactic__command_x23allow__unused__tactic_x21________1___spec__1___rarg(lean_object*);
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4;
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_commandAssert__no__sorry_____closed__7;
static lean_object* l_commandAssert__no__sorry_____closed__11;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
static lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1;
static lean_object* l_commandAssert__no__sorry_____closed__10;
static lean_object* l_commandAssert__no__sorry_____closed__4;
static lean_object* l_commandAssert__no__sorry_____closed__3;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_commandAssert__no__sorry__;
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_commandAssert__no__sorry_____closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
static lean_object* l_commandAssert__no__sorry_____closed__2;
static lean_object* l_commandAssert__no__sorry_____closed__6;
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2;
LEAN_EXPORT lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3;
uint8_t l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
static lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1;
static lean_object* l_commandAssert__no__sorry_____closed__9;
static lean_object* l_commandAssert__no__sorry_____closed__8;
static lean_object* l_commandAssert__no__sorry_____closed__5;
static lean_object* _init_l_commandAssert__no__sorry_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("commandAssert_no_sorry_", 23, 23);
return x_1;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_commandAssert__no__sorry_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_commandAssert__no__sorry_____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("assert_no_sorry ", 16, 16);
return x_1;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_commandAssert__no__sorry_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_commandAssert__no__sorry_____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_commandAssert__no__sorry_____closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_commandAssert__no__sorry_____closed__4;
x_2 = l_commandAssert__no__sorry_____closed__6;
x_3 = l_commandAssert__no__sorry_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_commandAssert__no__sorry_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_commandAssert__no__sorry_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_commandAssert__no__sorry_____closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_commandAssert__no__sorry__() {
_start:
{
lean_object* x_1; 
x_1 = l_commandAssert__no__sorry_____closed__11;
return x_1;
}
}
static lean_object* _init_l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_NameSet_empty;
x_2 = l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2;
x_10 = l_Lean_CollectAxioms_collect(x_1, x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_5, 0, x_12);
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_5);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2;
x_17 = l_Lean_CollectAxioms_collect(x_1, x_15, x_16);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sorryAx", 7, 7);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" contains sorry", 15, 15);
return x_1;
}
}
static lean_object* _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_commandAssert__no__sorry_____closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Mathlib_Linter_UnusedTactic___aux__Mathlib__Tactic__Linter__UnusedTacticExtension______elabRules__Mathlib__Linter__UnusedTactic__command_x23allow__unused__tactic_x21________1___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_box(0);
lean_inc(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo), 5, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l_Lean_Elab_Command_liftCoreM___rarg(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1(x_13, x_2, x_3, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2;
x_20 = l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(x_17, x_19);
lean_dec(x_17);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_2);
x_21 = lean_box(0);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_free_object(x_15);
x_22 = l_Lean_MessageData_ofSyntax(x_9);
x_23 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_26, x_2, x_3, x_18);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2;
x_31 = l_Array_contains___at_Lean_registerInternalExceptionId___spec__1(x_28, x_30);
lean_dec(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_9);
lean_dec(x_2);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = l_Lean_MessageData_ofSyntax(x_9);
x_35 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_38, x_2, x_3, x_29);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_12);
if (x_40 == 0)
{
return x_12;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_12, 0);
x_42 = lean_ctor_get(x_12, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_12);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Util_AssertNoSorry(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectAxioms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_commandAssert__no__sorry_____closed__1 = _init_l_commandAssert__no__sorry_____closed__1();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__1);
l_commandAssert__no__sorry_____closed__2 = _init_l_commandAssert__no__sorry_____closed__2();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__2);
l_commandAssert__no__sorry_____closed__3 = _init_l_commandAssert__no__sorry_____closed__3();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__3);
l_commandAssert__no__sorry_____closed__4 = _init_l_commandAssert__no__sorry_____closed__4();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__4);
l_commandAssert__no__sorry_____closed__5 = _init_l_commandAssert__no__sorry_____closed__5();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__5);
l_commandAssert__no__sorry_____closed__6 = _init_l_commandAssert__no__sorry_____closed__6();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__6);
l_commandAssert__no__sorry_____closed__7 = _init_l_commandAssert__no__sorry_____closed__7();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__7);
l_commandAssert__no__sorry_____closed__8 = _init_l_commandAssert__no__sorry_____closed__8();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__8);
l_commandAssert__no__sorry_____closed__9 = _init_l_commandAssert__no__sorry_____closed__9();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__9);
l_commandAssert__no__sorry_____closed__10 = _init_l_commandAssert__no__sorry_____closed__10();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__10);
l_commandAssert__no__sorry_____closed__11 = _init_l_commandAssert__no__sorry_____closed__11();
lean_mark_persistent(l_commandAssert__no__sorry_____closed__11);
l_commandAssert__no__sorry__ = _init_l_commandAssert__no__sorry__();
lean_mark_persistent(l_commandAssert__no__sorry__);
l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1 = _init_l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1();
lean_mark_persistent(l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__1);
l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2 = _init_l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2();
lean_mark_persistent(l_Lean_collectAxioms___at___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___spec__1___closed__2);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__1);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__2);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__3);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__4);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__5);
l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6 = _init_l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6();
lean_mark_persistent(l___aux__Mathlib__Util__AssertNoSorry______elabRules__commandAssert__no__sorry____1___closed__6);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
