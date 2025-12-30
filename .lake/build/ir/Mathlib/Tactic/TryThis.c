// Lean compiler output
// Module: Mathlib.Tactic.TryThis
// Imports: Init Mathlib.Init Lean.Meta.Tactic.TryThis
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
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__8;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__9;
LEAN_EXPORT lean_object* l_Mathlib_Tactic_tacticTry__this____;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__2;
lean_object* l_Lean_TSyntax_getString(lean_object*);
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__7;
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__6;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__14;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__3;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__11;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_convTry__this____;
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__4;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__12;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__2;
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__3;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__4;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__7;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__15;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__20;
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__19;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__13;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__5;
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__1;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__10;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__1;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__18;
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__8;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__6;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__17;
static lean_object* l_Mathlib_Tactic_tacticTry__this_______closed__16;
static lean_object* l_Mathlib_Tactic_convTry__this_______closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__convTry__this______1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticTry_this__", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__1;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__2;
x_3 = l_Mathlib_Tactic_tacticTry__this_______closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("try_this", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__10;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__6;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__8;
x_3 = l_Mathlib_Tactic_tacticTry__this_______closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("str", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__16;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__14;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__6;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__12;
x_3 = l_Mathlib_Tactic_tacticTry__this_______closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this_______closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__4;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_tacticTry__this_______closed__19;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticTry__this____() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__20;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Try this: ", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_tacticTry__this_______closed__4;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_Syntax_getOptional_x3f(x_19);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_21 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_ctor_get(x_8, 5);
lean_inc(x_23);
x_24 = l_Mathlib_Tactic_tacticTry__this_______closed__10;
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_23);
x_28 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set(x_28, 3, x_26);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set(x_28, 5, x_26);
x_29 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_30 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_28, x_27, x_29, x_26, x_6, x_7, x_8, x_9, x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_27);
lean_dec(x_15);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_31 = !lean_is_exclusive(x_21);
if (x_31 == 0)
{
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_20, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_37 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_8, 5);
lean_inc(x_39);
x_40 = l_Mathlib_Tactic_tacticTry__this_______closed__10;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_17);
x_42 = lean_box(0);
lean_ctor_set(x_20, 0, x_39);
x_43 = l_Lean_TSyntax_getString(x_36);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
lean_ctor_set(x_45, 2, x_44);
lean_ctor_set(x_45, 3, x_42);
lean_ctor_set(x_45, 4, x_42);
lean_ctor_set(x_45, 5, x_42);
x_46 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_47 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_45, x_20, x_46, x_42, x_6, x_7, x_8, x_9, x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_20);
lean_dec(x_15);
return x_47;
}
else
{
uint8_t x_48; 
lean_free_object(x_20);
lean_dec(x_36);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_37);
if (x_48 == 0)
{
return x_37;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_37, 0);
x_50 = lean_ctor_get(x_37, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_37);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_20, 0);
lean_inc(x_52);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_53 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get(x_8, 5);
lean_inc(x_55);
x_56 = l_Mathlib_Tactic_tacticTry__this_______closed__10;
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_17);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_55);
x_60 = l_Lean_TSyntax_getString(x_52);
lean_dec(x_52);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_58);
lean_ctor_set(x_62, 4, x_58);
lean_ctor_set(x_62, 5, x_58);
x_63 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_64 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_62, x_59, x_63, x_58, x_6, x_7, x_8, x_9, x_54);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_59);
lean_dec(x_15);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_52);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_ctor_get(x_53, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_53, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_67 = x_53;
} else {
 lean_dec_ref(x_53);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("convTry_this__", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__1;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__2;
x_3 = l_Mathlib_Tactic_convTry__this_______closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("conv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_convTry__this_______closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_convTry__this_______closed__4;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__6;
x_2 = l_Mathlib_Tactic_tacticTry__this_______closed__8;
x_3 = l_Mathlib_Tactic_convTry__this_______closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticTry__this_______closed__6;
x_2 = l_Mathlib_Tactic_convTry__this_______closed__6;
x_3 = l_Mathlib_Tactic_tacticTry__this_______closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this_______closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_convTry__this_______closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_convTry__this_______closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_convTry__this____() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_convTry__this_______closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__convTry__this______1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_convTry__this_______closed__2;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_Syntax_getOptional_x3f(x_19);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_21 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_ctor_get(x_8, 5);
lean_inc(x_23);
x_24 = l_Mathlib_Tactic_convTry__this_______closed__4;
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_23);
x_28 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set(x_28, 3, x_26);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set(x_28, 5, x_26);
x_29 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_30 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_28, x_27, x_29, x_26, x_6, x_7, x_8, x_9, x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_27);
lean_dec(x_15);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_31 = !lean_is_exclusive(x_21);
if (x_31 == 0)
{
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_20, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_37 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_8, 5);
lean_inc(x_39);
x_40 = l_Mathlib_Tactic_convTry__this_______closed__4;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_17);
x_42 = lean_box(0);
lean_ctor_set(x_20, 0, x_39);
x_43 = l_Lean_TSyntax_getString(x_36);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
lean_ctor_set(x_45, 2, x_44);
lean_ctor_set(x_45, 3, x_42);
lean_ctor_set(x_45, 4, x_42);
lean_ctor_set(x_45, 5, x_42);
x_46 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_47 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_45, x_20, x_46, x_42, x_6, x_7, x_8, x_9, x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_20);
lean_dec(x_15);
return x_47;
}
else
{
uint8_t x_48; 
lean_free_object(x_20);
lean_dec(x_36);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_37);
if (x_48 == 0)
{
return x_37;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_37, 0);
x_50 = lean_ctor_get(x_37, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_37);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_20, 0);
lean_inc(x_52);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_17);
x_53 = l_Lean_Elab_Tactic_evalTactic(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get(x_8, 5);
lean_inc(x_55);
x_56 = l_Mathlib_Tactic_convTry__this_______closed__4;
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_17);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_55);
x_60 = l_Lean_TSyntax_getString(x_52);
lean_dec(x_52);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_62, 0, x_57);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_61);
lean_ctor_set(x_62, 3, x_58);
lean_ctor_set(x_62, 4, x_58);
lean_ctor_set(x_62, 5, x_58);
x_63 = l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1;
x_64 = l_Lean_Meta_Tactic_TryThis_addSuggestion(x_15, x_62, x_59, x_63, x_58, x_6, x_7, x_8, x_9, x_54);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_59);
lean_dec(x_15);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_52);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_ctor_get(x_53, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_53, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_67 = x_53;
} else {
 lean_dec_ref(x_53);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_TryThis(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_tacticTry__this_______closed__1 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__1();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__1);
l_Mathlib_Tactic_tacticTry__this_______closed__2 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__2();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__2);
l_Mathlib_Tactic_tacticTry__this_______closed__3 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__3();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__3);
l_Mathlib_Tactic_tacticTry__this_______closed__4 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__4();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__4);
l_Mathlib_Tactic_tacticTry__this_______closed__5 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__5();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__5);
l_Mathlib_Tactic_tacticTry__this_______closed__6 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__6();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__6);
l_Mathlib_Tactic_tacticTry__this_______closed__7 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__7();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__7);
l_Mathlib_Tactic_tacticTry__this_______closed__8 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__8();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__8);
l_Mathlib_Tactic_tacticTry__this_______closed__9 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__9();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__9);
l_Mathlib_Tactic_tacticTry__this_______closed__10 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__10();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__10);
l_Mathlib_Tactic_tacticTry__this_______closed__11 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__11();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__11);
l_Mathlib_Tactic_tacticTry__this_______closed__12 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__12();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__12);
l_Mathlib_Tactic_tacticTry__this_______closed__13 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__13();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__13);
l_Mathlib_Tactic_tacticTry__this_______closed__14 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__14();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__14);
l_Mathlib_Tactic_tacticTry__this_______closed__15 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__15();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__15);
l_Mathlib_Tactic_tacticTry__this_______closed__16 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__16();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__16);
l_Mathlib_Tactic_tacticTry__this_______closed__17 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__17();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__17);
l_Mathlib_Tactic_tacticTry__this_______closed__18 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__18();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__18);
l_Mathlib_Tactic_tacticTry__this_______closed__19 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__19();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__19);
l_Mathlib_Tactic_tacticTry__this_______closed__20 = _init_l_Mathlib_Tactic_tacticTry__this_______closed__20();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this_______closed__20);
l_Mathlib_Tactic_tacticTry__this____ = _init_l_Mathlib_Tactic_tacticTry__this____();
lean_mark_persistent(l_Mathlib_Tactic_tacticTry__this____);
l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__TryThis______elabRules__Mathlib__Tactic__tacticTry__this______1___closed__1);
l_Mathlib_Tactic_convTry__this_______closed__1 = _init_l_Mathlib_Tactic_convTry__this_______closed__1();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__1);
l_Mathlib_Tactic_convTry__this_______closed__2 = _init_l_Mathlib_Tactic_convTry__this_______closed__2();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__2);
l_Mathlib_Tactic_convTry__this_______closed__3 = _init_l_Mathlib_Tactic_convTry__this_______closed__3();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__3);
l_Mathlib_Tactic_convTry__this_______closed__4 = _init_l_Mathlib_Tactic_convTry__this_______closed__4();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__4);
l_Mathlib_Tactic_convTry__this_______closed__5 = _init_l_Mathlib_Tactic_convTry__this_______closed__5();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__5);
l_Mathlib_Tactic_convTry__this_______closed__6 = _init_l_Mathlib_Tactic_convTry__this_______closed__6();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__6);
l_Mathlib_Tactic_convTry__this_______closed__7 = _init_l_Mathlib_Tactic_convTry__this_______closed__7();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__7);
l_Mathlib_Tactic_convTry__this_______closed__8 = _init_l_Mathlib_Tactic_convTry__this_______closed__8();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this_______closed__8);
l_Mathlib_Tactic_convTry__this____ = _init_l_Mathlib_Tactic_convTry__this____();
lean_mark_persistent(l_Mathlib_Tactic_convTry__this____);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
