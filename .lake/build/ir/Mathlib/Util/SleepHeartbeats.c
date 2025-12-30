// Lean compiler output
// Module: Mathlib.Util.SleepHeartbeats
// Imports: Init Mathlib.Init Lean.Elab.Tactic.Basic
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
static lean_object* l_tacticSleep__heartbeats_____closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__2;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__10;
static lean_object* l_tacticSleep__heartbeats_____closed__9;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_sleepAtLeastHeartbeats___boxed(lean_object*, lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__5;
static lean_object* l_tacticSleep__heartbeats_____closed__11;
static lean_object* l_tacticSleep__heartbeats_____closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__1;
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2;
static lean_object* l_tacticSleep__heartbeats_____closed__6;
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tacticSleep__heartbeats__;
static lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1;
LEAN_EXPORT lean_object* l_sleepAtLeastHeartbeats(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__3;
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
static lean_object* l_tacticSleep__heartbeats_____closed__4;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_dec(x_3);
x_5 = lean_io_get_num_heartbeats(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_nat_add(x_2, x_1);
x_10 = lean_nat_dec_lt(x_7, x_9);
lean_dec(x_9);
lean_dec(x_7);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; 
lean_free_object(x_5);
x_12 = lean_box(0);
x_3 = x_12;
x_4 = x_8;
goto _start;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = lean_nat_add(x_2, x_1);
x_17 = lean_nat_dec_lt(x_14, x_16);
lean_dec(x_16);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lean_box(0);
x_3 = x_20;
x_4 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_sleepAtLeastHeartbeats(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_io_get_num_heartbeats(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1(x_1, x_4, x_6, x_5);
lean_dec(x_4);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Loop_forIn_loop___at_sleepAtLeastHeartbeats___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_sleepAtLeastHeartbeats___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_sleepAtLeastHeartbeats(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSleep_heartbeats_", 23, 23);
return x_1;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticSleep__heartbeats_____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticSleep__heartbeats_____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sleep_heartbeats ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticSleep__heartbeats_____closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("num", 3, 3);
return x_1;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticSleep__heartbeats_____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticSleep__heartbeats_____closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticSleep__heartbeats_____closed__4;
x_2 = l_tacticSleep__heartbeats_____closed__6;
x_3 = l_tacticSleep__heartbeats_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticSleep__heartbeats_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticSleep__heartbeats_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticSleep__heartbeats_____closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticSleep__heartbeats__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticSleep__heartbeats_____closed__11;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ill-formed syntax", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2;
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticSleep__heartbeats_____closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_isNatLit_x3f(x_15);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1000u);
x_20 = lean_nat_mul(x_18, x_19);
lean_dec(x_18);
x_21 = l_sleepAtLeastHeartbeats(x_20, x_10);
lean_dec(x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Util_SleepHeartbeats(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_tacticSleep__heartbeats_____closed__1 = _init_l_tacticSleep__heartbeats_____closed__1();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__1);
l_tacticSleep__heartbeats_____closed__2 = _init_l_tacticSleep__heartbeats_____closed__2();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__2);
l_tacticSleep__heartbeats_____closed__3 = _init_l_tacticSleep__heartbeats_____closed__3();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__3);
l_tacticSleep__heartbeats_____closed__4 = _init_l_tacticSleep__heartbeats_____closed__4();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__4);
l_tacticSleep__heartbeats_____closed__5 = _init_l_tacticSleep__heartbeats_____closed__5();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__5);
l_tacticSleep__heartbeats_____closed__6 = _init_l_tacticSleep__heartbeats_____closed__6();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__6);
l_tacticSleep__heartbeats_____closed__7 = _init_l_tacticSleep__heartbeats_____closed__7();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__7);
l_tacticSleep__heartbeats_____closed__8 = _init_l_tacticSleep__heartbeats_____closed__8();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__8);
l_tacticSleep__heartbeats_____closed__9 = _init_l_tacticSleep__heartbeats_____closed__9();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__9);
l_tacticSleep__heartbeats_____closed__10 = _init_l_tacticSleep__heartbeats_____closed__10();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__10);
l_tacticSleep__heartbeats_____closed__11 = _init_l_tacticSleep__heartbeats_____closed__11();
lean_mark_persistent(l_tacticSleep__heartbeats_____closed__11);
l_tacticSleep__heartbeats__ = _init_l_tacticSleep__heartbeats__();
lean_mark_persistent(l_tacticSleep__heartbeats__);
l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1 = _init_l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__1);
l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2 = _init_l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2();
lean_mark_persistent(l_Lean_Elab_throwIllFormedSyntax___at___aux__Mathlib__Util__SleepHeartbeats______elabRules__tacticSleep__heartbeats____1___spec__1___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
