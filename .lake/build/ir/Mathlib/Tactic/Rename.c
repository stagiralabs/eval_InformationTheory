// Lean compiler output
// Module: Mathlib.Tactic.Rename
// Imports: Init Lean.Elab.Tactic.ElabTerm Mathlib.Init
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
static lean_object* l_Mathlib_Tactic_renameArg___closed__10;
static lean_object* l_Mathlib_Tactic_rename_x27___closed__2;
static lean_object* l_Mathlib_Tactic_renameArg___closed__11;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_rename_x27___closed__10;
static lean_object* l_Mathlib_Tactic_renameArg___closed__8;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_rename_x27___closed__5;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_rename_x27;
static lean_object* l_Mathlib_Tactic_renameArg___closed__12;
lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_renameArg___closed__17;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_rename_x27___closed__8;
static lean_object* l_Mathlib_Tactic_renameArg___closed__9;
static lean_object* l_Mathlib_Tactic_renameArg___closed__5;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_renameArg___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_renameArg___closed__13;
static lean_object* l_Mathlib_Tactic_rename_x27___closed__9;
static lean_object* l_Mathlib_Tactic_rename_x27___closed__3;
static lean_object* l_Mathlib_Tactic_renameArg___closed__6;
static lean_object* l_Mathlib_Tactic_rename_x27___closed__1;
static lean_object* l_Mathlib_Tactic_rename_x27___closed__6;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_rename_x27___closed__4;
static lean_object* l_Mathlib_Tactic_renameArg___closed__7;
static lean_object* l_Mathlib_Tactic_renameArg___closed__2;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_rename_x27___closed__7;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_renameArg___closed__16;
static lean_object* l_Mathlib_Tactic_renameArg___closed__15;
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1;
static lean_object* l_Mathlib_Tactic_renameArg___closed__4;
static lean_object* l_Mathlib_Tactic_renameArg___closed__14;
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_renameArg;
static lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_renameArg___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("renameArg", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__1;
x_2 = l_Mathlib_Tactic_renameArg___closed__2;
x_3 = l_Mathlib_Tactic_renameArg___closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_renameArg___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_renameArg___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_renameArg___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" => ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_renameArg___closed__10;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__6;
x_2 = l_Mathlib_Tactic_renameArg___closed__9;
x_3 = l_Mathlib_Tactic_renameArg___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Tactic_renameArg___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_renameArg___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__6;
x_2 = l_Mathlib_Tactic_renameArg___closed__12;
x_3 = l_Mathlib_Tactic_renameArg___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__3;
x_2 = l_Mathlib_Tactic_renameArg___closed__4;
x_3 = l_Mathlib_Tactic_renameArg___closed__16;
x_4 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_renameArg() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_renameArg___closed__17;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rename'", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__1;
x_2 = l_Mathlib_Tactic_renameArg___closed__2;
x_3 = l_Mathlib_Tactic_rename_x27___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("rename' ", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Mathlib_Tactic_rename_x27___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Tactic_rename_x27___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Mathlib_Tactic_renameArg;
x_2 = l_Mathlib_Tactic_rename_x27___closed__7;
x_3 = l_Mathlib_Tactic_rename_x27___closed__6;
x_4 = 0;
x_5 = lean_alloc_ctor(11, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_renameArg___closed__6;
x_2 = l_Mathlib_Tactic_rename_x27___closed__4;
x_3 = l_Mathlib_Tactic_rename_x27___closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Tactic_rename_x27___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Tactic_rename_x27___closed__9;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic_rename_x27() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Tactic_rename_x27___closed__10;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = l_Mathlib_Tactic_renameArg___closed__4;
lean_inc(x_6);
x_10 = l_Lean_Syntax_isOfKind(x_6, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_6);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = l_Lean_Syntax_getArg(x_6, x_7);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_6, x_13);
lean_dec(x_6);
x_15 = l_Mathlib_Tactic_renameArg___closed__14;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_8);
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_14);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_array_uset(x_8, x_2, x_18);
x_2 = x_20;
x_3 = x_21;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_array_uset(x_7, x_2, x_10);
x_2 = x_9;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_array_uset(x_7, x_2, x_10);
x_2 = x_9;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_uget(x_3, x_5);
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
x_21 = lean_nat_dec_lt(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_22, 1, x_11);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; size_t x_32; size_t x_33; 
x_24 = lean_ctor_get(x_16, 2);
lean_dec(x_24);
x_25 = lean_ctor_get(x_16, 1);
lean_dec(x_25);
x_26 = lean_ctor_get(x_16, 0);
lean_dec(x_26);
x_27 = lean_array_fget(x_18, x_19);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_19, x_28);
lean_dec(x_19);
lean_ctor_set(x_16, 1, x_29);
x_30 = l_Lean_Syntax_getId(x_27);
lean_dec(x_27);
x_31 = l_Lean_LocalContext_setUserName(x_17, x_14, x_30);
lean_ctor_set(x_6, 1, x_31);
x_32 = 1;
x_33 = lean_usize_add(x_5, x_32);
x_5 = x_33;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; 
lean_dec(x_16);
x_35 = lean_array_fget(x_18, x_19);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_19, x_36);
lean_dec(x_19);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_18);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_38, 2, x_20);
x_39 = l_Lean_Syntax_getId(x_35);
lean_dec(x_35);
x_40 = l_Lean_LocalContext_setUserName(x_17, x_14, x_39);
lean_ctor_set(x_6, 1, x_40);
lean_ctor_set(x_6, 0, x_38);
x_41 = 1;
x_42 = lean_usize_add(x_5, x_41);
x_5 = x_42;
goto _start;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_6, 0);
x_45 = lean_ctor_get(x_6, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_6);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_44, 2);
lean_inc(x_48);
x_49 = lean_nat_dec_lt(x_47, x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_14);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_11);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; 
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 lean_ctor_release(x_44, 2);
 x_52 = x_44;
} else {
 lean_dec_ref(x_44);
 x_52 = lean_box(0);
}
x_53 = lean_array_fget(x_46, x_47);
x_54 = lean_unsigned_to_nat(1u);
x_55 = lean_nat_add(x_47, x_54);
lean_dec(x_47);
if (lean_is_scalar(x_52)) {
 x_56 = lean_alloc_ctor(0, 3, 0);
} else {
 x_56 = x_52;
}
lean_ctor_set(x_56, 0, x_46);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_48);
x_57 = l_Lean_Syntax_getId(x_53);
lean_dec(x_53);
x_58 = l_Lean_LocalContext_setUserName(x_45, x_14, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
x_60 = 1;
x_61 = lean_usize_add(x_5, x_60);
x_5 = x_61;
x_6 = x_59;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
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
lean_dec(x_10);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_array_uget(x_3, x_5);
x_19 = lean_ctor_get(x_6, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_6, 2);
lean_inc(x_21);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_6);
lean_ctor_set(x_23, 1, x_15);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_6, 2);
lean_dec(x_25);
x_26 = lean_ctor_get(x_6, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_6, 0);
lean_dec(x_27);
x_28 = lean_array_fget(x_19, x_20);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_20, x_29);
lean_dec(x_20);
lean_ctor_set(x_6, 1, x_30);
x_31 = l_Lean_Expr_fvar___override(x_18);
x_32 = lean_box(0);
x_33 = lean_box(0);
x_34 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_35 = l_Lean_Elab_Term_addTermInfo_x27(x_28, x_31, x_32, x_32, x_33, x_34, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = 1;
x_38 = lean_usize_add(x_5, x_37);
x_5 = x_38;
x_15 = x_36;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_6);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_40 = !lean_is_exclusive(x_35);
if (x_40 == 0)
{
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; 
lean_dec(x_6);
x_44 = lean_array_fget(x_19, x_20);
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_add(x_20, x_45);
lean_dec(x_20);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_19);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_21);
x_48 = l_Lean_Expr_fvar___override(x_18);
x_49 = lean_box(0);
x_50 = lean_box(0);
x_51 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_52 = l_Lean_Elab_Term_addTermInfo_x27(x_44, x_48, x_49, x_49, x_50, x_51, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; size_t x_54; size_t x_55; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = 1;
x_55 = lean_usize_add(x_5, x_54);
x_5 = x_55;
x_6 = x_47;
x_15 = x_53;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_47);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_57 = lean_ctor_get(x_52, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1(lean_object* x_1, lean_object* x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_getMainGoal(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_8, 2);
x_17 = lean_array_get_size(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_toSubarray___rarg(x_1, x_18, x_17);
x_20 = lean_box(0);
lean_inc(x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_16);
x_22 = lean_array_size(x_2);
x_23 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4(x_2, x_20, x_2, x_22, x_3, x_21, x_8, x_9, x_10, x_11, x_15);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_getLocalInstances(x_8, x_9, x_10, x_11, x_25);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_14);
x_30 = l_Lean_MVarId_getType(x_14, x_8, x_9, x_10, x_11, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_14);
x_33 = l_Lean_MVarId_getTag(x_14, x_8, x_9, x_10, x_11, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = 2;
x_37 = l_Lean_Meta_mkFreshExprMVarAt(x_26, x_28, x_31, x_36, x_34, x_18, x_8, x_9, x_10, x_11, x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_38);
x_40 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_14, x_38, x_8, x_9, x_10, x_11, x_39);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_40, 1);
x_43 = lean_ctor_get(x_40, 0);
lean_dec(x_43);
x_44 = l_Lean_Expr_mvarId_x21(x_38);
lean_dec(x_38);
x_45 = lean_box(0);
lean_ctor_set_tag(x_40, 1);
lean_ctor_set(x_40, 1, x_45);
lean_ctor_set(x_40, 0, x_44);
x_46 = l_Lean_Elab_Tactic_replaceMainGoal(x_40, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_42);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec(x_40);
x_48 = l_Lean_Expr_mvarId_x21(x_38);
lean_dec(x_38);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_Elab_Tactic_replaceMainGoal(x_50, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_31);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_14);
x_52 = !lean_is_exclusive(x_33);
if (x_52 == 0)
{
return x_33;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_33, 0);
x_54 = lean_ctor_get(x_33, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_33);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_14);
x_56 = !lean_is_exclusive(x_30);
if (x_56 == 0)
{
return x_30;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_30, 0);
x_58 = lean_ctor_get(x_30, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_30);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_13);
if (x_60 == 0)
{
return x_13;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_13, 0);
x_62 = lean_ctor_get(x_13, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_13);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5(x_1, x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Mathlib_Tactic_rename_x27___closed__2;
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; size_t x_20; lean_object* x_21; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_array_get_size(x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_17);
x_20 = 0;
if (x_19 == 0)
{
lean_object* x_53; 
lean_dec(x_17);
lean_dec(x_16);
x_53 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1;
x_21 = x_53;
goto block_52;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_17, x_17);
if (x_54 == 0)
{
lean_object* x_55; 
lean_dec(x_17);
lean_dec(x_16);
x_55 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1;
x_21 = x_55;
goto block_52;
}
else
{
size_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_57 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2;
x_58 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_16, x_20, x_56, x_57);
lean_dec(x_16);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_21 = x_59;
goto block_52;
}
}
block_52:
{
size_t x_22; lean_object* x_23; 
x_22 = lean_array_size(x_21);
x_23 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1(x_22, x_20, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = l_Lean_Elab_throwUnsupportedSyntax___at_Batteries_Tactic___aux__Batteries__Tactic__Unreachable______elabRules__Batteries__Tactic__unreachable__1___spec__1___rarg(x_10);
return x_24;
}
else
{
lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_array_size(x_25);
lean_inc(x_25);
x_27 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2(x_26, x_20, x_25);
x_28 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3(x_26, x_20, x_25);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_29 = l_Lean_Elab_Tactic_getFVarIds(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1;
lean_inc(x_30);
lean_inc(x_27);
x_33 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1___boxed), 12, 3);
lean_closure_set(x_33, 0, x_27);
lean_closure_set(x_33, 1, x_30);
lean_closure_set(x_33, 2, x_32);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_34 = l_Lean_Elab_Tactic_withMainContext___rarg(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_array_get_size(x_27);
x_37 = l_Array_toSubarray___rarg(x_27, x_18, x_36);
x_38 = lean_box(0);
x_39 = lean_array_size(x_30);
x_40 = lean_box_usize(x_39);
x_41 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1;
x_42 = lean_alloc_closure((void*)(l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2___boxed), 14, 5);
lean_closure_set(x_42, 0, x_30);
lean_closure_set(x_42, 1, x_38);
lean_closure_set(x_42, 2, x_40);
lean_closure_set(x_42, 3, x_41);
lean_closure_set(x_42, 4, x_37);
x_43 = l_Lean_Elab_Tactic_withMainContext___rarg(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
return x_43;
}
else
{
uint8_t x_44; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_34);
if (x_44 == 0)
{
return x_34;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_34, 0);
x_46 = lean_ctor_get(x_34, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_34);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_29);
if (x_48 == 0)
{
return x_29;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_29, 0);
x_50 = lean_ctor_get(x_29, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_29);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__2(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__3(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__4(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_17 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_18 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___spec__5(x_1, x_2, x_3, x_16, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; lean_object* x_14; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_17 = l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___lambda__2(x_1, x_2, x_15, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Rename(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Tactic_renameArg___closed__1 = _init_l_Mathlib_Tactic_renameArg___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__1);
l_Mathlib_Tactic_renameArg___closed__2 = _init_l_Mathlib_Tactic_renameArg___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__2);
l_Mathlib_Tactic_renameArg___closed__3 = _init_l_Mathlib_Tactic_renameArg___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__3);
l_Mathlib_Tactic_renameArg___closed__4 = _init_l_Mathlib_Tactic_renameArg___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__4);
l_Mathlib_Tactic_renameArg___closed__5 = _init_l_Mathlib_Tactic_renameArg___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__5);
l_Mathlib_Tactic_renameArg___closed__6 = _init_l_Mathlib_Tactic_renameArg___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__6);
l_Mathlib_Tactic_renameArg___closed__7 = _init_l_Mathlib_Tactic_renameArg___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__7);
l_Mathlib_Tactic_renameArg___closed__8 = _init_l_Mathlib_Tactic_renameArg___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__8);
l_Mathlib_Tactic_renameArg___closed__9 = _init_l_Mathlib_Tactic_renameArg___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__9);
l_Mathlib_Tactic_renameArg___closed__10 = _init_l_Mathlib_Tactic_renameArg___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__10);
l_Mathlib_Tactic_renameArg___closed__11 = _init_l_Mathlib_Tactic_renameArg___closed__11();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__11);
l_Mathlib_Tactic_renameArg___closed__12 = _init_l_Mathlib_Tactic_renameArg___closed__12();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__12);
l_Mathlib_Tactic_renameArg___closed__13 = _init_l_Mathlib_Tactic_renameArg___closed__13();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__13);
l_Mathlib_Tactic_renameArg___closed__14 = _init_l_Mathlib_Tactic_renameArg___closed__14();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__14);
l_Mathlib_Tactic_renameArg___closed__15 = _init_l_Mathlib_Tactic_renameArg___closed__15();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__15);
l_Mathlib_Tactic_renameArg___closed__16 = _init_l_Mathlib_Tactic_renameArg___closed__16();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__16);
l_Mathlib_Tactic_renameArg___closed__17 = _init_l_Mathlib_Tactic_renameArg___closed__17();
lean_mark_persistent(l_Mathlib_Tactic_renameArg___closed__17);
l_Mathlib_Tactic_renameArg = _init_l_Mathlib_Tactic_renameArg();
lean_mark_persistent(l_Mathlib_Tactic_renameArg);
l_Mathlib_Tactic_rename_x27___closed__1 = _init_l_Mathlib_Tactic_rename_x27___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__1);
l_Mathlib_Tactic_rename_x27___closed__2 = _init_l_Mathlib_Tactic_rename_x27___closed__2();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__2);
l_Mathlib_Tactic_rename_x27___closed__3 = _init_l_Mathlib_Tactic_rename_x27___closed__3();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__3);
l_Mathlib_Tactic_rename_x27___closed__4 = _init_l_Mathlib_Tactic_rename_x27___closed__4();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__4);
l_Mathlib_Tactic_rename_x27___closed__5 = _init_l_Mathlib_Tactic_rename_x27___closed__5();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__5);
l_Mathlib_Tactic_rename_x27___closed__6 = _init_l_Mathlib_Tactic_rename_x27___closed__6();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__6);
l_Mathlib_Tactic_rename_x27___closed__7 = _init_l_Mathlib_Tactic_rename_x27___closed__7();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__7);
l_Mathlib_Tactic_rename_x27___closed__8 = _init_l_Mathlib_Tactic_rename_x27___closed__8();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__8);
l_Mathlib_Tactic_rename_x27___closed__9 = _init_l_Mathlib_Tactic_rename_x27___closed__9();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__9);
l_Mathlib_Tactic_rename_x27___closed__10 = _init_l_Mathlib_Tactic_rename_x27___closed__10();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27___closed__10);
l_Mathlib_Tactic_rename_x27 = _init_l_Mathlib_Tactic_rename_x27();
lean_mark_persistent(l_Mathlib_Tactic_rename_x27);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__1);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___closed__2);
l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1 = _init_l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1();
lean_mark_persistent(l_Mathlib_Tactic___aux__Mathlib__Tactic__Rename______elabRules__Mathlib__Tactic__rename_x27__1___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
