// Lean compiler output
// Module: Mathlib.Lean.Expr.Basic
// Imports: Init Mathlib.Init Lean.Meta.Tactic.Rewrite Batteries.Tactic.Alias Lean.Elab.Binders
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
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateConstantVal(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f(lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_brackets(uint8_t);
static lean_object* l_Lean_Expr_mkProjection___closed__3;
static lean_object* l_Lean_Name_lastComponentAsString___closed__1;
lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ofInt___closed__1;
static lean_object* l_Lean_Expr_numeral_x3f___closed__1;
lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ne_x3f_x27(lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5;
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateType(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isThm(lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16;
static lean_object* l_Lean_Expr_lt_x3f___closed__3;
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_splitAt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x3f___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_sides_x3f___closed__1;
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isConstantApplication_aux(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__9;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1(lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__7;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__7;
lean_object* l_Lean_Meta_isMatcher___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_modifyRevArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
static lean_object* l_Lean_Expr_eraseProofs___lambda__1___closed__1;
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___closed__2;
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM(lean_object*);
static lean_object* l_Lean_Expr_sides_x3f___closed__3;
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__6;
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__3;
static lean_object* l_Lean_Expr_numeral_x3f___closed__5;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ofInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternalDetail(lean_object*);
static lean_object* l_Lean_Expr_ensureHasNoMVars___closed__3;
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2;
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__4;
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f___boxed(lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_renameBVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_renameBVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_isConstantApplication_aux___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclaration;
LEAN_EXPORT lean_object* l_Lean_Expr_ensureHasNoMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_getFieldsToParents___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_numeral_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_mkDirectProjection___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_containsConst___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_ensureHasNoMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Expr_getAppApps___closed__1;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3;
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13;
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x3f___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__6;
static lean_object* l_Lean_Expr_le_x3f___closed__2;
static lean_object* l_Lean_Expr_le_x3f___closed__3;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10;
LEAN_EXPORT lean_object* l_Lean_Expr_setArg(lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Lean_Expr_getBinderName___closed__1;
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sides_x3f___boxed(lean_object*);
static lean_object* l_Lean_Expr_mkDirectProjection___closed__4;
static lean_object* l_Lean_Name_isBlackListed___rarg___closed__2;
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__2;
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents(lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__11;
static lean_object* l_Lean_Name_isPrefixOf_x3f___closed__1;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__10;
static lean_object* l_Lean_Expr_numeral_x3f___closed__3;
static lean_object* l_Lean_Expr_mkProjection___closed__1;
static lean_object* l_Lean_BinderInfo_brackets___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__1;
LEAN_EXPORT lean_object* l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isThm___boxed(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Lean_Expr_sides_x3f___closed__2;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
uint8_t lean_is_aux_recursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_le_x3f___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_Lean_Expr_eraseProofs___closed__1;
lean_object* l_Lean_Expr_getAppNumArgs_x27_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists___closed__1;
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__5;
lean_object* l_List_splitAt___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConst_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Lean_Expr_rewrite___closed__2;
static lean_object* l_Lean_Expr_rewrite___closed__3;
lean_object* l_Lean_Meta_transform___at_Lean_Meta_zetaReduce___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__4;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__4;
static lean_object* l_Lean_Expr_numeral_x3f___closed__6;
static lean_object* l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1;
static lean_object* l_Lean_Expr_ensureHasNoMVars___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12;
static lean_object* l_Lean_BinderInfo_brackets___closed__5;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15;
static lean_object* l_Lean_Expr_ofInt___closed__2;
extern lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Lean_Expr_ofInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5;
lean_object* l_Lean_Expr_constName_x21(lean_object*);
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ne_x3f_x27___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x3f(lean_object*);
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8;
static lean_object* l_Lean_Expr_le_x3f___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_lastComponentAsString(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lt_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_modifyAppArgM(lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__2;
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6;
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__8;
LEAN_EXPORT lean_object* l_Lean_Expr_type_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ofNat___closed__4;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toDeclaration_x21(lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Expr_mkProjection___spec__2(lean_object*);
static lean_object* l_Lean_Expr_eraseProofs___closed__2;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17;
static lean_object* l_Lean_BinderInfo_brackets___closed__12;
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isDef___boxed(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__7;
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ofInt___closed__3;
static lean_object* l_Lean_BinderInfo_brackets___closed__4;
static lean_object* l_Lean_Expr_lt_x3f___closed__2;
static lean_object* l_Lean_Expr_lt_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ofNat___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ne_x3f_x27___boxed(lean_object*);
static lean_object* l_Lean_Expr_ofInt___closed__4;
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_toConstantVal(lean_object*);
static lean_object* l_Lean_Expr_rewrite___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_letDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateLevelParams(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_zero_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_containsConst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ofNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9;
static lean_object* l_Lean_Expr_mkDirectProjection___closed__1;
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_updateLast(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__9;
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents_go(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_containsConst___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_lt_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isDef(lean_object*);
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1;
lean_object* l_Lean_mkRawNatLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_mkDirectProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1;
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4;
lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1;
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4;
lean_object* l_List_mapM_loop___at___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getFieldsToParents(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_sides_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l_Lean_Expr_ofNat___closed__2;
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_BinderInfo_brackets___boxed(lean_object*);
static lean_object* l_Lean_Expr_sides_x3f___closed__4;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14;
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8;
LEAN_EXPORT lean_object* l_Lean_Expr_rewriteType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Name_isBlackListed___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getAppApps(lean_object*);
extern lean_object* l_Lean_noConfusionExt;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_sides_x3f___closed__5;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_ensureHasNoMVars___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7;
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5;
static lean_object* l_Lean_BinderInfo_brackets___closed__8;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Expr_isConstantApplication___boxed(lean_object*);
static lean_object* l_Lean_Expr_mkDirectProjection___closed__2;
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__4;
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_letDepth___boxed(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_zero_x3f(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__6;
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_BinderInfo_brackets___closed__10;
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__6;
LEAN_EXPORT lean_object* l_Lean_Expr_modifyAppArgM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_pred(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_modifyRevArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Expr_forallNot__of__notExists___closed__2;
static lean_object* l_Lean_Expr_ofNat___closed__1;
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateValue(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__8;
static lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7;
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
static lean_object* l_Lean_ConstantInfo_toDeclaration_x21___closed__5;
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Lean_Expr_Basic_0__Lean_Expr_getAppAppsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isRec___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_type_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_isConstantApplication(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__5(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_mkProjection___closed__5;
LEAN_EXPORT lean_object* l_Lean_Expr_le_x3f(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_BinderInfo_brackets___closed__1;
x_2 = l_Lean_BinderInfo_brackets___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("}", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_BinderInfo_brackets___closed__4;
x_2 = l_Lean_BinderInfo_brackets___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{{", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("}}", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_BinderInfo_brackets___closed__7;
x_2 = l_Lean_BinderInfo_brackets___closed__8;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_BinderInfo_brackets___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_BinderInfo_brackets___closed__10;
x_2 = l_Lean_BinderInfo_brackets___closed__11;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_brackets(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_BinderInfo_brackets___closed__3;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_BinderInfo_brackets___closed__6;
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = l_Lean_BinderInfo_brackets___closed__9;
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = l_Lean_BinderInfo_brackets___closed__12;
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_BinderInfo_brackets___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_BinderInfo_brackets(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_Name_mapPrefix(x_2, x_5);
x_8 = l_Lean_Name_str___override(x_7, x_6);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Name_mapPrefix(x_2, x_9);
x_12 = l_Lean_Name_num___override(x_11, x_10);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
lean_inc(x_2);
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Lean_Name_mapPrefix___lambda__1(x_2, x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_mapPrefix___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Name_mapPrefix___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Name_updatePrefix(x_3, x_1);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_fromComponents(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_Name_fromComponents_go(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_updateLast(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = l_Lean_Name_str___override(x_3, x_5);
return x_6;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
static lean_object* _init_l_Lean_Name_lastComponentAsString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_lastComponentAsString(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Name_lastComponentAsString___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
return x_3;
}
default: 
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_splitAt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Name_componentsRev(x_1);
x_4 = l_List_splitAt___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_List_reverse___rarg(x_7);
x_9 = lean_box(0);
x_10 = l_Lean_Name_fromComponents_go(x_9, x_8);
x_11 = l_List_reverse___rarg(x_6);
x_12 = l_Lean_Name_fromComponents_go(x_9, x_11);
lean_ctor_set(x_4, 1, x_12);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = l_List_reverse___rarg(x_14);
x_16 = lean_box(0);
x_17 = l_Lean_Name_fromComponents_go(x_16, x_15);
x_18 = l_List_reverse___rarg(x_13);
x_19 = l_Lean_Name_fromComponents_go(x_16, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
static lean_object* _init_l_Lean_Name_isPrefixOf_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_1, x_2);
if (x_3 == 0)
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Lean_Name_isPrefixOf_x3f(x_1, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_Name_str___override(x_10, x_6);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Name_str___override(x_12, x_6);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
default: 
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_Lean_Name_isPrefixOf_x3f(x_1, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_16);
x_18 = lean_box(0);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = l_Lean_Name_num___override(x_20, x_16);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = l_Lean_Name_num___override(x_22, x_16);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_2);
x_25 = l_Lean_Name_isPrefixOf_x3f___closed__1;
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Name_isPrefixOf_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_noConfusionExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = l_Lean_Name_isInternalDetail(x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_inc(x_2);
lean_inc(x_3);
x_7 = lean_is_aux_recursor(x_3, x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1;
x_9 = l_Lean_TagDeclarationExtension_isTagged(x_8, x_3, x_2);
lean_dec(x_2);
x_10 = lean_box(x_9);
x_11 = lean_apply_2(x_5, lean_box(0), x_10);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = 1;
x_13 = lean_box(x_12);
x_14 = lean_apply_2(x_5, lean_box(0), x_13);
return x_14;
}
}
else
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = 1;
x_16 = lean_box(x_15);
x_17 = lean_apply_2(x_5, lean_box(0), x_16);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("noConfusionType", 15, 15);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1;
x_9 = lean_string_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
x_14 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_13, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_box(0);
x_23 = lean_apply_2(x_21, lean_box(0), x_22);
x_24 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_23, x_6);
return x_24;
}
}
}
static lean_object* _init_l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inj", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1;
x_9 = lean_string_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
x_14 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_13, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_box(0);
x_23 = lean_apply_2(x_21, lean_box(0), x_22);
x_24 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_23, x_6);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_Meta_isMatcher___rarg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_box(x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_isRec___rarg(x_1, x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__5___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(x_5);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Name_isBlackListed___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sorryAx", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Name_isBlackListed___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Name_isBlackListed___rarg___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = l_Lean_Name_isBlackListed___rarg___closed__2;
x_7 = lean_name_eq(x_3, x_6);
lean_inc(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg___lambda__6___boxed), 5, 4);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
lean_inc(x_4);
x_13 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_12, x_5);
x_14 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_13, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
x_20 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_19, x_8);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_isBlackListed___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Name_isBlackListed___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Name_isBlackListed___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Name_isBlackListed___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Name_isBlackListed___rarg___lambda__5(x_1, x_2, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isBlackListed___rarg___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_Name_isBlackListed___rarg___lambda__6(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isDef(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isDef___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_ConstantInfo_isDef(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isThm(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isThm___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_ConstantInfo_isThm(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateConstantVal(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_2);
return x_1;
}
else
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get_uint8(x_9, sizeof(void*)*1);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 x_11 = x_9;
} else {
 lean_dec_ref(x_9);
 x_11 = lean_box(0);
}
if (lean_is_scalar(x_11)) {
 x_12 = lean_alloc_ctor(0, 1, 1);
} else {
 x_12 = x_11;
}
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
case 1:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_2);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_15, 2);
x_20 = lean_ctor_get_uint8(x_15, sizeof(void*)*4);
x_21 = lean_ctor_get(x_15, 3);
lean_inc(x_21);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_19);
lean_ctor_set(x_22, 3, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_20);
lean_ctor_set(x_1, 0, x_22);
return x_1;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 2);
lean_inc(x_25);
x_26 = lean_ctor_get_uint8(x_23, sizeof(void*)*4);
x_27 = lean_ctor_get(x_23, 3);
lean_inc(x_27);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 lean_ctor_release(x_23, 2);
 lean_ctor_release(x_23, 3);
 x_28 = x_23;
} else {
 lean_dec_ref(x_23);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 4, 1);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_24);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_26);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
case 2:
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_1);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_2);
return x_1;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 1);
x_36 = lean_ctor_get(x_32, 2);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_32);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_36);
lean_ctor_set(x_1, 0, x_37);
return x_1;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 2);
lean_inc(x_40);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 x_41 = x_38;
} else {
 lean_dec_ref(x_38);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(0, 3, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_39);
lean_ctor_set(x_42, 2, x_40);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
}
case 3:
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_1);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_1, 0);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_2);
return x_1;
}
else
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_45, 1);
x_49 = lean_ctor_get_uint8(x_45, sizeof(void*)*3);
x_50 = lean_ctor_get(x_45, 2);
lean_inc(x_50);
lean_inc(x_48);
lean_dec(x_45);
x_51 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_48);
lean_ctor_set(x_51, 2, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*3, x_49);
lean_ctor_set(x_1, 0, x_51);
return x_1;
}
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
x_54 = lean_ctor_get_uint8(x_52, sizeof(void*)*3);
x_55 = lean_ctor_get(x_52, 2);
lean_inc(x_55);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 x_56 = x_52;
} else {
 lean_dec_ref(x_52);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(0, 3, 1);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_2);
lean_ctor_set(x_57, 1, x_53);
lean_ctor_set(x_57, 2, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*3, x_54);
x_58 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
case 4:
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_1);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_1, 0);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_60, 0);
lean_dec(x_62);
lean_ctor_set(x_60, 0, x_2);
return x_1;
}
else
{
uint8_t x_63; lean_object* x_64; 
x_63 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
x_64 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_64, 0, x_2);
lean_ctor_set_uint8(x_64, sizeof(void*)*1, x_63);
lean_ctor_set(x_1, 0, x_64);
return x_1;
}
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_1, 0);
lean_inc(x_65);
lean_dec(x_1);
x_66 = lean_ctor_get_uint8(x_65, sizeof(void*)*1);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 1, 1);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_2);
lean_ctor_set_uint8(x_68, sizeof(void*)*1, x_66);
x_69 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
}
case 5:
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_1);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_1, 0);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_71, 0);
lean_dec(x_73);
lean_ctor_set(x_71, 0, x_2);
return x_1;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; lean_object* x_82; 
x_74 = lean_ctor_get(x_71, 1);
x_75 = lean_ctor_get(x_71, 2);
x_76 = lean_ctor_get(x_71, 3);
x_77 = lean_ctor_get(x_71, 4);
x_78 = lean_ctor_get(x_71, 5);
x_79 = lean_ctor_get_uint8(x_71, sizeof(void*)*6);
x_80 = lean_ctor_get_uint8(x_71, sizeof(void*)*6 + 1);
x_81 = lean_ctor_get_uint8(x_71, sizeof(void*)*6 + 2);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_71);
x_82 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_82, 0, x_2);
lean_ctor_set(x_82, 1, x_74);
lean_ctor_set(x_82, 2, x_75);
lean_ctor_set(x_82, 3, x_76);
lean_ctor_set(x_82, 4, x_77);
lean_ctor_set(x_82, 5, x_78);
lean_ctor_set_uint8(x_82, sizeof(void*)*6, x_79);
lean_ctor_set_uint8(x_82, sizeof(void*)*6 + 1, x_80);
lean_ctor_set_uint8(x_82, sizeof(void*)*6 + 2, x_81);
lean_ctor_set(x_1, 0, x_82);
return x_1;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_83 = lean_ctor_get(x_1, 0);
lean_inc(x_83);
lean_dec(x_1);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 2);
lean_inc(x_85);
x_86 = lean_ctor_get(x_83, 3);
lean_inc(x_86);
x_87 = lean_ctor_get(x_83, 4);
lean_inc(x_87);
x_88 = lean_ctor_get(x_83, 5);
lean_inc(x_88);
x_89 = lean_ctor_get_uint8(x_83, sizeof(void*)*6);
x_90 = lean_ctor_get_uint8(x_83, sizeof(void*)*6 + 1);
x_91 = lean_ctor_get_uint8(x_83, sizeof(void*)*6 + 2);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 lean_ctor_release(x_83, 2);
 lean_ctor_release(x_83, 3);
 lean_ctor_release(x_83, 4);
 lean_ctor_release(x_83, 5);
 x_92 = x_83;
} else {
 lean_dec_ref(x_83);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 6, 3);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_2);
