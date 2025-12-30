// Lean compiler output
// Module: Mathlib.Tactic.ApplyAt
// Imports: Init Lean.Elab.Tactic.ElabTerm Mathlib.Lean.Meta.Basic
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
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__13;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__14;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__17;
lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4;
lean_object* l_Lean_Meta_forallMetaTelescopeReducingUntilDefEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__3;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__12;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__8;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__9;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1;
lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__10;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__16;
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__2;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__19;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__15;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__5;
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3;
lean_object* l_Lean_LocalDecl_type(lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__11;
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__1;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__20;
lean_object* l_List_reverse___rarg(lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__7;
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__6;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_tacticApply__At__;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l_Mathlib_Tactic_tacticApply__At_____closed__18;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_inferInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__3(lean_object*, lean_object*);
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticApply_At_", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__1;
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__2;
x_3 = l_Mathlib_Tactic_tacticApply__At_____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("apply", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__8() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__7;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__10;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__6;
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__8;
x_3 = l_Mathlib_Tactic_tacticApply__At_____closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("at", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__13;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__6;
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__12;
x_3 = l_Mathlib_Tactic_tacticApply__At_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__17;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__6;
x_2 = l_Mathlib_Tactic_tacticApply__At_____closed__15;
x_3 = l_Mathlib_Tactic_tacticApply__At_____closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At_____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__4;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_tacticApply__At_____closed__19;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_tacticApply__At__() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_tacticApply__At_____closed__20;
return x_1;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; 
x_16 = lean_usize_dec_lt(x_5, x_4);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_26; lean_object* x_27; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; 
lean_dec(x_6);
x_18 = lean_array_uget(x_3, x_5);
x_30 = lean_ctor_get(x_18, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_dec(x_18);
x_32 = l_Lean_Expr_mvarId_x21(x_30);
lean_dec(x_30);
x_33 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_32, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_unbox(x_31);
lean_dec(x_31);
x_37 = l_Lean_BinderInfo_isInstImplicit(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_34);
lean_dec(x_32);
x_38 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1;
x_19 = x_38;
x_20 = x_35;
goto block_25;
}
else
{
uint8_t x_39; 
x_39 = lean_unbox(x_34);
lean_dec(x_34);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = l_Lean_Elab_Tactic_saveState___rarg(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_35);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_44 = l_Lean_MVarId_inferInstance(x_32, x_11, x_12, x_13, x_14, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_42);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_box(0);
lean_ctor_set(x_40, 1, x_47);
lean_ctor_set(x_40, 0, x_45);
x_26 = x_40;
x_27 = x_46;
goto block_29;
}
else
{
uint8_t x_48; 
lean_free_object(x_40);
x_48 = !lean_is_exclusive(x_44);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
x_51 = l_Lean_Exception_isInterrupt(x_49);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = l_Lean_Exception_isRuntime(x_49);
if (x_52 == 0)
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_free_object(x_44);
lean_dec(x_49);
x_53 = 0;
x_54 = l_Lean_Elab_Tactic_SavedState_restore(x_42, x_53, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_50);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3;
x_26 = x_56;
x_27 = x_55;
goto block_29;
}
else
{
lean_dec(x_42);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_44;
}
}
else
{
lean_dec(x_42);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_44;
}
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = lean_ctor_get(x_44, 0);
x_58 = lean_ctor_get(x_44, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_44);
x_59 = l_Lean_Exception_isInterrupt(x_57);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = l_Lean_Exception_isRuntime(x_57);
if (x_60 == 0)
{
uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_57);
x_61 = 0;
x_62 = l_Lean_Elab_Tactic_SavedState_restore(x_42, x_61, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_58);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3;
x_26 = x_64;
x_27 = x_63;
goto block_29;
}
else
{
lean_object* x_65; 
lean_dec(x_42);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_57);
lean_ctor_set(x_65, 1, x_58);
return x_65;
}
}
else
{
lean_object* x_66; 
lean_dec(x_42);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_57);
lean_ctor_set(x_66, 1, x_58);
return x_66;
}
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_40, 0);
x_68 = lean_ctor_get(x_40, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_40);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_69 = l_Lean_MVarId_inferInstance(x_32, x_11, x_12, x_13, x_14, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_box(0);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_72);
x_26 = x_73;
x_27 = x_71;
goto block_29;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_74 = lean_ctor_get(x_69, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_76 = x_69;
} else {
 lean_dec_ref(x_69);
 x_76 = lean_box(0);
}
x_77 = l_Lean_Exception_isInterrupt(x_74);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = l_Lean_Exception_isRuntime(x_74);
if (x_78 == 0)
{
uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_76);
lean_dec(x_74);
x_79 = 0;
x_80 = l_Lean_Elab_Tactic_SavedState_restore(x_67, x_79, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_75);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3;
x_26 = x_82;
x_27 = x_81;
goto block_29;
}
else
{
lean_object* x_83; 
lean_dec(x_67);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
if (lean_is_scalar(x_76)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_76;
}
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_75);
return x_83;
}
}
else
{
lean_object* x_84; 
lean_dec(x_67);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
if (lean_is_scalar(x_76)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_76;
}
lean_ctor_set(x_84, 0, x_74);
lean_ctor_set(x_84, 1, x_75);
return x_84;
}
}
}
}
else
{
lean_object* x_85; 
lean_dec(x_32);
x_85 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1;
x_19 = x_85;
x_20 = x_35;
goto block_25;
}
}
block_25:
{
lean_object* x_21; size_t x_22; size_t x_23; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = lean_usize_add(x_5, x_22);
x_5 = x_23;
x_6 = x_21;
x_15 = x_20;
goto _start;
}
block_29:
{
lean_object* x_28; 
lean_dec(x_26);
x_28 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1;
x_19 = x_28;
x_20 = x_27;
goto block_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Expr_mvarId_x21(x_5);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_Expr_mvarId_x21(x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Identifier ", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" not found", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Lean_Elab_Tactic_elabTermForApply(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_7, 2);
lean_inc(x_16);
x_17 = l_Lean_Syntax_getId(x_2);
x_18 = l_Lean_LocalContext_findFromUserName_x3f(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_14);
lean_inc(x_2);
x_19 = l_Lean_MessageData_ofSyntax(x_2);
x_20 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2;
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(x_2, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_25 = lean_ctor_get(x_18, 0);
lean_inc(x_25);
lean_dec(x_18);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_14);
x_26 = lean_infer_type(x_14, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_LocalDecl_type(x_25);
x_30 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_31 = l_Lean_Meta_forallMetaTelescopeReducingUntilDefEq(x_27, x_29, x_30, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
lean_dec(x_33);
x_37 = l_Array_zip___rarg(x_35, x_36);
lean_dec(x_36);
x_38 = lean_box(0);
x_39 = lean_array_size(x_37);
x_40 = 0;
x_41 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_42 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1(x_37, x_38, x_37, x_39, x_40, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
lean_dec(x_37);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Elab_Tactic_getMainGoal(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_array_pop(x_35);
x_48 = l_Lean_LocalDecl_toExpr(x_25);
lean_inc(x_47);
x_49 = lean_array_push(x_47, x_48);
x_50 = lean_array_size(x_49);
x_51 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2(x_50, x_40, x_49);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_52 = l_Lean_Meta_mkAppOptM_x27(x_14, x_51, x_7, x_8, x_9, x_10, x_46);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_LocalDecl_userName(x_25);
x_56 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_57 = l_Lean_MVarId_note(x_45, x_55, x_53, x_56, x_7, x_8, x_9, x_10, x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_58, 1);
x_62 = lean_ctor_get(x_58, 0);
lean_dec(x_62);
x_63 = l_Lean_LocalDecl_fvarId(x_25);
lean_dec(x_25);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_64 = l_Lean_MVarId_tryClear(x_61, x_63, x_7, x_8, x_9, x_10, x_59);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_box(0);
lean_ctor_set_tag(x_58, 1);
lean_ctor_set(x_58, 1, x_67);
lean_ctor_set(x_58, 0, x_65);
x_68 = lean_array_to_list(x_47);
x_69 = l_List_mapTR_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__3(x_68, x_67);
x_70 = l_List_appendTR___rarg(x_58, x_69);
x_71 = l_Lean_Elab_Tactic_replaceMainGoal(x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_66);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_71;
}
else
{
uint8_t x_72; 
lean_free_object(x_58);
lean_dec(x_47);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = !lean_is_exclusive(x_64);
if (x_72 == 0)
{
return x_64;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_64, 0);
x_74 = lean_ctor_get(x_64, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_64);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_58, 1);
lean_inc(x_76);
lean_dec(x_58);
x_77 = l_Lean_LocalDecl_fvarId(x_25);
lean_dec(x_25);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_78 = l_Lean_MVarId_tryClear(x_76, x_77, x_7, x_8, x_9, x_10, x_59);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_to_list(x_47);
x_84 = l_List_mapTR_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__3(x_83, x_81);
x_85 = l_List_appendTR___rarg(x_82, x_84);
x_86 = l_Lean_Elab_Tactic_replaceMainGoal(x_85, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_80);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_47);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = lean_ctor_get(x_78, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_78, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_89 = x_78;
} else {
 lean_dec_ref(x_78);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_47);
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_91 = !lean_is_exclusive(x_57);
if (x_91 == 0)
{
return x_57;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_57, 0);
x_93 = lean_ctor_get(x_57, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_57);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_95 = !lean_is_exclusive(x_52);
if (x_95 == 0)
{
return x_52;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_52, 0);
x_97 = lean_ctor_get(x_52, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_52);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_99 = !lean_is_exclusive(x_44);
if (x_99 == 0)
{
return x_44;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_44, 0);
x_101 = lean_ctor_get(x_44, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_44);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_35);
lean_dec(x_25);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_103 = !lean_is_exclusive(x_42);
if (x_103 == 0)
{
return x_42;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_42, 0);
x_105 = lean_ctor_get(x_42, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_42);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_25);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_107 = !lean_is_exclusive(x_31);
if (x_107 == 0)
{
return x_31;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_31, 0);
x_109 = lean_ctor_get(x_31, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_31);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_25);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_111 = !lean_is_exclusive(x_26);
if (x_111 == 0)
{
return x_26;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_26, 0);
x_113 = lean_ctor_get(x_26, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_26);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_13);
if (x_115 == 0)
{
return x_13;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_13, 0);
x_117 = lean_ctor_get(x_13, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_13);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_tacticApply__At_____closed__4;
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1), 11, 2);
lean_closure_set(x_18, 0, x_15);
lean_closure_set(x_18, 1, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___rarg), 10, 3);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_3);
x_20 = 1;
x_21 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_19, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_17 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_18 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1(x_1, x_2, x_3, x_16, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Meta_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_ApplyAt(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_tacticApply__At_____closed__1 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__1();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__1);
l_Mathlib_Tactic_tacticApply__At_____closed__2 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__2();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__2);
l_Mathlib_Tactic_tacticApply__At_____closed__3 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__3();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__3);
l_Mathlib_Tactic_tacticApply__At_____closed__4 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__4();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__4);
l_Mathlib_Tactic_tacticApply__At_____closed__5 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__5();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__5);
l_Mathlib_Tactic_tacticApply__At_____closed__6 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__6();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__6);
l_Mathlib_Tactic_tacticApply__At_____closed__7 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__7();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__7);
l_Mathlib_Tactic_tacticApply__At_____closed__8 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__8();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__8);
l_Mathlib_Tactic_tacticApply__At_____closed__9 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__9();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__9);
l_Mathlib_Tactic_tacticApply__At_____closed__10 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__10();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__10);
l_Mathlib_Tactic_tacticApply__At_____closed__11 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__11();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__11);
l_Mathlib_Tactic_tacticApply__At_____closed__12 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__12();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__12);
l_Mathlib_Tactic_tacticApply__At_____closed__13 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__13();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__13);
l_Mathlib_Tactic_tacticApply__At_____closed__14 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__14();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__14);
l_Mathlib_Tactic_tacticApply__At_____closed__15 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__15();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__15);
l_Mathlib_Tactic_tacticApply__At_____closed__16 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__16();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__16);
l_Mathlib_Tactic_tacticApply__At_____closed__17 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__17();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__17);
l_Mathlib_Tactic_tacticApply__At_____closed__18 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__18();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__18);
l_Mathlib_Tactic_tacticApply__At_____closed__19 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__19();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__19);
l_Mathlib_Tactic_tacticApply__At_____closed__20 = _init_l_Mathlib_Tactic_tacticApply__At_____closed__20();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At_____closed__20);
l_Mathlib_Tactic_tacticApply__At__ = _init_l_Mathlib_Tactic_tacticApply__At__();
lean_mark_persistent(l_Mathlib_Tactic_tacticApply__At__);
l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__1);
l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__2 = _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__2();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__2);
l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3 = _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___spec__1___closed__3);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__3);
l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__ApplyAt______elabRules__Mathlib__Tactic__tacticApply__At____1___lambda__1___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
