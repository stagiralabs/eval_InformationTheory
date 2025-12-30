// Lean compiler output
// Module: Mathlib.Tactic.FastInstance
// Imports: Init Lean.Elab.SyntheticMVars Lean Mathlib.Init
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
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2;
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7;
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1;
uint64_t lean_uint64_lor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__6;
extern uint8_t l_instInhabitedBool;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_logException___at_Lean_Elab_Term_exceptionToSorry___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Elab_FastInstance_elabFastInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16;
lean_object* l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__8;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___aux__Lean__Util__SearchPath______elabRules__termCompile__time__search__path_x25__1___spec__1___rarg(lean_object*);
static uint64_t l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4;
LEAN_EXPORT lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5_(lean_object*);
lean_object* l_Lean_withTraceNode___at_Lean_Meta_whnfImp___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__7;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__9;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4(lean_object*, uint64_t, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__1;
extern lean_object* l_Lean_levelZero;
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__10;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___rarg(lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4;
lean_object* l_Lean_exceptEmoji___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Elab_FastInstance_fastInstance;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3;
static lean_object* l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7(lean_object*, uint64_t, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__5;
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_FVarId_getUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
extern lean_object* l_Lean_Core_instMonadCoreM;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedName;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10;
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6;
lean_object* l_List_mapTR_loop___at_Lean_compileDecl___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__4;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
static lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8;
static lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1;
static lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3;
static lean_object* l_Mathlib_Elab_FastInstance_fastInstance___closed__11;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Elab", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fast_instance", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("FastInstance", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18;
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3;
x_3 = 0;
x_4 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\nUse `set_option trace.Elab.fast_instance true` to analyze the error.\n\nTrace of fields visited: ", 97, 97);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_array_to_list(x_1);
x_13 = lean_box(0);
x_14 = l_List_mapTR_loop___at_Lean_compileDecl___spec__1(x_12, x_13);
x_15 = l_Lean_MessageData_ofList(x_14);
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_8);
x_18 = l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg(x_17, x_3, x_4, x_5, x_6, x_7);
return x_18;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_2, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_21; lean_object* x_22; 
x_11 = lean_array_uget(x_3, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_uset(x_3, x_2, x_12);
x_21 = l_Lean_Expr_fvarId_x21(x_11);
lean_inc(x_4);
lean_inc(x_21);
x_22 = l_Lean_FVarId_getBinderInfo(x_21, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unbox(x_23);
lean_dec(x_23);
x_26 = l_Lean_BinderInfo_isInstImplicit(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_11);
lean_inc(x_4);
x_27 = l_Lean_FVarId_getUserName(x_21, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_box(x_26);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
x_14 = x_31;
x_15 = x_29;
goto block_20;
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_36 = l_Lean_Meta_isProof(x_11, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
lean_inc(x_4);
x_40 = l_Lean_FVarId_getUserName(x_21, x_4, x_5, x_6, x_7, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = 1;
x_44 = lean_box(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_41);
x_14 = x_45;
x_15 = x_42;
goto block_20;
}
else
{
uint8_t x_46; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_40);
if (x_46 == 0)
{
return x_40;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_40, 0);
x_48 = lean_ctor_get(x_40, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_40);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_36, 1);
lean_inc(x_50);
lean_dec(x_36);
lean_inc(x_4);
x_51 = l_Lean_FVarId_getUserName(x_21, x_4, x_5, x_6, x_7, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
x_14 = x_56;
x_15 = x_53;
goto block_20;
}
else
{
uint8_t x_57; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_51);
if (x_57 == 0)
{
return x_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_51, 0);
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_51);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_61 = !lean_is_exclusive(x_36);
if (x_61 == 0)
{
return x_36;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_36, 0);
x_63 = lean_ctor_get(x_36, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_36);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_22);
if (x_65 == 0)
{
return x_22;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_22, 0);
x_67 = lean_ctor_get(x_22, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_22);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
block_20:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 1;
x_17 = lean_usize_add(x_2, x_16);
x_18 = lean_array_uset(x_13, x_2, x_14);
x_2 = x_17;
x_3 = x_18;
x_8 = x_15;
goto _start;
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_instInhabitedBool;
x_2 = l_Lean_instInhabitedName;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_lt(x_8, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
uint8_t x_19; lean_object* x_20; lean_object* x_54; uint8_t x_55; 
x_54 = lean_array_get_size(x_4);
x_55 = lean_nat_dec_lt(x_8, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1;
x_57 = l_outOfBounds___rarg(x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unbox(x_58);
lean_dec(x_58);
x_19 = x_60;
x_20 = x_59;
goto block_53;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = lean_array_fget(x_4, x_8);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unbox(x_62);
lean_dec(x_62);
x_19 = x_64;
x_20 = x_63;
goto block_53;
}
block_53:
{
if (x_19 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_20);
x_21 = lean_ctor_get(x_6, 2);
x_22 = lean_nat_add(x_8, x_21);
lean_dec(x_8);
x_8 = x_22;
x_9 = lean_box(0);
x_10 = lean_box(0);
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_inc(x_3);
x_24 = l_Lean_Name_append(x_3, x_20);
lean_inc(x_1);
x_25 = lean_array_push(x_1, x_24);
x_26 = lean_array_get_size(x_7);
x_27 = lean_nat_dec_lt(x_8, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l_Lean_instInhabitedExpr;
x_29 = l_outOfBounds___rarg(x_28);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_30 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_29, x_25, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_array_set(x_7, x_8, x_31);
x_34 = lean_ctor_get(x_6, 2);
x_35 = lean_nat_add(x_8, x_34);
lean_dec(x_8);
x_7 = x_33;
x_8 = x_35;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_32;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
return x_30;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_array_fget(x_7, x_8);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_42 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_41, x_25, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_array_set(x_7, x_8, x_43);
x_46 = lean_ctor_get(x_6, 2);
x_47 = lean_nat_add(x_8, x_46);
lean_dec(x_8);
x_7 = x_45;
x_8 = x_47;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_44;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_42);
if (x_49 == 0)
{
return x_42;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_42, 0);
x_51 = lean_ctor_get(x_42, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_42);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_nat_dec_lt(x_8, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
uint8_t x_19; lean_object* x_20; lean_object* x_54; uint8_t x_55; 
x_54 = lean_array_get_size(x_4);
x_55 = lean_nat_dec_lt(x_8, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1;
x_57 = l_outOfBounds___rarg(x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unbox(x_58);
lean_dec(x_58);
x_19 = x_60;
x_20 = x_59;
goto block_53;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = lean_array_fget(x_4, x_8);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unbox(x_62);
lean_dec(x_62);
x_19 = x_64;
x_20 = x_63;
goto block_53;
}
block_53:
{
if (x_19 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_20);
x_21 = lean_ctor_get(x_6, 2);
x_22 = lean_nat_add(x_8, x_21);
lean_dec(x_8);
x_8 = x_22;
x_9 = lean_box(0);
x_10 = lean_box(0);
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_inc(x_3);
x_24 = l_Lean_Name_append(x_3, x_20);
lean_inc(x_1);
x_25 = lean_array_push(x_1, x_24);
x_26 = lean_array_get_size(x_7);
x_27 = lean_nat_dec_lt(x_8, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l_Lean_instInhabitedExpr;
x_29 = l_outOfBounds___rarg(x_28);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_30 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_29, x_25, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_array_set(x_7, x_8, x_31);
x_34 = lean_ctor_get(x_6, 2);
x_35 = lean_nat_add(x_8, x_34);
lean_dec(x_8);
x_7 = x_33;
x_8 = x_35;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_32;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
return x_30;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_array_fget(x_7, x_8);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_42 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_41, x_25, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_array_set(x_7, x_8, x_43);
x_46 = lean_ctor_get(x_6, 2);
x_47 = lean_nat_add(x_8, x_46);
lean_dec(x_8);
x_7 = x_45;
x_8 = x_47;
x_9 = lean_box(0);
x_10 = lean_box(0);
x_15 = x_44;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_42);
if (x_49 == 0)
{
return x_42;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_42, 0);
x_51 = lean_ctor_get(x_42, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_42);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" type: ", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = l_Lean_exceptEmoji___rarg(x_2);
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_MessageData_ofExpr(x_1);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_array_size(x_1);
x_9 = 0;
x_10 = l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1(x_8, x_9, x_1, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_array_get_size(x_8);
x_17 = lean_unsigned_to_nat(1u);
lean_inc(x_15);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2(x_2, x_3, x_4, x_5, x_18, x_18, x_8, x_15, lean_box(0), lean_box(0), x_10, x_11, x_12, x_13, x_14);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_mkAppN(x_6, x_20);
lean_dec(x_20);
x_23 = 0;
x_24 = 1;
x_25 = 1;
x_26 = l_Lean_Meta_mkLambdaFVars(x_7, x_22, x_23, x_24, x_23, x_25, x_10, x_11, x_12, x_13, x_21);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static uint64_t _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 3;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Provided instance does not reduce to a constructor application", 62, 62);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\nThis instance is not a structure and not canonical. Use a separate 'instance' command to define it.", 101, 101);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nReduces to an application of ", 30, 30);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Incorrect number of arguments for constructor application", 57, 57);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4(lean_object* x_1, uint64_t x_2, lean_object* x_3, lean_object* x_4, uint64_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_inc(x_1);
x_14 = l_Lean_mkAppN(x_1, x_7);
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_9, sizeof(void*)*7);
x_17 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 8);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 4);
lean_inc(x_21);
x_22 = lean_ctor_get(x_9, 5);
lean_inc(x_22);
x_23 = lean_ctor_get(x_9, 6);
lean_inc(x_23);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint64_t x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; lean_object* x_49; lean_object* x_50; 
x_25 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_26 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_27 = lean_ctor_get_uint8(x_15, 0);
x_28 = lean_ctor_get_uint8(x_15, 1);
x_29 = lean_ctor_get_uint8(x_15, 2);
x_30 = lean_ctor_get_uint8(x_15, 3);
x_31 = lean_ctor_get_uint8(x_15, 4);
x_32 = lean_ctor_get_uint8(x_15, 5);
x_33 = lean_ctor_get_uint8(x_15, 6);
x_34 = lean_ctor_get_uint8(x_15, 7);
x_35 = lean_ctor_get_uint8(x_15, 8);
x_36 = lean_ctor_get_uint8(x_15, 10);
x_37 = lean_ctor_get_uint8(x_15, 11);
x_38 = lean_ctor_get_uint8(x_15, 12);
x_39 = lean_ctor_get_uint8(x_15, 13);
x_40 = lean_ctor_get_uint8(x_15, 14);
x_41 = lean_ctor_get_uint8(x_15, 15);
x_42 = lean_ctor_get_uint8(x_15, 16);
x_43 = lean_ctor_get_uint8(x_15, 17);
x_44 = 3;
lean_ctor_set_uint8(x_15, 9, x_44);
x_45 = lean_uint64_shift_right(x_16, x_2);
x_46 = lean_uint64_shift_left(x_45, x_2);
x_47 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_48 = lean_uint64_lor(x_46, x_47);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_49 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_49, 0, x_15);
lean_ctor_set(x_49, 1, x_18);
lean_ctor_set(x_49, 2, x_19);
lean_ctor_set(x_49, 3, x_20);
lean_ctor_set(x_49, 4, x_21);
lean_ctor_set(x_49, 5, x_22);
lean_ctor_set(x_49, 6, x_23);
lean_ctor_set_uint64(x_49, sizeof(void*)*7, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 10, x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_50 = lean_whnf(x_14, x_49, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Expr_getAppFn(x_51);
if (lean_obj_tag(x_53) == 4)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_st_ref_get(x_12, x_52);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_54);
x_60 = l_Lean_Environment_find_x3f(x_59, x_54);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_61 = l_Lean_indentExpr(x_1);
x_62 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_61);
lean_ctor_set(x_55, 0, x_62);
x_63 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_MessageData_ofName(x_54);
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_st_ref_get(x_12, x_58);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_isStructure(x_73, x_3);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
lean_ctor_set_tag(x_69, 7);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 0, x_75);
x_76 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_69);
lean_ctor_set(x_77, 1, x_76);
x_78 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_77, x_9, x_10, x_11, x_12, x_72);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_78;
}
else
{
lean_object* x_79; 
lean_free_object(x_69);
x_79 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_68, x_9, x_10, x_11, x_12, x_72);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_69, 0);
x_81 = lean_ctor_get(x_69, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_69);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_isStructure(x_82, x_3);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_68);
x_86 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_87, x_9, x_10, x_11, x_12, x_81);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_88;
}
else
{
lean_object* x_89; 
x_89 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_68, x_9, x_10, x_11, x_12, x_81);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_89;
}
}
}
else
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_60, 0);
lean_inc(x_90);
lean_dec(x_60);
if (lean_obj_tag(x_90) == 6)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; uint64_t x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; 
lean_dec(x_54);
lean_dec(x_1);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_unsigned_to_nat(0u);
x_93 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_51, x_92);
x_94 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_93);
x_95 = lean_mk_array(x_93, x_94);
x_96 = lean_unsigned_to_nat(1u);
x_97 = lean_nat_sub(x_93, x_96);
lean_dec(x_93);
lean_inc(x_51);
x_98 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_51, x_95, x_97);
x_99 = lean_ctor_get(x_91, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_99, 2);
lean_inc(x_100);
lean_dec(x_99);
x_101 = 1;
x_102 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_102, 0, x_27);
lean_ctor_set_uint8(x_102, 1, x_28);
lean_ctor_set_uint8(x_102, 2, x_29);
lean_ctor_set_uint8(x_102, 3, x_30);
lean_ctor_set_uint8(x_102, 4, x_31);
lean_ctor_set_uint8(x_102, 5, x_32);
lean_ctor_set_uint8(x_102, 6, x_33);
lean_ctor_set_uint8(x_102, 7, x_34);
lean_ctor_set_uint8(x_102, 8, x_35);
lean_ctor_set_uint8(x_102, 9, x_101);
lean_ctor_set_uint8(x_102, 10, x_36);
lean_ctor_set_uint8(x_102, 11, x_37);
lean_ctor_set_uint8(x_102, 12, x_38);
lean_ctor_set_uint8(x_102, 13, x_39);
lean_ctor_set_uint8(x_102, 14, x_40);
lean_ctor_set_uint8(x_102, 15, x_41);
lean_ctor_set_uint8(x_102, 16, x_42);
lean_ctor_set_uint8(x_102, 17, x_43);
x_103 = lean_uint64_lor(x_46, x_5);
x_104 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_18);
lean_ctor_set(x_104, 2, x_19);
lean_ctor_set(x_104, 3, x_20);
lean_ctor_set(x_104, 4, x_21);
lean_ctor_set(x_104, 5, x_22);
lean_ctor_set(x_104, 6, x_23);
lean_ctor_set_uint64(x_104, sizeof(void*)*7, x_103);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 10, x_26);
x_105 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_106 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_107 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_100, x_105, x_106, x_104, x_10, x_11, x_12, x_58);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_array_get_size(x_98);
x_111 = lean_array_get_size(x_108);
x_112 = lean_nat_dec_eq(x_110, x_111);
lean_dec(x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
lean_dec(x_108);
lean_dec(x_98);
lean_dec(x_91);
lean_dec(x_53);
lean_dec(x_4);
lean_dec(x_3);
x_113 = l_Lean_indentExpr(x_51);
x_114 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_113);
lean_ctor_set(x_55, 0, x_114);
x_115 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_55);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_116, x_9, x_10, x_11, x_12, x_109);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
return x_117;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_117);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_free_object(x_55);
lean_dec(x_51);
x_122 = lean_box(0);
x_123 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(x_91, x_4, x_6, x_3, x_108, x_53, x_7, x_98, x_122, x_9, x_10, x_11, x_12, x_109);
lean_dec(x_108);
return x_123;
}
}
else
{
uint8_t x_124; 
lean_dec(x_98);
lean_dec(x_91);
lean_free_object(x_55);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_124 = !lean_is_exclusive(x_107);
if (x_124 == 0)
{
return x_107;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_107, 0);
x_126 = lean_ctor_get(x_107, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_107);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_dec(x_90);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_128 = l_Lean_indentExpr(x_1);
x_129 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_128);
lean_ctor_set(x_55, 0, x_129);
x_130 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_131 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_131, 0, x_55);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_MessageData_ofName(x_54);
x_133 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_135 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_st_ref_get(x_12, x_58);
x_137 = !lean_is_exclusive(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_136, 0);
x_139 = lean_ctor_get(x_136, 1);
x_140 = lean_ctor_get(x_138, 0);
lean_inc(x_140);
lean_dec(x_138);
x_141 = l_Lean_isStructure(x_140, x_3);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
lean_ctor_set_tag(x_136, 7);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 0, x_142);
x_143 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_144 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_144, 0, x_136);
lean_ctor_set(x_144, 1, x_143);
x_145 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_144, x_9, x_10, x_11, x_12, x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_145;
}
else
{
lean_object* x_146; 
lean_free_object(x_136);
x_146 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_135, x_9, x_10, x_11, x_12, x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_147 = lean_ctor_get(x_136, 0);
x_148 = lean_ctor_get(x_136, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_136);
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
lean_dec(x_147);
x_150 = l_Lean_isStructure(x_149, x_3);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_151 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_152 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_135);
x_153 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_154 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_154, x_9, x_10, x_11, x_12, x_148);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_155;
}
else
{
lean_object* x_156; 
x_156 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_135, x_9, x_10, x_11, x_12, x_148);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_156;
}
}
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_55, 0);
x_158 = lean_ctor_get(x_55, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_55);
x_159 = lean_ctor_get(x_157, 0);
lean_inc(x_159);
lean_dec(x_157);
lean_inc(x_54);
x_160 = l_Lean_Environment_find_x3f(x_159, x_54);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_161 = l_Lean_indentExpr(x_1);
x_162 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_163 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_165 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_MessageData_ofName(x_54);
x_167 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_169 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_st_ref_get(x_12, x_158);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
lean_dec(x_171);
x_175 = l_Lean_isStructure(x_174, x_3);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_173)) {
 x_177 = lean_alloc_ctor(7, 2, 0);
} else {
 x_177 = x_173;
 lean_ctor_set_tag(x_177, 7);
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
x_178 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_179 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_179, x_9, x_10, x_11, x_12, x_172);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_180;
}
else
{
lean_object* x_181; 
lean_dec(x_173);
x_181 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_169, x_9, x_10, x_11, x_12, x_172);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_181;
}
}
else
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_160, 0);
lean_inc(x_182);
lean_dec(x_160);
if (lean_obj_tag(x_182) == 6)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; uint64_t x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; 
lean_dec(x_54);
lean_dec(x_1);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
lean_dec(x_182);
x_184 = lean_unsigned_to_nat(0u);
x_185 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_51, x_184);
x_186 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_185);
x_187 = lean_mk_array(x_185, x_186);
x_188 = lean_unsigned_to_nat(1u);
x_189 = lean_nat_sub(x_185, x_188);
lean_dec(x_185);
lean_inc(x_51);
x_190 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_51, x_187, x_189);
x_191 = lean_ctor_get(x_183, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_191, 2);
lean_inc(x_192);
lean_dec(x_191);
x_193 = 1;
x_194 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_194, 0, x_27);
lean_ctor_set_uint8(x_194, 1, x_28);
lean_ctor_set_uint8(x_194, 2, x_29);
lean_ctor_set_uint8(x_194, 3, x_30);
lean_ctor_set_uint8(x_194, 4, x_31);
lean_ctor_set_uint8(x_194, 5, x_32);
lean_ctor_set_uint8(x_194, 6, x_33);
lean_ctor_set_uint8(x_194, 7, x_34);
lean_ctor_set_uint8(x_194, 8, x_35);
lean_ctor_set_uint8(x_194, 9, x_193);
lean_ctor_set_uint8(x_194, 10, x_36);
lean_ctor_set_uint8(x_194, 11, x_37);
lean_ctor_set_uint8(x_194, 12, x_38);
lean_ctor_set_uint8(x_194, 13, x_39);
lean_ctor_set_uint8(x_194, 14, x_40);
lean_ctor_set_uint8(x_194, 15, x_41);
lean_ctor_set_uint8(x_194, 16, x_42);
lean_ctor_set_uint8(x_194, 17, x_43);
x_195 = lean_uint64_lor(x_46, x_5);
x_196 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_18);
lean_ctor_set(x_196, 2, x_19);
lean_ctor_set(x_196, 3, x_20);
lean_ctor_set(x_196, 4, x_21);
lean_ctor_set(x_196, 5, x_22);
lean_ctor_set(x_196, 6, x_23);
lean_ctor_set_uint64(x_196, sizeof(void*)*7, x_195);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 10, x_26);
x_197 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_198 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_199 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_192, x_197, x_198, x_196, x_10, x_11, x_12, x_158);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_202 = lean_array_get_size(x_190);
x_203 = lean_array_get_size(x_200);
x_204 = lean_nat_dec_eq(x_202, x_203);
lean_dec(x_203);
lean_dec(x_202);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_200);
lean_dec(x_190);
lean_dec(x_183);
lean_dec(x_53);
lean_dec(x_4);
lean_dec(x_3);
x_205 = l_Lean_indentExpr(x_51);
x_206 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
x_207 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
x_208 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_209 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
x_210 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_209, x_9, x_10, x_11, x_12, x_201);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_213 = x_210;
} else {
 lean_dec_ref(x_210);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_51);
