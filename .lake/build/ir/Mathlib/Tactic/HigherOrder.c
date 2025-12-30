// Lean compiler output
// Module: Mathlib.Tactic.HigherOrder
// Imports: Init Lean.Elab.Term Lean.Meta.Tactic.Apply Lean.Meta.Tactic.Assumption Lean.Meta.MatchUtil Lean.Meta.Tactic.Intro Lean.Elab.DeclarationRange Mathlib.Tactic.Attr.Register
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
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkHigherOrderType___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__6;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__5;
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4;
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__12;
lean_object* lean_name_append_after(lean_object*, lean_object*);
static lean_object* l_Tactic_mkHigherOrderType___lambda__1___closed__2;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__19;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__1;
static lean_object* l_Tactic_mkHigherOrderType___lambda__1___closed__4;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
static lean_object* l_Tactic_mkComp___closed__6;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__10;
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkComp___lambda__1___closed__3;
static lean_object* l_Tactic_mkComp___lambda__1___closed__2;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__7;
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10;
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1;
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__13;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__15;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT uint8_t l_Tactic_higherOrderGetParam___lambda__1(lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Tactic_higherOrderGetParam___lambda__6___closed__8;
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__16;
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__12;
lean_object* l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__6;
static lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkHigherOrderType___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__11;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__1___boxed(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkComp___closed__4;
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__3;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__10;
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421_(lean_object*);
static lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__11;
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__20;
static lean_object* l_Tactic_higherOrderGetParam___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__2;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_mkComp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8;
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__14;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_higherOrder;
static lean_object* l_Tactic_mkHigherOrderType___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_simpExtension;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_higherOrderAttr;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__5___closed__1;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4;
static lean_object* l_Tactic_mkComp___lambda__1___closed__1;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__17;
static lean_object* l_Tactic_higherOrderGetParam___lambda__5___closed__2;
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__8;
uint8_t l_Lean_Expr_binderInfo(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_mkSimpCongrTheorem___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__13;
static lean_object* l_Tactic_mkHigherOrderType___closed__1;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__18;
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__5;
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkComp___closed__3;
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__21;
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__15;
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__9;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedSimpTheorems;
lean_object* l_Lean_Meta_getSimpExtension_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__5___closed__3;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__4;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3;
static lean_object* l_Tactic_mkComp___closed__2;
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__4;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg(lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttribute___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges;
static lean_object* l_Tactic_mkComp___closed__1;
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__9;
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
static lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2;
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__14;
lean_object* l_Lean_Elab_Term_addTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__3___closed__1;
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at_Tactic_higherOrderGetParam___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_mkComp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___at___private_Lean_Meta_Tactic_Simp_SimpTheorems_0__Lean_Meta_eraseIfExists___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_mkComp___closed__5;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7;
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Attr_higherOrder___closed__2;
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
static lean_object* l_Tactic_higherOrderGetParam___lambda__6___closed__1;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1;
lean_object* l_Lean_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Tactic_mkComp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6;
LEAN_EXPORT lean_object* l_List_forM___at_Tactic_higherOrderGetParam___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Attr", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("higherOrder", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__1;
x_2 = l_Lean_Parser_Attr_higherOrder___closed__2;
x_3 = l_Lean_Parser_Attr_higherOrder___closed__3;
x_4 = l_Lean_Parser_Attr_higherOrder___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Attr_higherOrder___closed__6;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("higher_order", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__9() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__8;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optional", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Attr_higherOrder___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ppSpace", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Attr_higherOrder___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__13;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Attr_higherOrder___closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__16;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__7;
x_2 = l_Lean_Parser_Attr_higherOrder___closed__14;
x_3 = l_Lean_Parser_Attr_higherOrder___closed__17;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__11;
x_2 = l_Lean_Parser_Attr_higherOrder___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__7;
x_2 = l_Lean_Parser_Attr_higherOrder___closed__9;
x_3 = l_Lean_Parser_Attr_higherOrder___closed__19;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__5;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Parser_Attr_higherOrder___closed__20;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_higherOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Attr_higherOrder___closed__21;
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Function", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("comp", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_mkComp___lambda__1___closed__1;
x_2 = l_Tactic_mkComp___lambda__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_mkComp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Tactic_mkComp(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_array_mk(x_15);
x_17 = l_Tactic_mkComp___lambda__1___closed__3;
x_18 = l_Lean_Meta_mkAppM(x_17, x_16, x_5, x_6, x_7, x_8, x_12);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
static lean_object* _init_l_Tactic_mkComp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_mkComp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_mkComp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_mkComp___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_mkComp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mkComp failed occurs check", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkComp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_mkComp___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_mkComp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_8; uint8_t x_9; 
x_8 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_8 == 0)
{
uint8_t x_30; 
x_30 = 0;
x_9 = x_30;
goto block_29;
}
else
{
uint8_t x_31; 
x_31 = 1;
x_9 = x_31;
goto block_29;
}
block_29:
{
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_2);
x_10 = l_Tactic_mkComp___closed__2;
x_11 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_10, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_array_mk(x_21);
x_23 = l_Tactic_mkComp___closed__4;
x_24 = l_Lean_Meta_mkAppOptM(x_23, x_22, x_3, x_4, x_5, x_6, x_18);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
case 1:
{
uint8_t x_32; uint8_t x_33; 
x_32 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_32 == 0)
{
uint8_t x_54; 
x_54 = 0;
x_33 = x_54;
goto block_53;
}
else
{
uint8_t x_55; 
x_55 = 1;
x_33 = x_55;
goto block_53;
}
block_53:
{
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_2);
x_34 = l_Tactic_mkComp___closed__2;
x_35 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_34, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_41);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_mk(x_45);
x_47 = l_Tactic_mkComp___closed__4;
x_48 = l_Lean_Meta_mkAppOptM(x_47, x_46, x_3, x_4, x_5, x_6, x_42);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_40);
if (x_49 == 0)
{
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 0);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_40);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
case 2:
{
uint8_t x_56; uint8_t x_57; 
x_56 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_56 == 0)
{
uint8_t x_78; 
x_78 = 0;
x_57 = x_78;
goto block_77;
}
else
{
uint8_t x_79; 
x_79 = 1;
x_57 = x_79;
goto block_77;
}
block_77:
{
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_2);
x_58 = l_Tactic_mkComp___closed__2;
x_59 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_58, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
lean_object* x_64; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_64 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_65);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_mk(x_69);
x_71 = l_Tactic_mkComp___closed__4;
x_72 = l_Lean_Meta_mkAppOptM(x_71, x_70, x_3, x_4, x_5, x_6, x_66);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = !lean_is_exclusive(x_64);
if (x_73 == 0)
{
return x_64;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_64, 0);
x_75 = lean_ctor_get(x_64, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_64);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
}
case 3:
{
uint8_t x_80; uint8_t x_81; 
x_80 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_80 == 0)
{
uint8_t x_102; 
x_102 = 0;
x_81 = x_102;
goto block_101;
}
else
{
uint8_t x_103; 
x_103 = 1;
x_81 = x_103;
goto block_101;
}
block_101:
{
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; 
lean_dec(x_2);
x_82 = l_Tactic_mkComp___closed__2;
x_83 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_82, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
return x_83;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_83);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
else
{
lean_object* x_88; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_88 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_89);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_array_mk(x_93);
x_95 = l_Tactic_mkComp___closed__4;
x_96 = l_Lean_Meta_mkAppOptM(x_95, x_94, x_3, x_4, x_5, x_6, x_90);
return x_96;
}
else
{
uint8_t x_97; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_97 = !lean_is_exclusive(x_88);
if (x_97 == 0)
{
return x_88;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_88, 0);
x_99 = lean_ctor_get(x_88, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_88);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
}
case 4:
{
uint8_t x_104; uint8_t x_105; 
x_104 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_104 == 0)
{
uint8_t x_126; 
x_126 = 0;
x_105 = x_126;
goto block_125;
}
else
{
uint8_t x_127; 
x_127 = 1;
x_105 = x_127;
goto block_125;
}
block_125:
{
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_2);
x_106 = l_Tactic_mkComp___closed__2;
x_107 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_106, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
return x_107;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = lean_ctor_get(x_107, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_107);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_112 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_113);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_array_mk(x_117);
x_119 = l_Tactic_mkComp___closed__4;
x_120 = l_Lean_Meta_mkAppOptM(x_119, x_118, x_3, x_4, x_5, x_6, x_114);
return x_120;
}
else
{
uint8_t x_121; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_121 = !lean_is_exclusive(x_112);
if (x_121 == 0)
{
return x_112;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_112, 0);
x_123 = lean_ctor_get(x_112, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_112);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
}
}
case 5:
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_128 = lean_ctor_get(x_2, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_2, 1);
lean_inc(x_129);
lean_dec(x_2);
x_130 = lean_expr_equal(x_129, x_1);
if (x_130 == 0)
{
uint8_t x_131; 
lean_inc(x_1);
x_131 = l_Lean_Expr_occurs(x_1, x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
x_132 = lean_box(0);
x_133 = l_Tactic_mkComp___lambda__1(x_1, x_129, x_128, x_132, x_3, x_4, x_5, x_6, x_7);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; 
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_1);
x_134 = l_Tactic_mkComp___closed__6;
x_135 = l_Lean_throwError___at_Lean_Meta_mkSimpCongrTheorem___spec__4(x_134, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_136 = !lean_is_exclusive(x_135);
if (x_136 == 0)
{
return x_135;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_135, 0);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_135);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
lean_object* x_140; 
lean_dec(x_129);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_128);
lean_ctor_set(x_140, 1, x_7);
return x_140;
}
}
case 6:
{
uint8_t x_141; uint8_t x_142; 
x_141 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_141 == 0)
{
uint8_t x_163; 
x_163 = 0;
x_142 = x_163;
goto block_162;
}
else
{
uint8_t x_164; 
x_164 = 1;
x_142 = x_164;
goto block_162;
}
block_162:
{
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_2);
x_143 = l_Tactic_mkComp___closed__2;
x_144 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_143, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
return x_144;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_144, 0);
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_144);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
else
{
lean_object* x_149; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_149 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_152, 0, x_150);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_array_mk(x_154);
x_156 = l_Tactic_mkComp___closed__4;
x_157 = l_Lean_Meta_mkAppOptM(x_156, x_155, x_3, x_4, x_5, x_6, x_151);
return x_157;
}
else
{
uint8_t x_158; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_158 = !lean_is_exclusive(x_149);
if (x_158 == 0)
{
return x_149;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_149, 0);
x_160 = lean_ctor_get(x_149, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_149);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
}
case 7:
{
uint8_t x_165; uint8_t x_166; 
x_165 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_165 == 0)
{
uint8_t x_187; 
x_187 = 0;
x_166 = x_187;
goto block_186;
}
else
{
uint8_t x_188; 
x_188 = 1;
x_166 = x_188;
goto block_186;
}
block_186:
{
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; uint8_t x_169; 
lean_dec(x_2);
x_167 = l_Tactic_mkComp___closed__2;
x_168 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_167, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_169 = !lean_is_exclusive(x_168);
if (x_169 == 0)
{
return x_168;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_168, 0);
x_171 = lean_ctor_get(x_168, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_168);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
else
{
lean_object* x_173; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_173 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_174);
x_177 = lean_box(0);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_array_mk(x_178);
x_180 = l_Tactic_mkComp___closed__4;
x_181 = l_Lean_Meta_mkAppOptM(x_180, x_179, x_3, x_4, x_5, x_6, x_175);
return x_181;
}
else
{
uint8_t x_182; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_182 = !lean_is_exclusive(x_173);
if (x_182 == 0)
{
return x_173;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_173, 0);
x_184 = lean_ctor_get(x_173, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_173);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
}
}
case 8:
{
uint8_t x_189; uint8_t x_190; 
x_189 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_189 == 0)
{
uint8_t x_211; 
x_211 = 0;
x_190 = x_211;
goto block_210;
}
else
{
uint8_t x_212; 
x_212 = 1;
x_190 = x_212;
goto block_210;
}
block_210:
{
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; uint8_t x_193; 
lean_dec(x_2);
x_191 = l_Tactic_mkComp___closed__2;
x_192 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_191, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_193 = !lean_is_exclusive(x_192);
if (x_193 == 0)
{
return x_192;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_192, 0);
x_195 = lean_ctor_get(x_192, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_192);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
else
{
lean_object* x_197; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_197 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_200, 0, x_198);
x_201 = lean_box(0);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_array_mk(x_202);
x_204 = l_Tactic_mkComp___closed__4;
x_205 = l_Lean_Meta_mkAppOptM(x_204, x_203, x_3, x_4, x_5, x_6, x_199);
return x_205;
}
else
{
uint8_t x_206; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_206 = !lean_is_exclusive(x_197);
if (x_206 == 0)
{
return x_197;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_197, 0);
x_208 = lean_ctor_get(x_197, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_197);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
return x_209;
}
}
}
}
}
case 9:
{
uint8_t x_213; uint8_t x_214; 
x_213 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_213 == 0)
{
uint8_t x_235; 
x_235 = 0;
x_214 = x_235;
goto block_234;
}
else
{
uint8_t x_236; 
x_236 = 1;
x_214 = x_236;
goto block_234;
}
block_234:
{
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; uint8_t x_217; 
lean_dec(x_2);
x_215 = l_Tactic_mkComp___closed__2;
x_216 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_215, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
return x_216;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_216, 0);
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_216);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
else
{
lean_object* x_221; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_221 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_224, 0, x_222);
x_225 = lean_box(0);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_array_mk(x_226);
x_228 = l_Tactic_mkComp___closed__4;
x_229 = l_Lean_Meta_mkAppOptM(x_228, x_227, x_3, x_4, x_5, x_6, x_223);
return x_229;
}
else
{
uint8_t x_230; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_230 = !lean_is_exclusive(x_221);
if (x_230 == 0)
{
return x_221;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_221, 0);
x_232 = lean_ctor_get(x_221, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_221);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
}
}
case 10:
{
uint8_t x_237; uint8_t x_238; 
x_237 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_237 == 0)
{
uint8_t x_259; 
x_259 = 0;
x_238 = x_259;
goto block_258;
}
else
{
uint8_t x_260; 
x_260 = 1;
x_238 = x_260;
goto block_258;
}
block_258:
{
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; uint8_t x_241; 
lean_dec(x_2);
x_239 = l_Tactic_mkComp___closed__2;
x_240 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_239, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_241 = !lean_is_exclusive(x_240);
if (x_241 == 0)
{
return x_240;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_240, 0);
x_243 = lean_ctor_get(x_240, 1);
lean_inc(x_243);
lean_inc(x_242);
lean_dec(x_240);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_242);
lean_ctor_set(x_244, 1, x_243);
return x_244;
}
}
else
{
lean_object* x_245; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_245 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
lean_dec(x_245);
x_248 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_248, 0, x_246);
x_249 = lean_box(0);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_array_mk(x_250);
x_252 = l_Tactic_mkComp___closed__4;
x_253 = l_Lean_Meta_mkAppOptM(x_252, x_251, x_3, x_4, x_5, x_6, x_247);
return x_253;
}
else
{
uint8_t x_254; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_254 = !lean_is_exclusive(x_245);
if (x_254 == 0)
{
return x_245;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_ctor_get(x_245, 0);
x_256 = lean_ctor_get(x_245, 1);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_245);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_255);
lean_ctor_set(x_257, 1, x_256);
return x_257;
}
}
}
}
}
default: 
{
uint8_t x_261; uint8_t x_262; 
x_261 = lean_expr_equal(x_2, x_1);
lean_dec(x_1);
if (x_261 == 0)
{
uint8_t x_283; 
x_283 = 0;
x_262 = x_283;
goto block_282;
}
else
{
uint8_t x_284; 
x_284 = 1;
x_262 = x_284;
goto block_282;
}
block_282:
{
if (x_262 == 0)
{
lean_object* x_263; lean_object* x_264; uint8_t x_265; 
lean_dec(x_2);
x_263 = l_Tactic_mkComp___closed__2;
x_264 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_263, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_265 = !lean_is_exclusive(x_264);
if (x_265 == 0)
{
return x_264;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_264, 0);
x_267 = lean_ctor_get(x_264, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_264);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
else
{
lean_object* x_269; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_269 = lean_infer_type(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
x_272 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_272, 0, x_270);
x_273 = lean_box(0);
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_array_mk(x_274);
x_276 = l_Tactic_mkComp___closed__4;
x_277 = l_Lean_Meta_mkAppOptM(x_276, x_275, x_3, x_4, x_5, x_6, x_271);
return x_277;
}
else
{
uint8_t x_278; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_278 = !lean_is_exclusive(x_269);
if (x_278 == 0)
{
return x_269;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_269, 0);
x_280 = lean_ctor_get(x_269, 1);
lean_inc(x_280);
lean_inc(x_279);
lean_dec(x_269);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
return x_281;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_mkComp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_mkComp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not an equality ", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_mkHigherOrderType___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_mkHigherOrderType___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Expr_bindingBody_x21(x_1);
x_10 = lean_expr_instantiate1(x_9, x_3);
lean_dec(x_9);
x_11 = l_Lean_Expr_isForall(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_12 = l_Lean_Meta_matchEq_x3f(x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_ppExpr(x_10, x_4, x_5, x_6, x_7, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_MessageData_ofFormat(x_17);
x_20 = l_Tactic_mkHigherOrderType___lambda__1___closed__2;
lean_ctor_set_tag(x_15, 7);
lean_ctor_set(x_15, 1, x_19);
lean_ctor_set(x_15, 0, x_20);
x_21 = l_Tactic_mkHigherOrderType___lambda__1___closed__4;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_22, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = l_Lean_MessageData_ofFormat(x_24);
x_27 = l_Tactic_mkHigherOrderType___lambda__1___closed__2;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Tactic_mkHigherOrderType___lambda__1___closed__4;
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_30, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_10);
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_dec(x_12);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_37 = l_Tactic_mkComp(x_3, x_35, x_4, x_5, x_6, x_7, x_34);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_40 = l_Tactic_mkComp(x_3, x_36, x_4, x_5, x_6, x_7, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Meta_mkEq(x_38, x_41, x_4, x_5, x_6, x_7, x_42);
return x_43;
}
else
{
uint8_t x_44; 
lean_dec(x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
return x_40;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_40, 0);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_40);
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
lean_dec(x_36);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
}
else
{
uint8_t x_52; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_12);
if (x_52 == 0)
{
return x_12;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_12, 0);
x_54 = lean_ctor_get(x_12, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_12);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_56 = l_Tactic_mkHigherOrderType(x_10, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_3);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_array_mk(x_60);
x_62 = 0;
x_63 = 1;
x_64 = l_Lean_Meta_mkForallFVars(x_61, x_57, x_62, x_63, x_2, x_4, x_5, x_6, x_7, x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_61);
return x_64;
}
else
{
uint8_t x_65; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_56);
if (x_65 == 0)
{
return x_56;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_56, 0);
x_67 = lean_ctor_get(x_56, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_56);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_8 = l_Lean_Expr_bindingName_x21(x_1);
x_9 = l_Lean_Expr_binderInfo(x_1);
x_10 = l_Lean_Expr_bindingDomain_x21(x_1);
x_11 = lean_box(x_9);
x_12 = lean_alloc_closure((void*)(l_Tactic_mkHigherOrderType___lambda__1___boxed), 8, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_11);
x_13 = 0;
x_14 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(x_8, x_9, x_10, x_12, x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("not a forall", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_mkHigherOrderType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_mkHigherOrderType___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_isForall(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_1);
x_8 = l_Tactic_mkHigherOrderType___closed__2;
x_9 = l_Lean_throwError___at_Lean_Meta_mkSimpCongrTheorem___spec__4(x_8, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Tactic_mkHigherOrderType___lambda__2(x_1, x_14, x_2, x_3, x_4, x_5, x_6);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l_Tactic_mkHigherOrderType___lambda__1(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Tactic_mkHigherOrderType___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Tactic_mkHigherOrderType___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_unsupportedSyntaxExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 0;
x_10 = l_Lean_Syntax_getRange_x3f(x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_inc(x_15);
x_17 = l_Lean_FileMap_toPosition(x_15, x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
lean_inc(x_15);
x_19 = l_Lean_FileMap_toPosition(x_15, x_18);
lean_dec(x_18);
lean_inc(x_17);
x_20 = l_Lean_FileMap_leanPosToLspPos(x_15, x_17);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_20, 1);
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
lean_inc(x_19);
x_24 = l_Lean_FileMap_leanPosToLspPos(x_15, x_19);
lean_dec(x_15);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_19);
lean_ctor_set(x_26, 3, x_25);
lean_ctor_set(x_10, 0, x_26);
lean_ctor_set(x_20, 1, x_8);
lean_ctor_set(x_20, 0, x_10);
return x_20;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_19);
x_28 = l_Lean_FileMap_leanPosToLspPos(x_15, x_19);
lean_dec(x_15);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_17);
lean_ctor_set(x_30, 1, x_27);
lean_ctor_set(x_30, 2, x_19);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_10, 0, x_30);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_8);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_32 = lean_ctor_get(x_10, 0);
lean_inc(x_32);
lean_dec(x_10);
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_dec(x_6);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_inc(x_33);
x_35 = l_Lean_FileMap_toPosition(x_33, x_34);
lean_dec(x_34);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
lean_inc(x_33);
x_37 = l_Lean_FileMap_toPosition(x_33, x_36);
lean_dec(x_36);
lean_inc(x_35);
x_38 = l_Lean_FileMap_leanPosToLspPos(x_33, x_35);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
lean_inc(x_37);
x_41 = l_Lean_FileMap_leanPosToLspPos(x_33, x_37);
lean_dec(x_33);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_35);
lean_ctor_set(x_43, 1, x_39);
lean_ctor_set(x_43, 2, x_37);
lean_ctor_set(x_43, 3, x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
if (lean_is_scalar(x_40)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_40;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_8);
return x_45;
}
}
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_declRangeExt;
return x_1;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
x_2 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
lean_ctor_set(x_2, 4, x_1);
lean_ctor_set(x_2, 5, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instInhabitedDeclarationRanges;
x_16 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1;
lean_inc(x_1);
x_17 = l_Lean_MapDeclarationExtension_contains___rarg(x_15, x_16, x_14, x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_free_object(x_10);
x_18 = lean_st_ref_take(x_8, x_13);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = lean_ctor_get(x_19, 4);
lean_dec(x_23);
x_24 = l_Lean_MapDeclarationExtension_insert___rarg(x_16, x_22, x_1, x_2);
x_25 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4;
lean_ctor_set(x_19, 4, x_25);
lean_ctor_set(x_19, 0, x_24);
x_26 = lean_st_ref_set(x_8, x_19, x_20);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_take(x_6, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_29, 1);
lean_dec(x_32);
x_33 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
lean_ctor_set(x_29, 1, x_33);
x_34 = lean_st_ref_set(x_6, x_29, x_30);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_41 = lean_ctor_get(x_29, 0);
x_42 = lean_ctor_get(x_29, 2);
x_43 = lean_ctor_get(x_29, 3);
x_44 = lean_ctor_get(x_29, 4);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_29);
x_45 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
x_46 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_42);
lean_ctor_set(x_46, 3, x_43);
lean_ctor_set(x_46, 4, x_44);
x_47 = lean_st_ref_set(x_6, x_46, x_30);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_52 = lean_ctor_get(x_19, 0);
x_53 = lean_ctor_get(x_19, 1);
x_54 = lean_ctor_get(x_19, 2);
x_55 = lean_ctor_get(x_19, 3);
x_56 = lean_ctor_get(x_19, 5);
x_57 = lean_ctor_get(x_19, 6);
x_58 = lean_ctor_get(x_19, 7);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_19);
x_59 = l_Lean_MapDeclarationExtension_insert___rarg(x_16, x_52, x_1, x_2);
x_60 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4;
x_61 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_53);
lean_ctor_set(x_61, 2, x_54);
lean_ctor_set(x_61, 3, x_55);
lean_ctor_set(x_61, 4, x_60);
lean_ctor_set(x_61, 5, x_56);
lean_ctor_set(x_61, 6, x_57);
lean_ctor_set(x_61, 7, x_58);
x_62 = lean_st_ref_set(x_8, x_61, x_20);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_st_ref_take(x_6, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 2);
lean_inc(x_68);
x_69 = lean_ctor_get(x_65, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_65, 4);
lean_inc(x_70);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 lean_ctor_release(x_65, 2);
 lean_ctor_release(x_65, 3);
 lean_ctor_release(x_65, 4);
 x_71 = x_65;
} else {
 lean_dec_ref(x_65);
 x_71 = lean_box(0);
}
x_72 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 5, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_67);
lean_ctor_set(x_73, 1, x_72);
lean_ctor_set(x_73, 2, x_68);
lean_ctor_set(x_73, 3, x_69);
lean_ctor_set(x_73, 4, x_70);
x_74 = lean_st_ref_set(x_6, x_73, x_66);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_76 = x_74;
} else {
 lean_dec_ref(x_74);
 x_76 = lean_box(0);
}
x_77 = lean_box(0);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_2);
lean_dec(x_1);
x_79 = lean_box(0);
lean_ctor_set(x_10, 0, x_79);
return x_10;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_80 = lean_ctor_get(x_10, 0);
x_81 = lean_ctor_get(x_10, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_10);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_instInhabitedDeclarationRanges;
x_84 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1;
lean_inc(x_1);
x_85 = l_Lean_MapDeclarationExtension_contains___rarg(x_83, x_84, x_82, x_1);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_86 = lean_st_ref_take(x_8, x_81);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_ctor_get(x_87, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_87, 1);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 2);
lean_inc(x_91);
x_92 = lean_ctor_get(x_87, 3);
lean_inc(x_92);
x_93 = lean_ctor_get(x_87, 5);
lean_inc(x_93);
x_94 = lean_ctor_get(x_87, 6);
lean_inc(x_94);
x_95 = lean_ctor_get(x_87, 7);
lean_inc(x_95);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 lean_ctor_release(x_87, 2);
 lean_ctor_release(x_87, 3);
 lean_ctor_release(x_87, 4);
 lean_ctor_release(x_87, 5);
 lean_ctor_release(x_87, 6);
 lean_ctor_release(x_87, 7);
 x_96 = x_87;
} else {
 lean_dec_ref(x_87);
 x_96 = lean_box(0);
}
x_97 = l_Lean_MapDeclarationExtension_insert___rarg(x_84, x_89, x_1, x_2);
x_98 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4;
if (lean_is_scalar(x_96)) {
 x_99 = lean_alloc_ctor(0, 8, 0);
} else {
 x_99 = x_96;
}
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_90);
lean_ctor_set(x_99, 2, x_91);
lean_ctor_set(x_99, 3, x_92);
lean_ctor_set(x_99, 4, x_98);
lean_ctor_set(x_99, 5, x_93);
lean_ctor_set(x_99, 6, x_94);
lean_ctor_set(x_99, 7, x_95);
x_100 = lean_st_ref_set(x_8, x_99, x_88);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = lean_st_ref_take(x_6, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_103, 2);
lean_inc(x_106);
x_107 = lean_ctor_get(x_103, 3);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 4);
lean_inc(x_108);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 lean_ctor_release(x_103, 2);
 lean_ctor_release(x_103, 3);
 lean_ctor_release(x_103, 4);
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
if (lean_is_scalar(x_109)) {
 x_111 = lean_alloc_ctor(0, 5, 0);
} else {
 x_111 = x_109;
}
lean_ctor_set(x_111, 0, x_105);
lean_ctor_set(x_111, 1, x_110);
lean_ctor_set(x_111, 2, x_106);
lean_ctor_set(x_111, 3, x_107);
lean_ctor_set(x_111, 4, x_108);
x_112 = lean_st_ref_set(x_6, x_111, x_104);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_114 = x_112;
} else {
 lean_dec_ref(x_112);
 x_114 = lean_box(0);
}
x_115 = lean_box(0);
if (lean_is_scalar(x_114)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_114;
}
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_113);
return x_116;
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_2);
lean_dec(x_1);
x_117 = lean_box(0);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_81);
return x_118;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_8);
x_11 = l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_8);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
lean_inc(x_8);
x_21 = l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 1);
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
lean_inc(x_20);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 0, x_20);
x_26 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(x_1, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
lean_dec(x_8);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_dec(x_21);
lean_inc(x_20);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_20);
x_29 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(x_1, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
lean_dec(x_8);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_21);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_21, 1);
x_32 = lean_ctor_get(x_21, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_22, 0);
lean_inc(x_33);
lean_dec(x_22);
lean_ctor_set(x_21, 1, x_33);
lean_ctor_set(x_21, 0, x_20);
x_34 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(x_1, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_8);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_dec(x_21);
x_36 = lean_ctor_get(x_22, 0);
lean_inc(x_36);
lean_dec(x_22);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(x_1, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
lean_dec(x_8);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 5);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Tactic_higherOrderGetParam___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_MVarId_assumption(x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_1 = x_12;
x_8 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Tactic_higherOrderGetParam___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("functor_norm", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_higherOrderGetParam___lambda__3___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Tactic_higherOrderGetParam___lambda__3___closed__2;
x_12 = l_Lean_Meta_getSimpExtension_x3f(x_11, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Tactic_mkComp___closed__2;
x_16 = l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5(x_15, x_6, x_7, x_8, x_9, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_st_ref_get(x_9, x_17);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Meta_instInhabitedSimpTheorems;
x_25 = l_Lean_ScopedEnvExtension_getState___rarg(x_24, x_18, x_23);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_PersistentHashMap_contains___at___private_Lean_Meta_Tactic_Simp_SimpTheorems_0__Lean_Meta_eraseIfExists___spec__1(x_26, x_1);
if (x_27 == 0)
{
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_19, 0, x_2);
return x_19;
}
else
{
uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_19);
x_28 = 1;
x_29 = 0;
x_30 = 0;
x_31 = lean_unsigned_to_nat(1000u);
lean_inc(x_2);
x_32 = l_Lean_Meta_addSimpTheorem(x_18, x_2, x_28, x_29, x_30, x_31, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_2);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_41 = lean_ctor_get(x_19, 0);
x_42 = lean_ctor_get(x_19, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_19);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Meta_instInhabitedSimpTheorems;
x_45 = l_Lean_ScopedEnvExtension_getState___rarg(x_44, x_18, x_43);
x_46 = lean_ctor_get(x_45, 2);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_PersistentHashMap_contains___at___private_Lean_Meta_Tactic_Simp_SimpTheorems_0__Lean_Meta_eraseIfExists___spec__1(x_46, x_1);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_2);
lean_ctor_set(x_48, 1, x_42);
return x_48;
}
else
{
uint8_t x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_49 = 1;
x_50 = 0;
x_51 = 0;
x_52 = lean_unsigned_to_nat(1000u);
lean_inc(x_2);
x_53 = l_Lean_Meta_addSimpTheorem(x_18, x_2, x_49, x_50, x_51, x_52, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_2);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_2);
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_53, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_59 = x_53;
} else {
 lean_dec_ref(x_53);
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
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_simpExtension;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_3);
lean_inc(x_1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_4);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_inc(x_14);
lean_inc(x_13);
x_20 = l_Lean_addDecl(x_19, x_13, x_14, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_ctor_get(x_13, 5);
lean_inc(x_22);
lean_inc(x_13);
lean_inc(x_1);
x_23 = l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2(x_1, x_22, x_5, x_9, x_10, x_11, x_12, x_13, x_14, x_21);
lean_dec(x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_9);
lean_inc(x_1);
x_25 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Term_expandDeclId___spec__7(x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_box(0);
x_29 = 1;
x_30 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_6);
x_31 = l_Lean_Elab_Term_addTermInfo(x_5, x_26, x_6, x_6, x_28, x_29, x_30, x_9, x_10, x_11, x_12, x_13, x_14, x_27);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_st_ref_get(x_14, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Meta_instInhabitedSimpTheorems;
x_38 = l_Tactic_higherOrderGetParam___lambda__4___closed__1;
x_39 = l_Lean_ScopedEnvExtension_getState___rarg(x_37, x_38, x_36);
x_40 = lean_ctor_get(x_39, 2);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_41, 0, x_7);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_29);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 1, x_30);
x_42 = l_Lean_PersistentHashMap_contains___at___private_Lean_Meta_Tactic_Simp_SimpTheorems_0__Lean_Meta_eraseIfExists___spec__1(x_40, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_box(0);
x_44 = l_Tactic_higherOrderGetParam___lambda__3(x_41, x_1, x_43, x_9, x_10, x_11, x_12, x_13, x_14, x_35);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_41);
return x_44;
}
else
{
uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_45 = 0;
x_46 = lean_unsigned_to_nat(1000u);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_47 = l_Lean_Meta_addSimpTheorem(x_38, x_1, x_29, x_30, x_45, x_46, x_11, x_12, x_13, x_14, x_35);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Tactic_higherOrderGetParam___lambda__3(x_41, x_1, x_48, x_9, x_10, x_11, x_12, x_13, x_14, x_49);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_48);
lean_dec(x_41);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_41);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_47);
if (x_51 == 0)
{
return x_47;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_31);
if (x_55 == 0)
{
return x_31;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_31, 0);
x_57 = lean_ctor_get(x_31, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_31);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_25);
if (x_59 == 0)
{
return x_25;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_25, 0);
x_61 = lean_ctor_get(x_25, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_25);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_20);
if (x_63 == 0)
{
return x_20;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_20, 0);
x_65 = lean_ctor_get(x_20, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_20);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("funext", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_higherOrderGetParam___lambda__5___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__5___closed__3() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_1 = 0;
x_2 = 1;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(x_4, 0, x_1);
lean_ctor_set_uint8(x_4, 1, x_2);
lean_ctor_set_uint8(x_4, 2, x_3);
lean_ctor_set_uint8(x_4, 3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_6);
lean_inc(x_1);
x_13 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_ConstantInfo_levelParams(x_14);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_16);
x_17 = l_List_mapTR_loop___at_Lean_mkConstWithLevelParams___spec__1(x_16, x_2);
lean_inc(x_1);
x_18 = l_Lean_Expr_const___override(x_1, x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_19 = lean_infer_type(x_18, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_25 = l_Tactic_mkHigherOrderType(x_23, x_8, x_9, x_10, x_11, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
x_29 = 0;
x_30 = lean_box(0);
lean_inc(x_8);
x_31 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_28, x_29, x_30, x_8, x_9, x_10, x_11, x_27);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Expr_mvarId_x21(x_32);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_35 = l_Lean_MVarId_intros(x_34, x_8, x_9, x_10, x_11, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Tactic_higherOrderGetParam___lambda__5___closed__2;
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_2);
x_40 = l_Lean_Elab_Term_mkConst(x_39, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Tactic_higherOrderGetParam___lambda__5___closed__3;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_44 = l_Lean_MVarId_apply(x_38, x_41, x_43, x_8, x_9, x_10, x_11, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Tactic_mkComp___closed__2;
x_48 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_47, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_45, 1);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
lean_dec(x_44);
x_55 = lean_ctor_get(x_45, 0);
lean_inc(x_55);
lean_dec(x_45);
x_56 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_57 = l_Lean_Meta_intro1Core(x_55, x_56, x_8, x_9, x_10, x_11, x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_61 = l_Lean_Elab_Term_mkConst(x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_64 = l_Lean_MVarId_apply(x_60, x_62, x_43, x_8, x_9, x_10, x_11, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_67 = l_List_forM___at_Tactic_higherOrderGetParam___spec__6(x_65, x_6, x_7, x_8, x_9, x_10, x_11, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_32, x_6, x_7, x_8, x_9, x_10, x_11, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Tactic_higherOrderGetParam___lambda__4(x_3, x_16, x_26, x_2, x_4, x_5, x_1, x_70, x_6, x_7, x_8, x_9, x_10, x_11, x_71);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_67);
if (x_73 == 0)
{
return x_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_67, 0);
x_75 = lean_ctor_get(x_67, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_67);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_64);
if (x_77 == 0)
{
return x_64;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_64, 0);
x_79 = lean_ctor_get(x_64, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_64);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_60);
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_61);
if (x_81 == 0)
{
return x_61;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_61, 0);
x_83 = lean_ctor_get(x_61, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_61);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_57);
if (x_85 == 0)
{
return x_57;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_57, 0);
x_87 = lean_ctor_get(x_57, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_57);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
lean_dec(x_53);
lean_dec(x_45);
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = lean_ctor_get(x_44, 1);
lean_inc(x_89);
lean_dec(x_44);
x_90 = l_Tactic_mkComp___closed__2;
x_91 = l_Lean_throwError___at_Lean_Elab_Term_mkCoe___spec__1(x_90, x_6, x_7, x_8, x_9, x_10, x_11, x_89);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
return x_91;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_44);
if (x_96 == 0)
{
return x_44;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_44, 0);
x_98 = lean_ctor_get(x_44, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_44);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_38);
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_40);
if (x_100 == 0)
{
return x_40;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_40, 0);
x_102 = lean_ctor_get(x_40, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_40);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_35);
if (x_104 == 0)
{
return x_35;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_35, 0);
x_106 = lean_ctor_get(x_35, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_35);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_25);
if (x_108 == 0)
{
return x_25;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_25, 0);
x_110 = lean_ctor_get(x_25, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_25);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_112 = !lean_is_exclusive(x_19);
if (x_112 == 0)
{
return x_19;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_19, 0);
x_114 = lean_ctor_get(x_19, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_19);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_13);
if (x_116 == 0)
{
return x_13;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_13, 0);
x_118 = lean_ctor_get(x_13, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_13);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_higherOrderGetParam___lambda__6___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__3() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Tactic_higherOrderGetParam___lambda__6___closed__2;
x_3 = l_Tactic_higherOrderGetParam___lambda__6___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_higherOrderGetParam___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = 1;
x_5 = 0;
x_6 = l_Tactic_higherOrderGetParam___lambda__6___closed__3;
x_7 = l_Tactic_higherOrderGetParam___lambda__6___closed__4;
x_8 = lean_alloc_ctor(0, 9, 11);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_6);
lean_ctor_set(x_8, 4, x_7);
lean_ctor_set(x_8, 5, x_2);
lean_ctor_set(x_8, 6, x_2);
lean_ctor_set(x_8, 7, x_1);
lean_ctor_set(x_8, 8, x_1);
lean_ctor_set_uint8(x_8, sizeof(void*)*9, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 1, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 2, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 3, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 4, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 5, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 6, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 7, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 8, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 9, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*9 + 10, x_4);
return x_8;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
lean_ctor_set(x_3, 5, x_1);
lean_ctor_set(x_3, 6, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__7() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = 0;
x_2 = 1;
x_3 = 1;
x_4 = 0;
x_5 = 2;
x_6 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_6, 0, x_1);
lean_ctor_set_uint8(x_6, 1, x_1);
lean_ctor_set_uint8(x_6, 2, x_1);
lean_ctor_set_uint8(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, 4, x_1);
lean_ctor_set_uint8(x_6, 5, x_2);
lean_ctor_set_uint8(x_6, 6, x_2);
lean_ctor_set_uint8(x_6, 7, x_1);
lean_ctor_set_uint8(x_6, 8, x_2);
lean_ctor_set_uint8(x_6, 9, x_3);
lean_ctor_set_uint8(x_6, 10, x_4);
lean_ctor_set_uint8(x_6, 11, x_2);
lean_ctor_set_uint8(x_6, 12, x_2);
lean_ctor_set_uint8(x_6, 13, x_2);
lean_ctor_set_uint8(x_6, 14, x_5);
lean_ctor_set_uint8(x_6, 15, x_2);
lean_ctor_set_uint8(x_6, 16, x_2);
lean_ctor_set_uint8(x_6, 17, x_2);
return x_6;
}
}
static uint64_t _init_l_Tactic_higherOrderGetParam___lambda__6___closed__8() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = l_Tactic_higherOrderGetParam___lambda__6___closed__7;
x_2 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
x_2 = l_Tactic_higherOrderGetParam___lambda__6___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Tactic_higherOrderGetParam___lambda__6___closed__7;
x_4 = l_Tactic_higherOrderGetParam___lambda__6___closed__8;
x_5 = 0;
x_6 = l_Tactic_higherOrderGetParam___lambda__6___closed__9;
x_7 = l_Tactic_higherOrderGetParam___lambda__6___closed__10;
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set(x_9, 4, x_1);
lean_ctor_set(x_9, 5, x_8);
lean_ctor_set(x_9, 6, x_1);
lean_ctor_set_uint64(x_9, sizeof(void*)*7, x_4);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 8, x_5);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 9, x_5);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 10, x_5);
return x_9;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
x_3 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
lean_ctor_set(x_3, 5, x_2);
lean_ctor_set(x_3, 6, x_2);
lean_ctor_set(x_3, 7, x_2);
lean_ctor_set(x_3, 8, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3;
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = l_Tactic_higherOrderGetParam___lambda__6___closed__12;
x_3 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5;
x_4 = l_Tactic_higherOrderGetParam___lambda__6___closed__3;
x_5 = l_Tactic_higherOrderGetParam___lambda__6___closed__13;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_1);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Tactic_higherOrderGetParam___lambda__6___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_box(0);
x_9 = lean_box(0);
x_10 = l_Tactic_higherOrderGetParam___lambda__6___closed__14;
x_11 = lean_st_mk_ref(x_10, x_7);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Lean_Syntax_getArg(x_2, x_41);
x_12 = x_42;
goto block_40;
}
else
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_4, 0);
lean_inc(x_43);
x_12 = x_43;
goto block_40;
}
block_40:
{
lean_object* x_13; 
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Tactic_higherOrderGetParam___lambda__6___closed__15;
lean_inc(x_1);
x_35 = lean_name_append_after(x_1, x_34);
x_13 = x_35;
goto block_33;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
lean_dec(x_4);
x_37 = l_Lean_Syntax_getId(x_36);
lean_dec(x_36);
x_38 = l_Lean_Name_getPrefix(x_1);
x_39 = l_Lean_Name_updatePrefix(x_37, x_38);
x_13 = x_39;
goto block_33;
}
block_33:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_closure((void*)(l_Tactic_higherOrderGetParam___lambda__5), 12, 5);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_9);
lean_closure_set(x_16, 2, x_13);
lean_closure_set(x_16, 3, x_12);
lean_closure_set(x_16, 4, x_8);
x_17 = l_Tactic_higherOrderGetParam___lambda__6___closed__5;
x_18 = l_Tactic_higherOrderGetParam___lambda__6___closed__6;
x_19 = l_Tactic_higherOrderGetParam___lambda__6___closed__11;
lean_inc(x_14);
x_20 = l_Lean_Elab_Term_TermElabM_run___rarg(x_16, x_17, x_18, x_19, x_14, x_5, x_6, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_14, x_22);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_23);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Parser_Attr_higherOrder___closed__5;
lean_inc(x_2);
x_7 = l_Lean_Syntax_isOfKind(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg(x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_2, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_inc(x_10);
x_12 = l_Lean_Syntax_matchesNull(x_10, x_9);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg(x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_10, x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_box(0);
x_18 = l_Tactic_higherOrderGetParam___lambda__6(x_1, x_2, x_17, x_16, x_3, x_4, x_5);
lean_dec(x_2);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
x_19 = lean_box(0);
x_20 = lean_box(0);
x_21 = l_Tactic_higherOrderGetParam___lambda__6(x_1, x_2, x_20, x_19, x_3, x_4, x_5);
lean_dec(x_2);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_getDeclarationRange_x3f___at_Tactic_higherOrderGetParam___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_addDeclarationRangesFromSyntax___at_Tactic_higherOrderGetParam___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_higherOrderGetParam___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Tactic_higherOrderGetParam___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at_Tactic_higherOrderGetParam___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Tactic_higherOrderGetParam___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_higherOrderGetParam___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Tactic_higherOrderGetParam___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Tactic_higherOrderGetParam___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Tactic_higherOrderGetParam___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("higherOrderAttr", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1;
x_2 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Attr_higherOrder___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("From a lemma of the shape `∀ x, f (g x) = h x` derive an auxiliary lemma of the\nform `f ∘ g = h` for reasoning about higher-order functions.\n\nSyntax: `[higher_order]` or `[higher_order name]`, where the given name is used for the\ngenerated theorem.", 252, 248);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3;
x_2 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4;
x_3 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5;
x_4 = 0;
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_higherOrderGetParam), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6;
x_2 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7;
x_3 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8;
x_4 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10;
x_3 = l_Lean_registerParametricAttribute___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Attr_Register(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_HigherOrder(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Attr_Register(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_higherOrder___closed__1 = _init_l_Lean_Parser_Attr_higherOrder___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__1);
l_Lean_Parser_Attr_higherOrder___closed__2 = _init_l_Lean_Parser_Attr_higherOrder___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__2);
l_Lean_Parser_Attr_higherOrder___closed__3 = _init_l_Lean_Parser_Attr_higherOrder___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__3);
l_Lean_Parser_Attr_higherOrder___closed__4 = _init_l_Lean_Parser_Attr_higherOrder___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__4);
l_Lean_Parser_Attr_higherOrder___closed__5 = _init_l_Lean_Parser_Attr_higherOrder___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__5);
l_Lean_Parser_Attr_higherOrder___closed__6 = _init_l_Lean_Parser_Attr_higherOrder___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__6);
l_Lean_Parser_Attr_higherOrder___closed__7 = _init_l_Lean_Parser_Attr_higherOrder___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__7);
l_Lean_Parser_Attr_higherOrder___closed__8 = _init_l_Lean_Parser_Attr_higherOrder___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__8);
l_Lean_Parser_Attr_higherOrder___closed__9 = _init_l_Lean_Parser_Attr_higherOrder___closed__9();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__9);
l_Lean_Parser_Attr_higherOrder___closed__10 = _init_l_Lean_Parser_Attr_higherOrder___closed__10();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__10);
l_Lean_Parser_Attr_higherOrder___closed__11 = _init_l_Lean_Parser_Attr_higherOrder___closed__11();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__11);
l_Lean_Parser_Attr_higherOrder___closed__12 = _init_l_Lean_Parser_Attr_higherOrder___closed__12();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__12);
l_Lean_Parser_Attr_higherOrder___closed__13 = _init_l_Lean_Parser_Attr_higherOrder___closed__13();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__13);
l_Lean_Parser_Attr_higherOrder___closed__14 = _init_l_Lean_Parser_Attr_higherOrder___closed__14();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__14);
l_Lean_Parser_Attr_higherOrder___closed__15 = _init_l_Lean_Parser_Attr_higherOrder___closed__15();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__15);
l_Lean_Parser_Attr_higherOrder___closed__16 = _init_l_Lean_Parser_Attr_higherOrder___closed__16();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__16);
l_Lean_Parser_Attr_higherOrder___closed__17 = _init_l_Lean_Parser_Attr_higherOrder___closed__17();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__17);
l_Lean_Parser_Attr_higherOrder___closed__18 = _init_l_Lean_Parser_Attr_higherOrder___closed__18();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__18);
l_Lean_Parser_Attr_higherOrder___closed__19 = _init_l_Lean_Parser_Attr_higherOrder___closed__19();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__19);
l_Lean_Parser_Attr_higherOrder___closed__20 = _init_l_Lean_Parser_Attr_higherOrder___closed__20();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__20);
l_Lean_Parser_Attr_higherOrder___closed__21 = _init_l_Lean_Parser_Attr_higherOrder___closed__21();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder___closed__21);
l_Lean_Parser_Attr_higherOrder = _init_l_Lean_Parser_Attr_higherOrder();
lean_mark_persistent(l_Lean_Parser_Attr_higherOrder);
l_Tactic_mkComp___lambda__1___closed__1 = _init_l_Tactic_mkComp___lambda__1___closed__1();
lean_mark_persistent(l_Tactic_mkComp___lambda__1___closed__1);
l_Tactic_mkComp___lambda__1___closed__2 = _init_l_Tactic_mkComp___lambda__1___closed__2();
lean_mark_persistent(l_Tactic_mkComp___lambda__1___closed__2);
l_Tactic_mkComp___lambda__1___closed__3 = _init_l_Tactic_mkComp___lambda__1___closed__3();
lean_mark_persistent(l_Tactic_mkComp___lambda__1___closed__3);
l_Tactic_mkComp___closed__1 = _init_l_Tactic_mkComp___closed__1();
lean_mark_persistent(l_Tactic_mkComp___closed__1);
l_Tactic_mkComp___closed__2 = _init_l_Tactic_mkComp___closed__2();
lean_mark_persistent(l_Tactic_mkComp___closed__2);
l_Tactic_mkComp___closed__3 = _init_l_Tactic_mkComp___closed__3();
lean_mark_persistent(l_Tactic_mkComp___closed__3);
l_Tactic_mkComp___closed__4 = _init_l_Tactic_mkComp___closed__4();
lean_mark_persistent(l_Tactic_mkComp___closed__4);
l_Tactic_mkComp___closed__5 = _init_l_Tactic_mkComp___closed__5();
lean_mark_persistent(l_Tactic_mkComp___closed__5);
l_Tactic_mkComp___closed__6 = _init_l_Tactic_mkComp___closed__6();
lean_mark_persistent(l_Tactic_mkComp___closed__6);
l_Tactic_mkHigherOrderType___lambda__1___closed__1 = _init_l_Tactic_mkHigherOrderType___lambda__1___closed__1();
lean_mark_persistent(l_Tactic_mkHigherOrderType___lambda__1___closed__1);
l_Tactic_mkHigherOrderType___lambda__1___closed__2 = _init_l_Tactic_mkHigherOrderType___lambda__1___closed__2();
lean_mark_persistent(l_Tactic_mkHigherOrderType___lambda__1___closed__2);
l_Tactic_mkHigherOrderType___lambda__1___closed__3 = _init_l_Tactic_mkHigherOrderType___lambda__1___closed__3();
lean_mark_persistent(l_Tactic_mkHigherOrderType___lambda__1___closed__3);
l_Tactic_mkHigherOrderType___lambda__1___closed__4 = _init_l_Tactic_mkHigherOrderType___lambda__1___closed__4();
lean_mark_persistent(l_Tactic_mkHigherOrderType___lambda__1___closed__4);
l_Tactic_mkHigherOrderType___closed__1 = _init_l_Tactic_mkHigherOrderType___closed__1();
lean_mark_persistent(l_Tactic_mkHigherOrderType___closed__1);
l_Tactic_mkHigherOrderType___closed__2 = _init_l_Tactic_mkHigherOrderType___closed__2();
lean_mark_persistent(l_Tactic_mkHigherOrderType___closed__2);
l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__1);
l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Tactic_higherOrderGetParam___spec__1___rarg___closed__2);
l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1 = _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1();
lean_mark_persistent(l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__1);
l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2 = _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2();
lean_mark_persistent(l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__2);
l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3 = _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3();
lean_mark_persistent(l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__3);
l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4 = _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4();
lean_mark_persistent(l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__4);
l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5 = _init_l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5();
lean_mark_persistent(l_Lean_addDeclarationRanges___at_Tactic_higherOrderGetParam___spec__4___closed__5);
l_Tactic_higherOrderGetParam___lambda__3___closed__1 = _init_l_Tactic_higherOrderGetParam___lambda__3___closed__1();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__3___closed__1);
l_Tactic_higherOrderGetParam___lambda__3___closed__2 = _init_l_Tactic_higherOrderGetParam___lambda__3___closed__2();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__3___closed__2);
l_Tactic_higherOrderGetParam___lambda__4___closed__1 = _init_l_Tactic_higherOrderGetParam___lambda__4___closed__1();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__4___closed__1);
l_Tactic_higherOrderGetParam___lambda__5___closed__1 = _init_l_Tactic_higherOrderGetParam___lambda__5___closed__1();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__5___closed__1);
l_Tactic_higherOrderGetParam___lambda__5___closed__2 = _init_l_Tactic_higherOrderGetParam___lambda__5___closed__2();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__5___closed__2);
l_Tactic_higherOrderGetParam___lambda__5___closed__3 = _init_l_Tactic_higherOrderGetParam___lambda__5___closed__3();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__5___closed__3);
l_Tactic_higherOrderGetParam___lambda__6___closed__1 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__1();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__1);
l_Tactic_higherOrderGetParam___lambda__6___closed__2 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__2();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__2);
l_Tactic_higherOrderGetParam___lambda__6___closed__3 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__3();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__3);
l_Tactic_higherOrderGetParam___lambda__6___closed__4 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__4();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__4);
l_Tactic_higherOrderGetParam___lambda__6___closed__5 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__5();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__5);
l_Tactic_higherOrderGetParam___lambda__6___closed__6 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__6();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__6);
l_Tactic_higherOrderGetParam___lambda__6___closed__7 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__7();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__7);
l_Tactic_higherOrderGetParam___lambda__6___closed__8 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__8();
l_Tactic_higherOrderGetParam___lambda__6___closed__9 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__9();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__9);
l_Tactic_higherOrderGetParam___lambda__6___closed__10 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__10();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__10);
l_Tactic_higherOrderGetParam___lambda__6___closed__11 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__11();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__11);
l_Tactic_higherOrderGetParam___lambda__6___closed__12 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__12();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__12);
l_Tactic_higherOrderGetParam___lambda__6___closed__13 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__13();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__13);
l_Tactic_higherOrderGetParam___lambda__6___closed__14 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__14();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__14);
l_Tactic_higherOrderGetParam___lambda__6___closed__15 = _init_l_Tactic_higherOrderGetParam___lambda__6___closed__15();
lean_mark_persistent(l_Tactic_higherOrderGetParam___lambda__6___closed__15);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__1);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__2);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__3);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__4);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__5);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__6);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__7);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__8);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__9);
l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10 = _init_l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10();
lean_mark_persistent(l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421____closed__10);
res = l_Tactic_initFn____x40_Mathlib_Tactic_HigherOrder___hyg_1421_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Tactic_higherOrderAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Tactic_higherOrderAttr);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