lean_ctor_set(x_93, 1, x_84);
lean_ctor_set(x_93, 2, x_85);
lean_ctor_set(x_93, 3, x_86);
lean_ctor_set(x_93, 4, x_87);
lean_ctor_set(x_93, 5, x_88);
lean_ctor_set_uint8(x_93, sizeof(void*)*6, x_89);
lean_ctor_set_uint8(x_93, sizeof(void*)*6 + 1, x_90);
lean_ctor_set_uint8(x_93, sizeof(void*)*6 + 2, x_91);
x_94 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_94, 0, x_93);
return x_94;
}
}
case 6:
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_1);
if (x_95 == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = lean_ctor_get(x_1, 0);
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; 
x_98 = lean_ctor_get(x_96, 0);
lean_dec(x_98);
lean_ctor_set(x_96, 0, x_2);
return x_1;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_96, 1);
x_100 = lean_ctor_get(x_96, 2);
x_101 = lean_ctor_get(x_96, 3);
x_102 = lean_ctor_get(x_96, 4);
x_103 = lean_ctor_get_uint8(x_96, sizeof(void*)*5);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_96);
x_104 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_104, 0, x_2);
lean_ctor_set(x_104, 1, x_99);
lean_ctor_set(x_104, 2, x_100);
lean_ctor_set(x_104, 3, x_101);
lean_ctor_set(x_104, 4, x_102);
lean_ctor_set_uint8(x_104, sizeof(void*)*5, x_103);
lean_ctor_set(x_1, 0, x_104);
return x_1;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_105 = lean_ctor_get(x_1, 0);
lean_inc(x_105);
lean_dec(x_1);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 2);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 3);
lean_inc(x_108);
x_109 = lean_ctor_get(x_105, 4);
lean_inc(x_109);
x_110 = lean_ctor_get_uint8(x_105, sizeof(void*)*5);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 lean_ctor_release(x_105, 2);
 lean_ctor_release(x_105, 3);
 lean_ctor_release(x_105, 4);
 x_111 = x_105;
} else {
 lean_dec_ref(x_105);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 5, 1);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_2);
lean_ctor_set(x_112, 1, x_106);
lean_ctor_set(x_112, 2, x_107);
lean_ctor_set(x_112, 3, x_108);
lean_ctor_set(x_112, 4, x_109);
lean_ctor_set_uint8(x_112, sizeof(void*)*5, x_110);
x_113 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_113, 0, x_112);
return x_113;
}
}
default: 
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_1);
if (x_114 == 0)
{
lean_object* x_115; uint8_t x_116; 
x_115 = lean_ctor_get(x_1, 0);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; 
x_117 = lean_ctor_get(x_115, 0);
lean_dec(x_117);
lean_ctor_set(x_115, 0, x_2);
return x_1;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; uint8_t x_125; lean_object* x_126; 
x_118 = lean_ctor_get(x_115, 1);
x_119 = lean_ctor_get(x_115, 2);
x_120 = lean_ctor_get(x_115, 3);
x_121 = lean_ctor_get(x_115, 4);
x_122 = lean_ctor_get(x_115, 5);
x_123 = lean_ctor_get(x_115, 6);
x_124 = lean_ctor_get_uint8(x_115, sizeof(void*)*7);
x_125 = lean_ctor_get_uint8(x_115, sizeof(void*)*7 + 1);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_115);
x_126 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_126, 0, x_2);
lean_ctor_set(x_126, 1, x_118);
lean_ctor_set(x_126, 2, x_119);
lean_ctor_set(x_126, 3, x_120);
lean_ctor_set(x_126, 4, x_121);
lean_ctor_set(x_126, 5, x_122);
lean_ctor_set(x_126, 6, x_123);
lean_ctor_set_uint8(x_126, sizeof(void*)*7, x_124);
lean_ctor_set_uint8(x_126, sizeof(void*)*7 + 1, x_125);
lean_ctor_set(x_1, 0, x_126);
return x_1;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_127 = lean_ctor_get(x_1, 0);
lean_inc(x_127);
lean_dec(x_1);
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_127, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_127, 5);
lean_inc(x_132);
x_133 = lean_ctor_get(x_127, 6);
lean_inc(x_133);
x_134 = lean_ctor_get_uint8(x_127, sizeof(void*)*7);
x_135 = lean_ctor_get_uint8(x_127, sizeof(void*)*7 + 1);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 lean_ctor_release(x_127, 2);
 lean_ctor_release(x_127, 3);
 lean_ctor_release(x_127, 4);
 lean_ctor_release(x_127, 5);
 lean_ctor_release(x_127, 6);
 x_136 = x_127;
} else {
 lean_dec_ref(x_127);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(0, 7, 2);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_2);
lean_ctor_set(x_137, 1, x_128);
lean_ctor_set(x_137, 2, x_129);
lean_ctor_set(x_137, 3, x_130);
lean_ctor_set(x_137, 4, x_131);
lean_ctor_set(x_137, 5, x_132);
lean_ctor_set(x_137, 6, x_133);
lean_ctor_set_uint8(x_137, sizeof(void*)*7, x_134);
lean_ctor_set_uint8(x_137, sizeof(void*)*7 + 1, x_135);
x_138 = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(x_138, 0, x_137);
return x_138;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_ConstantInfo_toConstantVal(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_2);
x_6 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
x_10 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_ConstantInfo_toConstantVal(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 2);
lean_dec(x_5);
lean_ctor_set(x_3, 2, x_2);
x_6 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_2);
x_10 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateLevelParams(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_ConstantInfo_toConstantVal(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
x_6 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_8);
x_10 = l_Lean_ConstantInfo_updateConstantVal(x_1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_updateValue(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
lean_ctor_set(x_4, 1, x_2);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 2);
x_9 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_10 = lean_ctor_get(x_4, 3);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*4, x_9);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_12, sizeof(void*)*4);
x_16 = lean_ctor_get(x_12, 3);
lean_inc(x_16);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 lean_ctor_release(x_12, 2);
 lean_ctor_release(x_12, 3);
 x_17 = x_12;
} else {
 lean_dec_ref(x_12);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(0, 4, 1);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_2);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*4, x_15);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
case 2:
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_1);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 1);
lean_dec(x_23);
lean_ctor_set(x_21, 1, x_2);
return x_1;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_2);
lean_ctor_set(x_26, 2, x_25);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 2);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 lean_ctor_release(x_27, 2);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 3, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_2);
lean_ctor_set(x_31, 2, x_29);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
case 3:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_1);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_1, 0);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 1);
lean_dec(x_36);
lean_ctor_set(x_34, 1, x_2);
return x_1;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_34, 0);
x_38 = lean_ctor_get_uint8(x_34, sizeof(void*)*3);
x_39 = lean_ctor_get(x_34, 2);
lean_inc(x_39);
lean_inc(x_37);
lean_dec(x_34);
x_40 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_2);
lean_ctor_set(x_40, 2, x_39);
lean_ctor_set_uint8(x_40, sizeof(void*)*3, x_38);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get_uint8(x_41, sizeof(void*)*3);
x_44 = lean_ctor_get(x_41, 2);
lean_inc(x_44);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 lean_ctor_release(x_41, 2);
 x_45 = x_41;
} else {
 lean_dec_ref(x_41);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 3, 1);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_2);