x_215 = lean_box(0);
x_216 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(x_183, x_4, x_6, x_3, x_200, x_53, x_7, x_190, x_215, x_9, x_10, x_11, x_12, x_201);
lean_dec(x_200);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_190);
lean_dec(x_183);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_217 = lean_ctor_get(x_199, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_199, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_219 = x_199;
} else {
 lean_dec_ref(x_199);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
lean_dec(x_182);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_221 = l_Lean_indentExpr(x_1);
x_222 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_223 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_221);
x_224 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_225 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
x_226 = l_Lean_MessageData_ofName(x_54);
x_227 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
x_228 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_229 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_st_ref_get(x_12, x_158);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_233 = x_230;
} else {
 lean_dec_ref(x_230);
 x_233 = lean_box(0);
}
x_234 = lean_ctor_get(x_231, 0);
lean_inc(x_234);
lean_dec(x_231);
x_235 = l_Lean_isStructure(x_234, x_3);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_236 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_233)) {
 x_237 = lean_alloc_ctor(7, 2, 0);
} else {
 x_237 = x_233;
 lean_ctor_set_tag(x_237, 7);
}
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_229);
x_238 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_239 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
x_240 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_239, x_9, x_10, x_11, x_12, x_232);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_240;
}
else
{
lean_object* x_241; 
lean_dec(x_233);
x_241 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_229, x_9, x_10, x_11, x_12, x_232);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_241;
}
}
}
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_242 = l_Lean_indentExpr(x_1);
x_243 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_244 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_242);
x_245 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_246 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_st_ref_get(x_12, x_52);
x_248 = !lean_is_exclusive(x_247);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_249 = lean_ctor_get(x_247, 0);
x_250 = lean_ctor_get(x_247, 1);
x_251 = lean_ctor_get(x_249, 0);
lean_inc(x_251);
lean_dec(x_249);
x_252 = l_Lean_isStructure(x_251, x_3);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_ctor_set_tag(x_247, 7);
lean_ctor_set(x_247, 1, x_246);
lean_ctor_set(x_247, 0, x_245);
x_253 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_254 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_254, 0, x_247);
lean_ctor_set(x_254, 1, x_253);
x_255 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_254, x_9, x_10, x_11, x_12, x_250);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_255;
}
else
{
lean_object* x_256; 
lean_free_object(x_247);
x_256 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_246, x_9, x_10, x_11, x_12, x_250);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; uint8_t x_260; 
x_257 = lean_ctor_get(x_247, 0);
x_258 = lean_ctor_get(x_247, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_247);
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
lean_dec(x_257);
x_260 = l_Lean_isStructure(x_259, x_3);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_261 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_261, 0, x_245);
lean_ctor_set(x_261, 1, x_246);
x_262 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_263 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
x_264 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_263, x_9, x_10, x_11, x_12, x_258);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_264;
}
else
{
lean_object* x_265; 
x_265 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_246, x_9, x_10, x_11, x_12, x_258);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_265;
}
}
}
}
else
{
uint8_t x_266; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_266 = !lean_is_exclusive(x_50);
if (x_266 == 0)
{
return x_50;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_50, 0);
x_268 = lean_ctor_get(x_50, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_50);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
else
{
uint8_t x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; uint8_t x_281; uint8_t x_282; uint8_t x_283; uint8_t x_284; uint8_t x_285; uint8_t x_286; uint8_t x_287; uint8_t x_288; uint8_t x_289; lean_object* x_290; uint64_t x_291; uint64_t x_292; uint64_t x_293; uint64_t x_294; lean_object* x_295; lean_object* x_296; 
x_270 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_271 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_272 = lean_ctor_get_uint8(x_15, 0);
x_273 = lean_ctor_get_uint8(x_15, 1);
x_274 = lean_ctor_get_uint8(x_15, 2);
x_275 = lean_ctor_get_uint8(x_15, 3);
x_276 = lean_ctor_get_uint8(x_15, 4);
x_277 = lean_ctor_get_uint8(x_15, 5);
x_278 = lean_ctor_get_uint8(x_15, 6);
x_279 = lean_ctor_get_uint8(x_15, 7);
x_280 = lean_ctor_get_uint8(x_15, 8);
x_281 = lean_ctor_get_uint8(x_15, 10);
x_282 = lean_ctor_get_uint8(x_15, 11);
x_283 = lean_ctor_get_uint8(x_15, 12);
x_284 = lean_ctor_get_uint8(x_15, 13);
x_285 = lean_ctor_get_uint8(x_15, 14);
x_286 = lean_ctor_get_uint8(x_15, 15);
x_287 = lean_ctor_get_uint8(x_15, 16);
x_288 = lean_ctor_get_uint8(x_15, 17);
lean_dec(x_15);
x_289 = 3;
x_290 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_290, 0, x_272);
lean_ctor_set_uint8(x_290, 1, x_273);
lean_ctor_set_uint8(x_290, 2, x_274);
lean_ctor_set_uint8(x_290, 3, x_275);
lean_ctor_set_uint8(x_290, 4, x_276);
lean_ctor_set_uint8(x_290, 5, x_277);
lean_ctor_set_uint8(x_290, 6, x_278);
lean_ctor_set_uint8(x_290, 7, x_279);
lean_ctor_set_uint8(x_290, 8, x_280);
lean_ctor_set_uint8(x_290, 9, x_289);
lean_ctor_set_uint8(x_290, 10, x_281);
lean_ctor_set_uint8(x_290, 11, x_282);
lean_ctor_set_uint8(x_290, 12, x_283);
lean_ctor_set_uint8(x_290, 13, x_284);
lean_ctor_set_uint8(x_290, 14, x_285);
lean_ctor_set_uint8(x_290, 15, x_286);
lean_ctor_set_uint8(x_290, 16, x_287);
lean_ctor_set_uint8(x_290, 17, x_288);
x_291 = lean_uint64_shift_right(x_16, x_2);
x_292 = lean_uint64_shift_left(x_291, x_2);
x_293 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_294 = lean_uint64_lor(x_292, x_293);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_295 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_295, 0, x_290);
lean_ctor_set(x_295, 1, x_18);
lean_ctor_set(x_295, 2, x_19);
lean_ctor_set(x_295, 3, x_20);
lean_ctor_set(x_295, 4, x_21);
lean_ctor_set(x_295, 5, x_22);
lean_ctor_set(x_295, 6, x_23);
lean_ctor_set_uint64(x_295, sizeof(void*)*7, x_294);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 9, x_270);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 10, x_271);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_296 = lean_whnf(x_14, x_295, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = l_Lean_Expr_getAppFn(x_297);
if (lean_obj_tag(x_299) == 4)
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_st_ref_get(x_12, x_298);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 x_304 = x_301;
} else {
 lean_dec_ref(x_301);
 x_304 = lean_box(0);
}
x_305 = lean_ctor_get(x_302, 0);
lean_inc(x_305);
lean_dec(x_302);
lean_inc(x_300);
x_306 = l_Lean_Environment_find_x3f(x_305, x_300);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; 
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_307 = l_Lean_indentExpr(x_1);
x_308 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
if (lean_is_scalar(x_304)) {
 x_309 = lean_alloc_ctor(7, 2, 0);
} else {
 x_309 = x_304;
 lean_ctor_set_tag(x_309, 7);
}
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_307);
x_310 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_311 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_311, 0, x_309);
lean_ctor_set(x_311, 1, x_310);
x_312 = l_Lean_MessageData_ofName(x_300);
x_313 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
x_314 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_315 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_st_ref_get(x_12, x_303);
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_319 = x_316;
} else {
 lean_dec_ref(x_316);
 x_319 = lean_box(0);
}
x_320 = lean_ctor_get(x_317, 0);
lean_inc(x_320);
lean_dec(x_317);
x_321 = l_Lean_isStructure(x_320, x_3);
if (x_321 == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_322 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_319)) {
 x_323 = lean_alloc_ctor(7, 2, 0);
} else {
 x_323 = x_319;
 lean_ctor_set_tag(x_323, 7);
}
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_315);
x_324 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_325 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
x_326 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_325, x_9, x_10, x_11, x_12, x_318);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_326;
}
else
{
lean_object* x_327; 
lean_dec(x_319);
x_327 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_315, x_9, x_10, x_11, x_12, x_318);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_327;
}
}
else
{
lean_object* x_328; 
x_328 = lean_ctor_get(x_306, 0);
lean_inc(x_328);
lean_dec(x_306);
if (lean_obj_tag(x_328) == 6)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; uint64_t x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; 
lean_dec(x_300);
lean_dec(x_1);
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
lean_dec(x_328);
x_330 = lean_unsigned_to_nat(0u);
x_331 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_297, x_330);
x_332 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_331);
x_333 = lean_mk_array(x_331, x_332);
x_334 = lean_unsigned_to_nat(1u);
x_335 = lean_nat_sub(x_331, x_334);
lean_dec(x_331);
lean_inc(x_297);
x_336 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_297, x_333, x_335);
x_337 = lean_ctor_get(x_329, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_337, 2);
lean_inc(x_338);
lean_dec(x_337);
x_339 = 1;
x_340 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_340, 0, x_272);
lean_ctor_set_uint8(x_340, 1, x_273);
lean_ctor_set_uint8(x_340, 2, x_274);
lean_ctor_set_uint8(x_340, 3, x_275);
lean_ctor_set_uint8(x_340, 4, x_276);
lean_ctor_set_uint8(x_340, 5, x_277);
lean_ctor_set_uint8(x_340, 6, x_278);
lean_ctor_set_uint8(x_340, 7, x_279);
lean_ctor_set_uint8(x_340, 8, x_280);
lean_ctor_set_uint8(x_340, 9, x_339);
lean_ctor_set_uint8(x_340, 10, x_281);
lean_ctor_set_uint8(x_340, 11, x_282);
lean_ctor_set_uint8(x_340, 12, x_283);
lean_ctor_set_uint8(x_340, 13, x_284);
lean_ctor_set_uint8(x_340, 14, x_285);
lean_ctor_set_uint8(x_340, 15, x_286);
lean_ctor_set_uint8(x_340, 16, x_287);
lean_ctor_set_uint8(x_340, 17, x_288);
x_341 = lean_uint64_lor(x_292, x_5);
x_342 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_342, 0, x_340);
lean_ctor_set(x_342, 1, x_18);
lean_ctor_set(x_342, 2, x_19);
lean_ctor_set(x_342, 3, x_20);
lean_ctor_set(x_342, 4, x_21);
lean_ctor_set(x_342, 5, x_22);
lean_ctor_set(x_342, 6, x_23);
lean_ctor_set_uint64(x_342, sizeof(void*)*7, x_341);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 9, x_270);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 10, x_271);
x_343 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_344 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_345 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_338, x_343, x_344, x_342, x_10, x_11, x_12, x_303);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
x_348 = lean_array_get_size(x_336);
x_349 = lean_array_get_size(x_346);
x_350 = lean_nat_dec_eq(x_348, x_349);
lean_dec(x_349);
lean_dec(x_348);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_346);
lean_dec(x_336);
lean_dec(x_329);
lean_dec(x_299);
lean_dec(x_4);
lean_dec(x_3);
x_351 = l_Lean_indentExpr(x_297);
x_352 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
if (lean_is_scalar(x_304)) {
 x_353 = lean_alloc_ctor(7, 2, 0);
} else {
 x_353 = x_304;
 lean_ctor_set_tag(x_353, 7);
}
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_351);
x_354 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_355 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_355, 0, x_353);
lean_ctor_set(x_355, 1, x_354);
x_356 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_355, x_9, x_10, x_11, x_12, x_347);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
if (lean_is_scalar(x_359)) {
 x_360 = lean_alloc_ctor(1, 2, 0);
} else {
 x_360 = x_359;
}
lean_ctor_set(x_360, 0, x_357);
lean_ctor_set(x_360, 1, x_358);
return x_360;
}
else
{
lean_object* x_361; lean_object* x_362; 
lean_dec(x_304);
lean_dec(x_297);
x_361 = lean_box(0);
x_362 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(x_329, x_4, x_6, x_3, x_346, x_299, x_7, x_336, x_361, x_9, x_10, x_11, x_12, x_347);
lean_dec(x_346);
return x_362;
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_336);
lean_dec(x_329);
lean_dec(x_304);
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_363 = lean_ctor_get(x_345, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_345, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_365 = x_345;
} else {
 lean_dec_ref(x_345);
 x_365 = lean_box(0);
}
if (lean_is_scalar(x_365)) {
 x_366 = lean_alloc_ctor(1, 2, 0);
} else {
 x_366 = x_365;
}
lean_ctor_set(x_366, 0, x_363);
lean_ctor_set(x_366, 1, x_364);
return x_366;
}
}
else
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; uint8_t x_381; 
lean_dec(x_328);
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_367 = l_Lean_indentExpr(x_1);
x_368 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
if (lean_is_scalar(x_304)) {
 x_369 = lean_alloc_ctor(7, 2, 0);
} else {
 x_369 = x_304;
 lean_ctor_set_tag(x_369, 7);
}
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_367);
x_370 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_371 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
x_372 = l_Lean_MessageData_ofName(x_300);
x_373 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_372);
x_374 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_375 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_375, 0, x_373);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_st_ref_get(x_12, x_303);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
if (lean_is_exclusive(x_376)) {
 lean_ctor_release(x_376, 0);
 lean_ctor_release(x_376, 1);
 x_379 = x_376;
} else {
 lean_dec_ref(x_376);
 x_379 = lean_box(0);
}
x_380 = lean_ctor_get(x_377, 0);
lean_inc(x_380);
lean_dec(x_377);
x_381 = l_Lean_isStructure(x_380, x_3);
if (x_381 == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_382 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_379)) {
 x_383 = lean_alloc_ctor(7, 2, 0);
} else {
 x_383 = x_379;
 lean_ctor_set_tag(x_383, 7);
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_375);
x_384 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_385 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
x_386 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_385, x_9, x_10, x_11, x_12, x_378);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_386;
}
else
{
lean_object* x_387; 
lean_dec(x_379);
x_387 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_375, x_9, x_10, x_11, x_12, x_378);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_387;
}
}
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; 
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_388 = l_Lean_indentExpr(x_1);
x_389 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_390 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_388);
x_391 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_392 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_392, 0, x_390);
lean_ctor_set(x_392, 1, x_391);
x_393 = lean_st_ref_get(x_12, x_298);
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_396 = x_393;
} else {
 lean_dec_ref(x_393);
 x_396 = lean_box(0);
}
x_397 = lean_ctor_get(x_394, 0);
lean_inc(x_397);
lean_dec(x_394);
x_398 = l_Lean_isStructure(x_397, x_3);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
if (lean_is_scalar(x_396)) {
 x_399 = lean_alloc_ctor(7, 2, 0);
} else {
 x_399 = x_396;
 lean_ctor_set_tag(x_399, 7);
}
lean_ctor_set(x_399, 0, x_391);
lean_ctor_set(x_399, 1, x_392);
x_400 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_401 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_401, 0, x_399);
lean_ctor_set(x_401, 1, x_400);
x_402 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_401, x_9, x_10, x_11, x_12, x_395);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_402;
}
else
{
lean_object* x_403; 
lean_dec(x_396);
x_403 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_392, x_9, x_10, x_11, x_12, x_395);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_403;
}
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_404 = lean_ctor_get(x_296, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_296, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_406 = x_296;
} else {
 lean_dec_ref(x_296);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_406;
}
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_405);
return x_407;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_array_get_size(x_8);
x_17 = lean_unsigned_to_nat(1u);
lean_inc(x_15);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3(x_2, x_3, x_4, x_5, x_18, x_18, x_8, x_15, lean_box(0), lean_box(0), x_10, x_11, x_12, x_13, x_14);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_mkAppN(x_6, x_20);
lean_dec(x_20);
x_23 = 0;
x_24 = 1;
x_25 = 1;
x_26 = l_Lean_Meta_mkLambdaFVars(x_7, x_22, x_23, x_24, x_23, x_25, x_10, x_11, x_12, x_13, x_21);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7(lean_object* x_1, uint64_t x_2, lean_object* x_3, lean_object* x_4, uint64_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_inc(x_1);
x_14 = l_Lean_mkAppN(x_1, x_7);
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_9, sizeof(void*)*7);
x_17 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 8);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 4);
lean_inc(x_21);
x_22 = lean_ctor_get(x_9, 5);
lean_inc(x_22);
x_23 = lean_ctor_get(x_9, 6);
lean_inc(x_23);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint64_t x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; lean_object* x_49; lean_object* x_50; 
x_25 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_26 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_27 = lean_ctor_get_uint8(x_15, 0);
x_28 = lean_ctor_get_uint8(x_15, 1);
x_29 = lean_ctor_get_uint8(x_15, 2);
x_30 = lean_ctor_get_uint8(x_15, 3);
x_31 = lean_ctor_get_uint8(x_15, 4);
x_32 = lean_ctor_get_uint8(x_15, 5);
x_33 = lean_ctor_get_uint8(x_15, 6);
x_34 = lean_ctor_get_uint8(x_15, 7);
x_35 = lean_ctor_get_uint8(x_15, 8);
x_36 = lean_ctor_get_uint8(x_15, 10);
x_37 = lean_ctor_get_uint8(x_15, 11);
x_38 = lean_ctor_get_uint8(x_15, 12);
x_39 = lean_ctor_get_uint8(x_15, 13);
x_40 = lean_ctor_get_uint8(x_15, 14);
x_41 = lean_ctor_get_uint8(x_15, 15);
x_42 = lean_ctor_get_uint8(x_15, 16);
x_43 = lean_ctor_get_uint8(x_15, 17);
x_44 = 3;
lean_ctor_set_uint8(x_15, 9, x_44);
x_45 = lean_uint64_shift_right(x_16, x_2);
x_46 = lean_uint64_shift_left(x_45, x_2);
x_47 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_48 = lean_uint64_lor(x_46, x_47);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_49 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_49, 0, x_15);
lean_ctor_set(x_49, 1, x_18);
lean_ctor_set(x_49, 2, x_19);
lean_ctor_set(x_49, 3, x_20);
lean_ctor_set(x_49, 4, x_21);
lean_ctor_set(x_49, 5, x_22);
lean_ctor_set(x_49, 6, x_23);
lean_ctor_set_uint64(x_49, sizeof(void*)*7, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 10, x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_50 = lean_whnf(x_14, x_49, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Expr_getAppFn(x_51);
if (lean_obj_tag(x_53) == 4)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_st_ref_get(x_12, x_52);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_54);
x_60 = l_Lean_Environment_find_x3f(x_59, x_54);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_61 = l_Lean_indentExpr(x_1);
x_62 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_61);
lean_ctor_set(x_55, 0, x_62);
x_63 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_MessageData_ofName(x_54);
x_66 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_68 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_st_ref_get(x_12, x_58);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_isStructure(x_73, x_3);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
lean_ctor_set_tag(x_69, 7);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 0, x_75);
x_76 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_69);
lean_ctor_set(x_77, 1, x_76);
x_78 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_77, x_9, x_10, x_11, x_12, x_72);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_78;
}
else
{
lean_object* x_79; 
lean_free_object(x_69);
x_79 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_68, x_9, x_10, x_11, x_12, x_72);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_69, 0);
x_81 = lean_ctor_get(x_69, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_69);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_isStructure(x_82, x_3);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_68);
x_86 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_87 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_87, x_9, x_10, x_11, x_12, x_81);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_88;
}
else
{
lean_object* x_89; 
x_89 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_68, x_9, x_10, x_11, x_12, x_81);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_89;
}
}
}
else
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_60, 0);
lean_inc(x_90);
lean_dec(x_60);
if (lean_obj_tag(x_90) == 6)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; lean_object* x_102; uint64_t x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; 
lean_dec(x_54);
lean_dec(x_1);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_unsigned_to_nat(0u);
x_93 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_51, x_92);
x_94 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_93);
x_95 = lean_mk_array(x_93, x_94);
x_96 = lean_unsigned_to_nat(1u);
x_97 = lean_nat_sub(x_93, x_96);
lean_dec(x_93);
lean_inc(x_51);
x_98 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_51, x_95, x_97);
x_99 = lean_ctor_get(x_91, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_99, 2);
lean_inc(x_100);
lean_dec(x_99);
x_101 = 1;
x_102 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_102, 0, x_27);
lean_ctor_set_uint8(x_102, 1, x_28);
lean_ctor_set_uint8(x_102, 2, x_29);
lean_ctor_set_uint8(x_102, 3, x_30);
lean_ctor_set_uint8(x_102, 4, x_31);
lean_ctor_set_uint8(x_102, 5, x_32);
lean_ctor_set_uint8(x_102, 6, x_33);
lean_ctor_set_uint8(x_102, 7, x_34);
lean_ctor_set_uint8(x_102, 8, x_35);
lean_ctor_set_uint8(x_102, 9, x_101);
lean_ctor_set_uint8(x_102, 10, x_36);
lean_ctor_set_uint8(x_102, 11, x_37);
lean_ctor_set_uint8(x_102, 12, x_38);
lean_ctor_set_uint8(x_102, 13, x_39);
lean_ctor_set_uint8(x_102, 14, x_40);
lean_ctor_set_uint8(x_102, 15, x_41);
lean_ctor_set_uint8(x_102, 16, x_42);
lean_ctor_set_uint8(x_102, 17, x_43);
x_103 = lean_uint64_lor(x_46, x_5);
x_104 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_18);
lean_ctor_set(x_104, 2, x_19);
lean_ctor_set(x_104, 3, x_20);
lean_ctor_set(x_104, 4, x_21);
lean_ctor_set(x_104, 5, x_22);
lean_ctor_set(x_104, 6, x_23);
lean_ctor_set_uint64(x_104, sizeof(void*)*7, x_103);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_104, sizeof(void*)*7 + 10, x_26);
x_105 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_106 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_107 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_100, x_105, x_106, x_104, x_10, x_11, x_12, x_58);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_array_get_size(x_98);
x_111 = lean_array_get_size(x_108);
x_112 = lean_nat_dec_eq(x_110, x_111);
lean_dec(x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
lean_dec(x_108);
lean_dec(x_98);
lean_dec(x_91);
lean_dec(x_53);
lean_dec(x_4);
lean_dec(x_3);
x_113 = l_Lean_indentExpr(x_51);
x_114 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_113);
lean_ctor_set(x_55, 0, x_114);
x_115 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_116 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_116, 0, x_55);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_116, x_9, x_10, x_11, x_12, x_109);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
return x_117;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_117);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_free_object(x_55);
lean_dec(x_51);
x_122 = lean_box(0);
x_123 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(x_91, x_4, x_6, x_3, x_108, x_53, x_7, x_98, x_122, x_9, x_10, x_11, x_12, x_109);
lean_dec(x_108);
return x_123;
}
}
else
{
uint8_t x_124; 
lean_dec(x_98);
lean_dec(x_91);
lean_free_object(x_55);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_124 = !lean_is_exclusive(x_107);
if (x_124 == 0)
{
return x_107;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_107, 0);
x_126 = lean_ctor_get(x_107, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_107);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
lean_dec(x_90);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_128 = l_Lean_indentExpr(x_1);
x_129 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
lean_ctor_set_tag(x_55, 7);
lean_ctor_set(x_55, 1, x_128);
lean_ctor_set(x_55, 0, x_129);
x_130 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_131 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_131, 0, x_55);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_MessageData_ofName(x_54);
x_133 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_135 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_st_ref_get(x_12, x_58);
x_137 = !lean_is_exclusive(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = lean_ctor_get(x_136, 0);
x_139 = lean_ctor_get(x_136, 1);
x_140 = lean_ctor_get(x_138, 0);
lean_inc(x_140);
lean_dec(x_138);
x_141 = l_Lean_isStructure(x_140, x_3);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
lean_ctor_set_tag(x_136, 7);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 0, x_142);
x_143 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_144 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_144, 0, x_136);
lean_ctor_set(x_144, 1, x_143);
x_145 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_144, x_9, x_10, x_11, x_12, x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_145;
}
else
{
lean_object* x_146; 
lean_free_object(x_136);
x_146 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_135, x_9, x_10, x_11, x_12, x_139);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_147 = lean_ctor_get(x_136, 0);
x_148 = lean_ctor_get(x_136, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_136);
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
lean_dec(x_147);
x_150 = l_Lean_isStructure(x_149, x_3);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_151 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_152 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_135);
x_153 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_154 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_154, x_9, x_10, x_11, x_12, x_148);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_155;
}
else
{
lean_object* x_156; 
x_156 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_135, x_9, x_10, x_11, x_12, x_148);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_156;
}
}
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_55, 0);
x_158 = lean_ctor_get(x_55, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_55);
x_159 = lean_ctor_get(x_157, 0);
lean_inc(x_159);
lean_dec(x_157);
lean_inc(x_54);
x_160 = l_Lean_Environment_find_x3f(x_159, x_54);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_161 = l_Lean_indentExpr(x_1);
x_162 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_163 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_165 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_MessageData_ofName(x_54);
x_167 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_169 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_st_ref_get(x_12, x_158);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_173 = x_170;
} else {
 lean_dec_ref(x_170);
 x_173 = lean_box(0);
}
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
lean_dec(x_171);
x_175 = l_Lean_isStructure(x_174, x_3);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_173)) {
 x_177 = lean_alloc_ctor(7, 2, 0);
} else {
 x_177 = x_173;
 lean_ctor_set_tag(x_177, 7);
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_169);
x_178 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_179 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_179, x_9, x_10, x_11, x_12, x_172);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_180;
}
else
{
lean_object* x_181; 
lean_dec(x_173);
x_181 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_169, x_9, x_10, x_11, x_12, x_172);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_181;
}
}
else
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_160, 0);
lean_inc(x_182);
lean_dec(x_160);
if (lean_obj_tag(x_182) == 6)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; uint64_t x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; 
lean_dec(x_54);
lean_dec(x_1);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
lean_dec(x_182);
x_184 = lean_unsigned_to_nat(0u);
x_185 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_51, x_184);
x_186 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_185);
x_187 = lean_mk_array(x_185, x_186);
x_188 = lean_unsigned_to_nat(1u);
x_189 = lean_nat_sub(x_185, x_188);
lean_dec(x_185);
lean_inc(x_51);
x_190 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_51, x_187, x_189);
x_191 = lean_ctor_get(x_183, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_191, 2);
lean_inc(x_192);
lean_dec(x_191);
x_193 = 1;
x_194 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_194, 0, x_27);
lean_ctor_set_uint8(x_194, 1, x_28);
lean_ctor_set_uint8(x_194, 2, x_29);
lean_ctor_set_uint8(x_194, 3, x_30);
lean_ctor_set_uint8(x_194, 4, x_31);
lean_ctor_set_uint8(x_194, 5, x_32);
lean_ctor_set_uint8(x_194, 6, x_33);
lean_ctor_set_uint8(x_194, 7, x_34);
lean_ctor_set_uint8(x_194, 8, x_35);
lean_ctor_set_uint8(x_194, 9, x_193);
lean_ctor_set_uint8(x_194, 10, x_36);
lean_ctor_set_uint8(x_194, 11, x_37);
lean_ctor_set_uint8(x_194, 12, x_38);
lean_ctor_set_uint8(x_194, 13, x_39);
lean_ctor_set_uint8(x_194, 14, x_40);
lean_ctor_set_uint8(x_194, 15, x_41);
lean_ctor_set_uint8(x_194, 16, x_42);
lean_ctor_set_uint8(x_194, 17, x_43);
x_195 = lean_uint64_lor(x_46, x_5);
x_196 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_18);
lean_ctor_set(x_196, 2, x_19);
lean_ctor_set(x_196, 3, x_20);
lean_ctor_set(x_196, 4, x_21);
lean_ctor_set(x_196, 5, x_22);
lean_ctor_set(x_196, 6, x_23);
lean_ctor_set_uint64(x_196, sizeof(void*)*7, x_195);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 9, x_25);
lean_ctor_set_uint8(x_196, sizeof(void*)*7 + 10, x_26);
x_197 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_198 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_199 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_192, x_197, x_198, x_196, x_10, x_11, x_12, x_158);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_202 = lean_array_get_size(x_190);
x_203 = lean_array_get_size(x_200);
x_204 = lean_nat_dec_eq(x_202, x_203);
lean_dec(x_203);
lean_dec(x_202);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_200);
lean_dec(x_190);
lean_dec(x_183);
lean_dec(x_53);
lean_dec(x_4);
lean_dec(x_3);
x_205 = l_Lean_indentExpr(x_51);
x_206 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
x_207 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
x_208 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_209 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
x_210 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_209, x_9, x_10, x_11, x_12, x_201);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_213 = x_210;
} else {
 lean_dec_ref(x_210);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_51);
x_215 = lean_box(0);
x_216 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(x_183, x_4, x_6, x_3, x_200, x_53, x_7, x_190, x_215, x_9, x_10, x_11, x_12, x_201);
lean_dec(x_200);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_190);
lean_dec(x_183);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_217 = lean_ctor_get(x_199, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_199, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_219 = x_199;
} else {
 lean_dec_ref(x_199);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
lean_dec(x_182);
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_221 = l_Lean_indentExpr(x_1);
x_222 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_223 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_221);
x_224 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_225 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
x_226 = l_Lean_MessageData_ofName(x_54);
x_227 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_226);
x_228 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_229 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_st_ref_get(x_12, x_158);
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_233 = x_230;
} else {
 lean_dec_ref(x_230);
 x_233 = lean_box(0);
}
x_234 = lean_ctor_get(x_231, 0);
lean_inc(x_234);
lean_dec(x_231);
x_235 = l_Lean_isStructure(x_234, x_3);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_236 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_233)) {
 x_237 = lean_alloc_ctor(7, 2, 0);
} else {
 x_237 = x_233;
 lean_ctor_set_tag(x_237, 7);
}
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_229);
x_238 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_239 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
x_240 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_239, x_9, x_10, x_11, x_12, x_232);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_240;
}
else
{
lean_object* x_241; 
lean_dec(x_233);
x_241 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_229, x_9, x_10, x_11, x_12, x_232);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_241;
}
}
}
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; 
lean_dec(x_53);
lean_dec(x_51);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_242 = l_Lean_indentExpr(x_1);
x_243 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_244 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_242);
x_245 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_246 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_st_ref_get(x_12, x_52);
x_248 = !lean_is_exclusive(x_247);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_249 = lean_ctor_get(x_247, 0);
x_250 = lean_ctor_get(x_247, 1);
x_251 = lean_ctor_get(x_249, 0);
lean_inc(x_251);
lean_dec(x_249);
x_252 = l_Lean_isStructure(x_251, x_3);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_ctor_set_tag(x_247, 7);
lean_ctor_set(x_247, 1, x_246);
lean_ctor_set(x_247, 0, x_245);
x_253 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_254 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_254, 0, x_247);
lean_ctor_set(x_254, 1, x_253);
x_255 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_254, x_9, x_10, x_11, x_12, x_250);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_255;
}
else
{
lean_object* x_256; 
lean_free_object(x_247);
x_256 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_246, x_9, x_10, x_11, x_12, x_250);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; uint8_t x_260; 
x_257 = lean_ctor_get(x_247, 0);
x_258 = lean_ctor_get(x_247, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_247);
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
lean_dec(x_257);
x_260 = l_Lean_isStructure(x_259, x_3);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_261 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_261, 0, x_245);
lean_ctor_set(x_261, 1, x_246);
x_262 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_263 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
x_264 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_263, x_9, x_10, x_11, x_12, x_258);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_264;
}
else
{
lean_object* x_265; 
x_265 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_246, x_9, x_10, x_11, x_12, x_258);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_265;
}
}
}
}
else
{
uint8_t x_266; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_266 = !lean_is_exclusive(x_50);
if (x_266 == 0)
{
return x_50;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_50, 0);
x_268 = lean_ctor_get(x_50, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_50);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
else
{
uint8_t x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; uint8_t x_279; uint8_t x_280; uint8_t x_281; uint8_t x_282; uint8_t x_283; uint8_t x_284; uint8_t x_285; uint8_t x_286; uint8_t x_287; uint8_t x_288; uint8_t x_289; lean_object* x_290; uint64_t x_291; uint64_t x_292; uint64_t x_293; uint64_t x_294; lean_object* x_295; lean_object* x_296; 
x_270 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_271 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_272 = lean_ctor_get_uint8(x_15, 0);
x_273 = lean_ctor_get_uint8(x_15, 1);
x_274 = lean_ctor_get_uint8(x_15, 2);
x_275 = lean_ctor_get_uint8(x_15, 3);
x_276 = lean_ctor_get_uint8(x_15, 4);
x_277 = lean_ctor_get_uint8(x_15, 5);
x_278 = lean_ctor_get_uint8(x_15, 6);
x_279 = lean_ctor_get_uint8(x_15, 7);
x_280 = lean_ctor_get_uint8(x_15, 8);
x_281 = lean_ctor_get_uint8(x_15, 10);
x_282 = lean_ctor_get_uint8(x_15, 11);
x_283 = lean_ctor_get_uint8(x_15, 12);
x_284 = lean_ctor_get_uint8(x_15, 13);
x_285 = lean_ctor_get_uint8(x_15, 14);
x_286 = lean_ctor_get_uint8(x_15, 15);
x_287 = lean_ctor_get_uint8(x_15, 16);
x_288 = lean_ctor_get_uint8(x_15, 17);
lean_dec(x_15);
x_289 = 3;
x_290 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_290, 0, x_272);
lean_ctor_set_uint8(x_290, 1, x_273);
lean_ctor_set_uint8(x_290, 2, x_274);
lean_ctor_set_uint8(x_290, 3, x_275);
lean_ctor_set_uint8(x_290, 4, x_276);
lean_ctor_set_uint8(x_290, 5, x_277);
lean_ctor_set_uint8(x_290, 6, x_278);
lean_ctor_set_uint8(x_290, 7, x_279);
lean_ctor_set_uint8(x_290, 8, x_280);
lean_ctor_set_uint8(x_290, 9, x_289);
lean_ctor_set_uint8(x_290, 10, x_281);
lean_ctor_set_uint8(x_290, 11, x_282);
lean_ctor_set_uint8(x_290, 12, x_283);
lean_ctor_set_uint8(x_290, 13, x_284);
lean_ctor_set_uint8(x_290, 14, x_285);
lean_ctor_set_uint8(x_290, 15, x_286);
lean_ctor_set_uint8(x_290, 16, x_287);
lean_ctor_set_uint8(x_290, 17, x_288);
x_291 = lean_uint64_shift_right(x_16, x_2);
x_292 = lean_uint64_shift_left(x_291, x_2);
x_293 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_294 = lean_uint64_lor(x_292, x_293);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
x_295 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_295, 0, x_290);
lean_ctor_set(x_295, 1, x_18);
lean_ctor_set(x_295, 2, x_19);
lean_ctor_set(x_295, 3, x_20);
lean_ctor_set(x_295, 4, x_21);
lean_ctor_set(x_295, 5, x_22);
lean_ctor_set(x_295, 6, x_23);
lean_ctor_set_uint64(x_295, sizeof(void*)*7, x_294);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 9, x_270);
lean_ctor_set_uint8(x_295, sizeof(void*)*7 + 10, x_271);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_296 = lean_whnf(x_14, x_295, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_296) == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = l_Lean_Expr_getAppFn(x_297);
if (lean_obj_tag(x_299) == 4)
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_st_ref_get(x_12, x_298);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 x_304 = x_301;
} else {
 lean_dec_ref(x_301);
 x_304 = lean_box(0);
}
x_305 = lean_ctor_get(x_302, 0);
lean_inc(x_305);
lean_dec(x_302);
lean_inc(x_300);
x_306 = l_Lean_Environment_find_x3f(x_305, x_300);
if (lean_obj_tag(x_306) == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; 
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_307 = l_Lean_indentExpr(x_1);
x_308 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
if (lean_is_scalar(x_304)) {
 x_309 = lean_alloc_ctor(7, 2, 0);
} else {
 x_309 = x_304;
 lean_ctor_set_tag(x_309, 7);
}
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_307);
x_310 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_311 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_311, 0, x_309);
lean_ctor_set(x_311, 1, x_310);
x_312 = l_Lean_MessageData_ofName(x_300);
x_313 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
x_314 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_315 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_st_ref_get(x_12, x_303);
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_316)) {
 lean_ctor_release(x_316, 0);
 lean_ctor_release(x_316, 1);
 x_319 = x_316;
} else {
 lean_dec_ref(x_316);
 x_319 = lean_box(0);
}
x_320 = lean_ctor_get(x_317, 0);
lean_inc(x_320);
lean_dec(x_317);
x_321 = l_Lean_isStructure(x_320, x_3);
if (x_321 == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_322 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_319)) {
 x_323 = lean_alloc_ctor(7, 2, 0);
} else {
 x_323 = x_319;
 lean_ctor_set_tag(x_323, 7);
}
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_315);
x_324 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_325 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
x_326 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_325, x_9, x_10, x_11, x_12, x_318);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_326;
}
else
{
lean_object* x_327; 
lean_dec(x_319);
x_327 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_315, x_9, x_10, x_11, x_12, x_318);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_327;
}
}
else
{
lean_object* x_328; 
x_328 = lean_ctor_get(x_306, 0);
lean_inc(x_328);
lean_dec(x_306);
if (lean_obj_tag(x_328) == 6)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; uint64_t x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; 
lean_dec(x_300);
lean_dec(x_1);
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
lean_dec(x_328);
x_330 = lean_unsigned_to_nat(0u);
x_331 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_297, x_330);
x_332 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10;
lean_inc(x_331);
x_333 = lean_mk_array(x_331, x_332);
x_334 = lean_unsigned_to_nat(1u);
x_335 = lean_nat_sub(x_331, x_334);
lean_dec(x_331);
lean_inc(x_297);
x_336 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_297, x_333, x_335);
x_337 = lean_ctor_get(x_329, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_337, 2);
lean_inc(x_338);
lean_dec(x_337);
x_339 = 1;
x_340 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_340, 0, x_272);
lean_ctor_set_uint8(x_340, 1, x_273);
lean_ctor_set_uint8(x_340, 2, x_274);
lean_ctor_set_uint8(x_340, 3, x_275);
lean_ctor_set_uint8(x_340, 4, x_276);
lean_ctor_set_uint8(x_340, 5, x_277);
lean_ctor_set_uint8(x_340, 6, x_278);
lean_ctor_set_uint8(x_340, 7, x_279);
lean_ctor_set_uint8(x_340, 8, x_280);
lean_ctor_set_uint8(x_340, 9, x_339);
lean_ctor_set_uint8(x_340, 10, x_281);
lean_ctor_set_uint8(x_340, 11, x_282);
lean_ctor_set_uint8(x_340, 12, x_283);
lean_ctor_set_uint8(x_340, 13, x_284);
lean_ctor_set_uint8(x_340, 14, x_285);
lean_ctor_set_uint8(x_340, 15, x_286);
lean_ctor_set_uint8(x_340, 16, x_287);
lean_ctor_set_uint8(x_340, 17, x_288);
x_341 = lean_uint64_lor(x_292, x_5);
x_342 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_342, 0, x_340);
lean_ctor_set(x_342, 1, x_18);
lean_ctor_set(x_342, 2, x_19);
lean_ctor_set(x_342, 3, x_20);
lean_ctor_set(x_342, 4, x_21);
lean_ctor_set(x_342, 5, x_22);
lean_ctor_set(x_342, 6, x_23);
lean_ctor_set_uint64(x_342, sizeof(void*)*7, x_341);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 8, x_17);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 9, x_270);
lean_ctor_set_uint8(x_342, sizeof(void*)*7 + 10, x_271);
x_343 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11;
x_344 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_345 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_338, x_343, x_344, x_342, x_10, x_11, x_12, x_303);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
x_348 = lean_array_get_size(x_336);
x_349 = lean_array_get_size(x_346);
x_350 = lean_nat_dec_eq(x_348, x_349);
lean_dec(x_349);
lean_dec(x_348);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_346);
lean_dec(x_336);
lean_dec(x_329);
lean_dec(x_299);
lean_dec(x_4);
lean_dec(x_3);
x_351 = l_Lean_indentExpr(x_297);
x_352 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13;
if (lean_is_scalar(x_304)) {
 x_353 = lean_alloc_ctor(7, 2, 0);
} else {
 x_353 = x_304;
 lean_ctor_set_tag(x_353, 7);
}
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_351);
x_354 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_355 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_355, 0, x_353);
lean_ctor_set(x_355, 1, x_354);
x_356 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_355, x_9, x_10, x_11, x_12, x_347);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
if (lean_is_scalar(x_359)) {
 x_360 = lean_alloc_ctor(1, 2, 0);
} else {
 x_360 = x_359;
}
lean_ctor_set(x_360, 0, x_357);
lean_ctor_set(x_360, 1, x_358);
return x_360;
}
else
{
lean_object* x_361; lean_object* x_362; 
lean_dec(x_304);
lean_dec(x_297);
x_361 = lean_box(0);
x_362 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(x_329, x_4, x_6, x_3, x_346, x_299, x_7, x_336, x_361, x_9, x_10, x_11, x_12, x_347);
lean_dec(x_346);
return x_362;
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_336);
lean_dec(x_329);
lean_dec(x_304);
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_363 = lean_ctor_get(x_345, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_345, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_365 = x_345;
} else {
 lean_dec_ref(x_345);
 x_365 = lean_box(0);
}
if (lean_is_scalar(x_365)) {
 x_366 = lean_alloc_ctor(1, 2, 0);
} else {
 x_366 = x_365;
}
lean_ctor_set(x_366, 0, x_363);
lean_ctor_set(x_366, 1, x_364);
return x_366;
}
}
else
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; uint8_t x_381; 
lean_dec(x_328);
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_367 = l_Lean_indentExpr(x_1);
x_368 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
if (lean_is_scalar(x_304)) {
 x_369 = lean_alloc_ctor(7, 2, 0);
} else {
 x_369 = x_304;
 lean_ctor_set_tag(x_369, 7);
}
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_367);
x_370 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7;
x_371 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
x_372 = l_Lean_MessageData_ofName(x_300);
x_373 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_372);
x_374 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9;
x_375 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_375, 0, x_373);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_st_ref_get(x_12, x_303);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
if (lean_is_exclusive(x_376)) {
 lean_ctor_release(x_376, 0);
 lean_ctor_release(x_376, 1);
 x_379 = x_376;
} else {
 lean_dec_ref(x_376);
 x_379 = lean_box(0);
}
x_380 = lean_ctor_get(x_377, 0);
lean_inc(x_380);
lean_dec(x_377);
x_381 = l_Lean_isStructure(x_380, x_3);
if (x_381 == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_382 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
if (lean_is_scalar(x_379)) {
 x_383 = lean_alloc_ctor(7, 2, 0);
} else {
 x_383 = x_379;
 lean_ctor_set_tag(x_383, 7);
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_375);
x_384 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_385 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
x_386 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_385, x_9, x_10, x_11, x_12, x_378);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_386;
}
else
{
lean_object* x_387; 
lean_dec(x_379);
x_387 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_375, x_9, x_10, x_11, x_12, x_378);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_387;
}
}
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; 
lean_dec(x_299);
lean_dec(x_297);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_388 = l_Lean_indentExpr(x_1);
x_389 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3;
x_390 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_388);
x_391 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_392 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_392, 0, x_390);
lean_ctor_set(x_392, 1, x_391);
x_393 = lean_st_ref_get(x_12, x_298);
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_396 = x_393;
} else {
 lean_dec_ref(x_393);
 x_396 = lean_box(0);
}
x_397 = lean_ctor_get(x_394, 0);
lean_inc(x_397);
lean_dec(x_394);
x_398 = l_Lean_isStructure(x_397, x_3);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
if (lean_is_scalar(x_396)) {
 x_399 = lean_alloc_ctor(7, 2, 0);
} else {
 x_399 = x_396;
 lean_ctor_set_tag(x_399, 7);
}
lean_ctor_set(x_399, 0, x_391);
lean_ctor_set(x_399, 1, x_392);
x_400 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5;
x_401 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_401, 0, x_399);
lean_ctor_set(x_401, 1, x_400);
x_402 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_401, x_9, x_10, x_11, x_12, x_395);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_402;
}
else
{
lean_object* x_403; 
lean_dec(x_396);
x_403 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_4, x_392, x_9, x_10, x_11, x_12, x_395);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_403;
}
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_404 = lean_ctor_get(x_296, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_296, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_406 = x_296;
} else {
 lean_dec_ref(x_296);
 x_406 = lean_box(0);
}
if (lean_is_scalar(x_406)) {
 x_407 = lean_alloc_ctor(1, 2, 0);
} else {
 x_407 = x_406;
}
lean_ctor_set(x_407, 0, x_404);
lean_ctor_set(x_407, 1, x_405);
return x_407;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Provided instance", 17, 17);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nis not defeq to inferred instance", 34, 34);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nis defeq only at default transparency to inferred instance", 59, 59);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("replaced with synthesized instance", 34, 34);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8(lean_object* x_1, lean_object* x_2, uint64_t x_3, lean_object* x_4, lean_object* x_5, uint64_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_16 = l_Lean_Meta_trySynthInstance(x_1, x_15, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
lean_dec(x_8);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box_uint64(x_3);
x_20 = lean_box_uint64(x_6);
x_21 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___boxed), 13, 6);
lean_closure_set(x_21, 0, x_2);
lean_closure_set(x_21, 1, x_19);
lean_closure_set(x_21, 2, x_4);
lean_closure_set(x_21, 3, x_5);
lean_closure_set(x_21, 4, x_20);
lean_closure_set(x_21, 5, x_7);
x_22 = 0;
x_23 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_21, x_22, x_10, x_11, x_12, x_13, x_18);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint64_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_24 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = lean_ctor_get(x_17, 0);
lean_inc(x_26);
lean_dec(x_17);
x_27 = lean_ctor_get_uint64(x_10, sizeof(void*)*7);
x_28 = lean_ctor_get_uint8(x_10, sizeof(void*)*7 + 8);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_10, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_10, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_10, 4);
lean_inc(x_32);
x_33 = lean_ctor_get(x_10, 5);
lean_inc(x_33);
x_34 = lean_ctor_get(x_10, 6);
lean_inc(x_34);
x_35 = !lean_is_exclusive(x_24);
if (x_35 == 0)
{
uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; lean_object* x_60; lean_object* x_61; 
x_36 = lean_ctor_get_uint8(x_10, sizeof(void*)*7 + 9);
x_37 = lean_ctor_get_uint8(x_10, sizeof(void*)*7 + 10);
x_38 = lean_ctor_get_uint8(x_24, 0);
x_39 = lean_ctor_get_uint8(x_24, 1);
x_40 = lean_ctor_get_uint8(x_24, 2);
x_41 = lean_ctor_get_uint8(x_24, 3);
x_42 = lean_ctor_get_uint8(x_24, 4);
x_43 = lean_ctor_get_uint8(x_24, 5);
x_44 = lean_ctor_get_uint8(x_24, 6);
x_45 = lean_ctor_get_uint8(x_24, 7);
x_46 = lean_ctor_get_uint8(x_24, 8);
x_47 = lean_ctor_get_uint8(x_24, 10);
x_48 = lean_ctor_get_uint8(x_24, 11);
x_49 = lean_ctor_get_uint8(x_24, 12);
x_50 = lean_ctor_get_uint8(x_24, 13);
x_51 = lean_ctor_get_uint8(x_24, 14);
x_52 = lean_ctor_get_uint8(x_24, 15);
x_53 = lean_ctor_get_uint8(x_24, 16);
x_54 = lean_ctor_get_uint8(x_24, 17);
x_55 = 3;
lean_ctor_set_uint8(x_24, 9, x_55);
x_56 = lean_uint64_shift_right(x_27, x_3);
x_57 = lean_uint64_shift_left(x_56, x_3);
x_58 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_59 = lean_uint64_lor(x_57, x_58);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
x_60 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_60, 0, x_24);
lean_ctor_set(x_60, 1, x_29);
lean_ctor_set(x_60, 2, x_30);
lean_ctor_set(x_60, 3, x_31);
lean_ctor_set(x_60, 4, x_32);
lean_ctor_set(x_60, 5, x_33);
lean_ctor_set(x_60, 6, x_34);
lean_ctor_set_uint64(x_60, sizeof(void*)*7, x_59);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 8, x_28);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 9, x_36);
lean_ctor_set_uint8(x_60, sizeof(void*)*7 + 10, x_37);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_26);
lean_inc(x_2);
x_61 = l_Lean_Meta_isExprDefEq(x_2, x_26, x_60, x_11, x_12, x_13, x_25);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; uint8_t x_65; lean_object* x_66; uint64_t x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_8);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = 1;
x_66 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_66, 0, x_38);
lean_ctor_set_uint8(x_66, 1, x_39);
lean_ctor_set_uint8(x_66, 2, x_40);
lean_ctor_set_uint8(x_66, 3, x_41);
lean_ctor_set_uint8(x_66, 4, x_42);
lean_ctor_set_uint8(x_66, 5, x_43);
lean_ctor_set_uint8(x_66, 6, x_44);
lean_ctor_set_uint8(x_66, 7, x_45);
lean_ctor_set_uint8(x_66, 8, x_46);
lean_ctor_set_uint8(x_66, 9, x_65);
lean_ctor_set_uint8(x_66, 10, x_47);
lean_ctor_set_uint8(x_66, 11, x_48);
lean_ctor_set_uint8(x_66, 12, x_49);
lean_ctor_set_uint8(x_66, 13, x_50);
lean_ctor_set_uint8(x_66, 14, x_51);
lean_ctor_set_uint8(x_66, 15, x_52);
lean_ctor_set_uint8(x_66, 16, x_53);
lean_ctor_set_uint8(x_66, 17, x_54);
x_67 = lean_uint64_lor(x_57, x_6);
x_68 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_29);
lean_ctor_set(x_68, 2, x_30);
lean_ctor_set(x_68, 3, x_31);
lean_ctor_set(x_68, 4, x_32);
lean_ctor_set(x_68, 5, x_33);
lean_ctor_set(x_68, 6, x_34);
lean_ctor_set_uint64(x_68, sizeof(void*)*7, x_67);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 8, x_28);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 9, x_36);
lean_ctor_set_uint8(x_68, sizeof(void*)*7 + 10, x_37);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_26);
lean_inc(x_2);
x_69 = l_Lean_Meta_isExprDefEq(x_2, x_26, x_68, x_11, x_12, x_13, x_64);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_unbox(x_70);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_dec(x_69);
x_73 = l_Lean_indentExpr(x_2);
x_74 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_indentExpr(x_26);
x_79 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_81 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_81, x_10, x_11, x_12, x_13, x_72);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_83 = lean_ctor_get(x_69, 1);
lean_inc(x_83);
lean_dec(x_69);
x_84 = l_Lean_indentExpr(x_2);
x_85 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_86 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6;
x_88 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_indentExpr(x_26);
x_90 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_92 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_92, x_10, x_11, x_12, x_13, x_83);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_93;
}
}
else
{
uint8_t x_94; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
x_94 = !lean_is_exclusive(x_69);
if (x_94 == 0)
{
return x_69;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_69, 0);
x_96 = lean_ctor_get(x_69, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_69);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_2);
x_98 = lean_ctor_get(x_61, 1);
lean_inc(x_98);
lean_dec(x_61);
lean_inc(x_8);
x_99 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_8, x_10, x_11, x_12, x_13, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_unbox(x_100);
lean_dec(x_100);
if (x_101 == 0)
{
uint8_t x_102; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_102 = !lean_is_exclusive(x_99);
if (x_102 == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_99, 0);
lean_dec(x_103);
lean_ctor_set(x_99, 0, x_26);
return x_99;
}
else
{
lean_object* x_104; lean_object* x_105; 
x_104 = lean_ctor_get(x_99, 1);
lean_inc(x_104);
lean_dec(x_99);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_26);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_106 = lean_ctor_get(x_99, 1);
lean_inc(x_106);
lean_dec(x_99);
x_107 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8;
x_108 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_8, x_107, x_10, x_11, x_12, x_13, x_106);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; 
x_110 = lean_ctor_get(x_108, 0);
lean_dec(x_110);
lean_ctor_set(x_108, 0, x_26);
return x_108;
}
else
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
lean_dec(x_108);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_26);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_61);
if (x_113 == 0)
{
return x_61;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_61, 0);
x_115 = lean_ctor_get(x_61, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_61);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; uint8_t x_125; uint8_t x_126; uint8_t x_127; uint8_t x_128; uint8_t x_129; uint8_t x_130; uint8_t x_131; uint8_t x_132; uint8_t x_133; uint8_t x_134; uint8_t x_135; uint8_t x_136; lean_object* x_137; uint64_t x_138; uint64_t x_139; uint64_t x_140; uint64_t x_141; lean_object* x_142; lean_object* x_143; 
x_117 = lean_ctor_get_uint8(x_10, sizeof(void*)*7 + 9);
x_118 = lean_ctor_get_uint8(x_10, sizeof(void*)*7 + 10);
x_119 = lean_ctor_get_uint8(x_24, 0);
x_120 = lean_ctor_get_uint8(x_24, 1);
x_121 = lean_ctor_get_uint8(x_24, 2);
x_122 = lean_ctor_get_uint8(x_24, 3);
x_123 = lean_ctor_get_uint8(x_24, 4);
x_124 = lean_ctor_get_uint8(x_24, 5);
x_125 = lean_ctor_get_uint8(x_24, 6);
x_126 = lean_ctor_get_uint8(x_24, 7);
x_127 = lean_ctor_get_uint8(x_24, 8);
x_128 = lean_ctor_get_uint8(x_24, 10);
x_129 = lean_ctor_get_uint8(x_24, 11);
x_130 = lean_ctor_get_uint8(x_24, 12);
x_131 = lean_ctor_get_uint8(x_24, 13);
x_132 = lean_ctor_get_uint8(x_24, 14);
x_133 = lean_ctor_get_uint8(x_24, 15);
x_134 = lean_ctor_get_uint8(x_24, 16);
x_135 = lean_ctor_get_uint8(x_24, 17);
lean_dec(x_24);
x_136 = 3;
x_137 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_137, 0, x_119);
lean_ctor_set_uint8(x_137, 1, x_120);
lean_ctor_set_uint8(x_137, 2, x_121);
lean_ctor_set_uint8(x_137, 3, x_122);
lean_ctor_set_uint8(x_137, 4, x_123);
lean_ctor_set_uint8(x_137, 5, x_124);
lean_ctor_set_uint8(x_137, 6, x_125);
lean_ctor_set_uint8(x_137, 7, x_126);
lean_ctor_set_uint8(x_137, 8, x_127);
lean_ctor_set_uint8(x_137, 9, x_136);
lean_ctor_set_uint8(x_137, 10, x_128);
lean_ctor_set_uint8(x_137, 11, x_129);
lean_ctor_set_uint8(x_137, 12, x_130);
lean_ctor_set_uint8(x_137, 13, x_131);
lean_ctor_set_uint8(x_137, 14, x_132);
lean_ctor_set_uint8(x_137, 15, x_133);
lean_ctor_set_uint8(x_137, 16, x_134);
lean_ctor_set_uint8(x_137, 17, x_135);
x_138 = lean_uint64_shift_right(x_27, x_3);
x_139 = lean_uint64_shift_left(x_138, x_3);
x_140 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1;
x_141 = lean_uint64_lor(x_139, x_140);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
x_142 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_142, 0, x_137);
lean_ctor_set(x_142, 1, x_29);
lean_ctor_set(x_142, 2, x_30);
lean_ctor_set(x_142, 3, x_31);
lean_ctor_set(x_142, 4, x_32);
lean_ctor_set(x_142, 5, x_33);
lean_ctor_set(x_142, 6, x_34);
lean_ctor_set_uint64(x_142, sizeof(void*)*7, x_141);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 8, x_28);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 9, x_117);
lean_ctor_set_uint8(x_142, sizeof(void*)*7 + 10, x_118);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_26);
lean_inc(x_2);
x_143 = l_Lean_Meta_isExprDefEq(x_2, x_26, x_142, x_11, x_12, x_13, x_25);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; uint8_t x_145; 
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_unbox(x_144);
lean_dec(x_144);
if (x_145 == 0)
{
lean_object* x_146; uint8_t x_147; lean_object* x_148; uint64_t x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_8);
x_146 = lean_ctor_get(x_143, 1);
lean_inc(x_146);
lean_dec(x_143);
x_147 = 1;
x_148 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_148, 0, x_119);
lean_ctor_set_uint8(x_148, 1, x_120);
lean_ctor_set_uint8(x_148, 2, x_121);
lean_ctor_set_uint8(x_148, 3, x_122);
lean_ctor_set_uint8(x_148, 4, x_123);
lean_ctor_set_uint8(x_148, 5, x_124);
lean_ctor_set_uint8(x_148, 6, x_125);
lean_ctor_set_uint8(x_148, 7, x_126);
lean_ctor_set_uint8(x_148, 8, x_127);
lean_ctor_set_uint8(x_148, 9, x_147);
lean_ctor_set_uint8(x_148, 10, x_128);
lean_ctor_set_uint8(x_148, 11, x_129);
lean_ctor_set_uint8(x_148, 12, x_130);
lean_ctor_set_uint8(x_148, 13, x_131);
lean_ctor_set_uint8(x_148, 14, x_132);
lean_ctor_set_uint8(x_148, 15, x_133);
lean_ctor_set_uint8(x_148, 16, x_134);
lean_ctor_set_uint8(x_148, 17, x_135);
x_149 = lean_uint64_lor(x_139, x_6);
x_150 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_29);
lean_ctor_set(x_150, 2, x_30);
lean_ctor_set(x_150, 3, x_31);
lean_ctor_set(x_150, 4, x_32);
lean_ctor_set(x_150, 5, x_33);
lean_ctor_set(x_150, 6, x_34);
lean_ctor_set_uint64(x_150, sizeof(void*)*7, x_149);
lean_ctor_set_uint8(x_150, sizeof(void*)*7 + 8, x_28);
lean_ctor_set_uint8(x_150, sizeof(void*)*7 + 9, x_117);
lean_ctor_set_uint8(x_150, sizeof(void*)*7 + 10, x_118);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_26);
lean_inc(x_2);
x_151 = l_Lean_Meta_isExprDefEq(x_2, x_26, x_150, x_11, x_12, x_13, x_146);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; uint8_t x_153; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_unbox(x_152);
lean_dec(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
x_155 = l_Lean_indentExpr(x_2);
x_156 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_157 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
x_158 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4;
x_159 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_indentExpr(x_26);
x_161 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_163 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
x_164 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_163, x_10, x_11, x_12, x_13, x_154);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_165 = lean_ctor_get(x_151, 1);
lean_inc(x_165);
lean_dec(x_151);
x_166 = l_Lean_indentExpr(x_2);
x_167 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_168 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6;
x_170 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = l_Lean_indentExpr(x_26);
x_172 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
x_173 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_174 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_175 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_174, x_10, x_11, x_12, x_13, x_165);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_175;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
x_176 = lean_ctor_get(x_151, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_151, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_178 = x_151;
} else {
 lean_dec_ref(x_151);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_2);