lean_ctor_set(x_46, 2, x_44);
lean_ctor_set_uint8(x_46, sizeof(void*)*3, x_43);
x_47 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
default: 
{
lean_dec(x_2);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_instInhabitedDeclaration;
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib.Lean.Expr.Basic", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.ConstantInfo.toDeclaration!", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDeclaration for quotInfo not implemented", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_ConstantInfo_toDeclaration_x21___closed__1;
x_2 = l_Lean_ConstantInfo_toDeclaration_x21___closed__2;
x_3 = lean_unsigned_to_nat(152u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_ConstantInfo_toDeclaration_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDeclaration for inductInfo not implemented", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_ConstantInfo_toDeclaration_x21___closed__1;
x_2 = l_Lean_ConstantInfo_toDeclaration_x21___closed__2;
x_3 = lean_unsigned_to_nat(153u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_ConstantInfo_toDeclaration_x21___closed__5;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDeclaration for ctorInfo not implemented", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_ConstantInfo_toDeclaration_x21___closed__1;
x_2 = l_Lean_ConstantInfo_toDeclaration_x21___closed__2;
x_3 = lean_unsigned_to_nat(154u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_ConstantInfo_toDeclaration_x21___closed__7;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("toDeclaration for recInfo not implemented", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_ConstantInfo_toDeclaration_x21___closed__1;
x_2 = l_Lean_ConstantInfo_toDeclaration_x21___closed__2;
x_3 = lean_unsigned_to_nat(155u);
x_4 = lean_unsigned_to_nat(20u);
x_5 = l_Lean_ConstantInfo_toDeclaration_x21___closed__9;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toDeclaration_x21(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
case 1:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
case 2:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
case 3:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
case 4:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_14 = l_Lean_ConstantInfo_toDeclaration_x21___closed__4;
x_15 = l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(x_14);
return x_15;
}
case 5:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = l_Lean_ConstantInfo_toDeclaration_x21___closed__6;
x_17 = l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(x_16);
return x_17;
}
case 6:
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_18 = l_Lean_ConstantInfo_toDeclaration_x21___closed__8;
x_19 = l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_20 = l_Lean_ConstantInfo_toDeclaration_x21___closed__10;
x_21 = l_panic___at_Lean_ConstantInfo_toDeclaration_x21___spec__1(x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConst_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_ConstantInfo_levelParams(x_8);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = l_List_mapM_loop___at___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___spec__1(x_10, x_11, x_2, x_3, x_4, x_5, x_9);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Expr_const___override(x_1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Lean_Expr_const___override(x_1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_7);
if (x_20 == 0)
{
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConst_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_mkConst_x27(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_bvarIdx_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_bvarIdx_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Lean_Expr_Basic_0__Lean_Expr_getAppAppsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = l_Lean_Expr_app___override(x_4, x_5);
x_7 = lean_array_set(x_2, x_3, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_1 = x_4;
x_2 = x_7;
x_3 = x_9;
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
static lean_object* _init_l_Lean_Expr_getAppApps___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getAppApps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_2);
x_4 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_3);
x_5 = lean_mk_array(x_3, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = l___private_Mathlib_Lean_Expr_Basic_0__Lean_Expr_getAppAppsAux(x_1, x_5, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Expr_eraseProofs___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_isProof(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
x_12 = l_Lean_Expr_eraseProofs___lambda__1___closed__1;
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = l_Lean_Expr_eraseProofs___lambda__1___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = l_Lean_Meta_mkSorry(x_18, x_20, x_2, x_3, x_4, x_5, x_19);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
uint8_t x_31; 
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
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
return x_17;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = lean_ctor_get(x_17, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_17);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_7);
if (x_39 == 0)
{
return x_7;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_7, 0);
x_41 = lean_ctor_get(x_7, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_7);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Expr_eraseProofs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Expr_eraseProofs___lambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_eraseProofs___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Expr_eraseProofs___lambda__2___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_7 = l_Lean_Expr_eraseProofs___closed__1;
x_8 = l_Lean_Expr_eraseProofs___closed__2;
x_9 = 0;
x_10 = 1;
x_11 = l_Lean_Meta_transform___at_Lean_Meta_zetaReduce___spec__1(x_1, x_7, x_8, x_9, x_10, x_2, x_3, x_4, x_5, x_6);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_eraseProofs___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_eraseProofs___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_fvarId_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_fvarId_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_type_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Lean_Level_dec(x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_type_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_type_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isConstantApplication_aux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_3, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_3, x_17);
lean_dec(x_3);
x_2 = x_14;
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_3);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_1, x_20);
x_22 = lean_expr_has_loose_bvar(x_2, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = 1;
return x_23;
}
else
{
uint8_t x_24; 
x_24 = 0;
return x_24;
}
}
}
else
{
lean_object* x_25; 
x_25 = lean_box(0);
x_4 = x_25;
goto block_13;
}
block_13:
{
lean_object* x_5; uint8_t x_6; 
lean_dec(x_4);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
lean_dec(x_3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_expr_has_loose_bvar(x_2, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isConstantApplication_aux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_Expr_isConstantApplication_aux(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_isConstantApplication(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Expr_isApp(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Expr_getAppNumArgs_x27_go(x_1, x_4);
x_6 = lean_nat_pred(x_5);
x_7 = l_Lean_Expr_getAppFn_x27(x_1);
x_8 = l_Lean_Expr_isConstantApplication_aux(x_6, x_7, x_5);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_isConstantApplication___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_isConstantApplication(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letDepth(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 8)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 3);
x_3 = l_Lean_Expr_letDepth(x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_unsigned_to_nat(0u);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_letDepth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_letDepth(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_ensureHasNoMVars___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tactic failed, resulting expression contains metavariables", 58, 58);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ensureHasNoMVars___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_ensureHasNoMVars___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_ensureHasNoMVars___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Name_lastComponentAsString___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ensureHasNoMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_Expr_hasExprMVar(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_free_object(x_7);
x_13 = l_Lean_indentExpr(x_9);
x_14 = l_Lean_Expr_ensureHasNoMVars___closed__2;
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_17, x_2, x_3, x_4, x_5, x_10);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_21 = l_Lean_Expr_hasExprMVar(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = l_Lean_indentExpr(x_19);
x_25 = l_Lean_Expr_ensureHasNoMVars___closed__2;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_28, x_2, x_3, x_4, x_5, x_20);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ensureHasNoMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_ensureHasNoMVars(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Lean_Expr_ofNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ofNat___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofNat", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ofNat___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_ofNat___closed__1;
x_2 = l_Lean_Expr_ofNat___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_ofNat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ofNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = l_Lean_mkRawNatLit(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l_Lean_Expr_ofNat___closed__4;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_mk(x_13);
x_15 = l_Lean_Expr_ofNat___closed__3;
x_16 = l_Lean_Meta_mkAppOptM(x_15, x_14, x_3, x_4, x_5, x_6, x_7);
return x_16;
}
}
static lean_object* _init_l_Lean_Expr_ofInt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_ofInt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ofInt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ofInt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_ofInt___closed__2;
x_2 = l_Lean_Expr_ofInt___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ofInt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Expr_ofInt___closed__1;
x_9 = lean_int_dec_lt(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_nat_abs(x_2);
x_11 = l_Lean_Expr_ofNat(x_1, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_nat_abs(x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_nat_add(x_14, x_13);
lean_dec(x_14);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_Expr_ofNat(x_1, x_15, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_mk(x_20);
x_22 = l_Lean_Expr_ofInt___closed__4;
x_23 = l_Lean_Meta_mkAppM(x_22, x_21, x_3, x_4, x_5, x_6, x_18);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ofInt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Expr_ofInt(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("zero", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__1;
x_2 = l_Lean_Expr_numeral_x3f___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("succ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__1;
x_2 = l_Lean_Expr_numeral_x3f___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_numeral_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = l_Lean_Expr_rawNatLit_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Expr_consumeMData(x_1);
lean_dec(x_1);
x_4 = l_Lean_Expr_getAppFn(x_3);
x_5 = l_Lean_Expr_isConst(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_35; uint8_t x_36; 
x_7 = l_Lean_Expr_constName_x21(x_4);
lean_dec(x_4);
x_35 = l_Lean_Expr_numeral_x3f___closed__6;
x_36 = lean_name_eq(x_7, x_35);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_box(0);
x_8 = x_37;
goto block_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_dec_eq(x_39, x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_box(0);
x_8 = x_42;
goto block_34;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_7);
x_43 = l_Lean_Expr_appArg_x21(x_3);
lean_dec(x_3);
x_44 = l_Lean_Expr_numeral_x3f(x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_box(0);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 0);
x_48 = lean_nat_add(x_47, x_40);
lean_dec(x_47);
lean_ctor_set(x_44, 0, x_48);
return x_44;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_44, 0);
lean_inc(x_49);
lean_dec(x_44);
x_50 = lean_nat_add(x_49, x_40);
lean_dec(x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
return x_51;
}
}
}
}
block_34:
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_8);
x_9 = l_Lean_Expr_ofNat___closed__3;
x_10 = lean_name_eq(x_7, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Expr_numeral_x3f___closed__3;
x_12 = lean_name_eq(x_7, x_11);
lean_dec(x_7);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_14);
lean_dec(x_3);
x_16 = lean_nat_dec_eq(x_15, x_14);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = l_Lean_Expr_numeral_x3f___closed__4;
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_19);
x_21 = lean_unsigned_to_nat(3u);
x_22 = lean_nat_dec_eq(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
x_23 = l_Lean_Expr_numeral_x3f___closed__3;
x_24 = lean_name_eq(x_7, x_23);
lean_dec(x_7);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_20);
x_25 = lean_box(0);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_eq(x_20, x_19);
lean_dec(x_20);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = l_Lean_Expr_numeral_x3f___closed__4;
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_7);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_20, x_29);
lean_dec(x_20);
x_31 = lean_nat_sub(x_30, x_29);
lean_dec(x_30);
x_32 = l_Lean_Expr_getRevArg_x21(x_3, x_31);
lean_dec(x_3);
x_1 = x_32;
goto _start;
}
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_2);
if (x_52 == 0)
{
return x_2;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_2, 0);
lean_inc(x_53);
lean_dec(x_2);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
return x_54;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_zero_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_zero_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_zero_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ne", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_ne_x3f_x27___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_ne_x3f_x27___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Eq", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_ne_x3f_x27___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_ne_x3f_x27___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ne_x3f_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_ne_x3f_x27___closed__2;
x_3 = lean_unsigned_to_nat(3u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Lean_Expr_ne_x3f_x27___closed__4;
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Expr_isAppOfArity(x_1, x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Expr_appArg_x21(x_1);
x_10 = l_Lean_Expr_ne_x3f_x27___closed__6;
x_11 = l_Lean_Expr_isAppOfArity(x_9, x_10, x_3);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = l_Lean_Expr_appFn_x21(x_9);
x_14 = l_Lean_Expr_appFn_x21(x_13);
x_15 = l_Lean_Expr_appArg_x21(x_14);
lean_dec(x_14);
x_16 = l_Lean_Expr_appArg_x21(x_13);
lean_dec(x_13);
x_17 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = l_Lean_Expr_appFn_x21(x_1);
x_22 = l_Lean_Expr_appFn_x21(x_21);
x_23 = l_Lean_Expr_appArg_x21(x_22);
lean_dec(x_22);
x_24 = l_Lean_Expr_appArg_x21(x_21);
lean_dec(x_21);
x_25 = l_Lean_Expr_appArg_x21(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ne_x3f_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_ne_x3f_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_le_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_le_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_le_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_le_x3f___closed__1;
x_2 = l_Lean_Expr_le_x3f___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_le_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_le_x3f___closed__3;
x_3 = lean_unsigned_to_nat(4u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = l_Lean_Expr_appFn_x21(x_1);
x_7 = l_Lean_Expr_appFn_x21(x_6);
x_8 = l_Lean_Expr_appFn_x21(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_6);
lean_dec(x_6);
x_11 = l_Lean_Expr_appArg_x21(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_le_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_le_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_lt_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_lt_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_lt_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_lt_x3f___closed__1;
x_2 = l_Lean_Expr_lt_x3f___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lt_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_lt_x3f___closed__3;
x_3 = lean_unsigned_to_nat(4u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = l_Lean_Expr_appFn_x21(x_1);
x_7 = l_Lean_Expr_appFn_x21(x_6);
x_8 = l_Lean_Expr_appFn_x21(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_6);
lean_dec(x_6);
x_11 = l_Lean_Expr_appArg_x21(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_lt_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_lt_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_sides_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Iff", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_sides_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sides_x3f___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_sides_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HEq", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_sides_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sides_x3f___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_sides_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sides_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_sides_x3f___closed__2;
x_3 = lean_unsigned_to_nat(2u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Lean_Expr_ne_x3f_x27___closed__6;
x_6 = lean_unsigned_to_nat(3u);
x_7 = l_Lean_Expr_isAppOfArity(x_1, x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Expr_sides_x3f___closed__4;
x_9 = lean_unsigned_to_nat(4u);
x_10 = l_Lean_Expr_isAppOfArity(x_1, x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = l_Lean_Expr_appFn_x21(x_1);
x_13 = l_Lean_Expr_appFn_x21(x_12);
x_14 = l_Lean_Expr_appFn_x21(x_13);
x_15 = l_Lean_Expr_appArg_x21(x_14);
lean_dec(x_14);
x_16 = l_Lean_Expr_appArg_x21(x_13);
lean_dec(x_13);
x_17 = l_Lean_Expr_appArg_x21(x_12);
lean_dec(x_12);
x_18 = l_Lean_Expr_appArg_x21(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = l_Lean_Expr_appFn_x21(x_1);
x_24 = l_Lean_Expr_appFn_x21(x_23);
x_25 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_26 = l_Lean_Expr_appArg_x21(x_23);
lean_dec(x_23);
x_27 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = l_Lean_Expr_appFn_x21(x_1);
x_33 = l_Lean_Expr_appArg_x21(x_32);
lean_dec(x_32);
x_34 = l_Lean_Expr_appArg_x21(x_1);
x_35 = l_Lean_Expr_sides_x3f___closed__5;
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_sides_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_sides_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyAppArgM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_mkApp), 2, 1);
lean_closure_set(x_8, 0, x_5);
x_9 = lean_apply_1(x_3, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_11 = lean_apply_2(x_2, lean_box(0), x_4);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyAppArgM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_modifyAppArgM___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyRevArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_2, x_8);
x_10 = l_Lean_Expr_modifyRevArg(x_1, x_9, x_6);
lean_dec(x_9);
x_11 = l_Lean_Expr_app___override(x_10, x_7);
return x_11;
}
else
{
lean_dec(x_1);
return x_3;
}
}
else
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_apply_1(x_1, x_13);
x_15 = l_Lean_Expr_app___override(x_12, x_14);
return x_15;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyRevArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Expr_modifyRevArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_nat_sub(x_4, x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Expr_modifyRevArg(x_1, x_7, x_2);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Expr_modifyArg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Lean_Expr_setArg___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Lean_Expr_modifyArg(x_5, x_1, x_2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_setArg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_setArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Expr_setArg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = l_Lean_Expr_getRevArg_x21(x_3, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_4);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_4);
return x_11;
}
}
else
{
lean_object* x_12; 
x_12 = lean_box(0);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getRevArg_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_getRevArg_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_nat_sub(x_3, x_2);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = l_Lean_Expr_getRevArg_x3f(x_1, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getArg_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Expr_getArg_x3f(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Expr_setArg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_5);
x_9 = l_Lean_Expr_modifyArg(x_8, x_2, x_3, x_4);
x_10 = lean_apply_2(x_7, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_6);
x_8 = l_Lean_Expr_getArg_x3f(x_3, x_4, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_apply_1(x_2, x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Expr_modifyArgM___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_4);
lean_closure_set(x_15, 3, x_5);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_modifyArgM___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_modifyArgM___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Expr_modifyArgM___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_renameBVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 5:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_3);
x_6 = l_Lean_Expr_renameBVar(x_4, x_2, x_3);
x_7 = l_Lean_Expr_renameBVar(x_5, x_2, x_3);
x_8 = l_Lean_Expr_app___override(x_6, x_7);
return x_8;
}
case 6:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 8);
lean_dec(x_1);
x_13 = lean_name_eq(x_9, x_2);
lean_inc(x_3);
x_14 = l_Lean_Expr_renameBVar(x_10, x_2, x_3);
lean_inc(x_3);
x_15 = l_Lean_Expr_renameBVar(x_11, x_2, x_3);
if (x_13 == 0)
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = l_Lean_Expr_lam___override(x_9, x_14, x_15, x_12);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_9);
x_17 = l_Lean_Expr_lam___override(x_3, x_14, x_15, x_12);
return x_17;
}
}
case 7:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 8);
lean_dec(x_1);
x_22 = lean_name_eq(x_18, x_2);
lean_inc(x_3);
x_23 = l_Lean_Expr_renameBVar(x_19, x_2, x_3);
lean_inc(x_3);
x_24 = l_Lean_Expr_renameBVar(x_20, x_2, x_3);
if (x_22 == 0)
{
lean_object* x_25; 
lean_dec(x_3);
x_25 = l_Lean_Expr_forallE___override(x_18, x_23, x_24, x_21);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_18);
x_26 = l_Lean_Expr_forallE___override(x_3, x_23, x_24, x_21);
return x_26;
}
}
case 10:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_dec(x_1);
x_29 = l_Lean_Expr_renameBVar(x_28, x_2, x_3);
x_30 = l_Lean_Expr_mdata___override(x_27, x_29);
return x_30;
}
default: 
{
lean_dec(x_3);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_renameBVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Expr_renameBVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static uint64_t _init_l_Lean_Expr_getBinderName___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 2;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getBinderName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint64_t x_10; uint8_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; lean_object* x_17; 
x_10 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_11 = 2;
lean_ctor_set_uint8(x_8, 9, x_11);
x_12 = 2;
x_13 = lean_uint64_shift_right(x_10, x_12);
x_14 = lean_uint64_shift_left(x_13, x_12);
x_15 = l_Lean_Expr_getBinderName___closed__1;
x_16 = lean_uint64_lor(x_14, x_15);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_16);
x_17 = lean_whnf(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
switch (lean_obj_tag(x_18)) {
case 6:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
case 7:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_17, 0, x_30);
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_dec(x_17);
x_32 = lean_ctor_get(x_18, 0);
lean_inc(x_32);
lean_dec(x_18);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
default: 
{
uint8_t x_35; 
lean_dec(x_18);
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_17, 0);
lean_dec(x_36);
x_37 = lean_box(0);
lean_ctor_set(x_17, 0, x_37);
return x_17;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_dec(x_17);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_17);
if (x_41 == 0)
{
return x_17;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_17, 0);
x_43 = lean_ctor_get(x_17, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_17);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint64_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; lean_object* x_70; 
x_45 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_46 = lean_ctor_get_uint8(x_8, 0);
x_47 = lean_ctor_get_uint8(x_8, 1);
x_48 = lean_ctor_get_uint8(x_8, 2);
x_49 = lean_ctor_get_uint8(x_8, 3);
x_50 = lean_ctor_get_uint8(x_8, 4);
x_51 = lean_ctor_get_uint8(x_8, 5);
x_52 = lean_ctor_get_uint8(x_8, 6);
x_53 = lean_ctor_get_uint8(x_8, 7);
x_54 = lean_ctor_get_uint8(x_8, 8);
x_55 = lean_ctor_get_uint8(x_8, 10);
x_56 = lean_ctor_get_uint8(x_8, 11);
x_57 = lean_ctor_get_uint8(x_8, 12);
x_58 = lean_ctor_get_uint8(x_8, 13);
x_59 = lean_ctor_get_uint8(x_8, 14);
x_60 = lean_ctor_get_uint8(x_8, 15);
x_61 = lean_ctor_get_uint8(x_8, 16);
x_62 = lean_ctor_get_uint8(x_8, 17);
lean_dec(x_8);
x_63 = 2;
x_64 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_64, 0, x_46);
lean_ctor_set_uint8(x_64, 1, x_47);
lean_ctor_set_uint8(x_64, 2, x_48);
lean_ctor_set_uint8(x_64, 3, x_49);
lean_ctor_set_uint8(x_64, 4, x_50);
lean_ctor_set_uint8(x_64, 5, x_51);
lean_ctor_set_uint8(x_64, 6, x_52);
lean_ctor_set_uint8(x_64, 7, x_53);
lean_ctor_set_uint8(x_64, 8, x_54);
lean_ctor_set_uint8(x_64, 9, x_63);
lean_ctor_set_uint8(x_64, 10, x_55);
lean_ctor_set_uint8(x_64, 11, x_56);
lean_ctor_set_uint8(x_64, 12, x_57);
lean_ctor_set_uint8(x_64, 13, x_58);
lean_ctor_set_uint8(x_64, 14, x_59);
lean_ctor_set_uint8(x_64, 15, x_60);
lean_ctor_set_uint8(x_64, 16, x_61);
lean_ctor_set_uint8(x_64, 17, x_62);
x_65 = 2;
x_66 = lean_uint64_shift_right(x_45, x_65);
x_67 = lean_uint64_shift_left(x_66, x_65);
x_68 = l_Lean_Expr_getBinderName___closed__1;
x_69 = lean_uint64_lor(x_67, x_68);
lean_ctor_set(x_2, 0, x_64);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_69);
x_70 = lean_whnf(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
switch (lean_obj_tag(x_71)) {
case 6:
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = lean_ctor_get(x_71, 0);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
return x_76;
}
case 7:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_78 = x_70;
} else {
 lean_dec_ref(x_70);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_71, 0);
lean_inc(x_79);
lean_dec(x_71);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
if (lean_is_scalar(x_78)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_78;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_77);
return x_81;
}
default: 
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_71);
x_82 = lean_ctor_get(x_70, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_83 = x_70;
} else {
 lean_dec_ref(x_70);
 x_83 = lean_box(0);
}
x_84 = lean_box(0);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_70, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_70, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_88 = x_70;
} else {
 lean_dec_ref(x_70);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
else
{
lean_object* x_90; uint64_t x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; uint64_t x_121; uint64_t x_122; uint64_t x_123; uint64_t x_124; uint64_t x_125; lean_object* x_126; lean_object* x_127; 
x_90 = lean_ctor_get(x_2, 0);
x_91 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_92 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_93 = lean_ctor_get(x_2, 1);
x_94 = lean_ctor_get(x_2, 2);
x_95 = lean_ctor_get(x_2, 3);
x_96 = lean_ctor_get(x_2, 4);
x_97 = lean_ctor_get(x_2, 5);
x_98 = lean_ctor_get(x_2, 6);
x_99 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_100 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_90);
lean_dec(x_2);
x_101 = lean_ctor_get_uint8(x_90, 0);
x_102 = lean_ctor_get_uint8(x_90, 1);
x_103 = lean_ctor_get_uint8(x_90, 2);
x_104 = lean_ctor_get_uint8(x_90, 3);
x_105 = lean_ctor_get_uint8(x_90, 4);
x_106 = lean_ctor_get_uint8(x_90, 5);
x_107 = lean_ctor_get_uint8(x_90, 6);
x_108 = lean_ctor_get_uint8(x_90, 7);
x_109 = lean_ctor_get_uint8(x_90, 8);
x_110 = lean_ctor_get_uint8(x_90, 10);
x_111 = lean_ctor_get_uint8(x_90, 11);
x_112 = lean_ctor_get_uint8(x_90, 12);
x_113 = lean_ctor_get_uint8(x_90, 13);
x_114 = lean_ctor_get_uint8(x_90, 14);
x_115 = lean_ctor_get_uint8(x_90, 15);
x_116 = lean_ctor_get_uint8(x_90, 16);
x_117 = lean_ctor_get_uint8(x_90, 17);
if (lean_is_exclusive(x_90)) {
 x_118 = x_90;
} else {
 lean_dec_ref(x_90);
 x_118 = lean_box(0);
}
x_119 = 2;
if (lean_is_scalar(x_118)) {
 x_120 = lean_alloc_ctor(0, 0, 18);
} else {
 x_120 = x_118;
}
lean_ctor_set_uint8(x_120, 0, x_101);
lean_ctor_set_uint8(x_120, 1, x_102);
lean_ctor_set_uint8(x_120, 2, x_103);
lean_ctor_set_uint8(x_120, 3, x_104);
lean_ctor_set_uint8(x_120, 4, x_105);
lean_ctor_set_uint8(x_120, 5, x_106);
lean_ctor_set_uint8(x_120, 6, x_107);
lean_ctor_set_uint8(x_120, 7, x_108);
lean_ctor_set_uint8(x_120, 8, x_109);
lean_ctor_set_uint8(x_120, 9, x_119);
lean_ctor_set_uint8(x_120, 10, x_110);
lean_ctor_set_uint8(x_120, 11, x_111);
lean_ctor_set_uint8(x_120, 12, x_112);
lean_ctor_set_uint8(x_120, 13, x_113);
lean_ctor_set_uint8(x_120, 14, x_114);
lean_ctor_set_uint8(x_120, 15, x_115);
lean_ctor_set_uint8(x_120, 16, x_116);
lean_ctor_set_uint8(x_120, 17, x_117);
x_121 = 2;
x_122 = lean_uint64_shift_right(x_91, x_121);
x_123 = lean_uint64_shift_left(x_122, x_121);
x_124 = l_Lean_Expr_getBinderName___closed__1;
x_125 = lean_uint64_lor(x_123, x_124);
x_126 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_126, 0, x_120);
lean_ctor_set(x_126, 1, x_93);
lean_ctor_set(x_126, 2, x_94);
lean_ctor_set(x_126, 3, x_95);
lean_ctor_set(x_126, 4, x_96);
lean_ctor_set(x_126, 5, x_97);
lean_ctor_set(x_126, 6, x_98);
lean_ctor_set_uint64(x_126, sizeof(void*)*7, x_125);
lean_ctor_set_uint8(x_126, sizeof(void*)*7 + 8, x_92);
lean_ctor_set_uint8(x_126, sizeof(void*)*7 + 9, x_99);
lean_ctor_set_uint8(x_126, sizeof(void*)*7 + 10, x_100);
x_127 = lean_whnf(x_1, x_126, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
switch (lean_obj_tag(x_128)) {
case 6:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_128, 0);
lean_inc(x_131);
lean_dec(x_128);
x_132 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_132, 0, x_131);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_129);
return x_133;
}
case 7:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_134 = lean_ctor_get(x_127, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_135 = x_127;
} else {
 lean_dec_ref(x_127);
 x_135 = lean_box(0);
}
x_136 = lean_ctor_get(x_128, 0);
lean_inc(x_136);
lean_dec(x_128);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
if (lean_is_scalar(x_135)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_135;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_134);
return x_138;
}
default: 
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_128);
x_139 = lean_ctor_get(x_127, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_140 = x_127;
} else {
 lean_dec_ref(x_127);
 x_140 = lean_box(0);
}
x_141 = lean_box(0);
if (lean_is_scalar(x_140)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_140;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_139);
return x_142;
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_143 = lean_ctor_get(x_127, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_127, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_145 = x_127;
} else {
 lean_dec_ref(x_127);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("binderIdent", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1;
x_2 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5;
x_3 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4;
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
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = 1;
x_5 = 0;
x_6 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6;
x_7 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7;
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
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9() {
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
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = l_Lean_SourceInfo_fromRef(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hole", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1;
x_2 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11;
x_3 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12;
x_4 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3;
lean_inc(x_2);
x_9 = l_Lean_Syntax_isOfKind(x_2, x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = 1;
x_11 = l_Lean_SourceInfo_fromRef(x_2, x_10);
lean_dec(x_2);
x_12 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15;
x_13 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10;
x_15 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14;
x_16 = l_Lean_Syntax_node1(x_14, x_15, x_13);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_addLocalVarInfo), 9, 2);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_1);
x_18 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8;
x_19 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9;
x_20 = l_Lean_Elab_Term_TermElabM_run___rarg(x_17, x_18, x_19, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Lean_Syntax_getArg(x_2, x_31);
x_33 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17;
lean_inc(x_32);
x_34 = l_Lean_Syntax_isOfKind(x_32, x_33);
if (x_34 == 0)
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_32);
x_35 = 1;
x_36 = l_Lean_SourceInfo_fromRef(x_2, x_35);
lean_dec(x_2);
x_37 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15;
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10;
x_40 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14;
x_41 = l_Lean_Syntax_node1(x_39, x_40, x_38);
x_42 = lean_alloc_closure((void*)(l_Lean_Elab_Term_addLocalVarInfo), 9, 2);
lean_closure_set(x_42, 0, x_41);
lean_closure_set(x_42, 1, x_1);
x_43 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8;
x_44 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9;
x_45 = l_Lean_Elab_Term_TermElabM_run___rarg(x_42, x_43, x_44, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_45);
if (x_52 == 0)
{
return x_45;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_45, 0);
x_54 = lean_ctor_get(x_45, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_45);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_2);
x_56 = lean_alloc_closure((void*)(l_Lean_Elab_Term_addLocalVarInfo), 9, 2);
lean_closure_set(x_56, 0, x_32);
lean_closure_set(x_56, 1, x_1);
x_57 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8;
x_58 = l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9;
x_59 = l_Lean_Elab_Term_TermElabM_run___rarg(x_56, x_57, x_58, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
x_62 = lean_box(0);
lean_ctor_set(x_59, 0, x_62);
return x_59;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_59);
if (x_66 == 0)
{
return x_59;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_59, 0);
x_68 = lean_ctor_get(x_59, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_59);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_addLocalVarInfoForBinderIdent___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_mkDirectProjection___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" doesn't have a structure as type", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkDirectProjection___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_mkDirectProjection___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_mkDirectProjection___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" doesn't have field ", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkDirectProjection___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_mkDirectProjection___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkDirectProjection(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_whnf(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Expr_getAppFn(x_12);
if (lean_obj_tag(x_14) == 4)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_6, x_13);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_2);
lean_inc(x_15);
x_22 = l_Lean_getProjFnForField_x3f(x_21, x_15, x_2);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_free_object(x_17);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_1);
x_23 = l_Lean_MessageData_ofName(x_15);
x_24 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Expr_mkDirectProjection___closed__4;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_MessageData_ofName(x_2);
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
x_31 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_30, x_3, x_4, x_5, x_6, x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_22, 0);
lean_inc(x_32);
lean_dec(x_22);
x_33 = l_Lean_Expr_const___override(x_32, x_16);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_12, x_34);
x_36 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_35);
x_37 = lean_mk_array(x_35, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_sub(x_35, x_38);
lean_dec(x_35);
x_40 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_12, x_37, x_39);
x_41 = lean_array_push(x_40, x_1);
x_42 = l_Lean_mkAppN(x_33, x_41);
lean_dec(x_41);
lean_ctor_set(x_17, 0, x_42);
return x_17;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_2);
lean_inc(x_15);
x_46 = l_Lean_getProjFnForField_x3f(x_45, x_15, x_2);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_1);
x_47 = l_Lean_MessageData_ofName(x_15);
x_48 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Lean_Expr_mkDirectProjection___closed__4;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_MessageData_ofName(x_2);
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_48);
x_55 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_54, x_3, x_4, x_5, x_6, x_44);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_46, 0);
lean_inc(x_56);
lean_dec(x_46);
x_57 = l_Lean_Expr_const___override(x_56, x_16);
x_58 = lean_unsigned_to_nat(0u);
x_59 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_12, x_58);
x_60 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_59);
x_61 = lean_mk_array(x_59, x_60);
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_sub(x_59, x_62);
lean_dec(x_59);
x_64 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_12, x_61, x_63);
x_65 = lean_array_push(x_64, x_1);
x_66 = l_Lean_mkAppN(x_57, x_65);
lean_dec(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_44);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_2);
x_68 = l_Lean_MessageData_ofExpr(x_1);
x_69 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Lean_Expr_mkDirectProjection___closed__2;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_72, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_11);
if (x_74 == 0)
{
return x_11;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_11, 0);
x_76 = lean_ctor_get(x_11, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_11);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_8);
if (x_78 == 0)
{
return x_8;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_8, 0);
x_80 = lean_ctor_get(x_8, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_8);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_4);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_21; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_21 = lean_infer_type(x_5, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = lean_whnf(x_22, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Expr_getAppFn(x_25);
if (lean_obj_tag(x_27) == 4)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_free_object(x_4);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Expr_const___override(x_14, x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_25, x_30);
x_32 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_31);
x_33 = lean_mk_array(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_31, x_34);
lean_dec(x_31);
x_36 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_25, x_33, x_35);
x_37 = lean_array_push(x_36, x_5);
x_38 = l_Lean_mkAppN(x_29, x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_16 = x_39;
x_17 = x_26;
goto block_20;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_14);
x_40 = l_Lean_MessageData_ofExpr(x_5);
x_41 = l_Lean_Expr_ensureHasNoMVars___closed__3;
lean_ctor_set_tag(x_4, 7);
lean_ctor_set(x_4, 1, x_40);
lean_ctor_set(x_4, 0, x_41);
x_42 = l_Lean_Expr_mkDirectProjection___closed__2;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_43, x_7, x_8, x_9, x_10, x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_free_object(x_4);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_49 = !lean_is_exclusive(x_24);
if (x_49 == 0)
{
return x_24;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_24, 0);
x_51 = lean_ctor_get(x_24, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_24);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_free_object(x_4);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_53 = !lean_is_exclusive(x_21);
if (x_53 == 0)
{
return x_21;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_21, 0);
x_55 = lean_ctor_get(x_21, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_21);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
block_20:
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_4 = x_15;
x_5 = x_18;
x_6 = lean_box(0);
x_11 = x_17;
goto _start;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_64; 
x_57 = lean_ctor_get(x_4, 0);
x_58 = lean_ctor_get(x_4, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_64 = lean_infer_type(x_5, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_67 = lean_whnf(x_65, x_7, x_8, x_9, x_10, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Expr_getAppFn(x_68);
if (lean_obj_tag(x_70) == 4)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Expr_const___override(x_57, x_71);
x_73 = lean_unsigned_to_nat(0u);
x_74 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_68, x_73);
x_75 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_74);
x_76 = lean_mk_array(x_74, x_75);
x_77 = lean_unsigned_to_nat(1u);
x_78 = lean_nat_sub(x_74, x_77);
lean_dec(x_74);
x_79 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_68, x_76, x_78);
x_80 = lean_array_push(x_79, x_5);
x_81 = l_Lean_mkAppN(x_72, x_80);
lean_dec(x_80);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_59 = x_82;
x_60 = x_69;
goto block_63;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_70);
lean_dec(x_68);
lean_dec(x_58);
lean_dec(x_57);
x_83 = l_Lean_MessageData_ofExpr(x_5);
x_84 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
x_86 = l_Lean_Expr_mkDirectProjection___closed__2;
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Lean_throwError___at___private_Lean_Meta_Basic_0__Lean_Meta_processPostponedStep___spec__1(x_87, x_7, x_8, x_9, x_10, x_69);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_93 = lean_ctor_get(x_67, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_67, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_95 = x_67;
} else {
 lean_dec_ref(x_67);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_97 = lean_ctor_get(x_64, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_64, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_99 = x_64;
} else {
 lean_dec_ref(x_64);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
block_63:
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
lean_dec(x_59);
x_4 = x_58;
x_5 = x_61;
x_6 = lean_box(0);
x_11 = x_60;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Expr_mkProjection___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_panic_fn(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No parent of ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_mkProjection___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" has field ", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_mkProjection___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Option.get!", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("value is none", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_mkProjection___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_mkProjection___closed__5;
x_2 = l_Lean_Expr_mkProjection___closed__6;
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_Expr_mkProjection___closed__7;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_mkProjection(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_whnf(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Expr_getAppFn(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 4)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_6, x_13);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_15);
x_21 = l_Lean_findField_x3f(x_20, x_15, x_2);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_22 = l_Lean_MessageData_ofName(x_15);
x_23 = l_Lean_Expr_mkProjection___closed__2;
lean_ctor_set_tag(x_16, 7);
lean_ctor_set(x_16, 1, x_22);
lean_ctor_set(x_16, 0, x_23);
x_24 = l_Lean_Expr_mkProjection___closed__4;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_MessageData_ofName(x_2);
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_29, x_3, x_4, x_5, x_6, x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_free_object(x_16);
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
x_32 = lean_st_ref_get(x_6, x_19);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_getPathToBaseStructure_x3f(x_35, x_31, x_15);
lean_dec(x_31);
x_37 = lean_box(0);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = l_Lean_Expr_mkProjection___closed__8;
x_49 = l_panic___at_Lean_Expr_mkProjection___spec__2(x_48);
x_38 = x_49;
goto block_47;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_36, 0);
lean_inc(x_50);
lean_dec(x_36);
x_38 = x_50;
goto block_47;
}
block_47:
{
lean_object* x_39; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_38);
x_39 = l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1(x_37, x_38, x_38, x_38, x_1, lean_box(0), x_3, x_4, x_5, x_6, x_34);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Expr_mkDirectProjection(x_40, x_2, x_3, x_4, x_5, x_6, x_41);
return x_42;
}
else
{
uint8_t x_43; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_39);
if (x_43 == 0)
{
return x_39;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_39);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_16, 0);
x_52 = lean_ctor_get(x_16, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_16);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_15);
x_54 = l_Lean_findField_x3f(x_53, x_15, x_2);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_1);
x_55 = l_Lean_MessageData_ofName(x_15);
x_56 = l_Lean_Expr_mkProjection___closed__2;
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = l_Lean_Expr_mkProjection___closed__4;
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_MessageData_ofName(x_2);
x_61 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_63, x_3, x_4, x_5, x_6, x_52);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_54, 0);
lean_inc(x_65);
lean_dec(x_54);
x_66 = lean_st_ref_get(x_6, x_52);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_getPathToBaseStructure_x3f(x_69, x_65, x_15);
lean_dec(x_65);
x_71 = lean_box(0);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = l_Lean_Expr_mkProjection___closed__8;
x_83 = l_panic___at_Lean_Expr_mkProjection___spec__2(x_82);
x_72 = x_83;
goto block_81;
}
else
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_70, 0);
lean_inc(x_84);
lean_dec(x_70);
x_72 = x_84;
goto block_81;
}
block_81:
{
lean_object* x_73; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_72);
x_73 = l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1(x_71, x_72, x_72, x_72, x_1, lean_box(0), x_3, x_4, x_5, x_6, x_68);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_Expr_mkDirectProjection(x_74, x_2, x_3, x_4, x_5, x_6, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_ctor_get(x_73, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_73, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_79 = x_73;
} else {
 lean_dec_ref(x_73);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_14);
lean_dec(x_2);
x_85 = l_Lean_MessageData_ofExpr(x_1);
x_86 = l_Lean_Expr_ensureHasNoMVars___closed__3;
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_85);
x_88 = l_Lean_Expr_mkDirectProjection___closed__2;
x_89 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_89, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_90;
}
}
else
{
uint8_t x_91; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_11);
if (x_91 == 0)
{
return x_11;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_11, 0);
x_93 = lean_ctor_get(x_11, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_11);
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_8);
if (x_95 == 0)
{
return x_8;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_8, 0);
x_97 = lean_ctor_get(x_8, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_8);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_forIn_x27_loop___at_Lean_Expr_mkProjection___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ill-formed expression, ", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" is the ", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-th projection function but ", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" does not have enough arguments", 31, 31);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_12);
lean_inc(x_13);
x_14 = lean_mk_array(x_13, x_2);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_13, x_15);
lean_dec(x_13);
lean_inc(x_1);
x_17 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_14, x_16);
x_18 = lean_ctor_get(x_3, 2);
x_19 = lean_nat_add(x_4, x_18);
x_20 = lean_array_get_size(x_17);
x_21 = lean_nat_dec_lt(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_19);
lean_dec(x_17);
x_22 = l_Lean_MessageData_ofName(x_5);
x_23 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_nat_add(x_18, x_15);
x_28 = l___private_Init_Data_Repr_0__Nat_reprFast(x_27);
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = l_Lean_MessageData_ofFormat(x_29);
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_MessageData_ofExpr(x_1);
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_37, x_7, x_8, x_9, x_10, x_11);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_5);
lean_dec(x_1);
x_39 = lean_array_fget(x_17, x_19);
lean_dec(x_19);
lean_dec(x_17);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_11);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_8);
x_9 = l_Lean_getProjectionFnInfo_x3f___at_Lean_Meta_getStuckMVar_x3f___spec__1(x_8, x_2, x_3, x_4, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_18 = lean_ctor_get(x_9, 1);
x_19 = lean_ctor_get(x_9, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_21);
x_23 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_22);
x_24 = lean_mk_array(x_22, x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_22, x_25);
lean_dec(x_22);
x_27 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_24, x_26);
x_28 = lean_array_get_size(x_27);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
x_30 = lean_nat_add(x_29, x_25);
x_31 = lean_nat_dec_eq(x_28, x_30);
lean_dec(x_30);
lean_dec(x_28);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_8);
x_32 = lean_box(0);
lean_ctor_set(x_9, 0, x_32);
return x_9;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_array_fget(x_27, x_29);
lean_dec(x_27);
x_34 = l_Lean_Expr_getAppFn(x_33);
x_35 = lean_ctor_get(x_20, 0);
lean_inc(x_35);
x_36 = l_Lean_Expr_isConstOf(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_33);
lean_dec(x_29);
lean_dec(x_20);
lean_dec(x_8);
x_37 = lean_box(0);
lean_ctor_set(x_9, 0, x_37);
return x_9;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_free_object(x_9);
x_38 = lean_box(0);
x_39 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1(x_33, x_23, x_20, x_29, x_8, x_38, x_2, x_3, x_4, x_5, x_18);
lean_dec(x_29);
lean_dec(x_20);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_40 = lean_ctor_get(x_9, 1);
lean_inc(x_40);
lean_dec(x_9);
x_41 = lean_ctor_get(x_10, 0);
lean_inc(x_41);
lean_dec(x_10);
x_42 = lean_unsigned_to_nat(0u);
x_43 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_42);
x_44 = l_Lean_Expr_getAppApps___closed__1;
lean_inc(x_43);
x_45 = lean_mk_array(x_43, x_44);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_sub(x_43, x_46);
lean_dec(x_43);
x_48 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_45, x_47);
x_49 = lean_array_get_size(x_48);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
x_51 = lean_nat_add(x_50, x_46);
x_52 = lean_nat_dec_eq(x_49, x_51);
lean_dec(x_51);
lean_dec(x_49);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_41);
lean_dec(x_8);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_40);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_array_fget(x_48, x_50);
lean_dec(x_48);
x_56 = l_Lean_Expr_getAppFn(x_55);
x_57 = lean_ctor_get(x_41, 0);
lean_inc(x_57);
x_58 = l_Lean_Expr_isConstOf(x_56, x_57);
lean_dec(x_57);
lean_dec(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_55);
lean_dec(x_50);
lean_dec(x_41);
lean_dec(x_8);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_40);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_box(0);
x_62 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1(x_55, x_44, x_41, x_50, x_8, x_61, x_2, x_3, x_4, x_5, x_40);
lean_dec(x_50);
lean_dec(x_41);
return x_62;
}
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_7);
lean_dec(x_1);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_6);
return x_64;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Expr_reduceProjStruct_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_reduceProjStruct_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_reduceProjStruct_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_containsConst___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
else
{
uint8_t x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = 0;
x_6 = lean_box(x_5);
return x_6;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_containsConst(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Expr_containsConst___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_find_expr(x_3, x_1);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_containsConst___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_containsConst(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Expr_rewrite___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = 2;
x_2 = 1;
x_3 = lean_box(0);
x_4 = 0;
x_5 = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 1, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Expr_rewrite___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expr.rewrite may not produce subgoals.", 38, 38);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_rewrite___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_rewrite___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_rewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_box(0);
x_9 = 0;
x_10 = lean_box(0);
lean_inc(x_3);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_8, x_9, x_10, x_3, x_4, x_5, x_6, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Expr_mvarId_x21(x_12);
lean_dec(x_12);
x_15 = 0;
x_16 = l_Lean_Expr_rewrite___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l_Lean_MVarId_rewrite(x_14, x_1, x_2, x_15, x_16, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_19);
lean_dec(x_18);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_dec(x_17);
x_27 = l_Lean_Expr_rewrite___closed__3;
x_28 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_27, x_3, x_4, x_5, x_6, x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_rewriteType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Expr_rewrite(x_9, x_2, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_mkEqMP(x_12, x_1, x_3, x_4, x_5, x_6, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_8);
if (x_19 == 0)
{
return x_8;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Lean_Expr_forallNot__of__notExists_go(x_1, x_2, x_3, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
x_20 = 0;
x_21 = 1;
x_22 = 1;
x_23 = l_Lean_Meta_mkForallFVars(x_4, x_18, x_20, x_21, x_22, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_8);
lean_ctor_set(x_26, 1, x_5);
x_27 = lean_array_mk(x_26);
x_28 = l_Lean_Meta_mkLambdaFVars(x_27, x_19, x_20, x_21, x_20, x_22, x_9, x_10, x_11, x_12, x_25);
lean_dec(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Expr_app___override(x_6, x_7);
x_32 = l_Lean_Expr_app___override(x_29, x_31);
x_33 = l_Lean_Meta_mkLambdaFVars(x_4, x_32, x_20, x_21, x_20, x_22, x_9, x_10, x_11, x_12, x_30);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_ctor_set(x_15, 1, x_35);
lean_ctor_set(x_15, 0, x_24);
lean_ctor_set(x_33, 0, x_15);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_33);
lean_ctor_set(x_15, 1, x_36);
lean_ctor_set(x_15, 0, x_24);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_24);
lean_free_object(x_15);
x_39 = !lean_is_exclusive(x_33);
if (x_39 == 0)
{
return x_33;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_33, 0);
x_41 = lean_ctor_get(x_33, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_33);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_24);
lean_free_object(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_43 = !lean_is_exclusive(x_28);
if (x_43 == 0)
{
return x_28;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_28, 0);
x_45 = lean_ctor_get(x_28, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_28);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_free_object(x_15);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = !lean_is_exclusive(x_23);
if (x_47 == 0)
{
return x_23;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_23, 0);
x_49 = lean_ctor_get(x_23, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_23);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_15, 0);
x_52 = lean_ctor_get(x_15, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_15);
x_53 = 0;
x_54 = 1;
x_55 = 1;
x_56 = l_Lean_Meta_mkForallFVars(x_4, x_51, x_53, x_54, x_55, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_8);
lean_ctor_set(x_59, 1, x_5);
x_60 = lean_array_mk(x_59);
x_61 = l_Lean_Meta_mkLambdaFVars(x_60, x_52, x_53, x_54, x_53, x_55, x_9, x_10, x_11, x_12, x_58);
lean_dec(x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Expr_app___override(x_6, x_7);
x_65 = l_Lean_Expr_app___override(x_62, x_64);
x_66 = l_Lean_Meta_mkLambdaFVars(x_4, x_65, x_53, x_54, x_53, x_55, x_9, x_10, x_11, x_12, x_63);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_57);
lean_ctor_set(x_70, 1, x_67);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_57);
x_72 = lean_ctor_get(x_66, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_74 = x_66;
} else {
 lean_dec_ref(x_66);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_57);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_76 = lean_ctor_get(x_61, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_61, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_78 = x_61;
} else {
 lean_dec_ref(x_61);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_52);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_80 = lean_ctor_get(x_56, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_56, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_82 = x_56;
} else {
 lean_dec_ref(x_56);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_84 = !lean_is_exclusive(x_14);
if (x_84 == 0)
{
return x_14;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_14, 0);
x_86 = lean_ctor_get(x_14, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_14);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("forall_not_of_not_exists", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Exists", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("h", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_box(0);
lean_inc(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_array_mk(x_12);
lean_inc(x_13);
lean_inc(x_1);
x_14 = l_Lean_Expr_beta(x_1, x_13);
lean_inc(x_14);
x_15 = l_Lean_mkNot(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_11);
x_17 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2;
x_18 = l_Lean_Expr_const___override(x_17, x_16);
x_19 = l_Lean_mkApp3(x_18, x_3, x_1, x_4);
if (lean_obj_tag(x_14) == 5)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_14, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 5)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 4)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 1)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_dec(x_22);
x_28 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3;
x_29 = lean_string_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
uint8_t x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_30 = 0;
x_31 = 1;
x_32 = 1;
x_33 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_30, x_31, x_32, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_19);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_19);
x_41 = !lean_is_exclusive(x_33);
if (x_41 == 0)
{
return x_33;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_33, 0);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_33);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_45; uint8_t x_46; uint8_t x_47; lean_object* x_48; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_45 = 0;
x_46 = 1;
x_47 = 1;
x_48 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_45, x_46, x_47, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_48, 0, x_51);
return x_48;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_48, 0);
x_53 = lean_ctor_get(x_48, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_48);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_19);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
uint8_t x_56; 
lean_dec(x_19);
x_56 = !lean_is_exclusive(x_48);
if (x_56 == 0)
{
return x_48;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_48, 0);
x_58 = lean_ctor_get(x_48, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_48);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_26, 1);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; uint8_t x_68; lean_object* x_69; 
x_61 = lean_ctor_get(x_26, 0);
lean_inc(x_61);
lean_dec(x_26);
x_62 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5;
x_63 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_62, x_8, x_9, x_10);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_alloc_closure((void*)(l_Lean_Expr_forallNot__of__notExists_go___lambda__1___boxed), 13, 7);
lean_closure_set(x_66, 0, x_61);
lean_closure_set(x_66, 1, x_25);
lean_closure_set(x_66, 2, x_24);
lean_closure_set(x_66, 3, x_13);
lean_closure_set(x_66, 4, x_11);
lean_closure_set(x_66, 5, x_19);
lean_closure_set(x_66, 6, x_5);
x_67 = 0;
x_68 = 0;
x_69 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(x_64, x_67, x_15, x_66, x_68, x_6, x_7, x_8, x_9, x_65);
return x_69;
}
else
{
uint8_t x_70; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_70 = !lean_is_exclusive(x_60);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; lean_object* x_76; 
x_71 = lean_ctor_get(x_60, 1);
lean_dec(x_71);
x_72 = lean_ctor_get(x_60, 0);
lean_dec(x_72);
x_73 = 0;
x_74 = 1;
x_75 = 1;
x_76 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_73, x_74, x_75, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_76, 0);
lean_ctor_set_tag(x_60, 0);
lean_ctor_set(x_60, 1, x_19);
lean_ctor_set(x_60, 0, x_78);
lean_ctor_set(x_76, 0, x_60);
return x_76;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_76, 0);
x_80 = lean_ctor_get(x_76, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_76);
lean_ctor_set_tag(x_60, 0);
lean_ctor_set(x_60, 1, x_19);
lean_ctor_set(x_60, 0, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_60);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
else
{
uint8_t x_82; 
lean_free_object(x_60);
lean_dec(x_19);
x_82 = !lean_is_exclusive(x_76);
if (x_82 == 0)
{
return x_76;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_76, 0);
x_84 = lean_ctor_get(x_76, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_76);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; uint8_t x_87; uint8_t x_88; lean_object* x_89; 
lean_dec(x_60);
x_86 = 0;
x_87 = 1;
x_88 = 1;
x_89 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_86, x_87, x_88, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_92 = x_89;
} else {
 lean_dec_ref(x_89);
 x_92 = lean_box(0);
}
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_19);
if (lean_is_scalar(x_92)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_92;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_19);
x_95 = lean_ctor_get(x_89, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_89, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_97 = x_89;
} else {
 lean_dec_ref(x_89);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
}
}
}
}
else
{
uint8_t x_99; uint8_t x_100; uint8_t x_101; lean_object* x_102; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_5);
x_99 = 0;
x_100 = 1;
x_101 = 1;
x_102 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_99, x_100, x_101, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_102) == 0)
{
uint8_t x_103; 
x_103 = !lean_is_exclusive(x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_102, 0);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_19);
lean_ctor_set(x_102, 0, x_105);
return x_102;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_102, 0);
x_107 = lean_ctor_get(x_102, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_102);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_19);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
}
else
{
uint8_t x_110; 
lean_dec(x_19);
x_110 = !lean_is_exclusive(x_102);
if (x_110 == 0)
{
return x_102;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_102, 0);
x_112 = lean_ctor_get(x_102, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_102);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
else
{
uint8_t x_114; uint8_t x_115; uint8_t x_116; lean_object* x_117; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_5);
x_114 = 0;
x_115 = 1;
x_116 = 1;
x_117 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_114, x_115, x_116, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_117) == 0)
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_19);
lean_ctor_set(x_117, 0, x_120);
return x_117;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_117, 0);
x_122 = lean_ctor_get(x_117, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_117);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_19);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
uint8_t x_125; 
lean_dec(x_19);
x_125 = !lean_is_exclusive(x_117);
if (x_125 == 0)
{
return x_117;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_117, 0);
x_127 = lean_ctor_get(x_117, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_117);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
}
else
{
uint8_t x_129; uint8_t x_130; uint8_t x_131; lean_object* x_132; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_5);
x_129 = 0;
x_130 = 1;
x_131 = 1;
x_132 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_129, x_130, x_131, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_132) == 0)
{
uint8_t x_133; 
x_133 = !lean_is_exclusive(x_132);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; 
x_134 = lean_ctor_get(x_132, 0);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_19);
lean_ctor_set(x_132, 0, x_135);
return x_132;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_132, 0);
x_137 = lean_ctor_get(x_132, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_132);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_19);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
else
{
uint8_t x_140; 
lean_dec(x_19);
x_140 = !lean_is_exclusive(x_132);
if (x_140 == 0)
{
return x_132;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_132, 0);
x_142 = lean_ctor_get(x_132, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_132);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
else
{
uint8_t x_144; uint8_t x_145; uint8_t x_146; lean_object* x_147; 
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_5);
x_144 = 0;
x_145 = 1;
x_146 = 1;
x_147 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_144, x_145, x_146, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_147) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_147, 0);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_19);
lean_ctor_set(x_147, 0, x_150);
return x_147;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_147, 0);
x_152 = lean_ctor_get(x_147, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_147);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_19);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
else
{
uint8_t x_155; 
lean_dec(x_19);
x_155 = !lean_is_exclusive(x_147);
if (x_155 == 0)
{
return x_147;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_147, 0);
x_157 = lean_ctor_get(x_147, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_147);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
else
{
uint8_t x_159; uint8_t x_160; uint8_t x_161; lean_object* x_162; 
lean_dec(x_14);
lean_dec(x_5);
x_159 = 0;
x_160 = 1;
x_161 = 1;
x_162 = l_Lean_Meta_mkForallFVars(x_13, x_15, x_159, x_160, x_161, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_13);
if (lean_obj_tag(x_162) == 0)
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_162, 0);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_19);
lean_ctor_set(x_162, 0, x_165);
return x_162;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_162, 0);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_162);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_19);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_dec(x_19);
x_170 = !lean_is_exclusive(x_162);
if (x_170 == 0)
{
return x_162;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_162, 0);
x_172 = lean_ctor_get(x_162, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_162);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("x", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists_go___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_forallNot__of__notExists_go___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_10 = l_Lean_Expr_forallNot__of__notExists_go___closed__2;
x_11 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_10, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_Expr_forallNot__of__notExists_go___lambda__2), 10, 4);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_4);
x_15 = 0;
x_16 = 0;
x_17 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(x_12, x_15, x_2, x_14, x_16, x_5, x_6, x_7, x_8, x_13);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists_go___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Expr_forallNot__of__notExists_go___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_forallNot__of__notExists___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_forallNot__of__notExists___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_forallNot__of__notExists(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 5)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_18 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_19 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_18, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
else
{
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_20 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_21 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_20, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l_Lean_Expr_forallNot__of__notExists_go(x_23, x_13, x_12, x_2, x_3, x_4, x_5, x_6, x_7);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_25 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_26 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_25, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_26;
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_27 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_28 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_27, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_29 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_30 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_29, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_31 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_32 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_31, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_33 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_34 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_33, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_2);
lean_dec(x_1);
x_35 = l_Lean_Expr_forallNot__of__notExists___closed__2;
x_36 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_35, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Expr_forallNot__of__notExists___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_isSubobjectField_x3f(x_1, x_2, x_8);
x_10 = 1;
x_11 = lean_usize_add(x_4, x_10);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_8);
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
lean_dec(x_9);
x_13 = lean_array_push(x_6, x_8);
x_4 = x_11;
x_6 = x_13;
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
static lean_object* _init_l_Lean_getFieldsToParents___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_getFieldsToParents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Lean_getStructureFields(x_1, x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_getFieldsToParents___closed__1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_4, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_Lean_getFieldsToParents___closed__1;
return x_9;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_12 = l_Lean_getFieldsToParents___closed__1;
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1(x_1, x_2, x_3, x_10, x_11, x_12);
lean_dec(x_3);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_getFieldsToParents___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Alias(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Lean_Expr_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Alias(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_BinderInfo_brackets___closed__1 = _init_l_Lean_BinderInfo_brackets___closed__1();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__1);
l_Lean_BinderInfo_brackets___closed__2 = _init_l_Lean_BinderInfo_brackets___closed__2();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__2);
l_Lean_BinderInfo_brackets___closed__3 = _init_l_Lean_BinderInfo_brackets___closed__3();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__3);
l_Lean_BinderInfo_brackets___closed__4 = _init_l_Lean_BinderInfo_brackets___closed__4();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__4);
l_Lean_BinderInfo_brackets___closed__5 = _init_l_Lean_BinderInfo_brackets___closed__5();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__5);
l_Lean_BinderInfo_brackets___closed__6 = _init_l_Lean_BinderInfo_brackets___closed__6();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__6);
l_Lean_BinderInfo_brackets___closed__7 = _init_l_Lean_BinderInfo_brackets___closed__7();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__7);
l_Lean_BinderInfo_brackets___closed__8 = _init_l_Lean_BinderInfo_brackets___closed__8();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__8);
l_Lean_BinderInfo_brackets___closed__9 = _init_l_Lean_BinderInfo_brackets___closed__9();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__9);
l_Lean_BinderInfo_brackets___closed__10 = _init_l_Lean_BinderInfo_brackets___closed__10();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__10);
l_Lean_BinderInfo_brackets___closed__11 = _init_l_Lean_BinderInfo_brackets___closed__11();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__11);
l_Lean_BinderInfo_brackets___closed__12 = _init_l_Lean_BinderInfo_brackets___closed__12();
lean_mark_persistent(l_Lean_BinderInfo_brackets___closed__12);
l_Lean_Name_lastComponentAsString___closed__1 = _init_l_Lean_Name_lastComponentAsString___closed__1();
lean_mark_persistent(l_Lean_Name_lastComponentAsString___closed__1);
l_Lean_Name_isPrefixOf_x3f___closed__1 = _init_l_Lean_Name_isPrefixOf_x3f___closed__1();
lean_mark_persistent(l_Lean_Name_isPrefixOf_x3f___closed__1);
l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1 = _init_l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Name_isBlackListed___rarg___lambda__1___closed__1);
l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1 = _init_l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Name_isBlackListed___rarg___lambda__3___closed__1);
l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1 = _init_l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Name_isBlackListed___rarg___lambda__4___closed__1);
l_Lean_Name_isBlackListed___rarg___closed__1 = _init_l_Lean_Name_isBlackListed___rarg___closed__1();
lean_mark_persistent(l_Lean_Name_isBlackListed___rarg___closed__1);
l_Lean_Name_isBlackListed___rarg___closed__2 = _init_l_Lean_Name_isBlackListed___rarg___closed__2();
lean_mark_persistent(l_Lean_Name_isBlackListed___rarg___closed__2);
l_Lean_ConstantInfo_toDeclaration_x21___closed__1 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__1();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__1);
l_Lean_ConstantInfo_toDeclaration_x21___closed__2 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__2();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__2);
l_Lean_ConstantInfo_toDeclaration_x21___closed__3 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__3();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__3);
l_Lean_ConstantInfo_toDeclaration_x21___closed__4 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__4();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__4);
l_Lean_ConstantInfo_toDeclaration_x21___closed__5 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__5();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__5);
l_Lean_ConstantInfo_toDeclaration_x21___closed__6 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__6();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__6);
l_Lean_ConstantInfo_toDeclaration_x21___closed__7 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__7();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__7);
l_Lean_ConstantInfo_toDeclaration_x21___closed__8 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__8();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__8);
l_Lean_ConstantInfo_toDeclaration_x21___closed__9 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__9();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__9);
l_Lean_ConstantInfo_toDeclaration_x21___closed__10 = _init_l_Lean_ConstantInfo_toDeclaration_x21___closed__10();
lean_mark_persistent(l_Lean_ConstantInfo_toDeclaration_x21___closed__10);
l_Lean_Expr_getAppApps___closed__1 = _init_l_Lean_Expr_getAppApps___closed__1();
lean_mark_persistent(l_Lean_Expr_getAppApps___closed__1);
l_Lean_Expr_eraseProofs___lambda__1___closed__1 = _init_l_Lean_Expr_eraseProofs___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Expr_eraseProofs___lambda__1___closed__1);
l_Lean_Expr_eraseProofs___closed__1 = _init_l_Lean_Expr_eraseProofs___closed__1();
lean_mark_persistent(l_Lean_Expr_eraseProofs___closed__1);
l_Lean_Expr_eraseProofs___closed__2 = _init_l_Lean_Expr_eraseProofs___closed__2();
lean_mark_persistent(l_Lean_Expr_eraseProofs___closed__2);
l_Lean_Expr_ensureHasNoMVars___closed__1 = _init_l_Lean_Expr_ensureHasNoMVars___closed__1();
lean_mark_persistent(l_Lean_Expr_ensureHasNoMVars___closed__1);
l_Lean_Expr_ensureHasNoMVars___closed__2 = _init_l_Lean_Expr_ensureHasNoMVars___closed__2();
lean_mark_persistent(l_Lean_Expr_ensureHasNoMVars___closed__2);
l_Lean_Expr_ensureHasNoMVars___closed__3 = _init_l_Lean_Expr_ensureHasNoMVars___closed__3();
lean_mark_persistent(l_Lean_Expr_ensureHasNoMVars___closed__3);
l_Lean_Expr_ofNat___closed__1 = _init_l_Lean_Expr_ofNat___closed__1();
lean_mark_persistent(l_Lean_Expr_ofNat___closed__1);
l_Lean_Expr_ofNat___closed__2 = _init_l_Lean_Expr_ofNat___closed__2();
lean_mark_persistent(l_Lean_Expr_ofNat___closed__2);
l_Lean_Expr_ofNat___closed__3 = _init_l_Lean_Expr_ofNat___closed__3();
lean_mark_persistent(l_Lean_Expr_ofNat___closed__3);
l_Lean_Expr_ofNat___closed__4 = _init_l_Lean_Expr_ofNat___closed__4();
lean_mark_persistent(l_Lean_Expr_ofNat___closed__4);
l_Lean_Expr_ofInt___closed__1 = _init_l_Lean_Expr_ofInt___closed__1();
lean_mark_persistent(l_Lean_Expr_ofInt___closed__1);
l_Lean_Expr_ofInt___closed__2 = _init_l_Lean_Expr_ofInt___closed__2();
lean_mark_persistent(l_Lean_Expr_ofInt___closed__2);
l_Lean_Expr_ofInt___closed__3 = _init_l_Lean_Expr_ofInt___closed__3();
lean_mark_persistent(l_Lean_Expr_ofInt___closed__3);
l_Lean_Expr_ofInt___closed__4 = _init_l_Lean_Expr_ofInt___closed__4();
lean_mark_persistent(l_Lean_Expr_ofInt___closed__4);
l_Lean_Expr_numeral_x3f___closed__1 = _init_l_Lean_Expr_numeral_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__1);
l_Lean_Expr_numeral_x3f___closed__2 = _init_l_Lean_Expr_numeral_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__2);
l_Lean_Expr_numeral_x3f___closed__3 = _init_l_Lean_Expr_numeral_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__3);
l_Lean_Expr_numeral_x3f___closed__4 = _init_l_Lean_Expr_numeral_x3f___closed__4();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__4);
l_Lean_Expr_numeral_x3f___closed__5 = _init_l_Lean_Expr_numeral_x3f___closed__5();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__5);
l_Lean_Expr_numeral_x3f___closed__6 = _init_l_Lean_Expr_numeral_x3f___closed__6();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__6);
l_Lean_Expr_ne_x3f_x27___closed__1 = _init_l_Lean_Expr_ne_x3f_x27___closed__1();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__1);
l_Lean_Expr_ne_x3f_x27___closed__2 = _init_l_Lean_Expr_ne_x3f_x27___closed__2();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__2);
l_Lean_Expr_ne_x3f_x27___closed__3 = _init_l_Lean_Expr_ne_x3f_x27___closed__3();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__3);
l_Lean_Expr_ne_x3f_x27___closed__4 = _init_l_Lean_Expr_ne_x3f_x27___closed__4();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__4);
l_Lean_Expr_ne_x3f_x27___closed__5 = _init_l_Lean_Expr_ne_x3f_x27___closed__5();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__5);
l_Lean_Expr_ne_x3f_x27___closed__6 = _init_l_Lean_Expr_ne_x3f_x27___closed__6();
lean_mark_persistent(l_Lean_Expr_ne_x3f_x27___closed__6);
l_Lean_Expr_le_x3f___closed__1 = _init_l_Lean_Expr_le_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_le_x3f___closed__1);
l_Lean_Expr_le_x3f___closed__2 = _init_l_Lean_Expr_le_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_le_x3f___closed__2);
l_Lean_Expr_le_x3f___closed__3 = _init_l_Lean_Expr_le_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_le_x3f___closed__3);
l_Lean_Expr_lt_x3f___closed__1 = _init_l_Lean_Expr_lt_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_lt_x3f___closed__1);
l_Lean_Expr_lt_x3f___closed__2 = _init_l_Lean_Expr_lt_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_lt_x3f___closed__2);
l_Lean_Expr_lt_x3f___closed__3 = _init_l_Lean_Expr_lt_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_lt_x3f___closed__3);
l_Lean_Expr_sides_x3f___closed__1 = _init_l_Lean_Expr_sides_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_sides_x3f___closed__1);
l_Lean_Expr_sides_x3f___closed__2 = _init_l_Lean_Expr_sides_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_sides_x3f___closed__2);
l_Lean_Expr_sides_x3f___closed__3 = _init_l_Lean_Expr_sides_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_sides_x3f___closed__3);
l_Lean_Expr_sides_x3f___closed__4 = _init_l_Lean_Expr_sides_x3f___closed__4();
lean_mark_persistent(l_Lean_Expr_sides_x3f___closed__4);
l_Lean_Expr_sides_x3f___closed__5 = _init_l_Lean_Expr_sides_x3f___closed__5();
lean_mark_persistent(l_Lean_Expr_sides_x3f___closed__5);
l_Lean_Expr_getBinderName___closed__1 = _init_l_Lean_Expr_getBinderName___closed__1();
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__1);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__2);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__3);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__4);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__5);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__6);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__7);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__8);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__9);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__10);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__11);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__12);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__13);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__14);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__15);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__16);
l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17 = _init_l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17();
lean_mark_persistent(l_Lean_Expr_addLocalVarInfoForBinderIdent___closed__17);
l_Lean_Expr_mkDirectProjection___closed__1 = _init_l_Lean_Expr_mkDirectProjection___closed__1();
lean_mark_persistent(l_Lean_Expr_mkDirectProjection___closed__1);
l_Lean_Expr_mkDirectProjection___closed__2 = _init_l_Lean_Expr_mkDirectProjection___closed__2();
lean_mark_persistent(l_Lean_Expr_mkDirectProjection___closed__2);
l_Lean_Expr_mkDirectProjection___closed__3 = _init_l_Lean_Expr_mkDirectProjection___closed__3();
lean_mark_persistent(l_Lean_Expr_mkDirectProjection___closed__3);
l_Lean_Expr_mkDirectProjection___closed__4 = _init_l_Lean_Expr_mkDirectProjection___closed__4();
lean_mark_persistent(l_Lean_Expr_mkDirectProjection___closed__4);
l_Lean_Expr_mkProjection___closed__1 = _init_l_Lean_Expr_mkProjection___closed__1();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__1);
l_Lean_Expr_mkProjection___closed__2 = _init_l_Lean_Expr_mkProjection___closed__2();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__2);
l_Lean_Expr_mkProjection___closed__3 = _init_l_Lean_Expr_mkProjection___closed__3();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__3);
l_Lean_Expr_mkProjection___closed__4 = _init_l_Lean_Expr_mkProjection___closed__4();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__4);
l_Lean_Expr_mkProjection___closed__5 = _init_l_Lean_Expr_mkProjection___closed__5();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__5);
l_Lean_Expr_mkProjection___closed__6 = _init_l_Lean_Expr_mkProjection___closed__6();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__6);
l_Lean_Expr_mkProjection___closed__7 = _init_l_Lean_Expr_mkProjection___closed__7();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__7);
l_Lean_Expr_mkProjection___closed__8 = _init_l_Lean_Expr_mkProjection___closed__8();
lean_mark_persistent(l_Lean_Expr_mkProjection___closed__8);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__1);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__2);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__3);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__4);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__5);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__6);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__7);
l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8 = _init_l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Expr_reduceProjStruct_x3f___lambda__1___closed__8);
l_Lean_Expr_rewrite___closed__1 = _init_l_Lean_Expr_rewrite___closed__1();
lean_mark_persistent(l_Lean_Expr_rewrite___closed__1);
l_Lean_Expr_rewrite___closed__2 = _init_l_Lean_Expr_rewrite___closed__2();
lean_mark_persistent(l_Lean_Expr_rewrite___closed__2);
l_Lean_Expr_rewrite___closed__3 = _init_l_Lean_Expr_rewrite___closed__3();
lean_mark_persistent(l_Lean_Expr_rewrite___closed__3);
l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1 = _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__1);
l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2 = _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__2);
l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3 = _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__3);
l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4 = _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__4);
l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5 = _init_l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___lambda__2___closed__5);
l_Lean_Expr_forallNot__of__notExists_go___closed__1 = _init_l_Lean_Expr_forallNot__of__notExists_go___closed__1();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___closed__1);
l_Lean_Expr_forallNot__of__notExists_go___closed__2 = _init_l_Lean_Expr_forallNot__of__notExists_go___closed__2();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists_go___closed__2);
l_Lean_Expr_forallNot__of__notExists___closed__1 = _init_l_Lean_Expr_forallNot__of__notExists___closed__1();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists___closed__1);
l_Lean_Expr_forallNot__of__notExists___closed__2 = _init_l_Lean_Expr_forallNot__of__notExists___closed__2();
lean_mark_persistent(l_Lean_Expr_forallNot__of__notExists___closed__2);
l_Lean_getFieldsToParents___closed__1 = _init_l_Lean_getFieldsToParents___closed__1();
lean_mark_persistent(l_Lean_getFieldsToParents___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