x_180 = lean_ctor_get(x_143, 1);
lean_inc(x_180);
lean_dec(x_143);
lean_inc(x_8);
x_181 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_8, x_10, x_11, x_12, x_13, x_180);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_unbox(x_182);
lean_dec(x_182);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_185 = x_181;
} else {
 lean_dec_ref(x_181);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_26);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_dec(x_181);
x_188 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8;
x_189 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_8, x_188, x_10, x_11, x_12, x_13, x_187);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_191 = x_189;
} else {
 lean_dec_ref(x_189);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(0, 2, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_26);
lean_ctor_set(x_192, 1, x_190);
return x_192;
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_193 = lean_ctor_get(x_143, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_143, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_195 = x_143;
} else {
 lean_dec_ref(x_143);
 x_195 = lean_box(0);
}
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_194);
return x_196;
}
}
}
default: 
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; lean_object* x_202; 
lean_dec(x_8);
x_197 = lean_ctor_get(x_16, 1);
lean_inc(x_197);
lean_dec(x_16);
x_198 = lean_box_uint64(x_3);
x_199 = lean_box_uint64(x_6);
x_200 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7___boxed), 13, 6);
lean_closure_set(x_200, 0, x_2);
lean_closure_set(x_200, 1, x_198);
lean_closure_set(x_200, 2, x_4);
lean_closure_set(x_200, 3, x_5);
lean_closure_set(x_200, 4, x_199);
lean_closure_set(x_200, 5, x_7);
x_201 = 0;
x_202 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_200, x_201, x_10, x_11, x_12, x_13, x_197);
return x_202;
}
}
}
else
{
uint8_t x_203; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_203 = !lean_is_exclusive(x_16);
if (x_203 == 0)
{
return x_16;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_16, 0);
x_205 = lean_ctor_get(x_16, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_16);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
return x_206;
}
}
}
}
static uint64_t _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 1;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nis a proof, which does not need normalization.", 47, 47);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(uint64_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint64_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_9, sizeof(void*)*7);
x_16 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 8);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_9, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 3);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 4);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 5);
lean_inc(x_21);
x_22 = lean_ctor_get(x_9, 6);
lean_inc(x_22);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
uint8_t x_24; uint8_t x_25; uint8_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_25 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_26 = 1;
lean_ctor_set_uint8(x_14, 9, x_26);
x_27 = lean_uint64_shift_right(x_15, x_1);
x_28 = lean_uint64_shift_left(x_27, x_1);
x_29 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1;
x_30 = lean_uint64_lor(x_28, x_29);
x_31 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_31, 0, x_14);
lean_ctor_set(x_31, 1, x_17);
lean_ctor_set(x_31, 2, x_18);
lean_ctor_set(x_31, 3, x_19);
lean_ctor_set(x_31, 4, x_20);
lean_ctor_set(x_31, 5, x_21);
lean_ctor_set(x_31, 6, x_22);
lean_ctor_set_uint64(x_31, sizeof(void*)*7, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 8, x_16);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 9, x_24);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 10, x_25);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_32 = l_Lean_Meta_isProp(x_2, x_31, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_box(0);
x_37 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8(x_2, x_3, x_1, x_4, x_5, x_29, x_6, x_7, x_36, x_9, x_10, x_11, x_12, x_35);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l_Lean_indentExpr(x_3);
x_40 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_41 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_43, x_9, x_10, x_11, x_12, x_38);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_32);
if (x_49 == 0)
{
return x_32;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_32, 0);
x_51 = lean_ctor_get(x_32, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_32);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; lean_object* x_73; uint64_t x_74; uint64_t x_75; uint64_t x_76; uint64_t x_77; lean_object* x_78; lean_object* x_79; 
x_53 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 9);
x_54 = lean_ctor_get_uint8(x_9, sizeof(void*)*7 + 10);
x_55 = lean_ctor_get_uint8(x_14, 0);
x_56 = lean_ctor_get_uint8(x_14, 1);
x_57 = lean_ctor_get_uint8(x_14, 2);
x_58 = lean_ctor_get_uint8(x_14, 3);
x_59 = lean_ctor_get_uint8(x_14, 4);
x_60 = lean_ctor_get_uint8(x_14, 5);
x_61 = lean_ctor_get_uint8(x_14, 6);
x_62 = lean_ctor_get_uint8(x_14, 7);
x_63 = lean_ctor_get_uint8(x_14, 8);
x_64 = lean_ctor_get_uint8(x_14, 10);
x_65 = lean_ctor_get_uint8(x_14, 11);
x_66 = lean_ctor_get_uint8(x_14, 12);
x_67 = lean_ctor_get_uint8(x_14, 13);
x_68 = lean_ctor_get_uint8(x_14, 14);
x_69 = lean_ctor_get_uint8(x_14, 15);
x_70 = lean_ctor_get_uint8(x_14, 16);
x_71 = lean_ctor_get_uint8(x_14, 17);
lean_dec(x_14);
x_72 = 1;
x_73 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_73, 0, x_55);
lean_ctor_set_uint8(x_73, 1, x_56);
lean_ctor_set_uint8(x_73, 2, x_57);
lean_ctor_set_uint8(x_73, 3, x_58);
lean_ctor_set_uint8(x_73, 4, x_59);
lean_ctor_set_uint8(x_73, 5, x_60);
lean_ctor_set_uint8(x_73, 6, x_61);
lean_ctor_set_uint8(x_73, 7, x_62);
lean_ctor_set_uint8(x_73, 8, x_63);
lean_ctor_set_uint8(x_73, 9, x_72);
lean_ctor_set_uint8(x_73, 10, x_64);
lean_ctor_set_uint8(x_73, 11, x_65);
lean_ctor_set_uint8(x_73, 12, x_66);
lean_ctor_set_uint8(x_73, 13, x_67);
lean_ctor_set_uint8(x_73, 14, x_68);
lean_ctor_set_uint8(x_73, 15, x_69);
lean_ctor_set_uint8(x_73, 16, x_70);
lean_ctor_set_uint8(x_73, 17, x_71);
x_74 = lean_uint64_shift_right(x_15, x_1);
x_75 = lean_uint64_shift_left(x_74, x_1);
x_76 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1;
x_77 = lean_uint64_lor(x_75, x_76);
x_78 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_17);
lean_ctor_set(x_78, 2, x_18);
lean_ctor_set(x_78, 3, x_19);
lean_ctor_set(x_78, 4, x_20);
lean_ctor_set(x_78, 5, x_21);
lean_ctor_set(x_78, 6, x_22);
lean_ctor_set_uint64(x_78, sizeof(void*)*7, x_77);
lean_ctor_set_uint8(x_78, sizeof(void*)*7 + 8, x_16);
lean_ctor_set_uint8(x_78, sizeof(void*)*7 + 9, x_53);
lean_ctor_set_uint8(x_78, sizeof(void*)*7 + 10, x_54);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_79 = l_Lean_Meta_isProp(x_2, x_78, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; uint8_t x_81; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_unbox(x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
lean_dec(x_79);
x_83 = lean_box(0);
x_84 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8(x_2, x_3, x_1, x_4, x_5, x_76, x_6, x_7, x_83, x_9, x_10, x_11, x_12, x_82);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
lean_dec(x_79);
x_86 = l_Lean_indentExpr(x_3);
x_87 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2;
x_88 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
x_89 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3;
x_90 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_5, x_90, x_9, x_10, x_11, x_12, x_85);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = lean_ctor_get(x_79, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_79, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_98 = x_79;
} else {
 lean_dec_ref(x_79);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Can only be used for classes, but term has type", 47, 47);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("class is ", 9, 9);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint64_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_12 = l_Lean_Meta_isClass_x3f(x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_indentExpr(x_1);
x_16 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2;
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg(x_2, x_19, x_7, x_8, x_9, x_10, x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_3);
x_23 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_7, x_8, x_9, x_10, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_box(0);
x_28 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(x_4, x_1, x_5, x_22, x_2, x_6, x_3, x_27, x_7, x_8, x_9, x_10, x_26);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = lean_ctor_get(x_23, 1);
x_31 = lean_ctor_get(x_23, 0);
lean_dec(x_31);
lean_inc(x_22);
x_32 = l_Lean_MessageData_ofName(x_22);
x_33 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4;
lean_ctor_set_tag(x_23, 7);
lean_ctor_set(x_23, 1, x_32);
lean_ctor_set(x_23, 0, x_33);
x_34 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_34);
lean_inc(x_3);
x_36 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_35, x_7, x_8, x_9, x_10, x_30);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(x_4, x_1, x_5, x_22, x_2, x_6, x_3, x_37, x_7, x_8, x_9, x_10, x_38);
lean_dec(x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_dec(x_23);
lean_inc(x_22);
x_41 = l_Lean_MessageData_ofName(x_22);
x_42 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2;
x_45 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
lean_inc(x_3);
x_46 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_45, x_7, x_8, x_9, x_10, x_40);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(x_4, x_1, x_5, x_22, x_2, x_6, x_3, x_47, x_7, x_8, x_9, x_10, x_48);
lean_dec(x_47);
return x_49;
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_12);
if (x_50 == 0)
{
return x_12;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_12, 0);
x_52 = lean_ctor_get(x_12, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_12);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Core_instMonadCoreM;
x_2 = l_ReaderT_instMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1;
x_2 = l_ReaderT_instApplicativeOfMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_instMonadControlTOfPure___rarg(x_2);
return x_3;
}
}
static uint64_t _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 2;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = 2;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint64_t x_11; uint8_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; lean_object* x_18; 
x_11 = lean_ctor_get_uint64(x_3, sizeof(void*)*7);
x_12 = 2;
lean_ctor_set_uint8(x_9, 9, x_12);
x_13 = 2;
x_14 = lean_uint64_shift_right(x_11, x_13);
x_15 = lean_uint64_shift_left(x_14, x_13);
x_16 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4;
x_17 = lean_uint64_lor(x_15, x_16);
lean_ctor_set_uint64(x_3, sizeof(void*)*7, x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_18 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_19);
x_21 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___boxed), 7, 1);
lean_closure_set(x_21, 0, x_19);
x_22 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3;
x_23 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3;
x_24 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1;
x_25 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___boxed), 11, 6);
lean_closure_set(x_25, 0, x_19);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_22);
lean_closure_set(x_25, 3, x_24);
lean_closure_set(x_25, 4, x_1);
lean_closure_set(x_25, 5, x_23);
x_26 = 1;
x_27 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1;
x_28 = l_Lean_withTraceNode___at_Lean_Meta_whnfImp___spec__1(x_22, x_21, x_25, x_26, x_27, x_3, x_4, x_5, x_6, x_20);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_18);
if (x_37 == 0)
{
return x_18;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_18, 0);
x_39 = lean_ctor_get(x_18, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_18);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint64_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; lean_object* x_66; 
x_41 = lean_ctor_get_uint64(x_3, sizeof(void*)*7);
x_42 = lean_ctor_get_uint8(x_9, 0);
x_43 = lean_ctor_get_uint8(x_9, 1);
x_44 = lean_ctor_get_uint8(x_9, 2);
x_45 = lean_ctor_get_uint8(x_9, 3);
x_46 = lean_ctor_get_uint8(x_9, 4);
x_47 = lean_ctor_get_uint8(x_9, 5);
x_48 = lean_ctor_get_uint8(x_9, 6);
x_49 = lean_ctor_get_uint8(x_9, 7);
x_50 = lean_ctor_get_uint8(x_9, 8);
x_51 = lean_ctor_get_uint8(x_9, 10);
x_52 = lean_ctor_get_uint8(x_9, 11);
x_53 = lean_ctor_get_uint8(x_9, 12);
x_54 = lean_ctor_get_uint8(x_9, 13);
x_55 = lean_ctor_get_uint8(x_9, 14);
x_56 = lean_ctor_get_uint8(x_9, 15);
x_57 = lean_ctor_get_uint8(x_9, 16);
x_58 = lean_ctor_get_uint8(x_9, 17);
lean_dec(x_9);
x_59 = 2;
x_60 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_60, 0, x_42);
lean_ctor_set_uint8(x_60, 1, x_43);
lean_ctor_set_uint8(x_60, 2, x_44);
lean_ctor_set_uint8(x_60, 3, x_45);
lean_ctor_set_uint8(x_60, 4, x_46);
lean_ctor_set_uint8(x_60, 5, x_47);
lean_ctor_set_uint8(x_60, 6, x_48);
lean_ctor_set_uint8(x_60, 7, x_49);
lean_ctor_set_uint8(x_60, 8, x_50);
lean_ctor_set_uint8(x_60, 9, x_59);
lean_ctor_set_uint8(x_60, 10, x_51);
lean_ctor_set_uint8(x_60, 11, x_52);
lean_ctor_set_uint8(x_60, 12, x_53);
lean_ctor_set_uint8(x_60, 13, x_54);
lean_ctor_set_uint8(x_60, 14, x_55);
lean_ctor_set_uint8(x_60, 15, x_56);
lean_ctor_set_uint8(x_60, 16, x_57);
lean_ctor_set_uint8(x_60, 17, x_58);
x_61 = 2;
x_62 = lean_uint64_shift_right(x_41, x_61);
x_63 = lean_uint64_shift_left(x_62, x_61);
x_64 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4;
x_65 = lean_uint64_lor(x_63, x_64);
lean_ctor_set(x_3, 0, x_60);
lean_ctor_set_uint64(x_3, sizeof(void*)*7, x_65);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_66 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_67);
x_69 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___boxed), 7, 1);
lean_closure_set(x_69, 0, x_67);
x_70 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3;
x_71 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3;
x_72 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1;
x_73 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___boxed), 11, 6);
lean_closure_set(x_73, 0, x_67);
lean_closure_set(x_73, 1, x_2);
lean_closure_set(x_73, 2, x_70);
lean_closure_set(x_73, 3, x_72);
lean_closure_set(x_73, 4, x_1);
lean_closure_set(x_73, 5, x_71);
x_74 = 1;
x_75 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1;
x_76 = l_Lean_withTraceNode___at_Lean_Meta_whnfImp___spec__1(x_70, x_69, x_73, x_74, x_75, x_3, x_4, x_5, x_6, x_68);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_79 = x_76;
} else {
 lean_dec_ref(x_76);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_76, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_76, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_83 = x_76;
} else {
 lean_dec_ref(x_76);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_85 = lean_ctor_get(x_66, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_66, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_87 = x_66;
} else {
 lean_dec_ref(x_66);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
else
{
lean_object* x_89; uint64_t x_90; uint8_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; uint8_t x_111; uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; uint64_t x_120; uint64_t x_121; uint64_t x_122; uint64_t x_123; uint64_t x_124; lean_object* x_125; lean_object* x_126; 
x_89 = lean_ctor_get(x_3, 0);
x_90 = lean_ctor_get_uint64(x_3, sizeof(void*)*7);
x_91 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 8);
x_92 = lean_ctor_get(x_3, 1);
x_93 = lean_ctor_get(x_3, 2);
x_94 = lean_ctor_get(x_3, 3);
x_95 = lean_ctor_get(x_3, 4);
x_96 = lean_ctor_get(x_3, 5);
x_97 = lean_ctor_get(x_3, 6);
x_98 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 9);
x_99 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 10);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_89);
lean_dec(x_3);
x_100 = lean_ctor_get_uint8(x_89, 0);
x_101 = lean_ctor_get_uint8(x_89, 1);
x_102 = lean_ctor_get_uint8(x_89, 2);
x_103 = lean_ctor_get_uint8(x_89, 3);
x_104 = lean_ctor_get_uint8(x_89, 4);
x_105 = lean_ctor_get_uint8(x_89, 5);
x_106 = lean_ctor_get_uint8(x_89, 6);
x_107 = lean_ctor_get_uint8(x_89, 7);
x_108 = lean_ctor_get_uint8(x_89, 8);
x_109 = lean_ctor_get_uint8(x_89, 10);
x_110 = lean_ctor_get_uint8(x_89, 11);
x_111 = lean_ctor_get_uint8(x_89, 12);
x_112 = lean_ctor_get_uint8(x_89, 13);
x_113 = lean_ctor_get_uint8(x_89, 14);
x_114 = lean_ctor_get_uint8(x_89, 15);
x_115 = lean_ctor_get_uint8(x_89, 16);
x_116 = lean_ctor_get_uint8(x_89, 17);
if (lean_is_exclusive(x_89)) {
 x_117 = x_89;
} else {
 lean_dec_ref(x_89);
 x_117 = lean_box(0);
}
x_118 = 2;
if (lean_is_scalar(x_117)) {
 x_119 = lean_alloc_ctor(0, 0, 18);
} else {
 x_119 = x_117;
}
lean_ctor_set_uint8(x_119, 0, x_100);
lean_ctor_set_uint8(x_119, 1, x_101);
lean_ctor_set_uint8(x_119, 2, x_102);
lean_ctor_set_uint8(x_119, 3, x_103);
lean_ctor_set_uint8(x_119, 4, x_104);
lean_ctor_set_uint8(x_119, 5, x_105);
lean_ctor_set_uint8(x_119, 6, x_106);
lean_ctor_set_uint8(x_119, 7, x_107);
lean_ctor_set_uint8(x_119, 8, x_108);
lean_ctor_set_uint8(x_119, 9, x_118);
lean_ctor_set_uint8(x_119, 10, x_109);
lean_ctor_set_uint8(x_119, 11, x_110);
lean_ctor_set_uint8(x_119, 12, x_111);
lean_ctor_set_uint8(x_119, 13, x_112);
lean_ctor_set_uint8(x_119, 14, x_113);
lean_ctor_set_uint8(x_119, 15, x_114);
lean_ctor_set_uint8(x_119, 16, x_115);
lean_ctor_set_uint8(x_119, 17, x_116);
x_120 = 2;
x_121 = lean_uint64_shift_right(x_90, x_120);
x_122 = lean_uint64_shift_left(x_121, x_120);
x_123 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4;
x_124 = lean_uint64_lor(x_122, x_123);
x_125 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_125, 0, x_119);
lean_ctor_set(x_125, 1, x_92);
lean_ctor_set(x_125, 2, x_93);
lean_ctor_set(x_125, 3, x_94);
lean_ctor_set(x_125, 4, x_95);
lean_ctor_set(x_125, 5, x_96);
lean_ctor_set(x_125, 6, x_97);
lean_ctor_set_uint64(x_125, sizeof(void*)*7, x_124);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 8, x_91);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 9, x_98);
lean_ctor_set_uint8(x_125, sizeof(void*)*7 + 10, x_99);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_125);
lean_inc(x_1);
x_126 = lean_infer_type(x_1, x_125, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; lean_object* x_135; lean_object* x_136; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
lean_inc(x_127);
x_129 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___boxed), 7, 1);
lean_closure_set(x_129, 0, x_127);
x_130 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3;
x_131 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3;
x_132 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1;
x_133 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___boxed), 11, 6);
lean_closure_set(x_133, 0, x_127);
lean_closure_set(x_133, 1, x_2);
lean_closure_set(x_133, 2, x_130);
lean_closure_set(x_133, 3, x_132);
lean_closure_set(x_133, 4, x_1);
lean_closure_set(x_133, 5, x_131);
x_134 = 1;
x_135 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1;
x_136 = l_Lean_withTraceNode___at_Lean_Meta_whnfImp___spec__1(x_130, x_129, x_133, x_134, x_135, x_125, x_4, x_5, x_6, x_128);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 x_139 = x_136;
} else {
 lean_dec_ref(x_136);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_141 = lean_ctor_get(x_136, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_136, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 x_143 = x_136;
} else {
 lean_dec_ref(x_136);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
return x_144;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_125);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_145 = lean_ctor_get(x_126, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_126, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_147 = x_126;
} else {
 lean_dec_ref(x_126);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
return x_148;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = l_Array_mapMUnsafe_map___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__1(x_9, x_10, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint64_t x_14; uint64_t x_15; lean_object* x_16; 
x_14 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_15 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_16 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4(x_1, x_14, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint64_t x_14; uint64_t x_15; lean_object* x_16; 
x_14 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_15 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_16 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__7(x_1, x_14, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_16;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint64_t x_15; uint64_t x_16; lean_object* x_17; 
x_15 = lean_unbox_uint64(x_3);
lean_dec(x_3);
x_16 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_17 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8(x_1, x_2, x_15, x_4, x_5, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
return x_17;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint64_t x_14; lean_object* x_15; 
x_14 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_15 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint64_t x_12; lean_object* x_13; 
x_12 = lean_unbox_uint64(x_4);
lean_dec(x_4);
x_13 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fastInstance", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4;
x_2 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1;
x_3 = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7;
x_4 = l_Mathlib_Elab_FastInstance_fastInstance___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Elab_FastInstance_fastInstance___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fast_instance%", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Mathlib_Elab_FastInstance_fastInstance___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Mathlib_Elab_FastInstance_fastInstance___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Mathlib_Elab_FastInstance_fastInstance___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Elab_FastInstance_fastInstance___closed__4;
x_2 = l_Mathlib_Elab_FastInstance_fastInstance___closed__6;
x_3 = l_Mathlib_Elab_FastInstance_fastInstance___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Mathlib_Elab_FastInstance_fastInstance___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Mathlib_Elab_FastInstance_fastInstance___closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_fastInstance() {
_start:
{
lean_object* x_1; 
x_1 = l_Mathlib_Elab_FastInstance_fastInstance___closed__11;
return x_1;
}
}
static lean_object* _init_l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Elab_FastInstance_elabFastInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Mathlib_Elab_FastInstance_fastInstance___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at___aux__Lean__Util__SearchPath______elabRules__termCompile__time__search__path_x25__1___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_box(x_17);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_18);
lean_closure_set(x_20, 3, x_19);
x_21 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_20, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_7, 5);
x_27 = l_Lean_replaceRef(x_14, x_26);
lean_dec(x_26);
lean_dec(x_14);
lean_ctor_set(x_7, 5, x_27);
x_28 = l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_23);
x_29 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_23, x_28, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
lean_dec(x_7);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
x_37 = l_Lean_Exception_isInterrupt(x_35);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = l_Lean_Exception_isRuntime(x_35);
if (x_38 == 0)
{
lean_object* x_39; 
lean_free_object(x_29);
x_39 = l_Lean_Elab_logException___at_Lean_Elab_Term_exceptionToSorry___spec__1(x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set(x_39, 0, x_23);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_23);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_23);
x_44 = !lean_is_exclusive(x_39);
if (x_44 == 0)
{
return x_39;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_39, 0);
x_46 = lean_ctor_get(x_39, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_39);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_dec(x_7);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
else
{
lean_dec(x_7);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = lean_ctor_get(x_29, 0);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_29);
x_50 = l_Lean_Exception_isInterrupt(x_48);
if (x_50 == 0)
{
uint8_t x_51; 
x_51 = l_Lean_Exception_isRuntime(x_48);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = l_Lean_Elab_logException___at_Lean_Elab_Term_exceptionToSorry___spec__1(x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_49);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_23);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_23);
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_58 = x_52;
} else {
 lean_dec_ref(x_52);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
lean_object* x_60; 
lean_dec(x_7);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_48);
lean_ctor_set(x_60, 1, x_49);
return x_60;
}
}
else
{
lean_object* x_61; 
lean_dec(x_7);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_48);
lean_ctor_set(x_61, 1, x_49);
return x_61;
}
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_62 = lean_ctor_get(x_7, 0);
x_63 = lean_ctor_get(x_7, 1);
x_64 = lean_ctor_get(x_7, 2);
x_65 = lean_ctor_get(x_7, 3);
x_66 = lean_ctor_get(x_7, 4);
x_67 = lean_ctor_get(x_7, 5);
x_68 = lean_ctor_get(x_7, 6);
x_69 = lean_ctor_get(x_7, 7);
x_70 = lean_ctor_get(x_7, 8);
x_71 = lean_ctor_get(x_7, 9);
x_72 = lean_ctor_get(x_7, 10);
x_73 = lean_ctor_get_uint8(x_7, sizeof(void*)*12);
x_74 = lean_ctor_get(x_7, 11);
x_75 = lean_ctor_get_uint8(x_7, sizeof(void*)*12 + 1);
lean_inc(x_74);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_7);
x_76 = l_Lean_replaceRef(x_14, x_67);
lean_dec(x_67);
lean_dec(x_14);
x_77 = lean_alloc_ctor(0, 12, 2);
lean_ctor_set(x_77, 0, x_62);
lean_ctor_set(x_77, 1, x_63);
lean_ctor_set(x_77, 2, x_64);
lean_ctor_set(x_77, 3, x_65);
lean_ctor_set(x_77, 4, x_66);
lean_ctor_set(x_77, 5, x_76);
lean_ctor_set(x_77, 6, x_68);
lean_ctor_set(x_77, 7, x_69);
lean_ctor_set(x_77, 8, x_70);
lean_ctor_set(x_77, 9, x_71);
lean_ctor_set(x_77, 10, x_72);
lean_ctor_set(x_77, 11, x_74);
lean_ctor_set_uint8(x_77, sizeof(void*)*12, x_73);
lean_ctor_set_uint8(x_77, sizeof(void*)*12 + 1, x_75);
x_78 = l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1;
lean_inc(x_8);
lean_inc(x_77);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_23);
x_79 = l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance(x_23, x_78, x_5, x_6, x_77, x_8, x_24);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_77);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_82 = x_79;
} else {
 lean_dec_ref(x_79);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_79, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_86 = x_79;
} else {
 lean_dec_ref(x_79);
 x_86 = lean_box(0);
}
x_87 = l_Lean_Exception_isInterrupt(x_84);
if (x_87 == 0)
{
uint8_t x_88; 
x_88 = l_Lean_Exception_isRuntime(x_84);
if (x_88 == 0)
{
lean_object* x_89; 
lean_dec(x_86);
x_89 = l_Lean_Elab_logException___at_Lean_Elab_Term_exceptionToSorry___spec__1(x_84, x_3, x_4, x_5, x_6, x_77, x_8, x_85);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_91 = x_89;
} else {
 lean_dec_ref(x_89);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_91;
}
lean_ctor_set(x_92, 0, x_23);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_23);
x_93 = lean_ctor_get(x_89, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_95 = x_89;
} else {
 lean_dec_ref(x_89);
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
lean_object* x_97; 
lean_dec(x_77);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_scalar(x_86)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_86;
}
lean_ctor_set(x_97, 0, x_84);
lean_ctor_set(x_97, 1, x_85);
return x_97;
}
}
else
{
lean_object* x_98; 
lean_dec(x_77);
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_scalar(x_86)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_86;
}
lean_ctor_set(x_98, 0, x_84);
lean_ctor_set(x_98, 1, x_85);
return x_98;
}
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_99 = !lean_is_exclusive(x_22);
if (x_99 == 0)
{
return x_22;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_22, 0);
x_101 = lean_ctor_get(x_22, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_22);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin, lean_object*);
lean_object* initialize_Lean(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_FastInstance(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__1);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__2);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__3);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__4);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__5);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__6);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__7);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__8);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__9);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__10);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__11);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__12);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__13);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__14);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__15);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__16);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__17);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__18);
l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19 = _init_l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5____closed__19);
res = l_Mathlib_Elab_FastInstance_initFn____x40_Mathlib_Tactic_FastInstance___hyg_5_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_error___rarg___closed__4);
l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1 = _init_l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___spec__2___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__1___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__1();
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__4);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__5);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__6);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__7);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__8);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__9);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__10);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__11);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__12);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__4___closed__13);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__4);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__5);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__6);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__7);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__8___closed__8);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__1();
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__9___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___lambda__10___closed__4);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__1);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__2);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__3);
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___closed__4();
l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1 = _init_l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FastInstance_0__Mathlib_Elab_FastInstance_makeFastInstance___boxed__const__1);
l_Mathlib_Elab_FastInstance_fastInstance___closed__1 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__1();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__1);
l_Mathlib_Elab_FastInstance_fastInstance___closed__2 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__2();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__2);
l_Mathlib_Elab_FastInstance_fastInstance___closed__3 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__3();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__3);
l_Mathlib_Elab_FastInstance_fastInstance___closed__4 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__4();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__4);
l_Mathlib_Elab_FastInstance_fastInstance___closed__5 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__5();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__5);
l_Mathlib_Elab_FastInstance_fastInstance___closed__6 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__6();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__6);
l_Mathlib_Elab_FastInstance_fastInstance___closed__7 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__7();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__7);
l_Mathlib_Elab_FastInstance_fastInstance___closed__8 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__8();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__8);
l_Mathlib_Elab_FastInstance_fastInstance___closed__9 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__9();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__9);
l_Mathlib_Elab_FastInstance_fastInstance___closed__10 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__10();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__10);
l_Mathlib_Elab_FastInstance_fastInstance___closed__11 = _init_l_Mathlib_Elab_FastInstance_fastInstance___closed__11();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance___closed__11);
l_Mathlib_Elab_FastInstance_fastInstance = _init_l_Mathlib_Elab_FastInstance_fastInstance();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_fastInstance);
l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1 = _init_l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1();
lean_mark_persistent(l_Mathlib_Elab_FastInstance_elabFastInstance___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
