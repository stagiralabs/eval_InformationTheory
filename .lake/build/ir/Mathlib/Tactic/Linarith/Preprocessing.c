// Lean compiler output
// Module: Mathlib.Tactic.Linarith.Preprocessing
// Imports: Init Mathlib.Tactic.Linarith.Datatypes Mathlib.Tactic.Zify Mathlib.Tactic.CancelDenoms.Core Batteries.Data.RBMap.Basic Mathlib.Control.Basic Mathlib.Util.AtomM
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
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_natToInt___elambda__1___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2;
static lean_object* l_Linarith_removeNe__aux___closed__3;
lean_object* l_Linarith_Preprocessor_globalize(lean_object*);
static lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_ne_x3f_x27(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_cancelDenoms___elambda__1___lambda__1(lean_object*);
static lean_object* l_Linarith_strengthenStrictInt___closed__1;
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3;
static lean_object* l_Linarith_splitConjunctions___closed__3;
static double l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
static lean_object* l_Linarith_compWithZero___closed__4;
lean_object* l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__6;
LEAN_EXPORT lean_object* l_Linarith_filterComparisons___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7;
LEAN_EXPORT lean_object* l_succeeds___at_Linarith_isNatProp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__1;
LEAN_EXPORT lean_object* l_Linarith_cancelDenoms;
static lean_object* l_Linarith_removeNegations___elambda__1___closed__1;
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_splitConjunctions___closed__6;
static lean_object* l_Linarith_defaultPreprocessors___closed__4;
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
double lean_float_div(double, double);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Tactic_run__for___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_nlinarithExtras___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_nlinarithExtras___closed__1;
uint64_t lean_uint64_lor(uint64_t, uint64_t);
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_findSquares___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_isNatProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2___boxed(lean_object*);
static lean_object* l_Linarith_splitConjunctions_aux___closed__5;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_natToInt___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_Expr_Ord___elambda__1(lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__12;
LEAN_EXPORT lean_object* l_Linarith_removeNegations;
static lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__15;
lean_object* l_Linarith_GlobalPreprocessor_branching(lean_object*);
static lean_object* l_Linarith_removeNe__aux___closed__4;
uint8_t l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__2(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Mathlib_instDecidableEqIneq(uint8_t, uint8_t);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1;
lean_object* l_Lean_addRawTrace___at_Linarith_linarithTraceProofs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1___boxed(lean_object*);
static lean_object* l_Linarith_removeNegations___elambda__1___closed__6;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
static lean_object* l_Linarith_mkNonstrictIntProof___closed__2;
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__7;
LEAN_EXPORT lean_object* l_List_foldlM___at_Linarith_natToInt___elambda__1___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_splitConjunctions_aux___closed__3;
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at_Linarith_natToInt___elambda__1___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_getNatComparisons___closed__8;
static lean_object* l_Linarith_removeNe__aux___closed__1;
LEAN_EXPORT lean_object* l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_strengthenStrictInt___closed__4;
LEAN_EXPORT lean_object* l_Linarith_preprocess___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_rearrangeComparison(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_normalizeDenominatorsLHS___closed__2;
static lean_object* l_Linarith_getNatComparisons___closed__7;
static lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2;
static lean_object* l_Linarith_defaultPreprocessors___closed__7;
LEAN_EXPORT lean_object* l_Linarith_compWithZero___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_numeral_x3f(lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2;
static lean_object* l_Linarith_flipNegatedComparison___closed__8;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Linarith_mk__natCast__nonneg__prf___closed__2;
static lean_object* l_Linarith_isNatProp___lambda__1___closed__1;
static lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2;
static lean_object* l_Linarith_strengthenStrictInt___closed__5;
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Linarith_mkNonstrictIntProof___closed__6;
lean_object* l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2(lean_object*);
lean_object* l_Lean_Expr_ineqOrNotIneq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11;
static lean_object* l_Linarith_preprocess___lambda__1___closed__1;
static lean_object* l_Linarith_removeNegations___closed__5;
LEAN_EXPORT lean_object* l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_natToInt;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__11;
static lean_object* l_Linarith_preprocess___lambda__1___closed__2;
static lean_object* l_Linarith_removeNe__aux___closed__2;
LEAN_EXPORT lean_object* l_Linarith_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_splitConjunctions_aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Linarith_removeNegations___elambda__1___lambda__1___closed__3;
static lean_object* l_Linarith_natToInt___closed__6;
static lean_object* l_Linarith_mk__natCast__nonneg__prf___closed__3;
LEAN_EXPORT lean_object* l_Linarith_getNatComparisons(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__10;
static lean_object* l_Linarith_removeNe___closed__2;
size_t lean_ptr_addr(lean_object*);
static lean_object* l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_Linarith_nlinarithExtras___closed__6;
static lean_object* l_Linarith_findSquares___closed__1;
static lean_object* l_Linarith_flipNegatedComparison___closed__4;
static double l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__4;
static lean_object* l_Linarith_flipNegatedComparison___closed__5;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2;
static lean_object* l_Linarith_getNatComparisons___closed__1;
static lean_object* l_Linarith_filterComparisons___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_removeNe__aux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___closed__2;
lean_object* l_Batteries_RBNode_insert___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_nlinarithExtras___closed__4;
static lean_object* l_Linarith_mk__natCast__nonneg__prf___closed__1;
lean_object* l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_removeNegations___elambda__1___closed__4;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_processPostponed___spec__2___rarg(lean_object*, lean_object*);
static lean_object* l_Linarith_filterComparisons___closed__6;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1;
static lean_object* l_Linarith_removeNegations___closed__3;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Linarith_compWithZero___closed__2;
static lean_object* l_Linarith_cancelDenoms___closed__4;
static lean_object* l_Linarith_strengthenStrictInt___closed__6;
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6;
static lean_object* l_Linarith_rearrangeComparison___closed__2;
static lean_object* l_Linarith_removeNe___closed__4;
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_rearrangeComparison___closed__4;
lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Meta_processPostponed___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_getNatComparisons___closed__2;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3;
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__9;
LEAN_EXPORT lean_object* l_List_mapDiagM_go___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5;
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2;
static lean_object* l_Linarith_cancelDenoms___closed__5;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
static lean_object* l_Linarith_removeNe___closed__1;
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_normalizeDenominatorsLHS___closed__1;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_PersistentArray_append___rarg(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_findSquares___spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3;
lean_object* l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8;
LEAN_EXPORT lean_object* l_Linarith_removeNe;
static lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2;
static lean_object* l_Linarith_compWithZero___closed__5;
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_outOfBounds___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Linarith_natToInt___closed__4;
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_getNatComparisons___closed__5;
LEAN_EXPORT lean_object* l_Linarith_strengthenStrictInt___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3;
LEAN_EXPORT lean_object* l_Linarith_nlinarithExtras;
static lean_object* l_Linarith_defaultPreprocessors___closed__5;
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7;
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_getNatComparisons___closed__6;
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
LEAN_EXPORT lean_object* l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now(lean_object*);
static lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1;
static lean_object* l_Linarith_removeNegations___closed__6;
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_findSquares___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_findSquares___spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_isNatProp___lambda__1___closed__3;
static lean_object* l_Linarith_mkNonstrictIntProof___closed__4;
extern lean_object* l_Lean_instInhabitedExpr;
static lean_object* l_Linarith_removeNegations___elambda__1___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_nlinarithExtras___closed__2;
static lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Linarith_filterComparisons___closed__3;
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_natToInt___elambda__1___spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_removeNegations___elambda__1___closed__3;
static lean_object* l_Linarith_splitConjunctions___closed__2;
static lean_object* l_Linarith_getNatComparisons___closed__3;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_threshold;
static lean_object* l_Linarith_Expr_Ord___closed__1;
static lean_object* l_Linarith_nlinarithExtras___closed__5;
static lean_object* l_Linarith_splitConjunctions___closed__1;
static lean_object* l_Linarith_mk__natCast__nonneg__prf___closed__5;
static lean_object* l_Linarith_filterComparisons___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_rearrangeComparison___closed__6;
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1;
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_mkNonstrictIntProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_getNatComparisons___closed__4;
lean_object* l_Mathlib_Tactic_Zify_zifyProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1;
static lean_object* l_Linarith_splitConjunctions_aux___closed__2;
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___closed__1;
LEAN_EXPORT lean_object* l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12;
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_Linarith_preprocess___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
static lean_object* l_Linarith_mkNonstrictIntProof___closed__1;
static lean_object* l_Linarith_isNatCoe___closed__1;
static lean_object* l_Linarith_natToInt___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_splitConjunctions;
static lean_object* l_Linarith_compWithZero___closed__6;
lean_object* l_Lean_withTraceNode___at_Linarith_GlobalBranchingPreprocessor_process___spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_natToInt___closed__3;
static lean_object* l_Linarith_defaultPreprocessors___closed__8;
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
static lean_object* l_Linarith_rearrangeComparison___closed__3;
LEAN_EXPORT lean_object* l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6;
static lean_object* l_Linarith_removeNe__aux___closed__6;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1;
static lean_object* l_Linarith_rearrangeComparison___closed__1;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5;
lean_object* l_Linarith_parseCompAndExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_strengthenStrictInt___closed__3;
lean_object* l_Lean_Expr_ineq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Linarith_mkSingleCompZeroOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_defaultPreprocessors;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_exceptEmoji___rarg(lean_object*);
static lean_object* l_Linarith_removeNegations___elambda__1___closed__2;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_isNatCoe(lean_object*);
static lean_object* l_Linarith_natToInt___closed__5;
lean_object* l_lexOrd___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___closed__3;
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1;
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1(lean_object*);
uint8_t l_Lean_Expr_containsConst(lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__3;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10;
static lean_object* l_Linarith_mk__natCast__nonneg__prf___closed__4;
LEAN_EXPORT lean_object* l_Linarith_preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_removeNegations___elambda__1___closed__5;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_removeNe___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Linarith_compWithZero___closed__3;
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2;
static lean_object* l_Linarith_defaultPreprocessors___closed__13;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4;
static lean_object* l_Linarith_removeNe___closed__6;
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1;
lean_object* l_CancelDenoms_derive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_removeNegations___closed__2;
static lean_object* l_Linarith_removeNegations___closed__1;
LEAN_EXPORT lean_object* l_Linarith_filterComparisons;
static lean_object* l_Linarith_findSquares___closed__3;
static lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Linarith_Expr_Ord;
static lean_object* l_Linarith_compWithZero___closed__1;
static lean_object* l_Linarith_rearrangeComparison___closed__5;
static lean_object* l_Linarith_flipNegatedComparison___closed__9;
lean_object* l_Linarith_GlobalBranchingPreprocessor_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__1(lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1___boxed(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at_Linarith_findSquares___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(lean_object*, lean_object*);
lean_object* l_Linarith_linarithGetProofsMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_mkNonstrictIntProof___closed__5;
LEAN_EXPORT lean_object* l_try_x3f___at_Linarith_flipNegatedComparison___spec__1(lean_object*);
static lean_object* l_Linarith_splitConjunctions___closed__7;
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
static lean_object* l_Linarith_flipNegatedComparison___closed__10;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7(lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___closed__6;
LEAN_EXPORT lean_object* l_List_findSomeM_x3f___at_Linarith_removeNe__aux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__1;
static lean_object* l_Linarith_mkNonstrictIntProof___closed__3;
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_findSquares___spec__3;
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___closed__1;
static lean_object* l_Linarith_flipNegatedComparison___closed__6;
LEAN_EXPORT lean_object* l_Linarith_isNatProp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_Expr_Ord___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2;
static lean_object* l_Linarith_removeNegations___closed__4;
static lean_object* l_Linarith_removeNe__aux___closed__5;
static lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2;
static lean_object* l_Linarith_defaultPreprocessors___closed__11;
lean_object* l_Mathlib_Tactic_AtomM_addAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_rewriteType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3;
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Linarith_isNatProp___lambda__1___closed__2;
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Linarith_preprocess___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_strengthenStrictInt;
lean_object* l_Lean_Expr_fvar___override(lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__12;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
static lean_object* l_Linarith_strengthenStrictInt___closed__2;
static lean_object* l_Linarith_nlinarithExtras___closed__3;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6;
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3;
static lean_object* l_Linarith_filterComparisons___closed__1;
static lean_object* l_Linarith_defaultPreprocessors___closed__2;
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Mathlib_Tactic_AtomM_run___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_findSquares___closed__2;
LEAN_EXPORT lean_object* l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9;
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_splitConjunctions___closed__5;
LEAN_EXPORT lean_object* l_succeeds___at_Linarith_isNatProp___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_flipNegatedComparison(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_cancelDenoms___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Batteries_RBNode_toList___rarg(lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7;
static lean_object* l_Linarith_splitConjunctions_aux___closed__4;
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1;
static lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4;
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4;
static lean_object* l_Linarith_removeNe___closed__5;
static lean_object* l_Linarith_defaultPreprocessors___closed__14;
LEAN_EXPORT lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___boxed(lean_object*);
static lean_object* l_Linarith_filterComparisons___closed__5;
lean_object* l_Lean_MessageData_bracket(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_flipNegatedComparison___closed__2;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMap___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
static lean_object* l_Linarith_splitConjunctions_aux___closed__1;
static lean_object* l_Linarith_removeNegations___elambda__1___lambda__1___closed__1;
static lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1;
LEAN_EXPORT lean_object* l_Linarith_findSquares(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_natToInt___closed__2;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_preprocess___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4(lean_object*, lean_object*);
static lean_object* l_Linarith_defaultPreprocessors___closed__3;
static lean_object* l_Linarith_preprocess___closed__1;
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_compWithZero;
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__6(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9;
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at_Linarith_mk__natCast__nonneg__prf___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1;
static lean_object* l_Linarith_splitConjunctions___closed__4;
double lean_float_sub(double, double);
LEAN_EXPORT uint8_t l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1(lean_object*);
static lean_object* _init_l_Linarith_splitConjunctions_aux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("And", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions_aux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("left", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions_aux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions_aux___closed__1;
x_2 = l_Linarith_splitConjunctions_aux___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_splitConjunctions_aux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("right", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions_aux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions_aux___closed__1;
x_2 = l_Linarith_splitConjunctions_aux___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_splitConjunctions_aux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_8, x_2, x_3, x_4, x_5, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Expr_getAppFnArgs(x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_14, 1);
x_19 = lean_ctor_get(x_14, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l_Linarith_splitConjunctions_aux___closed__1;
x_22 = lean_string_dec_eq(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_23);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_array_get_size(x_18);
lean_dec(x_18);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_box(0);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_27);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_free_object(x_10);
x_28 = lean_box(0);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_28);
lean_ctor_set(x_14, 0, x_1);
x_29 = lean_array_mk(x_14);
x_30 = l_Linarith_splitConjunctions_aux___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_29);
x_31 = l_Lean_Meta_mkAppM(x_30, x_29, x_2, x_3, x_4, x_5, x_13);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_34 = l_Linarith_splitConjunctions_aux(x_32, x_2, x_3, x_4, x_5, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Linarith_splitConjunctions_aux___closed__5;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_38 = l_Lean_Meta_mkAppM(x_37, x_29, x_2, x_3, x_4, x_5, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Linarith_splitConjunctions_aux(x_39, x_2, x_3, x_4, x_5, x_40);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = l_List_appendTR___rarg(x_35, x_43);
lean_ctor_set(x_41, 0, x_44);
return x_41;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_41, 0);
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_41);
x_47 = l_List_appendTR___rarg(x_35, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_35);
x_49 = !lean_is_exclusive(x_41);
if (x_49 == 0)
{
return x_41;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_41, 0);
x_51 = lean_ctor_get(x_41, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_41);
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
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_38);
if (x_53 == 0)
{
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_34);
if (x_57 == 0)
{
return x_34;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_34, 0);
x_59 = lean_ctor_get(x_34, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_34);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_31);
if (x_61 == 0)
{
return x_31;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_31, 0);
x_63 = lean_ctor_get(x_31, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_31);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_14, 1);
lean_inc(x_65);
lean_dec(x_14);
x_66 = lean_ctor_get(x_15, 1);
lean_inc(x_66);
lean_dec(x_15);
x_67 = l_Linarith_splitConjunctions_aux___closed__1;
x_68 = lean_string_dec_eq(x_66, x_67);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_65);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_1);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_10, 0, x_70);
return x_10;
}
else
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_array_get_size(x_65);
lean_dec(x_65);
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_nat_dec_eq(x_71, x_72);
lean_dec(x_71);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_1);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_10, 0, x_75);
return x_10;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_free_object(x_10);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_1);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_array_mk(x_77);
x_79 = l_Linarith_splitConjunctions_aux___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_78);
x_80 = l_Lean_Meta_mkAppM(x_79, x_78, x_2, x_3, x_4, x_5, x_13);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_83 = l_Linarith_splitConjunctions_aux(x_81, x_2, x_3, x_4, x_5, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Linarith_splitConjunctions_aux___closed__5;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_87 = l_Lean_Meta_mkAppM(x_86, x_78, x_2, x_3, x_4, x_5, x_85);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Linarith_splitConjunctions_aux(x_88, x_2, x_3, x_4, x_5, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_93 = x_90;
} else {
 lean_dec_ref(x_90);
 x_93 = lean_box(0);
}
x_94 = l_List_appendTR___rarg(x_84, x_91);
if (lean_is_scalar(x_93)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_93;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_92);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_84);
x_96 = lean_ctor_get(x_90, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_90, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_98 = x_90;
} else {
 lean_dec_ref(x_90);
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
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_84);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = lean_ctor_get(x_87, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_87, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_102 = x_87;
} else {
 lean_dec_ref(x_87);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_78);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = lean_ctor_get(x_83, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_83, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_106 = x_83;
} else {
 lean_dec_ref(x_83);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_78);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_108 = lean_ctor_get(x_80, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_80, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_110 = x_80;
} else {
 lean_dec_ref(x_80);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_14);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_14, 1);
lean_dec(x_113);
x_114 = lean_ctor_get(x_14, 0);
lean_dec(x_114);
x_115 = lean_box(0);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_115);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_14);
x_116 = lean_box(0);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_1);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set(x_10, 0, x_117);
return x_10;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = !lean_is_exclusive(x_14);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_14, 1);
lean_dec(x_119);
x_120 = lean_ctor_get(x_14, 0);
lean_dec(x_120);
x_121 = lean_box(0);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 1, x_121);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_14);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_1);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_10, 0, x_123);
return x_10;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_10, 0);
x_125 = lean_ctor_get(x_10, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_10);
x_126 = l_Lean_Expr_getAppFnArgs(x_124);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
if (lean_obj_tag(x_127) == 1)
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_130 = x_126;
} else {
 lean_dec_ref(x_126);
 x_130 = lean_box(0);
}
x_131 = lean_ctor_get(x_127, 1);
lean_inc(x_131);
lean_dec(x_127);
x_132 = l_Linarith_splitConjunctions_aux___closed__1;
x_133 = lean_string_dec_eq(x_131, x_132);
lean_dec(x_131);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_129);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_134 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_130;
 lean_ctor_set_tag(x_135, 1);
}
lean_ctor_set(x_135, 0, x_1);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_125);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_137 = lean_array_get_size(x_129);
lean_dec(x_129);
x_138 = lean_unsigned_to_nat(2u);
x_139 = lean_nat_dec_eq(x_137, x_138);
lean_dec(x_137);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_130;
 lean_ctor_set_tag(x_141, 1);
}
lean_ctor_set(x_141, 0, x_1);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_125);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_143 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_130;
 lean_ctor_set_tag(x_144, 1);
}
lean_ctor_set(x_144, 0, x_1);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_array_mk(x_144);
x_146 = l_Linarith_splitConjunctions_aux___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_145);
x_147 = l_Lean_Meta_mkAppM(x_146, x_145, x_2, x_3, x_4, x_5, x_125);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_150 = l_Linarith_splitConjunctions_aux(x_148, x_2, x_3, x_4, x_5, x_149);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_153 = l_Linarith_splitConjunctions_aux___closed__5;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_154 = l_Lean_Meta_mkAppM(x_153, x_145, x_2, x_3, x_4, x_5, x_152);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = l_Linarith_splitConjunctions_aux(x_155, x_2, x_3, x_4, x_5, x_156);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_160 = x_157;
} else {
 lean_dec_ref(x_157);
 x_160 = lean_box(0);
}
x_161 = l_List_appendTR___rarg(x_151, x_158);
if (lean_is_scalar(x_160)) {
 x_162 = lean_alloc_ctor(0, 2, 0);
} else {
 x_162 = x_160;
}
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_159);
return x_162;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_151);
x_163 = lean_ctor_get(x_157, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_157, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_165 = x_157;
} else {
 lean_dec_ref(x_157);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_151);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_167 = lean_ctor_get(x_154, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_154, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_169 = x_154;
} else {
 lean_dec_ref(x_154);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(1, 2, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_167);
lean_ctor_set(x_170, 1, x_168);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_145);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_171 = lean_ctor_get(x_150, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_150, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_173 = x_150;
} else {
 lean_dec_ref(x_150);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(1, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_145);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_175 = lean_ctor_get(x_147, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_147, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_177 = x_147;
} else {
 lean_dec_ref(x_147);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_179 = x_126;
} else {
 lean_dec_ref(x_126);
 x_179 = lean_box(0);
}
x_180 = lean_box(0);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_179;
 lean_ctor_set_tag(x_181, 1);
}
lean_ctor_set(x_181, 0, x_1);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_125);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_127);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_183 = x_126;
} else {
 lean_dec_ref(x_126);
 x_183 = lean_box(0);
}
x_184 = lean_box(0);
if (lean_is_scalar(x_183)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_183;
 lean_ctor_set_tag(x_185, 1);
}
lean_ctor_set(x_185, 0, x_1);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_125);
return x_186;
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_187 = !lean_is_exclusive(x_7);
if (x_187 == 0)
{
return x_7;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_7, 0);
x_189 = lean_ctor_get(x_7, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_7);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Linarith", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("splitConjunctions", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_splitConjunctions___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("split conjunctions", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__3;
x_2 = l_Linarith_splitConjunctions___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_splitConjunctions_aux), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_splitConjunctions___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__5;
x_2 = l_Linarith_splitConjunctions___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_splitConjunctions() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_splitConjunctions___closed__7;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_filterComparisons___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_8, x_2, x_3, x_4, x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_ineqOrNotIneq_x3f(x_11, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_unbox(x_21);
lean_dec(x_21);
x_25 = l_Mathlib_instDecidableEqIneq(x_24, x_23);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_26);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_13, 0, x_15);
return x_13;
}
else
{
lean_object* x_27; 
lean_free_object(x_15);
lean_dec(x_1);
x_27 = lean_box(0);
lean_ctor_set(x_13, 0, x_27);
return x_13;
}
}
else
{
lean_object* x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_15, 0);
lean_inc(x_28);
lean_dec(x_15);
x_29 = 0;
x_30 = lean_unbox(x_28);
lean_dec(x_28);
x_31 = l_Mathlib_instDecidableEqIneq(x_30, x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_13, 0, x_33);
return x_13;
}
else
{
lean_object* x_34; 
lean_dec(x_1);
x_34 = lean_box(0);
lean_ctor_set(x_13, 0, x_34);
return x_13;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; 
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_dec(x_13);
x_36 = lean_ctor_get(x_15, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 x_37 = x_15;
} else {
 lean_dec_ref(x_15);
 x_37 = lean_box(0);
}
x_38 = 0;
x_39 = lean_unbox(x_36);
lean_dec(x_36);
x_40 = l_Mathlib_instDecidableEqIneq(x_39, x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_37;
 lean_ctor_set_tag(x_42, 1);
}
lean_ctor_set(x_42, 0, x_1);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_35);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_37);
lean_dec(x_1);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_35);
return x_45;
}
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_15);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_15, 1);
lean_dec(x_47);
x_48 = lean_ctor_get(x_15, 0);
lean_dec(x_48);
x_49 = !lean_is_exclusive(x_13);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_13, 0);
lean_dec(x_50);
x_51 = lean_box(0);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_51);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_13, 0, x_15);
return x_13;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_13, 1);
lean_inc(x_52);
lean_dec(x_13);
x_53 = lean_box(0);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_53);
lean_ctor_set(x_15, 0, x_1);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_15);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_15);
x_55 = lean_ctor_get(x_13, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_56 = x_13;
} else {
 lean_dec_ref(x_13);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_1);
lean_ctor_set(x_58, 1, x_57);
if (lean_is_scalar(x_56)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_56;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_55);
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
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_13, 0);
x_62 = l_Lean_Exception_isInterrupt(x_61);
if (x_62 == 0)
{
uint8_t x_63; 
x_63 = l_Lean_Exception_isRuntime(x_61);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_61);
x_64 = lean_box(0);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_64);
return x_13;
}
else
{
return x_13;
}
}
else
{
return x_13;
}
}
else
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_65 = lean_ctor_get(x_13, 0);
x_66 = lean_ctor_get(x_13, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_13);
x_67 = l_Lean_Exception_isInterrupt(x_65);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = l_Lean_Exception_isRuntime(x_65);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_65);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_66);
return x_70;
}
else
{
lean_object* x_71; 
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_66);
return x_71;
}
}
else
{
lean_object* x_72; 
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_66);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_7);
if (x_73 == 0)
{
return x_7;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_7, 0);
x_75 = lean_ctor_get(x_7, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_7);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("filterComparisons", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_filterComparisons___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("filter terms that are not proofs of comparisons", 47, 47);
return x_1;
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_filterComparisons___closed__2;
x_2 = l_Linarith_filterComparisons___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_filterComparisons___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_filterComparisons___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_filterComparisons___closed__4;
x_2 = l_Linarith_filterComparisons___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_filterComparisons() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_filterComparisons___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
x_21 = l_Lean_Exception_isInterrupt(x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_free_object(x_10);
lean_dec(x_19);
x_23 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = l_Lean_Exception_isInterrupt(x_30);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Exception_isRuntime(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_30);
x_34 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_31);
return x_39;
}
}
else
{
lean_object* x_40; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_31);
return x_40;
}
}
}
}
}
LEAN_EXPORT lean_object* l_try_x3f___at_Linarith_flipNegatedComparison___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not a comparison (flipNegatedComparison): ", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_flipNegatedComparison___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_flipNegatedComparison___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LE", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LT", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le_of_not_gt", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_flipNegatedComparison___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt_of_not_ge", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_flipNegatedComparison___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_flipNegatedComparison___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_flipNegatedComparison(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_8 = l_Lean_Expr_getAppFnArgs(x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
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
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_8, 1);
x_14 = lean_ctor_get(x_8, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = l_Linarith_flipNegatedComparison___closed__5;
x_18 = lean_string_dec_eq(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Linarith_flipNegatedComparison___closed__6;
x_20 = lean_string_dec_eq(x_16, x_19);
lean_dec(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_1);
x_21 = l_Lean_MessageData_ofExpr(x_2);
x_22 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_21);
lean_ctor_set(x_8, 0, x_22);
x_23 = l_Linarith_flipNegatedComparison___closed__4;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_8);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_24, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_25;
}
else
{
lean_object* x_26; uint8_t x_27; 
x_26 = l_Linarith_flipNegatedComparison___closed__7;
x_27 = lean_string_dec_eq(x_15, x_26);
lean_dec(x_15);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_13);
lean_dec(x_1);
x_28 = l_Lean_MessageData_ofExpr(x_2);
x_29 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_28);
lean_ctor_set(x_8, 0, x_29);
x_30 = l_Linarith_flipNegatedComparison___closed__4;
x_31 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_31, 0, x_8);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_31, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_array_get_size(x_13);
lean_dec(x_13);
x_34 = lean_unsigned_to_nat(4u);
x_35 = lean_nat_dec_eq(x_33, x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_1);
x_36 = l_Lean_MessageData_ofExpr(x_2);
x_37 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_36);
lean_ctor_set(x_8, 0, x_37);
x_38 = l_Linarith_flipNegatedComparison___closed__4;
x_39 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_39, 0, x_8);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_39, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_2);
x_41 = lean_box(0);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 1, x_41);
lean_ctor_set(x_8, 0, x_1);
x_42 = lean_array_mk(x_8);
x_43 = l_Linarith_flipNegatedComparison___closed__9;
x_44 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_44, 0, x_43);
lean_closure_set(x_44, 1, x_42);
x_45 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_44, x_3, x_4, x_5, x_6, x_7);
return x_45;
}
}
}
}
else
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_16);
x_46 = l_Linarith_flipNegatedComparison___closed__10;
x_47 = lean_string_dec_eq(x_15, x_46);
lean_dec(x_15);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_13);
lean_dec(x_1);
x_48 = l_Lean_MessageData_ofExpr(x_2);
x_49 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_48);
lean_ctor_set(x_8, 0, x_49);
x_50 = l_Linarith_flipNegatedComparison___closed__4;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_8);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_51, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = lean_array_get_size(x_13);
lean_dec(x_13);
x_54 = lean_unsigned_to_nat(4u);
x_55 = lean_nat_dec_eq(x_53, x_54);
lean_dec(x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_1);
x_56 = l_Lean_MessageData_ofExpr(x_2);
x_57 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_56);
lean_ctor_set(x_8, 0, x_57);
x_58 = l_Linarith_flipNegatedComparison___closed__4;
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_8);
lean_ctor_set(x_59, 1, x_58);
x_60 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_59, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_2);
x_61 = lean_box(0);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 1, x_61);
lean_ctor_set(x_8, 0, x_1);
x_62 = lean_array_mk(x_8);
x_63 = l_Linarith_flipNegatedComparison___closed__12;
x_64 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_64, 0, x_63);
lean_closure_set(x_64, 1, x_62);
x_65 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_64, x_3, x_4, x_5, x_6, x_7);
return x_65;
}
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_66 = lean_ctor_get(x_8, 1);
lean_inc(x_66);
lean_dec(x_8);
x_67 = lean_ctor_get(x_9, 1);
lean_inc(x_67);
lean_dec(x_9);
x_68 = lean_ctor_get(x_10, 1);
lean_inc(x_68);
lean_dec(x_10);
x_69 = l_Linarith_flipNegatedComparison___closed__5;
x_70 = lean_string_dec_eq(x_68, x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = l_Linarith_flipNegatedComparison___closed__6;
x_72 = lean_string_dec_eq(x_68, x_71);
lean_dec(x_68);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_1);
x_73 = l_Lean_MessageData_ofExpr(x_2);
x_74 = l_Linarith_flipNegatedComparison___closed__2;
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = l_Linarith_flipNegatedComparison___closed__4;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_77, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_78;
}
else
{
lean_object* x_79; uint8_t x_80; 
x_79 = l_Linarith_flipNegatedComparison___closed__7;
x_80 = lean_string_dec_eq(x_67, x_79);
lean_dec(x_67);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_66);
lean_dec(x_1);
x_81 = l_Lean_MessageData_ofExpr(x_2);
x_82 = l_Linarith_flipNegatedComparison___closed__2;
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Linarith_flipNegatedComparison___closed__4;
x_85 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_85, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = lean_array_get_size(x_66);
lean_dec(x_66);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_eq(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_1);
x_90 = l_Lean_MessageData_ofExpr(x_2);
x_91 = l_Linarith_flipNegatedComparison___closed__2;
x_92 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
x_93 = l_Linarith_flipNegatedComparison___closed__4;
x_94 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_94, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_2);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_1);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_mk(x_97);
x_99 = l_Linarith_flipNegatedComparison___closed__9;
x_100 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_100, 0, x_99);
lean_closure_set(x_100, 1, x_98);
x_101 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_100, x_3, x_4, x_5, x_6, x_7);
return x_101;
}
}
}
}
else
{
lean_object* x_102; uint8_t x_103; 
lean_dec(x_68);
x_102 = l_Linarith_flipNegatedComparison___closed__10;
x_103 = lean_string_dec_eq(x_67, x_102);
lean_dec(x_67);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_66);
lean_dec(x_1);
x_104 = l_Lean_MessageData_ofExpr(x_2);
x_105 = l_Linarith_flipNegatedComparison___closed__2;
x_106 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = l_Linarith_flipNegatedComparison___closed__4;
x_108 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_108, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_110 = lean_array_get_size(x_66);
lean_dec(x_66);
x_111 = lean_unsigned_to_nat(4u);
x_112 = lean_nat_dec_eq(x_110, x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_1);
x_113 = l_Lean_MessageData_ofExpr(x_2);
x_114 = l_Linarith_flipNegatedComparison___closed__2;
x_115 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = l_Linarith_flipNegatedComparison___closed__4;
x_117 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_117, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_2);
x_119 = lean_box(0);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_1);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_array_mk(x_120);
x_122 = l_Linarith_flipNegatedComparison___closed__12;
x_123 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_123, 0, x_122);
lean_closure_set(x_123, 1, x_121);
x_124 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_123, x_3, x_4, x_5, x_6, x_7);
return x_124;
}
}
}
}
}
else
{
uint8_t x_125; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_125 = !lean_is_exclusive(x_8);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_126 = lean_ctor_get(x_8, 1);
lean_dec(x_126);
x_127 = lean_ctor_get(x_8, 0);
lean_dec(x_127);
x_128 = l_Lean_MessageData_ofExpr(x_2);
x_129 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_128);
lean_ctor_set(x_8, 0, x_129);
x_130 = l_Linarith_flipNegatedComparison___closed__4;
x_131 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_131, 0, x_8);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_131, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_8);
x_133 = l_Lean_MessageData_ofExpr(x_2);
x_134 = l_Linarith_flipNegatedComparison___closed__2;
x_135 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = l_Linarith_flipNegatedComparison___closed__4;
x_137 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_137, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_138;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_139 = !lean_is_exclusive(x_8);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_140 = lean_ctor_get(x_8, 1);
lean_dec(x_140);
x_141 = lean_ctor_get(x_8, 0);
lean_dec(x_141);
x_142 = l_Lean_MessageData_ofExpr(x_2);
x_143 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_142);
lean_ctor_set(x_8, 0, x_143);
x_144 = l_Linarith_flipNegatedComparison___closed__4;
x_145 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_145, 0, x_8);
lean_ctor_set(x_145, 1, x_144);
x_146 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_145, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_8);
x_147 = l_Lean_MessageData_ofExpr(x_2);
x_148 = l_Linarith_flipNegatedComparison___closed__2;
x_149 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_Linarith_flipNegatedComparison___closed__4;
x_151 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_151, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_9);
lean_dec(x_1);
x_153 = !lean_is_exclusive(x_8);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_154 = lean_ctor_get(x_8, 1);
lean_dec(x_154);
x_155 = lean_ctor_get(x_8, 0);
lean_dec(x_155);
x_156 = l_Lean_MessageData_ofExpr(x_2);
x_157 = l_Linarith_flipNegatedComparison___closed__2;
lean_ctor_set_tag(x_8, 7);
lean_ctor_set(x_8, 1, x_156);
lean_ctor_set(x_8, 0, x_157);
x_158 = l_Linarith_flipNegatedComparison___closed__4;
x_159 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_159, 0, x_8);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_159, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_8);
x_161 = l_Lean_MessageData_ofExpr(x_2);
x_162 = l_Linarith_flipNegatedComparison___closed__2;
x_163 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_Linarith_flipNegatedComparison___closed__4;
x_165 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_throwError___at_Lean_Expr_reduceProjStruct_x3f___spec__1(x_165, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_166;
}
}
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Not", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static uint64_t _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__3() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 2;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = 0;
x_10 = lean_box(0);
lean_inc(x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__2;
x_16 = l_Lean_Expr_const___override(x_15, x_2);
lean_inc(x_13);
x_17 = l_Lean_Expr_app___override(x_16, x_13);
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_20 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_4, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_4, 3);
lean_inc(x_23);
x_24 = lean_ctor_get(x_4, 4);
lean_inc(x_24);
x_25 = lean_ctor_get(x_4, 5);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 6);
lean_inc(x_26);
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
uint8_t x_28; uint8_t x_29; uint8_t x_30; uint64_t x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_29 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_30 = 2;
lean_ctor_set_uint8(x_18, 9, x_30);
x_31 = 2;
x_32 = lean_uint64_shift_right(x_19, x_31);
x_33 = lean_uint64_shift_left(x_32, x_31);
x_34 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__3;
x_35 = lean_uint64_lor(x_33, x_34);
x_36 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_36, 0, x_18);
lean_ctor_set(x_36, 1, x_21);
lean_ctor_set(x_36, 2, x_22);
lean_ctor_set(x_36, 3, x_23);
lean_ctor_set(x_36, 4, x_24);
lean_ctor_set(x_36, 5, x_25);
lean_ctor_set(x_36, 6, x_26);
lean_ctor_set_uint64(x_36, sizeof(void*)*7, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*7 + 8, x_20);
lean_ctor_set_uint8(x_36, sizeof(void*)*7 + 9, x_28);
lean_ctor_set_uint8(x_36, sizeof(void*)*7 + 10, x_29);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l_Lean_Meta_isExprDefEq(x_17, x_3, x_36, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
uint8_t x_40; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 0);
lean_dec(x_41);
x_42 = 0;
x_43 = lean_box(x_42);
lean_ctor_set(x_11, 1, x_43);
lean_ctor_set(x_37, 0, x_11);
return x_37;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_dec(x_37);
x_45 = 0;
x_46 = lean_box(x_45);
lean_ctor_set(x_11, 1, x_46);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_11);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = lean_ctor_get(x_37, 1);
lean_inc(x_48);
lean_dec(x_37);
x_49 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = 1;
x_53 = lean_box(x_52);
lean_ctor_set(x_11, 1, x_53);
lean_ctor_set(x_11, 0, x_51);
lean_ctor_set(x_49, 0, x_11);
return x_49;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_49, 0);
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_49);
x_56 = 1;
x_57 = lean_box(x_56);
lean_ctor_set(x_11, 1, x_57);
lean_ctor_set(x_11, 0, x_54);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_11);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_59 = !lean_is_exclusive(x_37);
if (x_59 == 0)
{
return x_37;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_37, 0);
x_61 = lean_ctor_get(x_37, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_37);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; lean_object* x_83; uint64_t x_84; uint64_t x_85; uint64_t x_86; uint64_t x_87; uint64_t x_88; lean_object* x_89; lean_object* x_90; 
x_63 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_64 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_65 = lean_ctor_get_uint8(x_18, 0);
x_66 = lean_ctor_get_uint8(x_18, 1);
x_67 = lean_ctor_get_uint8(x_18, 2);
x_68 = lean_ctor_get_uint8(x_18, 3);
x_69 = lean_ctor_get_uint8(x_18, 4);
x_70 = lean_ctor_get_uint8(x_18, 5);
x_71 = lean_ctor_get_uint8(x_18, 6);
x_72 = lean_ctor_get_uint8(x_18, 7);
x_73 = lean_ctor_get_uint8(x_18, 8);
x_74 = lean_ctor_get_uint8(x_18, 10);
x_75 = lean_ctor_get_uint8(x_18, 11);
x_76 = lean_ctor_get_uint8(x_18, 12);
x_77 = lean_ctor_get_uint8(x_18, 13);
x_78 = lean_ctor_get_uint8(x_18, 14);
x_79 = lean_ctor_get_uint8(x_18, 15);
x_80 = lean_ctor_get_uint8(x_18, 16);
x_81 = lean_ctor_get_uint8(x_18, 17);
lean_dec(x_18);
x_82 = 2;
x_83 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_83, 0, x_65);
lean_ctor_set_uint8(x_83, 1, x_66);
lean_ctor_set_uint8(x_83, 2, x_67);
lean_ctor_set_uint8(x_83, 3, x_68);
lean_ctor_set_uint8(x_83, 4, x_69);
lean_ctor_set_uint8(x_83, 5, x_70);
lean_ctor_set_uint8(x_83, 6, x_71);
lean_ctor_set_uint8(x_83, 7, x_72);
lean_ctor_set_uint8(x_83, 8, x_73);
lean_ctor_set_uint8(x_83, 9, x_82);
lean_ctor_set_uint8(x_83, 10, x_74);
lean_ctor_set_uint8(x_83, 11, x_75);
lean_ctor_set_uint8(x_83, 12, x_76);
lean_ctor_set_uint8(x_83, 13, x_77);
lean_ctor_set_uint8(x_83, 14, x_78);
lean_ctor_set_uint8(x_83, 15, x_79);
lean_ctor_set_uint8(x_83, 16, x_80);
lean_ctor_set_uint8(x_83, 17, x_81);
x_84 = 2;
x_85 = lean_uint64_shift_right(x_19, x_84);
x_86 = lean_uint64_shift_left(x_85, x_84);
x_87 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__3;
x_88 = lean_uint64_lor(x_86, x_87);
x_89 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_21);
lean_ctor_set(x_89, 2, x_22);
lean_ctor_set(x_89, 3, x_23);
lean_ctor_set(x_89, 4, x_24);
lean_ctor_set(x_89, 5, x_25);
lean_ctor_set(x_89, 6, x_26);
lean_ctor_set_uint64(x_89, sizeof(void*)*7, x_88);
lean_ctor_set_uint8(x_89, sizeof(void*)*7 + 8, x_20);
lean_ctor_set_uint8(x_89, sizeof(void*)*7 + 9, x_63);
lean_ctor_set_uint8(x_89, sizeof(void*)*7 + 10, x_64);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_90 = l_Lean_Meta_isExprDefEq(x_17, x_3, x_89, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_unbox(x_91);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
x_95 = 0;
x_96 = lean_box(x_95);
lean_ctor_set(x_11, 1, x_96);
if (lean_is_scalar(x_94)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_94;
}
lean_ctor_set(x_97, 0, x_11);
lean_ctor_set(x_97, 1, x_93);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; 
x_98 = lean_ctor_get(x_90, 1);
lean_inc(x_98);
lean_dec(x_90);
x_99 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_4, x_5, x_6, x_7, x_98);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
x_103 = 1;
x_104 = lean_box(x_103);
lean_ctor_set(x_11, 1, x_104);
lean_ctor_set(x_11, 0, x_100);
if (lean_is_scalar(x_102)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_102;
}
lean_ctor_set(x_105, 0, x_11);
lean_ctor_set(x_105, 1, x_101);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_106 = lean_ctor_get(x_90, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_90, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_108 = x_90;
} else {
 lean_dec_ref(x_90);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint64_t x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; uint8_t x_125; uint8_t x_126; uint8_t x_127; uint8_t x_128; uint8_t x_129; uint8_t x_130; uint8_t x_131; uint8_t x_132; uint8_t x_133; uint8_t x_134; uint8_t x_135; uint8_t x_136; uint8_t x_137; uint8_t x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; uint64_t x_146; uint64_t x_147; uint64_t x_148; uint64_t x_149; uint64_t x_150; lean_object* x_151; lean_object* x_152; 
x_110 = lean_ctor_get(x_11, 0);
x_111 = lean_ctor_get(x_11, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_11);
x_112 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__2;
x_113 = l_Lean_Expr_const___override(x_112, x_2);
lean_inc(x_110);
x_114 = l_Lean_Expr_app___override(x_113, x_110);
x_115 = lean_ctor_get(x_4, 0);
lean_inc(x_115);
x_116 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_117 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_118 = lean_ctor_get(x_4, 1);
lean_inc(x_118);
x_119 = lean_ctor_get(x_4, 2);
lean_inc(x_119);
x_120 = lean_ctor_get(x_4, 3);
lean_inc(x_120);
x_121 = lean_ctor_get(x_4, 4);
lean_inc(x_121);
x_122 = lean_ctor_get(x_4, 5);
lean_inc(x_122);
x_123 = lean_ctor_get(x_4, 6);
lean_inc(x_123);
x_124 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_125 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_126 = lean_ctor_get_uint8(x_115, 0);
x_127 = lean_ctor_get_uint8(x_115, 1);
x_128 = lean_ctor_get_uint8(x_115, 2);
x_129 = lean_ctor_get_uint8(x_115, 3);
x_130 = lean_ctor_get_uint8(x_115, 4);
x_131 = lean_ctor_get_uint8(x_115, 5);
x_132 = lean_ctor_get_uint8(x_115, 6);
x_133 = lean_ctor_get_uint8(x_115, 7);
x_134 = lean_ctor_get_uint8(x_115, 8);
x_135 = lean_ctor_get_uint8(x_115, 10);
x_136 = lean_ctor_get_uint8(x_115, 11);
x_137 = lean_ctor_get_uint8(x_115, 12);
x_138 = lean_ctor_get_uint8(x_115, 13);
x_139 = lean_ctor_get_uint8(x_115, 14);
x_140 = lean_ctor_get_uint8(x_115, 15);
x_141 = lean_ctor_get_uint8(x_115, 16);
x_142 = lean_ctor_get_uint8(x_115, 17);
if (lean_is_exclusive(x_115)) {
 x_143 = x_115;
} else {
 lean_dec_ref(x_115);
 x_143 = lean_box(0);
}
x_144 = 2;
if (lean_is_scalar(x_143)) {
 x_145 = lean_alloc_ctor(0, 0, 18);
} else {
 x_145 = x_143;
}
lean_ctor_set_uint8(x_145, 0, x_126);
lean_ctor_set_uint8(x_145, 1, x_127);
lean_ctor_set_uint8(x_145, 2, x_128);
lean_ctor_set_uint8(x_145, 3, x_129);
lean_ctor_set_uint8(x_145, 4, x_130);
lean_ctor_set_uint8(x_145, 5, x_131);
lean_ctor_set_uint8(x_145, 6, x_132);
lean_ctor_set_uint8(x_145, 7, x_133);
lean_ctor_set_uint8(x_145, 8, x_134);
lean_ctor_set_uint8(x_145, 9, x_144);
lean_ctor_set_uint8(x_145, 10, x_135);
lean_ctor_set_uint8(x_145, 11, x_136);
lean_ctor_set_uint8(x_145, 12, x_137);
lean_ctor_set_uint8(x_145, 13, x_138);
lean_ctor_set_uint8(x_145, 14, x_139);
lean_ctor_set_uint8(x_145, 15, x_140);
lean_ctor_set_uint8(x_145, 16, x_141);
lean_ctor_set_uint8(x_145, 17, x_142);
x_146 = 2;
x_147 = lean_uint64_shift_right(x_116, x_146);
x_148 = lean_uint64_shift_left(x_147, x_146);
x_149 = l_Linarith_removeNegations___elambda__1___lambda__1___closed__3;
x_150 = lean_uint64_lor(x_148, x_149);
x_151 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_151, 0, x_145);
lean_ctor_set(x_151, 1, x_118);
lean_ctor_set(x_151, 2, x_119);
lean_ctor_set(x_151, 3, x_120);
lean_ctor_set(x_151, 4, x_121);
lean_ctor_set(x_151, 5, x_122);
lean_ctor_set(x_151, 6, x_123);
lean_ctor_set_uint64(x_151, sizeof(void*)*7, x_150);
lean_ctor_set_uint8(x_151, sizeof(void*)*7 + 8, x_117);
lean_ctor_set_uint8(x_151, sizeof(void*)*7 + 9, x_124);
lean_ctor_set_uint8(x_151, sizeof(void*)*7 + 10, x_125);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_152 = l_Lean_Meta_isExprDefEq(x_114, x_3, x_151, x_5, x_6, x_7, x_111);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; uint8_t x_154; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_unbox(x_153);
lean_dec(x_153);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; uint8_t x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_156 = x_152;
} else {
 lean_dec_ref(x_152);
 x_156 = lean_box(0);
}
x_157 = 0;
x_158 = lean_box(x_157);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_110);
lean_ctor_set(x_159, 1, x_158);
if (lean_is_scalar(x_156)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_156;
}
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_155);
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_161 = lean_ctor_get(x_152, 1);
lean_inc(x_161);
lean_dec(x_152);
x_162 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_110, x_4, x_5, x_6, x_7, x_161);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_165 = x_162;
} else {
 lean_dec_ref(x_162);
 x_165 = lean_box(0);
}
x_166 = 1;
x_167 = lean_box(x_166);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_163);
lean_ctor_set(x_168, 1, x_167);
if (lean_is_scalar(x_165)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_165;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_164);
return x_169;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_110);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_170 = lean_ctor_get(x_152, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_152, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_172 = x_152;
} else {
 lean_dec_ref(x_152);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_removeNegations___elambda__1___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("linarith", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_removeNegations___elambda__1___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("removing negation in ", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_removeNegations___elambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Meta_whnfR(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
lean_inc(x_1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Linarith_removeNegations___elambda__1___closed__2;
x_16 = lean_alloc_closure((void*)(l_Linarith_removeNegations___elambda__1___lambda__1), 8, 3);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_13);
lean_closure_set(x_16, 2, x_11);
x_17 = 0;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_18 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_matchesInstance___spec__1___rarg(x_16, x_17, x_2, x_3, x_4, x_5, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_18, 0);
lean_dec(x_23);
lean_ctor_set(x_18, 0, x_14);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_28 = l_Lean_Meta_whnfR(x_27, x_2, x_3, x_4, x_5, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_31 = l_Linarith_flipNegatedComparison(x_1, x_29, x_2, x_3, x_4, x_5, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 0);
lean_dec(x_34);
lean_ctor_set(x_31, 0, x_14);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_14);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_14);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_dec(x_31);
x_38 = lean_ctor_get(x_32, 0);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l_Linarith_removeNegations___elambda__1___closed__4;
x_40 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_39, x_2, x_3, x_4, x_5, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_1);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_box(0);
x_45 = l_Linarith_removeNegations___elambda__1___lambda__2(x_38, x_13, x_44, x_2, x_3, x_4, x_5, x_43);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_40);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_47 = lean_ctor_get(x_40, 1);
x_48 = lean_ctor_get(x_40, 0);
lean_dec(x_48);
x_49 = l_Lean_MessageData_ofExpr(x_1);
x_50 = l_Linarith_removeNegations___elambda__1___closed__6;
lean_ctor_set_tag(x_40, 7);
lean_ctor_set(x_40, 1, x_49);
lean_ctor_set(x_40, 0, x_50);
x_51 = l_Linarith_flipNegatedComparison___closed__4;
x_52 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_39, x_52, x_2, x_3, x_4, x_5, x_47);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Linarith_removeNegations___elambda__1___lambda__2(x_38, x_13, x_54, x_2, x_3, x_4, x_5, x_55);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_54);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_57 = lean_ctor_get(x_40, 1);
lean_inc(x_57);
lean_dec(x_40);
x_58 = l_Lean_MessageData_ofExpr(x_1);
x_59 = l_Linarith_removeNegations___elambda__1___closed__6;
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Linarith_flipNegatedComparison___closed__4;
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_39, x_62, x_2, x_3, x_4, x_5, x_57);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = l_Linarith_removeNegations___elambda__1___lambda__2(x_38, x_13, x_64, x_2, x_3, x_4, x_5, x_65);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_64);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_31);
if (x_67 == 0)
{
return x_31;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_31, 0);
x_69 = lean_ctor_get(x_31, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_31);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_28);
if (x_71 == 0)
{
return x_28;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_28, 0);
x_73 = lean_ctor_get(x_28, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_28);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_18);
if (x_75 == 0)
{
return x_18;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_18, 0);
x_77 = lean_ctor_get(x_18, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_18);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_10);
if (x_79 == 0)
{
return x_10;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_10, 0);
x_81 = lean_ctor_get(x_10, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_10);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_7);
if (x_83 == 0)
{
return x_7;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_7, 0);
x_85 = lean_ctor_get(x_7, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_7);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("removeNegations", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_removeNegations___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("replace negations of comparisons", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_removeNegations___closed__2;
x_2 = l_Linarith_removeNegations___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_removeNegations___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNegations___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_removeNegations___closed__4;
x_2 = l_Linarith_removeNegations___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNegations() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_removeNegations___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNegations___elambda__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Linarith_removeNegations___elambda__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_succeeds___at_Linarith_isNatProp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = 1;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
x_22 = l_Lean_Exception_isInterrupt(x_20);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = l_Lean_Exception_isRuntime(x_20);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
lean_free_object(x_10);
lean_dec(x_20);
x_24 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_21);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = 0;
x_28 = lean_box(x_27);
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = l_Lean_Exception_isInterrupt(x_33);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = l_Lean_Exception_isRuntime(x_33);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_33);
x_37 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_34);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_39 = x_37;
} else {
 lean_dec_ref(x_37);
 x_39 = lean_box(0);
}
x_40 = 0;
x_41 = lean_box(x_40);
if (lean_is_scalar(x_39)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_39;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_38);
return x_42;
}
else
{
lean_object* x_43; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_33);
lean_ctor_set(x_43, 1, x_34);
return x_43;
}
}
else
{
lean_object* x_44; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_33);
lean_ctor_set(x_44, 1, x_34);
return x_44;
}
}
}
}
}
LEAN_EXPORT lean_object* l_succeeds___at_Linarith_isNatProp___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_succeeds___at_Linarith_isNatProp___spec__1___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Linarith_isNatProp___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Linarith_isNatProp___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_isNatProp___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_isNatProp___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Nat", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_isNatProp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Expr_ineqOrNotIneq_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 4)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Linarith_isNatProp___lambda__1___closed__3;
x_20 = lean_string_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_free_object(x_7);
x_21 = l_Linarith_isNatProp___lambda__1___closed__2;
x_22 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_21, x_2, x_3, x_4, x_5, x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_22;
}
else
{
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_7, 0, x_23);
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_17);
lean_free_object(x_7);
x_24 = l_Linarith_isNatProp___lambda__1___closed__2;
x_25 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_24, x_2, x_3, x_4, x_5, x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_dec(x_11);
x_28 = lean_ctor_get(x_12, 1);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Linarith_isNatProp___lambda__1___closed__3;
x_30 = lean_string_dec_eq(x_28, x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
x_31 = l_Linarith_isNatProp___lambda__1___closed__2;
x_32 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_31, x_2, x_3, x_4, x_5, x_26);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_32;
}
else
{
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_26);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_27);
x_35 = l_Linarith_isNatProp___lambda__1___closed__2;
x_36 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_35, x_2, x_3, x_4, x_5, x_26);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_36;
}
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_37 = lean_ctor_get(x_7, 1);
lean_inc(x_37);
lean_dec(x_7);
x_38 = l_Linarith_isNatProp___lambda__1___closed__2;
x_39 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_38, x_2, x_3, x_4, x_5, x_37);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_12);
lean_dec(x_11);
x_40 = lean_ctor_get(x_7, 1);
lean_inc(x_40);
lean_dec(x_7);
x_41 = l_Linarith_isNatProp___lambda__1___closed__2;
x_42 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_41, x_2, x_3, x_4, x_5, x_40);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_11);
x_43 = lean_ctor_get(x_7, 1);
lean_inc(x_43);
lean_dec(x_7);
x_44 = l_Linarith_isNatProp___lambda__1___closed__2;
x_45 = l_Lean_throwError___at_Lean_Meta_CheckTactic_matchCheckGoalType___spec__2(x_44, x_2, x_3, x_4, x_5, x_43);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_7);
if (x_46 == 0)
{
return x_7;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_7, 0);
x_48 = lean_ctor_get(x_7, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_7);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_isNatProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Linarith_isNatProp___lambda__1), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_succeeds___at_Linarith_isNatProp___spec__1___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Linarith_isNatCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cast", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_isNatCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_getAppFnArgs(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = l_Linarith_isNatProp___lambda__1___closed__3;
x_12 = lean_string_dec_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_free_object(x_2);
lean_dec(x_7);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Linarith_isNatCoe___closed__1;
x_15 = lean_string_dec_eq(x_9, x_14);
lean_dec(x_9);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_2);
lean_dec(x_7);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_array_get_size(x_7);
x_18 = lean_unsigned_to_nat(3u);
x_19 = lean_nat_dec_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_free_object(x_2);
lean_dec(x_7);
x_20 = lean_box(0);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_fget(x_7, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_array_fget(x_7, x_23);
lean_dec(x_7);
lean_ctor_set(x_2, 1, x_22);
lean_ctor_set(x_2, 0, x_24);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_2);
return x_25;
}
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_3, 1);
lean_inc(x_27);
lean_dec(x_3);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_dec(x_4);
x_29 = l_Linarith_isNatProp___lambda__1___closed__3;
x_30 = lean_string_dec_eq(x_28, x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_26);
x_31 = lean_box(0);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = l_Linarith_isNatCoe___closed__1;
x_33 = lean_string_dec_eq(x_27, x_32);
lean_dec(x_27);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_26);
x_34 = lean_box(0);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_array_get_size(x_26);
x_36 = lean_unsigned_to_nat(3u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_26);
x_38 = lean_box(0);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_array_fget(x_26, x_39);
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_array_fget(x_26, x_41);
lean_dec(x_26);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_45 = lean_box(0);
return x_45;
}
}
else
{
lean_object* x_46; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = lean_box(0);
return x_46;
}
}
else
{
lean_object* x_47; 
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_box(0);
return x_47;
}
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HAdd", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("neg", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hSub", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hMul", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_getNatComparisons___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hAdd", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_getNatComparisons(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = l_Linarith_isNatCoe(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_getAppFnArgs(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = l_Linarith_getNatComparisons___closed__1;
x_11 = lean_string_dec_eq(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Linarith_getNatComparisons___closed__2;
x_13 = lean_string_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Linarith_getNatComparisons___closed__3;
x_15 = lean_string_dec_eq(x_9, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Linarith_getNatComparisons___closed__4;
x_17 = lean_string_dec_eq(x_9, x_16);
lean_dec(x_9);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_8);
lean_dec(x_7);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Linarith_getNatComparisons___closed__5;
x_20 = lean_string_dec_eq(x_8, x_19);
lean_dec(x_8);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_7);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_array_get_size(x_7);
x_23 = lean_unsigned_to_nat(3u);
x_24 = lean_nat_dec_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_7);
x_25 = lean_box(0);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_unsigned_to_nat(2u);
x_27 = lean_array_fget(x_7, x_26);
lean_dec(x_7);
x_1 = x_27;
goto _start;
}
}
}
}
else
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_9);
x_29 = l_Linarith_getNatComparisons___closed__6;
x_30 = lean_string_dec_eq(x_8, x_29);
lean_dec(x_8);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_7);
x_31 = lean_box(0);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_array_get_size(x_7);
x_33 = lean_unsigned_to_nat(6u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_7);
x_35 = lean_box(0);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_unsigned_to_nat(4u);
x_37 = lean_array_fget(x_7, x_36);
x_38 = lean_unsigned_to_nat(5u);
x_39 = lean_array_fget(x_7, x_38);
lean_dec(x_7);
x_40 = l_Linarith_getNatComparisons(x_37);
x_41 = l_Linarith_getNatComparisons(x_39);
x_42 = l_List_appendTR___rarg(x_40, x_41);
return x_42;
}
}
}
}
else
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_9);
x_43 = l_Linarith_getNatComparisons___closed__7;
x_44 = lean_string_dec_eq(x_8, x_43);
lean_dec(x_8);
if (x_44 == 0)
{
lean_object* x_45; 
lean_dec(x_7);
x_45 = lean_box(0);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_array_get_size(x_7);
x_47 = lean_unsigned_to_nat(6u);
x_48 = lean_nat_dec_eq(x_46, x_47);
lean_dec(x_46);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_7);
x_49 = lean_box(0);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_unsigned_to_nat(4u);
x_51 = lean_array_fget(x_7, x_50);
x_52 = lean_unsigned_to_nat(5u);
x_53 = lean_array_fget(x_7, x_52);
lean_dec(x_7);
x_54 = l_Linarith_getNatComparisons(x_51);
x_55 = l_Linarith_getNatComparisons(x_53);
x_56 = l_List_appendTR___rarg(x_54, x_55);
return x_56;
}
}
}
}
else
{
lean_object* x_57; uint8_t x_58; 
lean_dec(x_9);
x_57 = l_Linarith_getNatComparisons___closed__8;
x_58 = lean_string_dec_eq(x_8, x_57);
lean_dec(x_8);
if (x_58 == 0)
{
lean_object* x_59; 
lean_dec(x_7);
x_59 = lean_box(0);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = lean_array_get_size(x_7);
x_61 = lean_unsigned_to_nat(6u);
x_62 = lean_nat_dec_eq(x_60, x_61);
lean_dec(x_60);
if (x_62 == 0)
{
lean_object* x_63; 
lean_dec(x_7);
x_63 = lean_box(0);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_64 = lean_unsigned_to_nat(4u);
x_65 = lean_array_fget(x_7, x_64);
x_66 = lean_unsigned_to_nat(5u);
x_67 = lean_array_fget(x_7, x_66);
lean_dec(x_7);
x_68 = l_Linarith_getNatComparisons(x_65);
x_69 = l_Linarith_getNatComparisons(x_67);
x_70 = l_List_appendTR___rarg(x_68, x_69);
return x_70;
}
}
}
}
else
{
lean_object* x_71; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = lean_box(0);
return x_71;
}
}
else
{
lean_object* x_72; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = lean_box(0);
return x_72;
}
}
else
{
lean_object* x_73; 
lean_dec(x_4);
lean_dec(x_3);
x_73 = lean_box(0);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_1);
x_74 = lean_ctor_get(x_2, 0);
lean_inc(x_74);
lean_dec(x_2);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at_Linarith_mk__natCast__nonneg__prf___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Exception_isInterrupt(x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Exception_isRuntime(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_free_object(x_10);
x_16 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_12);
return x_16;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = l_Lean_Exception_isInterrupt(x_21);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = l_Lean_Exception_isRuntime(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_22);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_27 = x_25;
} else {
 lean_dec_ref(x_25);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(1, 2, 0);
} else {
 x_28 = x_27;
 lean_ctor_set_tag(x_28, 1);
}
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_22);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
return x_30;
}
}
}
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1() {
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
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("natCast_nonneg", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_mk__natCast__nonneg__prf___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_mk__natCast__nonneg__prf___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Got exception when using cast ", 30, 30);
return x_1;
}
}
static lean_object* _init_l_Linarith_mk__natCast__nonneg__prf___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_mk__natCast__nonneg__prf___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_21; 
x_21 = !lean_is_exclusive(x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_1, 1);
x_23 = lean_box(0);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_23);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_1);
x_25 = lean_array_mk(x_24);
x_26 = l_Linarith_mk__natCast__nonneg__prf___closed__2;
x_27 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_28 = l_Lean_commitIfNoEx___at_Linarith_mk__natCast__nonneg__prf___spec__1(x_27, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_7 = x_32;
x_8 = x_30;
goto block_20;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
x_36 = l_Lean_Exception_isInterrupt(x_34);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Exception_isRuntime(x_34);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_free_object(x_28);
x_38 = l_Linarith_removeNegations___elambda__1___closed__4;
x_39 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_38, x_2, x_3, x_4, x_5, x_35);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
x_43 = l_Linarith_mk__natCast__nonneg__prf___closed__3;
x_44 = lean_unbox(x_41);
lean_dec(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_free_object(x_39);
lean_dec(x_34);
x_45 = lean_box(0);
x_46 = lean_apply_6(x_43, x_45, x_2, x_3, x_4, x_5, x_42);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_7 = x_47;
x_8 = x_48;
goto block_20;
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_46);
if (x_49 == 0)
{
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 0);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_46);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = l_Lean_Exception_toMessageData(x_34);
x_54 = l_Linarith_mk__natCast__nonneg__prf___closed__5;
lean_ctor_set_tag(x_39, 7);
lean_ctor_set(x_39, 1, x_53);
lean_ctor_set(x_39, 0, x_54);
x_55 = l_Linarith_flipNegatedComparison___closed__4;
x_56 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_56, 0, x_39);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_38, x_56, x_2, x_3, x_4, x_5, x_42);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_apply_6(x_43, x_58, x_2, x_3, x_4, x_5, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_7 = x_61;
x_8 = x_62;
goto block_20;
}
else
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_60);
if (x_63 == 0)
{
return x_60;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_60, 0);
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_60);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_39, 0);
x_68 = lean_ctor_get(x_39, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_39);
x_69 = l_Linarith_mk__natCast__nonneg__prf___closed__3;
x_70 = lean_unbox(x_67);
lean_dec(x_67);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_34);
x_71 = lean_box(0);
x_72 = lean_apply_6(x_69, x_71, x_2, x_3, x_4, x_5, x_68);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_7 = x_73;
x_8 = x_74;
goto block_20;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_72, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_72, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_77 = x_72;
} else {
 lean_dec_ref(x_72);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_79 = l_Lean_Exception_toMessageData(x_34);
x_80 = l_Linarith_mk__natCast__nonneg__prf___closed__5;
x_81 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Linarith_flipNegatedComparison___closed__4;
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_38, x_83, x_2, x_3, x_4, x_5, x_68);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_apply_6(x_69, x_85, x_2, x_3, x_4, x_5, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_7 = x_88;
x_8 = x_89;
goto block_20;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_92 = x_87;
} else {
 lean_dec_ref(x_87);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_28;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_28;
}
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_94 = lean_ctor_get(x_28, 0);
x_95 = lean_ctor_get(x_28, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_28);
x_96 = l_Lean_Exception_isInterrupt(x_94);
if (x_96 == 0)
{
uint8_t x_97; 
x_97 = l_Lean_Exception_isRuntime(x_94);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_98 = l_Linarith_removeNegations___elambda__1___closed__4;
x_99 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_98, x_2, x_3, x_4, x_5, x_95);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
x_103 = l_Linarith_mk__natCast__nonneg__prf___closed__3;
x_104 = lean_unbox(x_100);
lean_dec(x_100);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_102);
lean_dec(x_94);
x_105 = lean_box(0);
x_106 = lean_apply_6(x_103, x_105, x_2, x_3, x_4, x_5, x_101);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_7 = x_107;
x_8 = x_108;
goto block_20;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_111 = x_106;
} else {
 lean_dec_ref(x_106);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_113 = l_Lean_Exception_toMessageData(x_94);
x_114 = l_Linarith_mk__natCast__nonneg__prf___closed__5;
if (lean_is_scalar(x_102)) {
 x_115 = lean_alloc_ctor(7, 2, 0);
} else {
 x_115 = x_102;
 lean_ctor_set_tag(x_115, 7);
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = l_Linarith_flipNegatedComparison___closed__4;
x_117 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_98, x_117, x_2, x_3, x_4, x_5, x_101);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = lean_apply_6(x_103, x_119, x_2, x_3, x_4, x_5, x_120);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_7 = x_122;
x_8 = x_123;
goto block_20;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_124 = lean_ctor_get(x_121, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_121, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_126 = x_121;
} else {
 lean_dec_ref(x_121);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
else
{
lean_object* x_128; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_94);
lean_ctor_set(x_128, 1, x_95);
return x_128;
}
}
else
{
lean_object* x_129; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_94);
lean_ctor_set(x_129, 1, x_95);
return x_129;
}
}
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_130 = lean_ctor_get(x_1, 0);
x_131 = lean_ctor_get(x_1, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_1);
x_132 = lean_box(0);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_array_mk(x_134);
x_136 = l_Linarith_mk__natCast__nonneg__prf___closed__2;
x_137 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_137, 0, x_136);
lean_closure_set(x_137, 1, x_135);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_138 = l_Lean_commitIfNoEx___at_Linarith_mk__natCast__nonneg__prf___spec__1(x_137, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_box(0);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_141);
x_7 = x_142;
x_8 = x_140;
goto block_20;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_143 = lean_ctor_get(x_138, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_138, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_145 = x_138;
} else {
 lean_dec_ref(x_138);
 x_145 = lean_box(0);
}
x_146 = l_Lean_Exception_isInterrupt(x_143);
if (x_146 == 0)
{
uint8_t x_147; 
x_147 = l_Lean_Exception_isRuntime(x_143);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
lean_dec(x_145);
x_148 = l_Linarith_removeNegations___elambda__1___closed__4;
x_149 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_148, x_2, x_3, x_4, x_5, x_144);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_152 = x_149;
} else {
 lean_dec_ref(x_149);
 x_152 = lean_box(0);
}
x_153 = l_Linarith_mk__natCast__nonneg__prf___closed__3;
x_154 = lean_unbox(x_150);
lean_dec(x_150);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; 
lean_dec(x_152);
lean_dec(x_143);
x_155 = lean_box(0);
x_156 = lean_apply_6(x_153, x_155, x_2, x_3, x_4, x_5, x_151);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_7 = x_157;
x_8 = x_158;
goto block_20;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_156, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_156, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_161 = x_156;
} else {
 lean_dec_ref(x_156);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_163 = l_Lean_Exception_toMessageData(x_143);
x_164 = l_Linarith_mk__natCast__nonneg__prf___closed__5;
if (lean_is_scalar(x_152)) {
 x_165 = lean_alloc_ctor(7, 2, 0);
} else {
 x_165 = x_152;
 lean_ctor_set_tag(x_165, 7);
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_Linarith_flipNegatedComparison___closed__4;
x_167 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_148, x_167, x_2, x_3, x_4, x_5, x_151);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_apply_6(x_153, x_169, x_2, x_3, x_4, x_5, x_170);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_7 = x_172;
x_8 = x_173;
goto block_20;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_171, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_176 = x_171;
} else {
 lean_dec_ref(x_171);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
}
else
{
lean_object* x_178; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_145)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_145;
}
lean_ctor_set(x_178, 0, x_143);
lean_ctor_set(x_178, 1, x_144);
return x_178;
}
}
else
{
lean_object* x_179; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_145)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_145;
}
lean_ctor_set(x_179, 0, x_143);
lean_ctor_set(x_179, 1, x_144);
return x_179;
}
}
}
block_20:
{
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
lean_dec(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_7, 1, x_8);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_7, 1);
lean_dec(x_17);
lean_ctor_set_tag(x_7, 0);
lean_ctor_set(x_7, 1, x_8);
return x_7;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_8);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_mk__natCast__nonneg__prf___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Linarith_mk__natCast__nonneg__prf___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Linarith_Expr_Ord___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_expr_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_expr_equal(x_1, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
static lean_object* _init_l_Linarith_Expr_Ord___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_Expr_Ord___elambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_Expr_Ord() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_Expr_Ord___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_Expr_Ord___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Linarith_Expr_Ord___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2;
x_3 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1;
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
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = 1;
x_5 = 0;
x_6 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3;
x_7 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4;
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
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6() {
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
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("zifyProof failed on ", 20, 20);
return x_1;
}
}
static lean_object* _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_List_reverse___rarg(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_12);
x_14 = lean_infer_type(x_12, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_15, x_4, x_5, x_6, x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l_Lean_Meta_whnfR(x_19, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_22);
x_24 = l_Linarith_isNatProp(x_22, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_22);
lean_free_object(x_17);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_27;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_box(0);
lean_inc(x_12);
x_31 = lean_alloc_closure((void*)(l_Mathlib_Tactic_Zify_zifyProof___boxed), 12, 3);
lean_closure_set(x_31, 0, x_30);
lean_closure_set(x_31, 1, x_12);
lean_closure_set(x_31, 2, x_22);
lean_inc(x_1);
x_32 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run__for___rarg), 9, 2);
lean_closure_set(x_32, 0, x_1);
lean_closure_set(x_32, 1, x_31);
x_33 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5;
x_34 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_35 = l_Lean_Elab_Term_TermElabM_run___rarg(x_32, x_33, x_34, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_dec(x_40);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_dec(x_35);
x_42 = l_Lean_MessageData_ofExpr(x_12);
x_43 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8;
lean_ctor_set_tag(x_37, 7);
lean_ctor_set(x_37, 1, x_42);
lean_ctor_set(x_37, 0, x_43);
x_44 = l_Linarith_flipNegatedComparison___closed__4;
lean_ctor_set_tag(x_17, 7);
lean_ctor_set(x_17, 1, x_44);
lean_ctor_set(x_17, 0, x_37);
x_45 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_17, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
return x_45;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_45);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_free_object(x_37);
lean_free_object(x_17);
x_50 = lean_ctor_get(x_39, 0);
lean_inc(x_50);
lean_dec(x_39);
x_51 = lean_ctor_get(x_35, 1);
lean_inc(x_51);
lean_dec(x_35);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
x_54 = lean_alloc_closure((void*)(l_Lean_Expr_ineqOrNotIneq_x3f), 6, 1);
lean_closure_set(x_54, 0, x_53);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_55 = l_succeeds___at_Linarith_isNatProp___spec__1___rarg(x_54, x_4, x_5, x_6, x_7, x_51);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_52);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_58;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_60; 
lean_dec(x_12);
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
lean_dec(x_55);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_52);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_60;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_52);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_55);
if (x_62 == 0)
{
return x_55;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_55, 0);
x_64 = lean_ctor_get(x_55, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_55);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_37, 0);
lean_inc(x_66);
lean_dec(x_37);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_67 = lean_ctor_get(x_35, 1);
lean_inc(x_67);
lean_dec(x_35);
x_68 = l_Lean_MessageData_ofExpr(x_12);
x_69 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Linarith_flipNegatedComparison___closed__4;
lean_ctor_set_tag(x_17, 7);
lean_ctor_set(x_17, 1, x_71);
lean_ctor_set(x_17, 0, x_70);
x_72 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_17, x_4, x_5, x_6, x_7, x_67);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_free_object(x_17);
x_77 = lean_ctor_get(x_66, 0);
lean_inc(x_77);
lean_dec(x_66);
x_78 = lean_ctor_get(x_35, 1);
lean_inc(x_78);
lean_dec(x_35);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
x_81 = lean_alloc_closure((void*)(l_Lean_Expr_ineqOrNotIneq_x3f), 6, 1);
lean_closure_set(x_81, 0, x_80);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_82 = l_succeeds___at_Linarith_isNatProp___spec__1___rarg(x_81, x_4, x_5, x_6, x_7, x_78);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_unbox(x_83);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; 
lean_dec(x_79);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_85;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_87; 
lean_dec(x_12);
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
lean_dec(x_82);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_79);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_87;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_79);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = lean_ctor_get(x_82, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_82, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_91 = x_82;
} else {
 lean_dec_ref(x_82);
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
}
}
else
{
uint8_t x_93; 
lean_free_object(x_17);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_35);
if (x_93 == 0)
{
return x_35;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_35, 0);
x_95 = lean_ctor_get(x_35, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_35);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_22);
lean_free_object(x_17);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_24);
if (x_97 == 0)
{
return x_24;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_24, 0);
x_99 = lean_ctor_get(x_24, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_24);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_free_object(x_17);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_21);
if (x_101 == 0)
{
return x_21;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_21, 0);
x_103 = lean_ctor_get(x_21, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_21);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_17, 0);
x_106 = lean_ctor_get(x_17, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_107 = l_Lean_Meta_whnfR(x_105, x_4, x_5, x_6, x_7, x_106);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_108);
x_110 = l_Linarith_isNatProp(x_108, x_4, x_5, x_6, x_7, x_109);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; uint8_t x_112; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_unbox(x_111);
lean_dec(x_111);
if (x_112 == 0)
{
lean_object* x_113; 
lean_dec(x_108);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_dec(x_110);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_113;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_ctor_get(x_110, 1);
lean_inc(x_115);
lean_dec(x_110);
x_116 = lean_box(0);
lean_inc(x_12);
x_117 = lean_alloc_closure((void*)(l_Mathlib_Tactic_Zify_zifyProof___boxed), 12, 3);
lean_closure_set(x_117, 0, x_116);
lean_closure_set(x_117, 1, x_12);
lean_closure_set(x_117, 2, x_108);
lean_inc(x_1);
x_118 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run__for___rarg), 9, 2);
lean_closure_set(x_118, 0, x_1);
lean_closure_set(x_118, 1, x_117);
x_119 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5;
x_120 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_121 = l_Lean_Elab_Term_TermElabM_run___rarg(x_118, x_119, x_120, x_4, x_5, x_6, x_7, x_115);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_125 = x_123;
} else {
 lean_dec_ref(x_123);
 x_125 = lean_box(0);
}
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_126 = lean_ctor_get(x_121, 1);
lean_inc(x_126);
lean_dec(x_121);
x_127 = l_Lean_MessageData_ofExpr(x_12);
x_128 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8;
if (lean_is_scalar(x_125)) {
 x_129 = lean_alloc_ctor(7, 2, 0);
} else {
 x_129 = x_125;
 lean_ctor_set_tag(x_129, 7);
}
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = l_Linarith_flipNegatedComparison___closed__4;
x_131 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_131, x_4, x_5, x_6, x_7, x_126);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_125);
x_137 = lean_ctor_get(x_124, 0);
lean_inc(x_137);
lean_dec(x_124);
x_138 = lean_ctor_get(x_121, 1);
lean_inc(x_138);
lean_dec(x_121);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
lean_dec(x_137);
x_141 = lean_alloc_closure((void*)(l_Lean_Expr_ineqOrNotIneq_x3f), 6, 1);
lean_closure_set(x_141, 0, x_140);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_142 = l_succeeds___at_Linarith_isNatProp___spec__1___rarg(x_141, x_4, x_5, x_6, x_7, x_138);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_unbox(x_143);
lean_dec(x_143);
if (x_144 == 0)
{
lean_object* x_145; 
lean_dec(x_139);
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_dec(x_142);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_145;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_147; 
lean_dec(x_12);
x_147 = lean_ctor_get(x_142, 1);
lean_inc(x_147);
lean_dec(x_142);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_139);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_147;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_139);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_149 = lean_ctor_get(x_142, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_142, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_151 = x_142;
} else {
 lean_dec_ref(x_142);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_153 = lean_ctor_get(x_121, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_121, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_155 = x_121;
} else {
 lean_dec_ref(x_121);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_108);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_157 = lean_ctor_get(x_110, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_110, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_159 = x_110;
} else {
 lean_dec_ref(x_110);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_161 = lean_ctor_get(x_107, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_107, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_163 = x_107;
} else {
 lean_dec_ref(x_107);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
}
else
{
uint8_t x_165; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_165 = !lean_is_exclusive(x_14);
if (x_165 == 0)
{
return x_14;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_14, 0);
x_167 = lean_ctor_get(x_14, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_14);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_2, 0);
x_170 = lean_ctor_get(x_2, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_169);
x_171 = lean_infer_type(x_169, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_172, x_4, x_5, x_6, x_7, x_173);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_177 = x_174;
} else {
 lean_dec_ref(x_174);
 x_177 = lean_box(0);
}
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_178 = l_Lean_Meta_whnfR(x_175, x_4, x_5, x_6, x_7, x_176);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_179);
x_181 = l_Linarith_isNatProp(x_179, x_4, x_5, x_6, x_7, x_180);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; uint8_t x_183; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_unbox(x_182);
lean_dec(x_182);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_179);
lean_dec(x_177);
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_184);
lean_dec(x_181);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_169);
lean_ctor_set(x_185, 1, x_3);
x_2 = x_170;
x_3 = x_185;
x_8 = x_184;
goto _start;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_dec(x_181);
x_188 = lean_box(0);
lean_inc(x_169);
x_189 = lean_alloc_closure((void*)(l_Mathlib_Tactic_Zify_zifyProof___boxed), 12, 3);
lean_closure_set(x_189, 0, x_188);
lean_closure_set(x_189, 1, x_169);
lean_closure_set(x_189, 2, x_179);
lean_inc(x_1);
x_190 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run__for___rarg), 9, 2);
lean_closure_set(x_190, 0, x_1);
lean_closure_set(x_190, 1, x_189);
x_191 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5;
x_192 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_193 = l_Lean_Elab_Term_TermElabM_run___rarg(x_190, x_191, x_192, x_4, x_5, x_6, x_7, x_187);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
lean_dec(x_194);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 x_197 = x_195;
} else {
 lean_dec_ref(x_195);
 x_197 = lean_box(0);
}
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_170);
lean_dec(x_3);
lean_dec(x_1);
x_198 = lean_ctor_get(x_193, 1);
lean_inc(x_198);
lean_dec(x_193);
x_199 = l_Lean_MessageData_ofExpr(x_169);
x_200 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8;
if (lean_is_scalar(x_197)) {
 x_201 = lean_alloc_ctor(7, 2, 0);
} else {
 x_201 = x_197;
 lean_ctor_set_tag(x_201, 7);
}
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_199);
x_202 = l_Linarith_flipNegatedComparison___closed__4;
if (lean_is_scalar(x_177)) {
 x_203 = lean_alloc_ctor(7, 2, 0);
} else {
 x_203 = x_177;
 lean_ctor_set_tag(x_203, 7);
}
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = l_Lean_throwError___at_Lean_Expr_abstractRangeM___spec__1(x_203, x_4, x_5, x_6, x_7, x_198);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 lean_ctor_release(x_204, 1);
 x_207 = x_204;
} else {
 lean_dec_ref(x_204);
 x_207 = lean_box(0);
}
if (lean_is_scalar(x_207)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_207;
}
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_206);
return x_208;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_197);
lean_dec(x_177);
x_209 = lean_ctor_get(x_196, 0);
lean_inc(x_209);
lean_dec(x_196);
x_210 = lean_ctor_get(x_193, 1);
lean_inc(x_210);
lean_dec(x_193);
x_211 = lean_ctor_get(x_209, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_209, 1);
lean_inc(x_212);
lean_dec(x_209);
x_213 = lean_alloc_closure((void*)(l_Lean_Expr_ineqOrNotIneq_x3f), 6, 1);
lean_closure_set(x_213, 0, x_212);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_214 = l_succeeds___at_Linarith_isNatProp___spec__1___rarg(x_213, x_4, x_5, x_6, x_7, x_210);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_unbox(x_215);
lean_dec(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; 
lean_dec(x_211);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_dec(x_214);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_169);
lean_ctor_set(x_218, 1, x_3);
x_2 = x_170;
x_3 = x_218;
x_8 = x_217;
goto _start;
}
else
{
lean_object* x_220; lean_object* x_221; 
lean_dec(x_169);
x_220 = lean_ctor_get(x_214, 1);
lean_inc(x_220);
lean_dec(x_214);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_211);
lean_ctor_set(x_221, 1, x_3);
x_2 = x_170;
x_3 = x_221;
x_8 = x_220;
goto _start;
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_211);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_223 = lean_ctor_get(x_214, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_214, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_214)) {
 lean_ctor_release(x_214, 0);
 lean_ctor_release(x_214, 1);
 x_225 = x_214;
} else {
 lean_dec_ref(x_214);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_223);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
}
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_177);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_227 = lean_ctor_get(x_193, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_193, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 x_229 = x_193;
} else {
 lean_dec_ref(x_193);
 x_229 = lean_box(0);
}
if (lean_is_scalar(x_229)) {
 x_230 = lean_alloc_ctor(1, 2, 0);
} else {
 x_230 = x_229;
}
lean_ctor_set(x_230, 0, x_227);
lean_ctor_set(x_230, 1, x_228);
return x_230;
}
}
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_179);
lean_dec(x_177);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_231 = lean_ctor_get(x_181, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_181, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_233 = x_181;
} else {
 lean_dec_ref(x_181);
 x_233 = lean_box(0);
}
if (lean_is_scalar(x_233)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_233;
}
lean_ctor_set(x_234, 0, x_231);
lean_ctor_set(x_234, 1, x_232);
return x_234;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_177);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_235 = lean_ctor_get(x_178, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_178, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_237 = x_178;
} else {
 lean_dec_ref(x_178);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(1, 2, 0);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_235);
lean_ctor_set(x_238, 1, x_236);
return x_238;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_239 = lean_ctor_get(x_171, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_171, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_241 = x_171;
} else {
 lean_dec_ref(x_171);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_242 = x_241;
}
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_240);
return x_242;
}
}
}
}
}
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_natToInt___elambda__1___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_apply_1(x_1, x_3);
x_6 = l_Linarith_Expr_Ord___elambda__1(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_compareOn___at_Linarith_natToInt___elambda__1___spec__3___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2;
x_4 = lean_alloc_closure((void*)(l_compareOn___at_Linarith_natToInt___elambda__1___spec__3___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_lexOrd___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_3);
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_3);
x_11 = l_Batteries_RBNode_insert___rarg(x_3, x_7, x_9);
x_6 = x_10;
x_7 = x_11;
x_8 = lean_box(0);
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5(x_1, x_3, x_1, x_4, x_3, x_3, x_2, lean_box(0));
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_3);
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_3);
x_11 = l_Batteries_RBNode_insert___rarg(x_3, x_7, x_9);
x_6 = x_10;
x_7 = x_11;
x_8 = lean_box(0);
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7(x_1, x_3, x_1, x_4, x_3, x_3, x_2, lean_box(0));
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Linarith_natToInt___elambda__1___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_infer_type(x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_Expr_ineq_x3f(x_12, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l_Linarith_getNatComparisons(x_19);
x_22 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2;
x_23 = l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__4(x_22, x_1, x_21);
x_24 = l_Linarith_getNatComparisons(x_20);
x_25 = l_Batteries_RBSet_insertMany___at_Linarith_natToInt___elambda__1___spec__6(x_22, x_23, x_24);
x_1 = x_25;
x_2 = x_10;
x_7 = x_18;
goto _start;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_14);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
x_30 = l_Lean_Exception_isInterrupt(x_28);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = l_Lean_Exception_isRuntime(x_28);
if (x_31 == 0)
{
lean_free_object(x_14);
lean_dec(x_28);
x_2 = x_10;
x_7 = x_29;
goto _start;
}
else
{
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
else
{
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_14);
x_35 = l_Lean_Exception_isInterrupt(x_33);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = l_Lean_Exception_isRuntime(x_33);
if (x_36 == 0)
{
lean_dec(x_33);
x_2 = x_10;
x_7 = x_34;
goto _start;
}
else
{
lean_object* x_38; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
}
else
{
lean_object* x_39; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_34);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_11);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_11, 0);
x_42 = lean_ctor_get(x_11, 1);
x_43 = l_Lean_Exception_isInterrupt(x_41);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = l_Lean_Exception_isRuntime(x_41);
if (x_44 == 0)
{
lean_free_object(x_11);
lean_dec(x_41);
x_2 = x_10;
x_7 = x_42;
goto _start;
}
else
{
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
else
{
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_11, 0);
x_47 = lean_ctor_get(x_11, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_11);
x_48 = l_Lean_Exception_isInterrupt(x_46);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = l_Lean_Exception_isRuntime(x_46);
if (x_49 == 0)
{
lean_dec(x_46);
x_2 = x_10;
x_7 = x_47;
goto _start;
}
else
{
lean_object* x_51; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_46);
lean_ctor_set(x_51, 1, x_47);
return x_51;
}
}
else
{
lean_object* x_52; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_47);
return x_52;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at_Linarith_natToInt___elambda__1___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = l_List_reverse___rarg(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Linarith_mk__natCast__nonneg__prf(x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_free_object(x_1);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_1 = x_12;
x_7 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_18);
{
lean_object* _tmp_0 = x_12;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_6 = x_17;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_7 = _tmp_6;
}
goto _start;
}
}
else
{
uint8_t x_20; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_1, 0);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Linarith_mk__natCast__nonneg__prf(x_24, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_1 = x_25;
x_7 = x_28;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_2);
x_1 = x_25;
x_2 = x_32;
x_7 = x_30;
goto _start;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_25);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_26, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_36 = x_26;
} else {
 lean_dec_ref(x_26);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_natToInt___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_9 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1(x_1, x_2, x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_10);
x_13 = l_List_foldlM___at_Linarith_natToInt___elambda__1___spec__8(x_12, x_10, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Batteries_RBNode_toList___rarg(x_14);
lean_dec(x_14);
x_17 = l_List_filterMapM_loop___at_Linarith_natToInt___elambda__1___spec__9(x_16, x_8, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_List_appendTR___rarg(x_19, x_10);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = l_List_appendTR___rarg(x_23, x_10);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_8);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_1);
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
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
return x_9;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_9, 0);
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_9);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
static lean_object* _init_l_Linarith_natToInt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("natToInt", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_natToInt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_natToInt___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_natToInt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("move nats to ints", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Linarith_natToInt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_natToInt___closed__2;
x_2 = l_Linarith_natToInt___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_natToInt___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_natToInt___elambda__1), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_natToInt___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_natToInt___closed__4;
x_2 = l_Linarith_natToInt___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_natToInt() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_natToInt___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_natToInt___elambda__1___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_compareOn___at_Linarith_natToInt___elambda__1___spec__3(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forIn_x27_loop___at_Linarith_natToInt___elambda__1___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Int", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("add_one_le_iff", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_mkNonstrictIntProof___closed__1;
x_2 = l_Linarith_mkNonstrictIntProof___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Iff", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mpr", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_mkNonstrictIntProof___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_mkNonstrictIntProof___closed__4;
x_2 = l_Linarith_mkNonstrictIntProof___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_mkNonstrictIntProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Expr_ineqOrNotIneq_x3f(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 1)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
x_20 = lean_ctor_get(x_15, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_19, 0);
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
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_10);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_10, 1);
x_26 = lean_ctor_get(x_10, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_19, 1);
x_29 = lean_ctor_get(x_19, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l_Linarith_mkNonstrictIntProof___closed__1;
x_33 = lean_string_dec_eq(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_30);
lean_free_object(x_19);
lean_dec(x_28);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_box(0);
lean_ctor_set(x_10, 0, x_34);
return x_10;
}
else
{
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_35; 
lean_free_object(x_10);
x_35 = !lean_is_exclusive(x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_28, 0);
x_37 = lean_ctor_get(x_28, 1);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_36);
x_40 = lean_box(0);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 1, x_40);
lean_ctor_set(x_28, 0, x_39);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_38);
x_41 = lean_array_mk(x_19);
x_42 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_43 = l_Lean_Meta_mkAppOptM(x_42, x_41, x_2, x_3, x_4, x_5, x_25);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_40);
lean_ctor_set(x_15, 0, x_44);
x_46 = lean_array_mk(x_15);
x_47 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_48 = l_Lean_Meta_mkAppM(x_47, x_46, x_2, x_3, x_4, x_5, x_45);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_40);
lean_ctor_set(x_11, 0, x_1);
x_51 = lean_array_mk(x_11);
x_52 = l_Linarith_flipNegatedComparison___closed__12;
x_53 = l_Lean_Meta_mkAppM(x_52, x_51, x_2, x_3, x_4, x_5, x_50);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = l_Lean_Expr_app___override(x_49, x_55);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_53, 0, x_57);
return x_53;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_53, 0);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_53);
x_60 = l_Lean_Expr_app___override(x_49, x_58);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_49);
x_63 = !lean_is_exclusive(x_53);
if (x_63 == 0)
{
return x_53;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_53, 0);
x_65 = lean_ctor_get(x_53, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_53);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_48);
if (x_67 == 0)
{
return x_48;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_48, 0);
x_69 = lean_ctor_get(x_48, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_48);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_43);
if (x_71 == 0)
{
return x_43;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_43, 0);
x_73 = lean_ctor_get(x_43, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_43);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_75 = lean_ctor_get(x_28, 0);
x_76 = lean_ctor_get(x_28, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_28);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_75);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 1, x_80);
lean_ctor_set(x_19, 0, x_77);
x_81 = lean_array_mk(x_19);
x_82 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_83 = l_Lean_Meta_mkAppOptM(x_82, x_81, x_2, x_3, x_4, x_5, x_25);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_79);
lean_ctor_set(x_15, 0, x_84);
x_86 = lean_array_mk(x_15);
x_87 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_88 = l_Lean_Meta_mkAppM(x_87, x_86, x_2, x_3, x_4, x_5, x_85);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_79);
lean_ctor_set(x_11, 0, x_1);
x_91 = lean_array_mk(x_11);
x_92 = l_Linarith_flipNegatedComparison___closed__12;
x_93 = l_Lean_Meta_mkAppM(x_92, x_91, x_2, x_3, x_4, x_5, x_90);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = l_Lean_Expr_app___override(x_89, x_94);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
if (lean_is_scalar(x_96)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_96;
}
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_95);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_89);
x_100 = lean_ctor_get(x_93, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_93, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_102 = x_93;
} else {
 lean_dec_ref(x_93);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = lean_ctor_get(x_88, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_88, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_106 = x_88;
} else {
 lean_dec_ref(x_88);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = lean_ctor_get(x_83, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_83, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_110 = x_83;
} else {
 lean_dec_ref(x_83);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_30);
lean_free_object(x_19);
lean_dec(x_28);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_112 = lean_box(0);
lean_ctor_set(x_10, 0, x_112);
return x_10;
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_113 = lean_ctor_get(x_19, 1);
lean_inc(x_113);
lean_dec(x_19);
x_114 = lean_ctor_get(x_21, 1);
lean_inc(x_114);
lean_dec(x_21);
x_115 = lean_ctor_get(x_22, 1);
lean_inc(x_115);
lean_dec(x_22);
x_116 = l_Linarith_mkNonstrictIntProof___closed__1;
x_117 = lean_string_dec_eq(x_115, x_116);
lean_dec(x_115);
if (x_117 == 0)
{
lean_object* x_118; 
lean_dec(x_114);
lean_dec(x_113);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_118 = lean_box(0);
lean_ctor_set(x_10, 0, x_118);
return x_10;
}
else
{
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_free_object(x_10);
x_119 = lean_ctor_get(x_113, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_121 = x_113;
} else {
 lean_dec_ref(x_113);
 x_121 = lean_box(0);
}
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_120);
x_123 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_123, 0, x_119);
x_124 = lean_box(0);
if (lean_is_scalar(x_121)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_121;
 lean_ctor_set_tag(x_125, 1);
}
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_122);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_array_mk(x_126);
x_128 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_129 = l_Lean_Meta_mkAppOptM(x_128, x_127, x_2, x_3, x_4, x_5, x_25);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_124);
lean_ctor_set(x_15, 0, x_130);
x_132 = lean_array_mk(x_15);
x_133 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_134 = l_Lean_Meta_mkAppM(x_133, x_132, x_2, x_3, x_4, x_5, x_131);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_124);
lean_ctor_set(x_11, 0, x_1);
x_137 = lean_array_mk(x_11);
x_138 = l_Linarith_flipNegatedComparison___closed__12;
x_139 = l_Lean_Meta_mkAppM(x_138, x_137, x_2, x_3, x_4, x_5, x_136);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_142 = x_139;
} else {
 lean_dec_ref(x_139);
 x_142 = lean_box(0);
}
x_143 = l_Lean_Expr_app___override(x_135, x_140);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
if (lean_is_scalar(x_142)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_142;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_141);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_135);
x_146 = lean_ctor_get(x_139, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_139, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_148 = x_139;
} else {
 lean_dec_ref(x_139);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = lean_ctor_get(x_134, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_134, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_152 = x_134;
} else {
 lean_dec_ref(x_134);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_154 = lean_ctor_get(x_129, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_129, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_156 = x_129;
} else {
 lean_dec_ref(x_129);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
else
{
lean_object* x_158; 
lean_dec(x_114);
lean_dec(x_113);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_158 = lean_box(0);
lean_ctor_set(x_10, 0, x_158);
return x_10;
}
}
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_159 = lean_ctor_get(x_10, 1);
lean_inc(x_159);
lean_dec(x_10);
x_160 = lean_ctor_get(x_19, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_161 = x_19;
} else {
 lean_dec_ref(x_19);
 x_161 = lean_box(0);
}
x_162 = lean_ctor_get(x_21, 1);
lean_inc(x_162);
lean_dec(x_21);
x_163 = lean_ctor_get(x_22, 1);
lean_inc(x_163);
lean_dec(x_22);
x_164 = l_Linarith_mkNonstrictIntProof___closed__1;
x_165 = lean_string_dec_eq(x_163, x_164);
lean_dec(x_163);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; 
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_box(0);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_159);
return x_167;
}
else
{
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_168 = lean_ctor_get(x_160, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_160, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 lean_ctor_release(x_160, 1);
 x_170 = x_160;
} else {
 lean_dec_ref(x_160);
 x_170 = lean_box(0);
}
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_169);
x_172 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_172, 0, x_168);
x_173 = lean_box(0);
if (lean_is_scalar(x_170)) {
 x_174 = lean_alloc_ctor(1, 2, 0);
} else {
 x_174 = x_170;
 lean_ctor_set_tag(x_174, 1);
}
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
if (lean_is_scalar(x_161)) {
 x_175 = lean_alloc_ctor(1, 2, 0);
} else {
 x_175 = x_161;
 lean_ctor_set_tag(x_175, 1);
}
lean_ctor_set(x_175, 0, x_171);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_array_mk(x_175);
x_177 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_178 = l_Lean_Meta_mkAppOptM(x_177, x_176, x_2, x_3, x_4, x_5, x_159);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_173);
lean_ctor_set(x_15, 0, x_179);
x_181 = lean_array_mk(x_15);
x_182 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_183 = l_Lean_Meta_mkAppM(x_182, x_181, x_2, x_3, x_4, x_5, x_180);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec(x_183);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_173);
lean_ctor_set(x_11, 0, x_1);
x_186 = lean_array_mk(x_11);
x_187 = l_Linarith_flipNegatedComparison___closed__12;
x_188 = l_Lean_Meta_mkAppM(x_187, x_186, x_2, x_3, x_4, x_5, x_185);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_191 = x_188;
} else {
 lean_dec_ref(x_188);
 x_191 = lean_box(0);
}
x_192 = l_Lean_Expr_app___override(x_184, x_189);
x_193 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_193, 0, x_192);
if (lean_is_scalar(x_191)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_191;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_190);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_184);
x_195 = lean_ctor_get(x_188, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_188, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_197 = x_188;
} else {
 lean_dec_ref(x_188);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_199 = lean_ctor_get(x_183, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_183, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_201 = x_183;
} else {
 lean_dec_ref(x_183);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(1, 2, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_203 = lean_ctor_get(x_178, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_178, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_205 = x_178;
} else {
 lean_dec_ref(x_178);
 x_205 = lean_box(0);
}
if (lean_is_scalar(x_205)) {
 x_206 = lean_alloc_ctor(1, 2, 0);
} else {
 x_206 = x_205;
}
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_204);
return x_206;
}
}
else
{
lean_object* x_207; lean_object* x_208; 
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_207 = lean_box(0);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_159);
return x_208;
}
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_free_object(x_15);
lean_dec(x_19);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_10);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_10, 0);
lean_dec(x_210);
x_211 = lean_box(0);
lean_ctor_set(x_10, 0, x_211);
return x_10;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_10, 1);
lean_inc(x_212);
lean_dec(x_10);
x_213 = lean_box(0);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
}
else
{
uint8_t x_215; 
lean_dec(x_22);
lean_dec(x_21);
lean_free_object(x_15);
lean_dec(x_19);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_215 = !lean_is_exclusive(x_10);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; 
x_216 = lean_ctor_get(x_10, 0);
lean_dec(x_216);
x_217 = lean_box(0);
lean_ctor_set(x_10, 0, x_217);
return x_10;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_10, 1);
lean_inc(x_218);
lean_dec(x_10);
x_219 = lean_box(0);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
}
else
{
uint8_t x_221; 
lean_dec(x_21);
lean_free_object(x_15);
lean_dec(x_19);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_221 = !lean_is_exclusive(x_10);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; 
x_222 = lean_ctor_get(x_10, 0);
lean_dec(x_222);
x_223 = lean_box(0);
lean_ctor_set(x_10, 0, x_223);
return x_10;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_224 = lean_ctor_get(x_10, 1);
lean_inc(x_224);
lean_dec(x_10);
x_225 = lean_box(0);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
}
}
else
{
lean_object* x_227; lean_object* x_228; 
x_227 = lean_ctor_get(x_15, 1);
lean_inc(x_227);
lean_dec(x_15);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
if (lean_obj_tag(x_228) == 4)
{
lean_object* x_229; 
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
if (lean_obj_tag(x_229) == 1)
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
x_231 = lean_ctor_get(x_10, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_232 = x_10;
} else {
 lean_dec_ref(x_10);
 x_232 = lean_box(0);
}
x_233 = lean_ctor_get(x_227, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_234 = x_227;
} else {
 lean_dec_ref(x_227);
 x_234 = lean_box(0);
}
x_235 = lean_ctor_get(x_228, 1);
lean_inc(x_235);
lean_dec(x_228);
x_236 = lean_ctor_get(x_229, 1);
lean_inc(x_236);
lean_dec(x_229);
x_237 = l_Linarith_mkNonstrictIntProof___closed__1;
x_238 = lean_string_dec_eq(x_236, x_237);
lean_dec(x_236);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; 
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_239 = lean_box(0);
if (lean_is_scalar(x_232)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_232;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_231);
return x_240;
}
else
{
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
lean_dec(x_232);
x_241 = lean_ctor_get(x_233, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_233, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_243 = x_233;
} else {
 lean_dec_ref(x_233);
 x_243 = lean_box(0);
}
x_244 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_244, 0, x_242);
x_245 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_245, 0, x_241);
x_246 = lean_box(0);
if (lean_is_scalar(x_243)) {
 x_247 = lean_alloc_ctor(1, 2, 0);
} else {
 x_247 = x_243;
 lean_ctor_set_tag(x_247, 1);
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
if (lean_is_scalar(x_234)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_234;
 lean_ctor_set_tag(x_248, 1);
}
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_array_mk(x_248);
x_250 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_251 = l_Lean_Meta_mkAppOptM(x_250, x_249, x_2, x_3, x_4, x_5, x_231);
if (lean_obj_tag(x_251) == 0)
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_251, 1);
lean_inc(x_253);
lean_dec(x_251);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_252);
lean_ctor_set(x_254, 1, x_246);
x_255 = lean_array_mk(x_254);
x_256 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_257 = l_Lean_Meta_mkAppM(x_256, x_255, x_2, x_3, x_4, x_5, x_253);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_246);
lean_ctor_set(x_11, 0, x_1);
x_260 = lean_array_mk(x_11);
x_261 = l_Linarith_flipNegatedComparison___closed__12;
x_262 = l_Lean_Meta_mkAppM(x_261, x_260, x_2, x_3, x_4, x_5, x_259);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_265 = x_262;
} else {
 lean_dec_ref(x_262);
 x_265 = lean_box(0);
}
x_266 = l_Lean_Expr_app___override(x_258, x_263);
x_267 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_267, 0, x_266);
if (lean_is_scalar(x_265)) {
 x_268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_268 = x_265;
}
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_264);
return x_268;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
lean_dec(x_258);
x_269 = lean_ctor_get(x_262, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_262, 1);
lean_inc(x_270);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_271 = x_262;
} else {
 lean_dec_ref(x_262);
 x_271 = lean_box(0);
}
if (lean_is_scalar(x_271)) {
 x_272 = lean_alloc_ctor(1, 2, 0);
} else {
 x_272 = x_271;
}
lean_ctor_set(x_272, 0, x_269);
lean_ctor_set(x_272, 1, x_270);
return x_272;
}
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_273 = lean_ctor_get(x_257, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_257, 1);
lean_inc(x_274);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_275 = x_257;
} else {
 lean_dec_ref(x_257);
 x_275 = lean_box(0);
}
if (lean_is_scalar(x_275)) {
 x_276 = lean_alloc_ctor(1, 2, 0);
} else {
 x_276 = x_275;
}
lean_ctor_set(x_276, 0, x_273);
lean_ctor_set(x_276, 1, x_274);
return x_276;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_277 = lean_ctor_get(x_251, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_251, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 x_279 = x_251;
} else {
 lean_dec_ref(x_251);
 x_279 = lean_box(0);
}
if (lean_is_scalar(x_279)) {
 x_280 = lean_alloc_ctor(1, 2, 0);
} else {
 x_280 = x_279;
}
lean_ctor_set(x_280, 0, x_277);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
else
{
lean_object* x_281; lean_object* x_282; 
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_281 = lean_box(0);
if (lean_is_scalar(x_232)) {
 x_282 = lean_alloc_ctor(0, 2, 0);
} else {
 x_282 = x_232;
}
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_231);
return x_282;
}
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = lean_ctor_get(x_10, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_284 = x_10;
} else {
 lean_dec_ref(x_10);
 x_284 = lean_box(0);
}
x_285 = lean_box(0);
if (lean_is_scalar(x_284)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_284;
}
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_283);
return x_286;
}
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_287 = lean_ctor_get(x_10, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_288 = x_10;
} else {
 lean_dec_ref(x_10);
 x_288 = lean_box(0);
}
x_289 = lean_box(0);
if (lean_is_scalar(x_288)) {
 x_290 = lean_alloc_ctor(0, 2, 0);
} else {
 x_290 = x_288;
}
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_287);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_228);
lean_dec(x_227);
lean_free_object(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_291 = lean_ctor_get(x_10, 1);
lean_inc(x_291);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_292 = x_10;
} else {
 lean_dec_ref(x_10);
 x_292 = lean_box(0);
}
x_293 = lean_box(0);
if (lean_is_scalar(x_292)) {
 x_294 = lean_alloc_ctor(0, 2, 0);
} else {
 x_294 = x_292;
}
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_291);
return x_294;
}
}
}
else
{
uint8_t x_295; 
lean_dec(x_17);
lean_free_object(x_11);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_295 = !lean_is_exclusive(x_10);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_10, 0);
lean_dec(x_296);
x_297 = lean_box(0);
lean_ctor_set(x_10, 0, x_297);
return x_10;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_10, 1);
lean_inc(x_298);
lean_dec(x_10);
x_299 = lean_box(0);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
}
}
else
{
lean_object* x_301; lean_object* x_302; 
x_301 = lean_ctor_get(x_11, 1);
lean_inc(x_301);
lean_dec(x_11);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
if (lean_obj_tag(x_302) == 1)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; 
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
x_305 = lean_ctor_get(x_303, 0);
lean_inc(x_305);
if (lean_obj_tag(x_305) == 4)
{
lean_object* x_306; 
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
if (lean_obj_tag(x_306) == 1)
{
lean_object* x_307; 
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
if (lean_obj_tag(x_307) == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; 
x_308 = lean_ctor_get(x_10, 1);
lean_inc(x_308);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_309 = x_10;
} else {
 lean_dec_ref(x_10);
 x_309 = lean_box(0);
}
x_310 = lean_ctor_get(x_303, 1);
lean_inc(x_310);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_311 = x_303;
} else {
 lean_dec_ref(x_303);
 x_311 = lean_box(0);
}
x_312 = lean_ctor_get(x_305, 1);
lean_inc(x_312);
lean_dec(x_305);
x_313 = lean_ctor_get(x_306, 1);
lean_inc(x_313);
lean_dec(x_306);
x_314 = l_Linarith_mkNonstrictIntProof___closed__1;
x_315 = lean_string_dec_eq(x_313, x_314);
lean_dec(x_313);
if (x_315 == 0)
{
lean_object* x_316; lean_object* x_317; 
lean_dec(x_312);
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_304);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_316 = lean_box(0);
if (lean_is_scalar(x_309)) {
 x_317 = lean_alloc_ctor(0, 2, 0);
} else {
 x_317 = x_309;
}
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_308);
return x_317;
}
else
{
if (lean_obj_tag(x_312) == 0)
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
lean_dec(x_309);
x_318 = lean_ctor_get(x_310, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_310, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_320 = x_310;
} else {
 lean_dec_ref(x_310);
 x_320 = lean_box(0);
}
x_321 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_321, 0, x_319);
x_322 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_322, 0, x_318);
x_323 = lean_box(0);
if (lean_is_scalar(x_320)) {
 x_324 = lean_alloc_ctor(1, 2, 0);
} else {
 x_324 = x_320;
 lean_ctor_set_tag(x_324, 1);
}
lean_ctor_set(x_324, 0, x_322);
lean_ctor_set(x_324, 1, x_323);
if (lean_is_scalar(x_311)) {
 x_325 = lean_alloc_ctor(1, 2, 0);
} else {
 x_325 = x_311;
 lean_ctor_set_tag(x_325, 1);
}
lean_ctor_set(x_325, 0, x_321);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_array_mk(x_325);
x_327 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_328 = l_Lean_Meta_mkAppOptM(x_327, x_326, x_2, x_3, x_4, x_5, x_308);
if (lean_obj_tag(x_328) == 0)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
if (lean_is_scalar(x_304)) {
 x_331 = lean_alloc_ctor(1, 2, 0);
} else {
 x_331 = x_304;
 lean_ctor_set_tag(x_331, 1);
}
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_323);
x_332 = lean_array_mk(x_331);
x_333 = l_Linarith_mkNonstrictIntProof___closed__6;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_334 = l_Lean_Meta_mkAppM(x_333, x_332, x_2, x_3, x_4, x_5, x_330);
if (lean_obj_tag(x_334) == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_1);
lean_ctor_set(x_337, 1, x_323);
x_338 = lean_array_mk(x_337);
x_339 = l_Linarith_flipNegatedComparison___closed__12;
x_340 = l_Lean_Meta_mkAppM(x_339, x_338, x_2, x_3, x_4, x_5, x_336);
if (lean_obj_tag(x_340) == 0)
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_340, 1);
lean_inc(x_342);
if (lean_is_exclusive(x_340)) {
 lean_ctor_release(x_340, 0);
 lean_ctor_release(x_340, 1);
 x_343 = x_340;
} else {
 lean_dec_ref(x_340);
 x_343 = lean_box(0);
}
x_344 = l_Lean_Expr_app___override(x_335, x_341);
x_345 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_345, 0, x_344);
if (lean_is_scalar(x_343)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_343;
}
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_342);
return x_346;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_335);
x_347 = lean_ctor_get(x_340, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_340, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_340)) {
 lean_ctor_release(x_340, 0);
 lean_ctor_release(x_340, 1);
 x_349 = x_340;
} else {
 lean_dec_ref(x_340);
 x_349 = lean_box(0);
}
if (lean_is_scalar(x_349)) {
 x_350 = lean_alloc_ctor(1, 2, 0);
} else {
 x_350 = x_349;
}
lean_ctor_set(x_350, 0, x_347);
lean_ctor_set(x_350, 1, x_348);
return x_350;
}
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_351 = lean_ctor_get(x_334, 0);
lean_inc(x_351);
x_352 = lean_ctor_get(x_334, 1);
lean_inc(x_352);
if (lean_is_exclusive(x_334)) {
 lean_ctor_release(x_334, 0);
 lean_ctor_release(x_334, 1);
 x_353 = x_334;
} else {
 lean_dec_ref(x_334);
 x_353 = lean_box(0);
}
if (lean_is_scalar(x_353)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_353;
}
lean_ctor_set(x_354, 0, x_351);
lean_ctor_set(x_354, 1, x_352);
return x_354;
}
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_304);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_355 = lean_ctor_get(x_328, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_328, 1);
lean_inc(x_356);
if (lean_is_exclusive(x_328)) {
 lean_ctor_release(x_328, 0);
 lean_ctor_release(x_328, 1);
 x_357 = x_328;
} else {
 lean_dec_ref(x_328);
 x_357 = lean_box(0);
}
if (lean_is_scalar(x_357)) {
 x_358 = lean_alloc_ctor(1, 2, 0);
} else {
 x_358 = x_357;
}
lean_ctor_set(x_358, 0, x_355);
lean_ctor_set(x_358, 1, x_356);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; 
lean_dec(x_312);
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_304);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_359 = lean_box(0);
if (lean_is_scalar(x_309)) {
 x_360 = lean_alloc_ctor(0, 2, 0);
} else {
 x_360 = x_309;
}
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_308);
return x_360;
}
}
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
lean_dec(x_307);
lean_dec(x_306);
lean_dec(x_305);
lean_dec(x_304);
lean_dec(x_303);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_361 = lean_ctor_get(x_10, 1);
lean_inc(x_361);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_362 = x_10;
} else {
 lean_dec_ref(x_10);
 x_362 = lean_box(0);
}
x_363 = lean_box(0);
if (lean_is_scalar(x_362)) {
 x_364 = lean_alloc_ctor(0, 2, 0);
} else {
 x_364 = x_362;
}
lean_ctor_set(x_364, 0, x_363);
lean_ctor_set(x_364, 1, x_361);
return x_364;
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
lean_dec(x_306);
lean_dec(x_305);
lean_dec(x_304);
lean_dec(x_303);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_365 = lean_ctor_get(x_10, 1);
lean_inc(x_365);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_366 = x_10;
} else {
 lean_dec_ref(x_10);
 x_366 = lean_box(0);
}
x_367 = lean_box(0);
if (lean_is_scalar(x_366)) {
 x_368 = lean_alloc_ctor(0, 2, 0);
} else {
 x_368 = x_366;
}
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_365);
return x_368;
}
}
else
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_dec(x_305);
lean_dec(x_304);
lean_dec(x_303);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_369 = lean_ctor_get(x_10, 1);
lean_inc(x_369);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_370 = x_10;
} else {
 lean_dec_ref(x_10);
 x_370 = lean_box(0);
}
x_371 = lean_box(0);
if (lean_is_scalar(x_370)) {
 x_372 = lean_alloc_ctor(0, 2, 0);
} else {
 x_372 = x_370;
}
lean_ctor_set(x_372, 0, x_371);
lean_ctor_set(x_372, 1, x_369);
return x_372;
}
}
else
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; 
lean_dec(x_302);
lean_dec(x_301);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_373 = lean_ctor_get(x_10, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_374 = x_10;
} else {
 lean_dec_ref(x_10);
 x_374 = lean_box(0);
}
x_375 = lean_box(0);
if (lean_is_scalar(x_374)) {
 x_376 = lean_alloc_ctor(0, 2, 0);
} else {
 x_376 = x_374;
}
lean_ctor_set(x_376, 0, x_375);
lean_ctor_set(x_376, 1, x_373);
return x_376;
}
}
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = lean_ctor_get(x_11, 1);
lean_inc(x_377);
lean_dec(x_11);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 2)
{
uint8_t x_379; 
x_379 = !lean_is_exclusive(x_377);
if (x_379 == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_380 = lean_ctor_get(x_377, 1);
x_381 = lean_ctor_get(x_377, 0);
lean_dec(x_381);
x_382 = lean_ctor_get(x_380, 0);
lean_inc(x_382);
if (lean_obj_tag(x_382) == 4)
{
lean_object* x_383; 
x_383 = lean_ctor_get(x_382, 0);
lean_inc(x_383);
if (lean_obj_tag(x_383) == 1)
{
lean_object* x_384; 
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
if (lean_obj_tag(x_384) == 0)
{
uint8_t x_385; 
x_385 = !lean_is_exclusive(x_10);
if (x_385 == 0)
{
lean_object* x_386; lean_object* x_387; uint8_t x_388; 
x_386 = lean_ctor_get(x_10, 1);
x_387 = lean_ctor_get(x_10, 0);
lean_dec(x_387);
x_388 = !lean_is_exclusive(x_380);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; uint8_t x_394; 
x_389 = lean_ctor_get(x_380, 1);
x_390 = lean_ctor_get(x_380, 0);
lean_dec(x_390);
x_391 = lean_ctor_get(x_382, 1);
lean_inc(x_391);
lean_dec(x_382);
x_392 = lean_ctor_get(x_383, 1);
lean_inc(x_392);
lean_dec(x_383);
x_393 = l_Linarith_mkNonstrictIntProof___closed__1;
x_394 = lean_string_dec_eq(x_392, x_393);
lean_dec(x_392);
if (x_394 == 0)
{
lean_object* x_395; 
lean_dec(x_391);
lean_free_object(x_380);
lean_dec(x_389);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_395 = lean_box(0);
lean_ctor_set(x_10, 0, x_395);
return x_10;
}
else
{
if (lean_obj_tag(x_391) == 0)
{
uint8_t x_396; 
lean_free_object(x_10);
x_396 = !lean_is_exclusive(x_389);
if (x_396 == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_397 = lean_ctor_get(x_389, 0);
x_398 = lean_ctor_get(x_389, 1);
x_399 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_399, 0, x_397);
x_400 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_400, 0, x_398);
x_401 = lean_box(0);
lean_ctor_set_tag(x_389, 1);
lean_ctor_set(x_389, 1, x_401);
lean_ctor_set(x_389, 0, x_400);
lean_ctor_set_tag(x_380, 1);
lean_ctor_set(x_380, 0, x_399);
x_402 = lean_array_mk(x_380);
x_403 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_404 = l_Lean_Meta_mkAppOptM(x_403, x_402, x_2, x_3, x_4, x_5, x_386);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
lean_dec(x_404);
lean_ctor_set_tag(x_377, 1);
lean_ctor_set(x_377, 1, x_401);
lean_ctor_set(x_377, 0, x_405);
x_407 = lean_array_mk(x_377);
x_408 = l_Linarith_mkNonstrictIntProof___closed__6;
x_409 = l_Lean_Meta_mkAppM(x_408, x_407, x_2, x_3, x_4, x_5, x_406);
if (lean_obj_tag(x_409) == 0)
{
uint8_t x_410; 
x_410 = !lean_is_exclusive(x_409);
if (x_410 == 0)
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_411 = lean_ctor_get(x_409, 0);
x_412 = l_Lean_Expr_app___override(x_411, x_1);
x_413 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_409, 0, x_413);
return x_409;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_414 = lean_ctor_get(x_409, 0);
x_415 = lean_ctor_get(x_409, 1);
lean_inc(x_415);
lean_inc(x_414);
lean_dec(x_409);
x_416 = l_Lean_Expr_app___override(x_414, x_1);
x_417 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_417, 0, x_416);
x_418 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_418, 0, x_417);
lean_ctor_set(x_418, 1, x_415);
return x_418;
}
}
else
{
uint8_t x_419; 
lean_dec(x_1);
x_419 = !lean_is_exclusive(x_409);
if (x_419 == 0)
{
return x_409;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_420 = lean_ctor_get(x_409, 0);
x_421 = lean_ctor_get(x_409, 1);
lean_inc(x_421);
lean_inc(x_420);
lean_dec(x_409);
x_422 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_422, 0, x_420);
lean_ctor_set(x_422, 1, x_421);
return x_422;
}
}
}
else
{
uint8_t x_423; 
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_423 = !lean_is_exclusive(x_404);
if (x_423 == 0)
{
return x_404;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_424 = lean_ctor_get(x_404, 0);
x_425 = lean_ctor_get(x_404, 1);
lean_inc(x_425);
lean_inc(x_424);
lean_dec(x_404);
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_424);
lean_ctor_set(x_426, 1, x_425);
return x_426;
}
}
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_427 = lean_ctor_get(x_389, 0);
x_428 = lean_ctor_get(x_389, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_389);
x_429 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_429, 0, x_427);
x_430 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_430, 0, x_428);
x_431 = lean_box(0);
x_432 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_432, 0, x_430);
lean_ctor_set(x_432, 1, x_431);
lean_ctor_set_tag(x_380, 1);
lean_ctor_set(x_380, 1, x_432);
lean_ctor_set(x_380, 0, x_429);
x_433 = lean_array_mk(x_380);
x_434 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_435 = l_Lean_Meta_mkAppOptM(x_434, x_433, x_2, x_3, x_4, x_5, x_386);
if (lean_obj_tag(x_435) == 0)
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
lean_ctor_set_tag(x_377, 1);
lean_ctor_set(x_377, 1, x_431);
lean_ctor_set(x_377, 0, x_436);
x_438 = lean_array_mk(x_377);
x_439 = l_Linarith_mkNonstrictIntProof___closed__6;
x_440 = l_Lean_Meta_mkAppM(x_439, x_438, x_2, x_3, x_4, x_5, x_437);
if (lean_obj_tag(x_440) == 0)
{
lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_443 = x_440;
} else {
 lean_dec_ref(x_440);
 x_443 = lean_box(0);
}
x_444 = l_Lean_Expr_app___override(x_441, x_1);
x_445 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_445, 0, x_444);
if (lean_is_scalar(x_443)) {
 x_446 = lean_alloc_ctor(0, 2, 0);
} else {
 x_446 = x_443;
}
lean_ctor_set(x_446, 0, x_445);
lean_ctor_set(x_446, 1, x_442);
return x_446;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
lean_dec(x_1);
x_447 = lean_ctor_get(x_440, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_440, 1);
lean_inc(x_448);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_449 = x_440;
} else {
 lean_dec_ref(x_440);
 x_449 = lean_box(0);
}
if (lean_is_scalar(x_449)) {
 x_450 = lean_alloc_ctor(1, 2, 0);
} else {
 x_450 = x_449;
}
lean_ctor_set(x_450, 0, x_447);
lean_ctor_set(x_450, 1, x_448);
return x_450;
}
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_451 = lean_ctor_get(x_435, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_435, 1);
lean_inc(x_452);
if (lean_is_exclusive(x_435)) {
 lean_ctor_release(x_435, 0);
 lean_ctor_release(x_435, 1);
 x_453 = x_435;
} else {
 lean_dec_ref(x_435);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_453)) {
 x_454 = lean_alloc_ctor(1, 2, 0);
} else {
 x_454 = x_453;
}
lean_ctor_set(x_454, 0, x_451);
lean_ctor_set(x_454, 1, x_452);
return x_454;
}
}
}
else
{
lean_object* x_455; 
lean_dec(x_391);
lean_free_object(x_380);
lean_dec(x_389);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_455 = lean_box(0);
lean_ctor_set(x_10, 0, x_455);
return x_10;
}
}
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; uint8_t x_460; 
x_456 = lean_ctor_get(x_380, 1);
lean_inc(x_456);
lean_dec(x_380);
x_457 = lean_ctor_get(x_382, 1);
lean_inc(x_457);
lean_dec(x_382);
x_458 = lean_ctor_get(x_383, 1);
lean_inc(x_458);
lean_dec(x_383);
x_459 = l_Linarith_mkNonstrictIntProof___closed__1;
x_460 = lean_string_dec_eq(x_458, x_459);
lean_dec(x_458);
if (x_460 == 0)
{
lean_object* x_461; 
lean_dec(x_457);
lean_dec(x_456);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_461 = lean_box(0);
lean_ctor_set(x_10, 0, x_461);
return x_10;
}
else
{
if (lean_obj_tag(x_457) == 0)
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
lean_free_object(x_10);
x_462 = lean_ctor_get(x_456, 0);
lean_inc(x_462);
x_463 = lean_ctor_get(x_456, 1);
lean_inc(x_463);
if (lean_is_exclusive(x_456)) {
 lean_ctor_release(x_456, 0);
 lean_ctor_release(x_456, 1);
 x_464 = x_456;
} else {
 lean_dec_ref(x_456);
 x_464 = lean_box(0);
}
x_465 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_465, 0, x_462);
x_466 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_466, 0, x_463);
x_467 = lean_box(0);
if (lean_is_scalar(x_464)) {
 x_468 = lean_alloc_ctor(1, 2, 0);
} else {
 x_468 = x_464;
 lean_ctor_set_tag(x_468, 1);
}
lean_ctor_set(x_468, 0, x_466);
lean_ctor_set(x_468, 1, x_467);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_465);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_array_mk(x_469);
x_471 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_472 = l_Lean_Meta_mkAppOptM(x_471, x_470, x_2, x_3, x_4, x_5, x_386);
if (lean_obj_tag(x_472) == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
lean_ctor_set_tag(x_377, 1);
lean_ctor_set(x_377, 1, x_467);
lean_ctor_set(x_377, 0, x_473);
x_475 = lean_array_mk(x_377);
x_476 = l_Linarith_mkNonstrictIntProof___closed__6;
x_477 = l_Lean_Meta_mkAppM(x_476, x_475, x_2, x_3, x_4, x_5, x_474);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_478 = lean_ctor_get(x_477, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_477, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 x_480 = x_477;
} else {
 lean_dec_ref(x_477);
 x_480 = lean_box(0);
}
x_481 = l_Lean_Expr_app___override(x_478, x_1);
x_482 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_482, 0, x_481);
if (lean_is_scalar(x_480)) {
 x_483 = lean_alloc_ctor(0, 2, 0);
} else {
 x_483 = x_480;
}
lean_ctor_set(x_483, 0, x_482);
lean_ctor_set(x_483, 1, x_479);
return x_483;
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; 
lean_dec(x_1);
x_484 = lean_ctor_get(x_477, 0);
lean_inc(x_484);
x_485 = lean_ctor_get(x_477, 1);
lean_inc(x_485);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 x_486 = x_477;
} else {
 lean_dec_ref(x_477);
 x_486 = lean_box(0);
}
if (lean_is_scalar(x_486)) {
 x_487 = lean_alloc_ctor(1, 2, 0);
} else {
 x_487 = x_486;
}
lean_ctor_set(x_487, 0, x_484);
lean_ctor_set(x_487, 1, x_485);
return x_487;
}
}
else
{
lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; 
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_488 = lean_ctor_get(x_472, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_472, 1);
lean_inc(x_489);
if (lean_is_exclusive(x_472)) {
 lean_ctor_release(x_472, 0);
 lean_ctor_release(x_472, 1);
 x_490 = x_472;
} else {
 lean_dec_ref(x_472);
 x_490 = lean_box(0);
}
if (lean_is_scalar(x_490)) {
 x_491 = lean_alloc_ctor(1, 2, 0);
} else {
 x_491 = x_490;
}
lean_ctor_set(x_491, 0, x_488);
lean_ctor_set(x_491, 1, x_489);
return x_491;
}
}
else
{
lean_object* x_492; 
lean_dec(x_457);
lean_dec(x_456);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_492 = lean_box(0);
lean_ctor_set(x_10, 0, x_492);
return x_10;
}
}
}
}
else
{
lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; uint8_t x_499; 
x_493 = lean_ctor_get(x_10, 1);
lean_inc(x_493);
lean_dec(x_10);
x_494 = lean_ctor_get(x_380, 1);
lean_inc(x_494);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_495 = x_380;
} else {
 lean_dec_ref(x_380);
 x_495 = lean_box(0);
}
x_496 = lean_ctor_get(x_382, 1);
lean_inc(x_496);
lean_dec(x_382);
x_497 = lean_ctor_get(x_383, 1);
lean_inc(x_497);
lean_dec(x_383);
x_498 = l_Linarith_mkNonstrictIntProof___closed__1;
x_499 = lean_string_dec_eq(x_497, x_498);
lean_dec(x_497);
if (x_499 == 0)
{
lean_object* x_500; lean_object* x_501; 
lean_dec(x_496);
lean_dec(x_495);
lean_dec(x_494);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_500 = lean_box(0);
x_501 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_501, 0, x_500);
lean_ctor_set(x_501, 1, x_493);
return x_501;
}
else
{
if (lean_obj_tag(x_496) == 0)
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; 
x_502 = lean_ctor_get(x_494, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_494, 1);
lean_inc(x_503);
if (lean_is_exclusive(x_494)) {
 lean_ctor_release(x_494, 0);
 lean_ctor_release(x_494, 1);
 x_504 = x_494;
} else {
 lean_dec_ref(x_494);
 x_504 = lean_box(0);
}
x_505 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_505, 0, x_502);
x_506 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_506, 0, x_503);
x_507 = lean_box(0);
if (lean_is_scalar(x_504)) {
 x_508 = lean_alloc_ctor(1, 2, 0);
} else {
 x_508 = x_504;
 lean_ctor_set_tag(x_508, 1);
}
lean_ctor_set(x_508, 0, x_506);
lean_ctor_set(x_508, 1, x_507);
if (lean_is_scalar(x_495)) {
 x_509 = lean_alloc_ctor(1, 2, 0);
} else {
 x_509 = x_495;
 lean_ctor_set_tag(x_509, 1);
}
lean_ctor_set(x_509, 0, x_505);
lean_ctor_set(x_509, 1, x_508);
x_510 = lean_array_mk(x_509);
x_511 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_512 = l_Lean_Meta_mkAppOptM(x_511, x_510, x_2, x_3, x_4, x_5, x_493);
if (lean_obj_tag(x_512) == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
x_513 = lean_ctor_get(x_512, 0);
lean_inc(x_513);
x_514 = lean_ctor_get(x_512, 1);
lean_inc(x_514);
lean_dec(x_512);
lean_ctor_set_tag(x_377, 1);
lean_ctor_set(x_377, 1, x_507);
lean_ctor_set(x_377, 0, x_513);
x_515 = lean_array_mk(x_377);
x_516 = l_Linarith_mkNonstrictIntProof___closed__6;
x_517 = l_Lean_Meta_mkAppM(x_516, x_515, x_2, x_3, x_4, x_5, x_514);
if (lean_obj_tag(x_517) == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_518 = lean_ctor_get(x_517, 0);
lean_inc(x_518);
x_519 = lean_ctor_get(x_517, 1);
lean_inc(x_519);
if (lean_is_exclusive(x_517)) {
 lean_ctor_release(x_517, 0);
 lean_ctor_release(x_517, 1);
 x_520 = x_517;
} else {
 lean_dec_ref(x_517);
 x_520 = lean_box(0);
}
x_521 = l_Lean_Expr_app___override(x_518, x_1);
x_522 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_522, 0, x_521);
if (lean_is_scalar(x_520)) {
 x_523 = lean_alloc_ctor(0, 2, 0);
} else {
 x_523 = x_520;
}
lean_ctor_set(x_523, 0, x_522);
lean_ctor_set(x_523, 1, x_519);
return x_523;
}
else
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; 
lean_dec(x_1);
x_524 = lean_ctor_get(x_517, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_517, 1);
lean_inc(x_525);
if (lean_is_exclusive(x_517)) {
 lean_ctor_release(x_517, 0);
 lean_ctor_release(x_517, 1);
 x_526 = x_517;
} else {
 lean_dec_ref(x_517);
 x_526 = lean_box(0);
}
if (lean_is_scalar(x_526)) {
 x_527 = lean_alloc_ctor(1, 2, 0);
} else {
 x_527 = x_526;
}
lean_ctor_set(x_527, 0, x_524);
lean_ctor_set(x_527, 1, x_525);
return x_527;
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; 
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_528 = lean_ctor_get(x_512, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_512, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_512)) {
 lean_ctor_release(x_512, 0);
 lean_ctor_release(x_512, 1);
 x_530 = x_512;
} else {
 lean_dec_ref(x_512);
 x_530 = lean_box(0);
}
if (lean_is_scalar(x_530)) {
 x_531 = lean_alloc_ctor(1, 2, 0);
} else {
 x_531 = x_530;
}
lean_ctor_set(x_531, 0, x_528);
lean_ctor_set(x_531, 1, x_529);
return x_531;
}
}
else
{
lean_object* x_532; lean_object* x_533; 
lean_dec(x_496);
lean_dec(x_495);
lean_dec(x_494);
lean_free_object(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_532 = lean_box(0);
x_533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_533, 0, x_532);
lean_ctor_set(x_533, 1, x_493);
return x_533;
}
}
}
}
else
{
uint8_t x_534; 
lean_dec(x_384);
lean_dec(x_383);
lean_dec(x_382);
lean_free_object(x_377);
lean_dec(x_380);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_534 = !lean_is_exclusive(x_10);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
x_535 = lean_ctor_get(x_10, 0);
lean_dec(x_535);
x_536 = lean_box(0);
lean_ctor_set(x_10, 0, x_536);
return x_10;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; 
x_537 = lean_ctor_get(x_10, 1);
lean_inc(x_537);
lean_dec(x_10);
x_538 = lean_box(0);
x_539 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_539, 0, x_538);
lean_ctor_set(x_539, 1, x_537);
return x_539;
}
}
}
else
{
uint8_t x_540; 
lean_dec(x_383);
lean_dec(x_382);
lean_free_object(x_377);
lean_dec(x_380);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_540 = !lean_is_exclusive(x_10);
if (x_540 == 0)
{
lean_object* x_541; lean_object* x_542; 
x_541 = lean_ctor_get(x_10, 0);
lean_dec(x_541);
x_542 = lean_box(0);
lean_ctor_set(x_10, 0, x_542);
return x_10;
}
else
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; 
x_543 = lean_ctor_get(x_10, 1);
lean_inc(x_543);
lean_dec(x_10);
x_544 = lean_box(0);
x_545 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_545, 0, x_544);
lean_ctor_set(x_545, 1, x_543);
return x_545;
}
}
}
else
{
uint8_t x_546; 
lean_dec(x_382);
lean_free_object(x_377);
lean_dec(x_380);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_546 = !lean_is_exclusive(x_10);
if (x_546 == 0)
{
lean_object* x_547; lean_object* x_548; 
x_547 = lean_ctor_get(x_10, 0);
lean_dec(x_547);
x_548 = lean_box(0);
lean_ctor_set(x_10, 0, x_548);
return x_10;
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; 
x_549 = lean_ctor_get(x_10, 1);
lean_inc(x_549);
lean_dec(x_10);
x_550 = lean_box(0);
x_551 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_551, 0, x_550);
lean_ctor_set(x_551, 1, x_549);
return x_551;
}
}
}
else
{
lean_object* x_552; lean_object* x_553; 
x_552 = lean_ctor_get(x_377, 1);
lean_inc(x_552);
lean_dec(x_377);
x_553 = lean_ctor_get(x_552, 0);
lean_inc(x_553);
if (lean_obj_tag(x_553) == 4)
{
lean_object* x_554; 
x_554 = lean_ctor_get(x_553, 0);
lean_inc(x_554);
if (lean_obj_tag(x_554) == 1)
{
lean_object* x_555; 
x_555 = lean_ctor_get(x_554, 0);
lean_inc(x_555);
if (lean_obj_tag(x_555) == 0)
{
lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; uint8_t x_563; 
x_556 = lean_ctor_get(x_10, 1);
lean_inc(x_556);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_557 = x_10;
} else {
 lean_dec_ref(x_10);
 x_557 = lean_box(0);
}
x_558 = lean_ctor_get(x_552, 1);
lean_inc(x_558);
if (lean_is_exclusive(x_552)) {
 lean_ctor_release(x_552, 0);
 lean_ctor_release(x_552, 1);
 x_559 = x_552;
} else {
 lean_dec_ref(x_552);
 x_559 = lean_box(0);
}
x_560 = lean_ctor_get(x_553, 1);
lean_inc(x_560);
lean_dec(x_553);
x_561 = lean_ctor_get(x_554, 1);
lean_inc(x_561);
lean_dec(x_554);
x_562 = l_Linarith_mkNonstrictIntProof___closed__1;
x_563 = lean_string_dec_eq(x_561, x_562);
lean_dec(x_561);
if (x_563 == 0)
{
lean_object* x_564; lean_object* x_565; 
lean_dec(x_560);
lean_dec(x_559);
lean_dec(x_558);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_564 = lean_box(0);
if (lean_is_scalar(x_557)) {
 x_565 = lean_alloc_ctor(0, 2, 0);
} else {
 x_565 = x_557;
}
lean_ctor_set(x_565, 0, x_564);
lean_ctor_set(x_565, 1, x_556);
return x_565;
}
else
{
if (lean_obj_tag(x_560) == 0)
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; 
lean_dec(x_557);
x_566 = lean_ctor_get(x_558, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_558, 1);
lean_inc(x_567);
if (lean_is_exclusive(x_558)) {
 lean_ctor_release(x_558, 0);
 lean_ctor_release(x_558, 1);
 x_568 = x_558;
} else {
 lean_dec_ref(x_558);
 x_568 = lean_box(0);
}
x_569 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_569, 0, x_566);
x_570 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_570, 0, x_567);
x_571 = lean_box(0);
if (lean_is_scalar(x_568)) {
 x_572 = lean_alloc_ctor(1, 2, 0);
} else {
 x_572 = x_568;
 lean_ctor_set_tag(x_572, 1);
}
lean_ctor_set(x_572, 0, x_570);
lean_ctor_set(x_572, 1, x_571);
if (lean_is_scalar(x_559)) {
 x_573 = lean_alloc_ctor(1, 2, 0);
} else {
 x_573 = x_559;
 lean_ctor_set_tag(x_573, 1);
}
lean_ctor_set(x_573, 0, x_569);
lean_ctor_set(x_573, 1, x_572);
x_574 = lean_array_mk(x_573);
x_575 = l_Linarith_mkNonstrictIntProof___closed__3;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_576 = l_Lean_Meta_mkAppOptM(x_575, x_574, x_2, x_3, x_4, x_5, x_556);
if (lean_obj_tag(x_576) == 0)
{
lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; 
x_577 = lean_ctor_get(x_576, 0);
lean_inc(x_577);
x_578 = lean_ctor_get(x_576, 1);
lean_inc(x_578);
lean_dec(x_576);
x_579 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_579, 0, x_577);
lean_ctor_set(x_579, 1, x_571);
x_580 = lean_array_mk(x_579);
x_581 = l_Linarith_mkNonstrictIntProof___closed__6;
x_582 = l_Lean_Meta_mkAppM(x_581, x_580, x_2, x_3, x_4, x_5, x_578);
if (lean_obj_tag(x_582) == 0)
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; 
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_582, 1);
lean_inc(x_584);
if (lean_is_exclusive(x_582)) {
 lean_ctor_release(x_582, 0);
 lean_ctor_release(x_582, 1);
 x_585 = x_582;
} else {
 lean_dec_ref(x_582);
 x_585 = lean_box(0);
}
x_586 = l_Lean_Expr_app___override(x_583, x_1);
x_587 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_587, 0, x_586);
if (lean_is_scalar(x_585)) {
 x_588 = lean_alloc_ctor(0, 2, 0);
} else {
 x_588 = x_585;
}
lean_ctor_set(x_588, 0, x_587);
lean_ctor_set(x_588, 1, x_584);
return x_588;
}
else
{
lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
lean_dec(x_1);
x_589 = lean_ctor_get(x_582, 0);
lean_inc(x_589);
x_590 = lean_ctor_get(x_582, 1);
lean_inc(x_590);
if (lean_is_exclusive(x_582)) {
 lean_ctor_release(x_582, 0);
 lean_ctor_release(x_582, 1);
 x_591 = x_582;
} else {
 lean_dec_ref(x_582);
 x_591 = lean_box(0);
}
if (lean_is_scalar(x_591)) {
 x_592 = lean_alloc_ctor(1, 2, 0);
} else {
 x_592 = x_591;
}
lean_ctor_set(x_592, 0, x_589);
lean_ctor_set(x_592, 1, x_590);
return x_592;
}
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_593 = lean_ctor_get(x_576, 0);
lean_inc(x_593);
x_594 = lean_ctor_get(x_576, 1);
lean_inc(x_594);
if (lean_is_exclusive(x_576)) {
 lean_ctor_release(x_576, 0);
 lean_ctor_release(x_576, 1);
 x_595 = x_576;
} else {
 lean_dec_ref(x_576);
 x_595 = lean_box(0);
}
if (lean_is_scalar(x_595)) {
 x_596 = lean_alloc_ctor(1, 2, 0);
} else {
 x_596 = x_595;
}
lean_ctor_set(x_596, 0, x_593);
lean_ctor_set(x_596, 1, x_594);
return x_596;
}
}
else
{
lean_object* x_597; lean_object* x_598; 
lean_dec(x_560);
lean_dec(x_559);
lean_dec(x_558);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_597 = lean_box(0);
if (lean_is_scalar(x_557)) {
 x_598 = lean_alloc_ctor(0, 2, 0);
} else {
 x_598 = x_557;
}
lean_ctor_set(x_598, 0, x_597);
lean_ctor_set(x_598, 1, x_556);
return x_598;
}
}
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
lean_dec(x_555);
lean_dec(x_554);
lean_dec(x_553);
lean_dec(x_552);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_599 = lean_ctor_get(x_10, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_600 = x_10;
} else {
 lean_dec_ref(x_10);
 x_600 = lean_box(0);
}
x_601 = lean_box(0);
if (lean_is_scalar(x_600)) {
 x_602 = lean_alloc_ctor(0, 2, 0);
} else {
 x_602 = x_600;
}
lean_ctor_set(x_602, 0, x_601);
lean_ctor_set(x_602, 1, x_599);
return x_602;
}
}
else
{
lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; 
lean_dec(x_554);
lean_dec(x_553);
lean_dec(x_552);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_603 = lean_ctor_get(x_10, 1);
lean_inc(x_603);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_604 = x_10;
} else {
 lean_dec_ref(x_10);
 x_604 = lean_box(0);
}
x_605 = lean_box(0);
if (lean_is_scalar(x_604)) {
 x_606 = lean_alloc_ctor(0, 2, 0);
} else {
 x_606 = x_604;
}
lean_ctor_set(x_606, 0, x_605);
lean_ctor_set(x_606, 1, x_603);
return x_606;
}
}
else
{
lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; 
lean_dec(x_553);
lean_dec(x_552);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_607 = lean_ctor_get(x_10, 1);
lean_inc(x_607);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_608 = x_10;
} else {
 lean_dec_ref(x_10);
 x_608 = lean_box(0);
}
x_609 = lean_box(0);
if (lean_is_scalar(x_608)) {
 x_610 = lean_alloc_ctor(0, 2, 0);
} else {
 x_610 = x_608;
}
lean_ctor_set(x_610, 0, x_609);
lean_ctor_set(x_610, 1, x_607);
return x_610;
}
}
}
else
{
uint8_t x_611; 
lean_dec(x_378);
lean_dec(x_377);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_611 = !lean_is_exclusive(x_10);
if (x_611 == 0)
{
lean_object* x_612; lean_object* x_613; 
x_612 = lean_ctor_get(x_10, 0);
lean_dec(x_612);
x_613 = lean_box(0);
lean_ctor_set(x_10, 0, x_613);
return x_10;
}
else
{
lean_object* x_614; lean_object* x_615; lean_object* x_616; 
x_614 = lean_ctor_get(x_10, 1);
lean_inc(x_614);
lean_dec(x_10);
x_615 = lean_box(0);
x_616 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_614);
return x_616;
}
}
}
}
else
{
uint8_t x_617; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_617 = !lean_is_exclusive(x_10);
if (x_617 == 0)
{
return x_10;
}
else
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; 
x_618 = lean_ctor_get(x_10, 0);
x_619 = lean_ctor_get(x_10, 1);
lean_inc(x_619);
lean_inc(x_618);
lean_dec(x_10);
x_620 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_620, 0, x_618);
lean_ctor_set(x_620, 1, x_619);
return x_620;
}
}
}
else
{
uint8_t x_621; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_621 = !lean_is_exclusive(x_7);
if (x_621 == 0)
{
return x_7;
}
else
{
lean_object* x_622; lean_object* x_623; lean_object* x_624; 
x_622 = lean_ctor_get(x_7, 0);
x_623 = lean_ctor_get(x_7, 1);
lean_inc(x_623);
lean_inc(x_622);
lean_dec(x_7);
x_624 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_624, 0, x_622);
lean_ctor_set(x_624, 1, x_623);
return x_624;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_strengthenStrictInt___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Linarith_mkNonstrictIntProof(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_box(0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = lean_box(0);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_7);
if (x_22 == 0)
{
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("strengthenStrictInt", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_strengthenStrictInt___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("strengthen strict inequalities over int", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_strengthenStrictInt___closed__2;
x_2 = l_Linarith_strengthenStrictInt___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_strengthenStrictInt___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_strengthenStrictInt___closed__4;
x_2 = l_Linarith_strengthenStrictInt___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_strengthenStrictInt() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_strengthenStrictInt___closed__6;
return x_1;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sub_eq_zero_of_eq", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_rearrangeComparison___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sub_nonpos_of_le", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_rearrangeComparison___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sub_neg_of_lt", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Linarith_rearrangeComparison___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_rearrangeComparison___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_rearrangeComparison(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_Expr_ineq_x3f(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_dec(x_14);
x_15 = lean_unbox(x_13);
lean_dec(x_13);
switch (x_15) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_box(0);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_17);
lean_ctor_set(x_11, 0, x_1);
x_18 = lean_array_mk(x_11);
x_19 = l_Linarith_rearrangeComparison___closed__2;
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_18);
x_21 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_20, x_2, x_3, x_4, x_5, x_16);
return x_21;
}
case 1:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_box(0);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_23);
lean_ctor_set(x_11, 0, x_1);
x_24 = lean_array_mk(x_11);
x_25 = l_Linarith_rearrangeComparison___closed__4;
x_26 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_24);
x_27 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_22);
return x_27;
}
default: 
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_dec(x_10);
x_29 = lean_box(0);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_29);
lean_ctor_set(x_11, 0, x_1);
x_30 = lean_array_mk(x_11);
x_31 = l_Linarith_rearrangeComparison___closed__6;
x_32 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_32, 0, x_31);
lean_closure_set(x_32, 1, x_30);
x_33 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_32, x_2, x_3, x_4, x_5, x_28);
return x_33;
}
}
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_11, 0);
lean_inc(x_34);
lean_dec(x_11);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
switch (x_35) {
case 0:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_array_mk(x_38);
x_40 = l_Linarith_rearrangeComparison___closed__2;
x_41 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_41, 0, x_40);
lean_closure_set(x_41, 1, x_39);
x_42 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_41, x_2, x_3, x_4, x_5, x_36);
return x_42;
}
case 1:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_dec(x_10);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_mk(x_45);
x_47 = l_Linarith_rearrangeComparison___closed__4;
x_48 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_48, 0, x_47);
lean_closure_set(x_48, 1, x_46);
x_49 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_48, x_2, x_3, x_4, x_5, x_43);
return x_49;
}
default: 
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_10, 1);
lean_inc(x_50);
lean_dec(x_10);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_mk(x_52);
x_54 = l_Linarith_rearrangeComparison___closed__6;
x_55 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_55, 0, x_54);
lean_closure_set(x_55, 1, x_53);
x_56 = l_try_x3f___at_Linarith_flipNegatedComparison___spec__1___rarg(x_55, x_2, x_3, x_4, x_5, x_50);
return x_56;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_10);
if (x_57 == 0)
{
return x_10;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_10, 0);
x_59 = lean_ctor_get(x_10, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_10);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_7);
if (x_61 == 0)
{
return x_7;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_7, 0);
x_63 = lean_ctor_get(x_7, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_7);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_compWithZero___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Linarith_rearrangeComparison(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_7, 0, x_11);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_7, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_7, 0, x_19);
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_dec(x_7);
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
lean_dec(x_8);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("compWithZero", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_compWithZero___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("make comparisons with zero", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_compWithZero___closed__2;
x_2 = l_Linarith_compWithZero___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_compWithZero___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_compWithZero___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_compWithZero___closed__4;
x_2 = l_Linarith_compWithZero___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_compWithZero() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_compWithZero___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
static lean_object* _init_l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Error in Linarith.normalizeDenominatorsLHS: ", 44, 44);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Linarith_mkSingleCompZeroOf(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Expr_rewriteType(x_13, x_3, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = l_Lean_Exception_isInterrupt(x_16);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Exception_isRuntime(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_free_object(x_14);
lean_inc(x_16);
x_20 = l_Lean_Exception_toMessageData(x_16);
x_21 = l_Lean_MessageData_toString(x_20, x_17);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1;
x_25 = lean_string_append(x_24, x_22);
lean_dec(x_22);
x_26 = l_Linarith_flipNegatedComparison___closed__3;
x_27 = lean_string_append(x_25, x_26);
x_28 = lean_alloc_closure((void*)(l_Linarith_normalizeDenominatorsLHS___lambda__1___boxed), 7, 1);
lean_closure_set(x_28, 0, x_16);
x_29 = lean_dbg_trace(x_27, x_28);
x_30 = lean_apply_5(x_29, x_5, x_6, x_7, x_8, x_23);
return x_30;
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = l_Lean_Exception_isInterrupt(x_31);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = l_Lean_Exception_isRuntime(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_inc(x_31);
x_35 = l_Lean_Exception_toMessageData(x_31);
x_36 = l_Lean_MessageData_toString(x_35, x_32);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1;
x_40 = lean_string_append(x_39, x_37);
lean_dec(x_37);
x_41 = l_Linarith_flipNegatedComparison___closed__3;
x_42 = lean_string_append(x_40, x_41);
x_43 = lean_alloc_closure((void*)(l_Linarith_normalizeDenominatorsLHS___lambda__1___boxed), 7, 1);
lean_closure_set(x_43, 0, x_31);
x_44 = lean_dbg_trace(x_42, x_43);
x_45 = lean_apply_5(x_44, x_5, x_6, x_7, x_8, x_38);
return x_45;
}
else
{
lean_object* x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_31);
lean_ctor_set(x_46, 1, x_32);
return x_46;
}
}
else
{
lean_object* x_47; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_31);
lean_ctor_set(x_47, 1, x_32);
return x_47;
}
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_10);
if (x_48 == 0)
{
return x_10;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_10, 0);
x_50 = lean_ctor_get(x_10, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_10);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
static lean_object* _init_l_Linarith_normalizeDenominatorsLHS___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("without_one_mul", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Linarith_normalizeDenominatorsLHS___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_normalizeDenominatorsLHS___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_CancelDenoms_derive(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_12, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_9);
x_16 = lean_box(0);
x_17 = l_Linarith_normalizeDenominatorsLHS___lambda__2(x_12, x_1, x_13, x_16, x_3, x_4, x_5, x_6, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_box(0);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 1, x_18);
lean_ctor_set(x_9, 0, x_13);
x_19 = lean_array_mk(x_9);
x_20 = l_Linarith_normalizeDenominatorsLHS___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Meta_mkAppM(x_20, x_19, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_box(0);
x_25 = l_Linarith_normalizeDenominatorsLHS___lambda__2(x_12, x_1, x_22, x_24, x_3, x_4, x_5, x_6, x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_9, 0);
x_31 = lean_ctor_get(x_9, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_9);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_dec_eq(x_30, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_box(0);
x_35 = l_Linarith_normalizeDenominatorsLHS___lambda__2(x_30, x_1, x_31, x_34, x_3, x_4, x_5, x_6, x_10);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_array_mk(x_37);
x_39 = l_Linarith_normalizeDenominatorsLHS___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = l_Lean_Meta_mkAppM(x_39, x_38, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_box(0);
x_44 = l_Linarith_normalizeDenominatorsLHS___lambda__2(x_30, x_1, x_41, x_43, x_3, x_4, x_5, x_6, x_42);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_30);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_8);
if (x_49 == 0)
{
return x_8;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_8, 0);
x_51 = lean_ctor_get(x_8, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_8);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Linarith_normalizeDenominatorsLHS___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Linarith_normalizeDenominatorsLHS___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Linarith_normalizeDenominatorsLHS___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hDiv", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1;
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Div", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("div", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4;
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Inv", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inv", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7;
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("OfScientific", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ofScientific", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10;
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Linarith_cancelDenoms___elambda__1___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3;
x_3 = lean_name_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6;
x_5 = lean_name_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9;
x_7 = lean_name_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12;
x_9 = lean_name_eq(x_1, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
}
static lean_object* _init_l_Linarith_cancelDenoms___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_cancelDenoms___elambda__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_cancelDenoms___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_27; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_10 = x_7;
} else {
 lean_dec_ref(x_7);
 x_10 = lean_box(0);
}
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = lean_infer_type(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_30 = l_Linarith_parseCompAndExpr(x_28, x_2, x_3, x_4, x_5, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_35 = l_Linarith_cancelDenoms___elambda__1___closed__1;
x_36 = l_Lean_Expr_containsConst(x_33, x_35);
if (x_36 == 0)
{
uint8_t x_55; 
x_55 = 0;
x_37 = x_55;
goto block_54;
}
else
{
uint8_t x_56; 
x_56 = 1;
x_37 = x_56;
goto block_54;
}
block_54:
{
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_34);
lean_dec(x_33);
x_38 = l_Linarith_isNatProp___lambda__1___closed__2;
x_39 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_38, x_2, x_3, x_4, x_5, x_32);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_11 = x_40;
x_12 = x_41;
goto block_26;
}
else
{
lean_object* x_42; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_42 = l_Linarith_normalizeDenominatorsLHS(x_1, x_33, x_2, x_3, x_4, x_5, x_32);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_34;
 lean_ctor_set_tag(x_46, 1);
}
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_42, 0, x_46);
return x_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_42, 0);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_42);
x_49 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_34;
 lean_ctor_set_tag(x_50, 1);
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_34);
x_52 = lean_ctor_get(x_42, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_42, 1);
lean_inc(x_53);
lean_dec(x_42);
x_11 = x_52;
x_12 = x_53;
goto block_26;
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_30, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_30, 1);
lean_inc(x_58);
lean_dec(x_30);
x_11 = x_57;
x_12 = x_58;
goto block_26;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_27, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_27, 1);
lean_inc(x_60);
lean_dec(x_27);
x_11 = x_59;
x_12 = x_60;
goto block_26;
}
block_26:
{
uint8_t x_13; 
x_13 = l_Lean_Exception_isInterrupt(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Exception_isRuntime(x_11);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_15 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_10)) {
 x_24 = lean_alloc_ctor(1, 2, 0);
} else {
 x_24 = x_10;
 lean_ctor_set_tag(x_24, 1);
}
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_24, 1, x_12);
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_10)) {
 x_25 = lean_alloc_ctor(1, 2, 0);
} else {
 x_25 = x_10;
 lean_ctor_set_tag(x_25, 1);
}
lean_ctor_set(x_25, 0, x_11);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancelDenoms", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_cancelDenoms___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cancel denominators", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___closed__2;
x_2 = l_Linarith_cancelDenoms___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_cancelDenoms___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_cancelDenoms___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_cancelDenoms___closed__4;
x_2 = l_Linarith_cancelDenoms___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_cancelDenoms() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_cancelDenoms___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_cancelDenoms___elambda__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Linarith_cancelDenoms___elambda__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at_Linarith_findSquares___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_11);
x_13 = lean_apply_9(x_1, x_3, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_12);
x_16 = lean_apply_9(x_1, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; size_t x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ptr_addr(x_11);
x_20 = lean_usize_dec_eq(x_19, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_2);
x_21 = l_Lean_Expr_app___override(x_11, x_12);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
else
{
size_t x_23; uint8_t x_24; 
x_23 = lean_ptr_addr(x_12);
x_24 = lean_usize_dec_eq(x_23, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_25 = l_Lean_Expr_app___override(x_11, x_12);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_18);
lean_ctor_set(x_16, 0, x_26);
return x_16;
}
else
{
lean_object* x_27; 
lean_dec(x_12);
lean_dec(x_11);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_18);
lean_ctor_set(x_16, 0, x_27);
return x_16;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; size_t x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
x_30 = lean_ptr_addr(x_11);
x_31 = lean_usize_dec_eq(x_30, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_2);
x_32 = l_Lean_Expr_app___override(x_11, x_12);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
return x_34;
}
else
{
size_t x_35; uint8_t x_36; 
x_35 = lean_ptr_addr(x_12);
x_36 = lean_usize_dec_eq(x_35, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_2);
x_37 = l_Lean_Expr_app___override(x_11, x_12);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_28);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_29);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_12);
lean_dec(x_11);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_2);
lean_ctor_set(x_40, 1, x_28);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_29);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_13);
if (x_46 == 0)
{
return x_13;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
case 6:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_2, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_2, 2);
lean_inc(x_52);
x_53 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 8);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_51);
x_54 = lean_apply_9(x_1, x_3, x_51, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_52);
x_57 = lean_apply_9(x_1, x_55, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_56);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = l_Lean_Expr_lam___override(x_50, x_51, x_52, x_53);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set(x_57, 0, x_61);
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_57);
x_64 = l_Lean_Expr_lam___override(x_50, x_51, x_52, x_53);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
return x_66;
}
}
else
{
uint8_t x_67; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
x_67 = !lean_is_exclusive(x_57);
if (x_67 == 0)
{
return x_57;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_57, 0);
x_69 = lean_ctor_get(x_57, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_57);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_54);
if (x_71 == 0)
{
return x_54;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_54, 0);
x_73 = lean_ctor_get(x_54, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_54);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
case 7:
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; 
x_75 = lean_ctor_get(x_2, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_2, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_2, 2);
lean_inc(x_77);
x_78 = lean_ctor_get_uint8(x_2, sizeof(void*)*3 + 8);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_76);
x_79 = lean_apply_9(x_1, x_3, x_76, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
lean_inc(x_77);
x_82 = lean_apply_9(x_1, x_80, x_77, x_4, x_5, x_6, x_7, x_8, x_9, x_81);
if (lean_obj_tag(x_82) == 0)
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = l_Lean_Expr_forallE___override(x_75, x_76, x_77, x_78);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_82, 0, x_86);
return x_82;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_ctor_get(x_82, 0);
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_82);
x_89 = l_Lean_Expr_forallE___override(x_75, x_76, x_77, x_78);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
}
else
{
uint8_t x_92; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
x_92 = !lean_is_exclusive(x_82);
if (x_92 == 0)
{
return x_82;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_82, 0);
x_94 = lean_ctor_get(x_82, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_82);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_79);
if (x_96 == 0)
{
return x_79;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_79, 0);
x_98 = lean_ctor_get(x_79, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_79);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
case 8:
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_2, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_2, 1);
lean_inc(x_101);
x_102 = lean_ctor_get(x_2, 2);
lean_inc(x_102);
x_103 = lean_ctor_get(x_2, 3);
lean_inc(x_103);
x_104 = lean_ctor_get_uint8(x_2, sizeof(void*)*4 + 8);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_101);
x_105 = lean_apply_9(x_1, x_3, x_101, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_102);
x_108 = lean_apply_9(x_1, x_106, x_102, x_4, x_5, x_6, x_7, x_8, x_9, x_107);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
lean_inc(x_103);
x_111 = lean_apply_9(x_1, x_109, x_103, x_4, x_5, x_6, x_7, x_8, x_9, x_110);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
lean_object* x_113; size_t x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = lean_ptr_addr(x_101);
x_115 = lean_usize_dec_eq(x_114, x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_2);
x_116 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_113);
lean_ctor_set(x_111, 0, x_117);
return x_111;
}
else
{
size_t x_118; uint8_t x_119; 
x_118 = lean_ptr_addr(x_102);
x_119 = lean_usize_dec_eq(x_118, x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_2);
x_120 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_113);
lean_ctor_set(x_111, 0, x_121);
return x_111;
}
else
{
size_t x_122; uint8_t x_123; 
x_122 = lean_ptr_addr(x_103);
x_123 = lean_usize_dec_eq(x_122, x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_2);
x_124 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_113);
lean_ctor_set(x_111, 0, x_125);
return x_111;
}
else
{
lean_object* x_126; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_2);
lean_ctor_set(x_126, 1, x_113);
lean_ctor_set(x_111, 0, x_126);
return x_111;
}
}
}
}
else
{
lean_object* x_127; lean_object* x_128; size_t x_129; uint8_t x_130; 
x_127 = lean_ctor_get(x_111, 0);
x_128 = lean_ctor_get(x_111, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_111);
x_129 = lean_ptr_addr(x_101);
x_130 = lean_usize_dec_eq(x_129, x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_2);
x_131 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_127);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_128);
return x_133;
}
else
{
size_t x_134; uint8_t x_135; 
x_134 = lean_ptr_addr(x_102);
x_135 = lean_usize_dec_eq(x_134, x_134);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_2);
x_136 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_127);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_128);
return x_138;
}
else
{
size_t x_139; uint8_t x_140; 
x_139 = lean_ptr_addr(x_103);
x_140 = lean_usize_dec_eq(x_139, x_139);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_2);
x_141 = l_Lean_Expr_letE___override(x_100, x_101, x_102, x_103, x_104);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_127);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_128);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_2);
lean_ctor_set(x_144, 1, x_127);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_128);
return x_145;
}
}
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_2);
x_146 = !lean_is_exclusive(x_111);
if (x_146 == 0)
{
return x_111;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_111, 0);
x_148 = lean_ctor_get(x_111, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_111);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_150 = !lean_is_exclusive(x_108);
if (x_150 == 0)
{
return x_108;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_108, 0);
x_152 = lean_ctor_get(x_108, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_108);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_154 = !lean_is_exclusive(x_105);
if (x_154 == 0)
{
return x_105;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_105, 0);
x_156 = lean_ctor_get(x_105, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_105);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
case 10:
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_2, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_2, 1);
lean_inc(x_159);
lean_inc(x_159);
x_160 = lean_apply_9(x_1, x_3, x_159, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_160) == 0)
{
uint8_t x_161; 
x_161 = !lean_is_exclusive(x_160);
if (x_161 == 0)
{
lean_object* x_162; size_t x_163; uint8_t x_164; 
x_162 = lean_ctor_get(x_160, 0);
x_163 = lean_ptr_addr(x_159);
x_164 = lean_usize_dec_eq(x_163, x_163);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; 
lean_dec(x_2);
x_165 = l_Lean_Expr_mdata___override(x_158, x_159);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_162);
lean_ctor_set(x_160, 0, x_166);
return x_160;
}
else
{
lean_object* x_167; 
lean_dec(x_159);
lean_dec(x_158);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_2);
lean_ctor_set(x_167, 1, x_162);
lean_ctor_set(x_160, 0, x_167);
return x_160;
}
}
else
{
lean_object* x_168; lean_object* x_169; size_t x_170; uint8_t x_171; 
x_168 = lean_ctor_get(x_160, 0);
x_169 = lean_ctor_get(x_160, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_160);
x_170 = lean_ptr_addr(x_159);
x_171 = lean_usize_dec_eq(x_170, x_170);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_2);
x_172 = l_Lean_Expr_mdata___override(x_158, x_159);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_168);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_169);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_159);
lean_dec(x_158);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_2);
lean_ctor_set(x_175, 1, x_168);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_169);
return x_176;
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_159);
lean_dec(x_158);
lean_dec(x_2);
x_177 = !lean_is_exclusive(x_160);
if (x_177 == 0)
{
return x_160;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_160, 0);
x_179 = lean_ctor_get(x_160, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_160);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
case 11:
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_181 = lean_ctor_get(x_2, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_2, 1);
lean_inc(x_182);
x_183 = lean_ctor_get(x_2, 2);
lean_inc(x_183);
lean_inc(x_183);
x_184 = lean_apply_9(x_1, x_3, x_183, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
lean_object* x_186; size_t x_187; uint8_t x_188; 
x_186 = lean_ctor_get(x_184, 0);
x_187 = lean_ptr_addr(x_183);
x_188 = lean_usize_dec_eq(x_187, x_187);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_2);
x_189 = l_Lean_Expr_proj___override(x_181, x_182, x_183);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_186);
lean_ctor_set(x_184, 0, x_190);
return x_184;
}
else
{
lean_object* x_191; 
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_181);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_2);
lean_ctor_set(x_191, 1, x_186);
lean_ctor_set(x_184, 0, x_191);
return x_184;
}
}
else
{
lean_object* x_192; lean_object* x_193; size_t x_194; uint8_t x_195; 
x_192 = lean_ctor_get(x_184, 0);
x_193 = lean_ctor_get(x_184, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_184);
x_194 = lean_ptr_addr(x_183);
x_195 = lean_usize_dec_eq(x_194, x_194);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_2);
x_196 = l_Lean_Expr_proj___override(x_181, x_182, x_183);
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_192);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_193);
return x_198;
}
else
{
lean_object* x_199; lean_object* x_200; 
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_181);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_2);
lean_ctor_set(x_199, 1, x_192);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_193);
return x_200;
}
}
}
else
{
uint8_t x_201; 
lean_dec(x_183);
lean_dec(x_182);
lean_dec(x_181);
lean_dec(x_2);
x_201 = !lean_is_exclusive(x_184);
if (x_201 == 0)
{
return x_184;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_202 = lean_ctor_get(x_184, 0);
x_203 = lean_ctor_get(x_184, 1);
lean_inc(x_203);
lean_inc(x_202);
lean_dec(x_184);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
return x_204;
}
}
}
default: 
{
lean_object* x_205; lean_object* x_206; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_2);
lean_ctor_set(x_205, 1, x_3);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_10);
return x_206;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_traverseChildren___at_Linarith_findSquares___spec__2(x_1, x_3, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_findSquares___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_nat_dec_lt(x_4, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 2;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 0;
return x_10;
}
}
}
LEAN_EXPORT uint8_t l_compareOn___at_Linarith_findSquares___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_1);
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_5 == 0)
{
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
}
else
{
if (x_7 == 0)
{
uint8_t x_10; 
x_10 = 2;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
}
}
static lean_object* _init_l_lexOrd___at_Linarith_findSquares___spec__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_compareOn___at_Linarith_findSquares___spec__4___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2;
x_4 = lean_alloc_closure((void*)(l_compareOn___at_Linarith_findSquares___spec__5___boxed), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_lexOrd___elambda__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_l_Linarith_findSquares___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_findSquares), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_findSquares___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HPow", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_findSquares___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hPow", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_findSquares(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Expr_hasLooseBVars(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_11 = l_Lean_Expr_getAppFnArgs(x_2);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Linarith_findSquares___closed__2;
x_19 = lean_string_dec_eq(x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Linarith_getNatComparisons___closed__2;
x_21 = lean_string_dec_eq(x_17, x_20);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
lean_dec(x_15);
x_22 = l_Linarith_findSquares___closed__1;
x_23 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_22, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_23;
}
else
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Linarith_getNatComparisons___closed__7;
x_25 = lean_string_dec_eq(x_16, x_24);
lean_dec(x_16);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
x_26 = l_Linarith_findSquares___closed__1;
x_27 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_26, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_array_get_size(x_15);
x_29 = lean_unsigned_to_nat(6u);
x_30 = lean_nat_dec_eq(x_28, x_29);
lean_dec(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_15);
x_31 = l_Linarith_findSquares___closed__1;
x_32 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_31, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_unsigned_to_nat(4u);
x_34 = lean_array_fget(x_15, x_33);
x_35 = lean_unsigned_to_nat(5u);
x_36 = lean_array_fget(x_15, x_35);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_34);
x_37 = l_Mathlib_Tactic_AtomM_addAtom(x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_41 = l_Mathlib_Tactic_AtomM_addAtom(x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = !lean_is_exclusive(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_42, 0);
x_46 = lean_ctor_get(x_42, 1);
lean_dec(x_46);
x_47 = lean_nat_dec_eq(x_40, x_45);
lean_dec(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_free_object(x_42);
lean_dec(x_40);
lean_dec(x_34);
x_48 = l_Linarith_findSquares___closed__1;
x_49 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_48, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
return x_49;
}
else
{
lean_object* x_50; 
lean_dec(x_2);
x_50 = l_Linarith_findSquares(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = 0;
x_54 = lean_box(x_53);
lean_ctor_set(x_42, 1, x_54);
lean_ctor_set(x_42, 0, x_40);
x_55 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_56 = l_Batteries_RBNode_insert___rarg(x_55, x_52, x_42);
lean_ctor_set(x_50, 0, x_56);
return x_50;
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_57 = lean_ctor_get(x_50, 0);
x_58 = lean_ctor_get(x_50, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_50);
x_59 = 0;
x_60 = lean_box(x_59);
lean_ctor_set(x_42, 1, x_60);
lean_ctor_set(x_42, 0, x_40);
x_61 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_62 = l_Batteries_RBNode_insert___rarg(x_61, x_57, x_42);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_58);
return x_63;
}
}
else
{
uint8_t x_64; 
lean_free_object(x_42);
lean_dec(x_40);
x_64 = !lean_is_exclusive(x_50);
if (x_64 == 0)
{
return x_50;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_50, 0);
x_66 = lean_ctor_get(x_50, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_50);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
lean_object* x_68; uint8_t x_69; 
x_68 = lean_ctor_get(x_42, 0);
lean_inc(x_68);
lean_dec(x_42);
x_69 = lean_nat_dec_eq(x_40, x_68);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_40);
lean_dec(x_34);
x_70 = l_Linarith_findSquares___closed__1;
x_71 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_70, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
return x_71;
}
else
{
lean_object* x_72; 
lean_dec(x_2);
x_72 = l_Linarith_findSquares(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = 0;
x_77 = lean_box(x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_40);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_80 = l_Batteries_RBNode_insert___rarg(x_79, x_73, x_78);
if (lean_is_scalar(x_75)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_75;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_74);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_40);
x_82 = lean_ctor_get(x_72, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_72, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_84 = x_72;
} else {
 lean_dec_ref(x_72);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_40);
lean_dec(x_34);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_41);
if (x_86 == 0)
{
return x_41;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_41, 0);
x_88 = lean_ctor_get(x_41, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_41);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_37);
if (x_90 == 0)
{
return x_37;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_37, 0);
x_92 = lean_ctor_get(x_37, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_37);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
}
}
else
{
lean_object* x_94; uint8_t x_95; 
lean_dec(x_17);
x_94 = l_Linarith_findSquares___closed__3;
x_95 = lean_string_dec_eq(x_16, x_94);
lean_dec(x_16);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_15);
x_96 = l_Linarith_findSquares___closed__1;
x_97 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_96, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_98 = lean_array_get_size(x_15);
x_99 = lean_unsigned_to_nat(6u);
x_100 = lean_nat_dec_eq(x_98, x_99);
lean_dec(x_98);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_15);
x_101 = l_Linarith_findSquares___closed__1;
x_102 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_101, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_unsigned_to_nat(4u);
x_104 = lean_array_fget(x_15, x_103);
x_105 = lean_unsigned_to_nat(5u);
x_106 = lean_array_fget(x_15, x_105);
lean_dec(x_15);
x_107 = l_Lean_Expr_numeral_x3f(x_106);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_104);
x_108 = l_Linarith_findSquares___closed__1;
x_109 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_108, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_110 = lean_ctor_get(x_107, 0);
lean_inc(x_110);
lean_dec(x_107);
x_111 = lean_unsigned_to_nat(2u);
x_112 = lean_nat_dec_eq(x_110, x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_104);
x_113 = l_Linarith_findSquares___closed__1;
x_114 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_113, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_114;
}
else
{
lean_object* x_115; 
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_104);
x_115 = l_Linarith_findSquares(x_1, x_104, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Mathlib_Tactic_AtomM_addAtom(x_104, x_3, x_4, x_5, x_6, x_7, x_8, x_117);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_118) == 0)
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = lean_ctor_get(x_118, 0);
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_122 = lean_ctor_get(x_120, 1);
lean_dec(x_122);
x_123 = 1;
x_124 = lean_box(x_123);
lean_ctor_set(x_120, 1, x_124);
x_125 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_126 = l_Batteries_RBNode_insert___rarg(x_125, x_116, x_120);
lean_ctor_set(x_118, 0, x_126);
return x_118;
}
else
{
lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_127 = lean_ctor_get(x_120, 0);
lean_inc(x_127);
lean_dec(x_120);
x_128 = 1;
x_129 = lean_box(x_128);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_129);
x_131 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_132 = l_Batteries_RBNode_insert___rarg(x_131, x_116, x_130);
lean_ctor_set(x_118, 0, x_132);
return x_118;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_133 = lean_ctor_get(x_118, 0);
x_134 = lean_ctor_get(x_118, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_118);
x_135 = lean_ctor_get(x_133, 0);
lean_inc(x_135);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_136 = x_133;
} else {
 lean_dec_ref(x_133);
 x_136 = lean_box(0);
}
x_137 = 1;
x_138 = lean_box(x_137);
if (lean_is_scalar(x_136)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_136;
}
lean_ctor_set(x_139, 0, x_135);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_lexOrd___at_Linarith_findSquares___spec__3;
x_141 = l_Batteries_RBNode_insert___rarg(x_140, x_116, x_139);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_134);
return x_142;
}
}
else
{
uint8_t x_143; 
lean_dec(x_116);
x_143 = !lean_is_exclusive(x_118);
if (x_143 == 0)
{
return x_118;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_118, 0);
x_145 = lean_ctor_get(x_118, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_118);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_104);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_147 = !lean_is_exclusive(x_115);
if (x_147 == 0)
{
return x_115;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_115, 0);
x_149 = lean_ctor_get(x_115, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_115);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
}
}
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_151 = l_Linarith_findSquares___closed__1;
x_152 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_151, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_153 = l_Linarith_findSquares___closed__1;
x_154 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_153, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; 
lean_dec(x_12);
lean_dec(x_11);
x_155 = l_Linarith_findSquares___closed__1;
x_156 = l_Lean_Expr_foldlM___at_Linarith_findSquares___spec__1(x_155, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_156;
}
}
else
{
lean_object* x_157; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_1);
lean_ctor_set(x_157, 1, x_9);
return x_157;
}
}
}
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_findSquares___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_compareOn___at_Linarith_findSquares___spec__4(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_compareOn___at_Linarith_findSquares___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_compareOn___at_Linarith_findSquares___spec__5(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Expr_hasMVar(x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_11 = lean_st_ref_get(x_5, x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instantiateMVarsCore(x_14, x_1);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_take(x_5, x_13);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
lean_ctor_set(x_19, 0, x_17);
x_23 = lean_st_ref_set(x_5, x_19, x_20);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_16);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_19, 1);
x_29 = lean_ctor_get(x_19, 2);
x_30 = lean_ctor_get(x_19, 3);
x_31 = lean_ctor_get(x_19, 4);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_32 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_32, 0, x_17);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_30);
lean_ctor_set(x_32, 4, x_31);
x_33 = lean_st_ref_set(x_5, x_32, x_20);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_16);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = lean_infer_type(x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Linarith_findSquares(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_1 = x_20;
x_2 = x_12;
x_9 = x_21;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_List_reverse___rarg(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_1, 1);
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_st_ref_get(x_4, x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
x_21 = lean_nat_dec_lt(x_16, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_16);
x_22 = l_Lean_instInhabitedExpr;
x_23 = l_outOfBounds___rarg(x_22);
lean_ctor_set(x_13, 0, x_23);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_15;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_8 = x_19;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_9 = _tmp_8;
}
goto _start;
}
else
{
lean_object* x_25; 
x_25 = lean_array_fget(x_18, x_16);
lean_dec(x_16);
lean_dec(x_18);
lean_ctor_set(x_13, 0, x_25);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_15;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_8 = x_19;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_9 = _tmp_8;
}
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_27 = lean_ctor_get(x_1, 1);
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_13, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_13);
x_30 = lean_st_ref_get(x_4, x_9);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_array_get_size(x_31);
x_34 = lean_nat_dec_lt(x_28, x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_31);
lean_dec(x_28);
x_35 = l_Lean_instInhabitedExpr;
x_36 = l_outOfBounds___rarg(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_37);
{
lean_object* _tmp_0 = x_27;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_8 = x_32;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_9 = _tmp_8;
}
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_array_fget(x_31, x_28);
lean_dec(x_28);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_29);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_40);
{
lean_object* _tmp_0 = x_27;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_8 = x_32;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_9 = _tmp_8;
}
goto _start;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_1);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_46 = x_42;
} else {
 lean_dec_ref(x_42);
 x_46 = lean_box(0);
}
x_47 = lean_st_ref_get(x_4, x_9);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_array_get_size(x_48);
x_51 = lean_nat_dec_lt(x_44, x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_48);
lean_dec(x_44);
x_52 = l_Lean_instInhabitedExpr;
x_53 = l_outOfBounds___rarg(x_52);
if (lean_is_scalar(x_46)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_46;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_45);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_2);
x_1 = x_43;
x_2 = x_55;
x_9 = x_49;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_44);
lean_dec(x_44);
lean_dec(x_48);
if (lean_is_scalar(x_46)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_46;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_45);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_2);
x_1 = x_43;
x_2 = x_59;
x_9 = x_49;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4___rarg), 9, 0);
return x_3;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_self_nonneg", 15, 15);
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("sq_nonneg", 9, 9);
return x_1;
}
}
static lean_object* _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = l_List_reverse___rarg(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_1, 1);
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
x_16 = lean_box(0);
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
x_17 = lean_array_mk(x_1);
x_18 = lean_unbox(x_15);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2;
x_20 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_20, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
lean_free_object(x_11);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_1 = x_13;
x_7 = x_23;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 0, x_26);
x_1 = x_13;
x_2 = x_11;
x_7 = x_25;
goto _start;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4;
x_33 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_33, 0, x_32);
lean_closure_set(x_33, 1, x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_33, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
lean_free_object(x_11);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_1 = x_13;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
lean_dec(x_35);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 0, x_39);
x_1 = x_13;
x_2 = x_11;
x_7 = x_38;
goto _start;
}
}
else
{
uint8_t x_41; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_34);
if (x_41 == 0)
{
return x_34;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_34, 0);
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_34);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_45 = lean_ctor_get(x_1, 1);
x_46 = lean_ctor_get(x_11, 0);
x_47 = lean_ctor_get(x_11, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_11);
x_48 = lean_box(0);
lean_ctor_set(x_1, 1, x_48);
lean_ctor_set(x_1, 0, x_46);
x_49 = lean_array_mk(x_1);
x_50 = lean_unbox(x_47);
lean_dec(x_47);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2;
x_52 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_52, 0, x_51);
lean_closure_set(x_52, 1, x_49);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_53 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_52, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_1 = x_45;
x_7 = x_55;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_ctor_get(x_54, 0);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_2);
x_1 = x_45;
x_2 = x_59;
x_7 = x_57;
goto _start;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_45);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_53, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_63 = x_53;
} else {
 lean_dec_ref(x_53);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4;
x_66 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_66, 0, x_65);
lean_closure_set(x_66, 1, x_49);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_67 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_66, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; 
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_1 = x_45;
x_7 = x_69;
goto _start;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_67, 1);
lean_inc(x_71);
lean_dec(x_67);
x_72 = lean_ctor_get(x_68, 0);
lean_inc(x_72);
lean_dec(x_68);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_2);
x_1 = x_45;
x_2 = x_73;
x_7 = x_71;
goto _start;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_45);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = lean_ctor_get(x_67, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_67, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_77 = x_67;
} else {
 lean_dec_ref(x_67);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_79 = lean_ctor_get(x_1, 0);
x_80 = lean_ctor_get(x_1, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_1);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_79, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_83 = x_79;
} else {
 lean_dec_ref(x_79);
 x_83 = lean_box(0);
}
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_81);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_mk(x_85);
x_87 = lean_unbox(x_82);
lean_dec(x_82);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2;
x_89 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_89, 0, x_88);
lean_closure_set(x_89, 1, x_86);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_90 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_89, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
lean_dec(x_83);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_1 = x_80;
x_7 = x_92;
goto _start;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_90, 1);
lean_inc(x_94);
lean_dec(x_90);
x_95 = lean_ctor_get(x_91, 0);
lean_inc(x_95);
lean_dec(x_91);
if (lean_is_scalar(x_83)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_83;
 lean_ctor_set_tag(x_96, 1);
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_2);
x_1 = x_80;
x_2 = x_96;
x_7 = x_94;
goto _start;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_98 = lean_ctor_get(x_90, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_90, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_100 = x_90;
} else {
 lean_dec_ref(x_90);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4;
x_103 = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM), 7, 2);
lean_closure_set(x_103, 0, x_102);
lean_closure_set(x_103, 1, x_86);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_104 = l_Lean_observing_x3f___at_Lean_Meta_mkRichHCongr_trySolve___spec__1(x_103, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; 
lean_dec(x_83);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_1 = x_80;
x_7 = x_106;
goto _start;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_104, 1);
lean_inc(x_108);
lean_dec(x_104);
x_109 = lean_ctor_get(x_105, 0);
lean_inc(x_109);
lean_dec(x_105);
if (lean_is_scalar(x_83)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_83;
 lean_ctor_set_tag(x_110, 1);
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_2);
x_1 = x_80;
x_2 = x_110;
x_7 = x_108;
goto _start;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = lean_ctor_get(x_104, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_104, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_114 = x_104;
} else {
 lean_dec_ref(x_104);
 x_114 = lean_box(0);
}
if (lean_is_scalar(x_114)) {
 x_115 = lean_alloc_ctor(1, 2, 0);
} else {
 x_115 = x_114;
}
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
}
}
}
}
static double _init_l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; double x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Float_ofScientific(x_1, x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2() {
_start:
{
lean_object* x_1; double x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Linarith_removeNegations___elambda__1___closed__4;
x_2 = l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1;
x_3 = 1;
x_4 = l_Linarith_flipNegatedComparison___closed__3;
x_5 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set_float(x_5, sizeof(void*)*2, x_2);
lean_ctor_set_float(x_5, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*2 + 16, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_Linarith_removeNegations___elambda__1___closed__4;
x_9 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_8, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_dec(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Linarith_linarithGetProofsMessage(x_2, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_stringToMessageData(x_1);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_mk(x_24);
x_26 = l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2;
x_27 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_25);
x_28 = l_Lean_addRawTrace___at_Linarith_linarithTraceProofs___spec__1(x_27, x_3, x_4, x_5, x_6, x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_19);
if (x_29 == 0)
{
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 0);
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("false", 5, 5);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
x_10 = l_Lean_MessageData_ofExpr(x_8);
x_11 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3;
lean_ctor_set_tag(x_5, 7);
lean_ctor_set(x_5, 1, x_11);
lean_ctor_set(x_5, 0, x_10);
x_12 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_unbox(x_9);
lean_dec(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_18 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_19 = l_Lean_MessageData_bracket(x_17, x_16, x_18);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_19);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12;
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_24 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_25 = l_Lean_MessageData_bracket(x_23, x_22, x_24);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_25);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_27 = lean_ctor_get(x_1, 1);
x_28 = lean_ctor_get(x_5, 0);
x_29 = lean_ctor_get(x_5, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_5);
x_30 = l_Lean_MessageData_ofExpr(x_28);
x_31 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3;
x_32 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4;
x_34 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unbox(x_29);
lean_dec(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7;
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_39 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_40 = l_Lean_MessageData_bracket(x_38, x_37, x_39);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_40);
{
lean_object* _tmp_0 = x_27;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12;
x_43 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_45 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_46 = l_Lean_MessageData_bracket(x_44, x_43, x_45);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_46);
{
lean_object* _tmp_0 = x_27;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_48 = lean_ctor_get(x_1, 0);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_1);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_52 = x_48;
} else {
 lean_dec_ref(x_48);
 x_52 = lean_box(0);
}
x_53 = l_Lean_MessageData_ofExpr(x_50);
x_54 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3;
if (lean_is_scalar(x_52)) {
 x_55 = lean_alloc_ctor(7, 2, 0);
} else {
 x_55 = x_52;
 lean_ctor_set_tag(x_55, 7);
}
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4;
x_57 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unbox(x_51);
lean_dec(x_51);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7;
x_60 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_62 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_63 = l_Lean_MessageData_bracket(x_61, x_60, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_2);
x_1 = x_49;
x_2 = x_64;
goto _start;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12;
x_67 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_67, 0, x_57);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8;
x_69 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9;
x_70 = l_Lean_MessageData_bracket(x_68, x_67, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_2);
x_1 = x_49;
x_2 = x_71;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_9);
x_12 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Meta_processPostponed___spec__3(x_1, x_5, x_2, x_3, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_4, x_7, x_8, x_9, x_10, x_13);
lean_dec(x_9);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (x_7 == 0)
{
double x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1;
x_17 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_3);
lean_ctor_set_float(x_17, sizeof(void*)*2, x_16);
lean_ctor_set_float(x_17, sizeof(void*)*2 + 8, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*2 + 16, x_2);
x_18 = lean_box(0);
x_19 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1(x_4, x_5, x_10, x_6, x_17, x_18, x_11, x_12, x_13, x_14, x_15);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set_float(x_20, sizeof(void*)*2, x_8);
lean_ctor_set_float(x_20, sizeof(void*)*2 + 8, x_9);
lean_ctor_set_uint8(x_20, sizeof(void*)*2 + 16, x_2);
x_21 = lean_box(0);
x_22 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1(x_4, x_5, x_10, x_6, x_20, x_21, x_11, x_12, x_13, x_14, x_15);
return x_22;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<exception thrown while producing trace node message>", 53, 53);
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, double x_7, double x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 5);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_5);
x_17 = lean_apply_6(x_9, x_5, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2(x_1, x_2, x_3, x_4, x_16, x_5, x_6, x_7, x_8, x_18, x_11, x_12, x_13, x_14, x_19);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2;
x_23 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2(x_1, x_2, x_3, x_4, x_16, x_5, x_6, x_7, x_8, x_22, x_11, x_12, x_13, x_14, x_21);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
return x_23;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_useHeartbeats;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_threshold;
return x_1;
}
}
static double _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
static double _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000000000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Meta_processPostponed___spec__2___rarg(x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1;
x_18 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__2(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_io_mono_nanos_now(x_16);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_116 = lean_apply_5(x_7, x_9, x_10, x_11, x_12, x_115);
if (lean_obj_tag(x_116) == 0)
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_118 = lean_ctor_get(x_116, 0);
x_119 = lean_ctor_get(x_116, 1);
x_120 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_120, 0, x_118);
x_121 = lean_io_mono_nanos_now(x_119);
x_122 = !lean_is_exclusive(x_121);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; double x_127; double x_128; double x_129; double x_130; double x_131; lean_object* x_132; lean_object* x_133; 
x_123 = lean_ctor_get(x_121, 0);
x_124 = lean_ctor_get(x_121, 1);
x_125 = 0;
x_126 = lean_unsigned_to_nat(0u);
x_127 = l_Float_ofScientific(x_114, x_125, x_126);
lean_dec(x_114);
x_128 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_129 = lean_float_div(x_127, x_128);
x_130 = l_Float_ofScientific(x_123, x_125, x_126);
lean_dec(x_123);
x_131 = lean_float_div(x_130, x_128);
x_132 = lean_box_float(x_129);
x_133 = lean_box_float(x_131);
lean_ctor_set(x_121, 1, x_133);
lean_ctor_set(x_121, 0, x_132);
lean_ctor_set(x_116, 1, x_121);
lean_ctor_set(x_116, 0, x_120);
x_19 = x_116;
x_20 = x_124;
goto block_112;
}
else
{
lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; double x_138; double x_139; double x_140; double x_141; double x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_134 = lean_ctor_get(x_121, 0);
x_135 = lean_ctor_get(x_121, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_121);
x_136 = 0;
x_137 = lean_unsigned_to_nat(0u);
x_138 = l_Float_ofScientific(x_114, x_136, x_137);
lean_dec(x_114);
x_139 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_140 = lean_float_div(x_138, x_139);
x_141 = l_Float_ofScientific(x_134, x_136, x_137);
lean_dec(x_134);
x_142 = lean_float_div(x_141, x_139);
x_143 = lean_box_float(x_140);
x_144 = lean_box_float(x_142);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_116, 1, x_145);
lean_ctor_set(x_116, 0, x_120);
x_19 = x_116;
x_20 = x_135;
goto block_112;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; lean_object* x_154; double x_155; double x_156; double x_157; double x_158; double x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_146 = lean_ctor_get(x_116, 0);
x_147 = lean_ctor_get(x_116, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_116);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_146);
x_149 = lean_io_mono_nanos_now(x_147);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_152 = x_149;
} else {
 lean_dec_ref(x_149);
 x_152 = lean_box(0);
}
x_153 = 0;
x_154 = lean_unsigned_to_nat(0u);
x_155 = l_Float_ofScientific(x_114, x_153, x_154);
lean_dec(x_114);
x_156 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_157 = lean_float_div(x_155, x_156);
x_158 = l_Float_ofScientific(x_150, x_153, x_154);
lean_dec(x_150);
x_159 = lean_float_div(x_158, x_156);
x_160 = lean_box_float(x_157);
x_161 = lean_box_float(x_159);
if (lean_is_scalar(x_152)) {
 x_162 = lean_alloc_ctor(0, 2, 0);
} else {
 x_162 = x_152;
}
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_148);
lean_ctor_set(x_163, 1, x_162);
x_19 = x_163;
x_20 = x_151;
goto block_112;
}
}
else
{
uint8_t x_164; 
x_164 = !lean_is_exclusive(x_116);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; uint8_t x_169; 
x_165 = lean_ctor_get(x_116, 0);
x_166 = lean_ctor_get(x_116, 1);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_165);
x_168 = lean_io_mono_nanos_now(x_166);
x_169 = !lean_is_exclusive(x_168);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; double x_174; double x_175; double x_176; double x_177; double x_178; lean_object* x_179; lean_object* x_180; 
x_170 = lean_ctor_get(x_168, 0);
x_171 = lean_ctor_get(x_168, 1);
x_172 = 0;
x_173 = lean_unsigned_to_nat(0u);
x_174 = l_Float_ofScientific(x_114, x_172, x_173);
lean_dec(x_114);
x_175 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_176 = lean_float_div(x_174, x_175);
x_177 = l_Float_ofScientific(x_170, x_172, x_173);
lean_dec(x_170);
x_178 = lean_float_div(x_177, x_175);
x_179 = lean_box_float(x_176);
x_180 = lean_box_float(x_178);
lean_ctor_set(x_168, 1, x_180);
lean_ctor_set(x_168, 0, x_179);
lean_ctor_set_tag(x_116, 0);
lean_ctor_set(x_116, 1, x_168);
lean_ctor_set(x_116, 0, x_167);
x_19 = x_116;
x_20 = x_171;
goto block_112;
}
else
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; lean_object* x_184; double x_185; double x_186; double x_187; double x_188; double x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_181 = lean_ctor_get(x_168, 0);
x_182 = lean_ctor_get(x_168, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_168);
x_183 = 0;
x_184 = lean_unsigned_to_nat(0u);
x_185 = l_Float_ofScientific(x_114, x_183, x_184);
lean_dec(x_114);
x_186 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_187 = lean_float_div(x_185, x_186);
x_188 = l_Float_ofScientific(x_181, x_183, x_184);
lean_dec(x_181);
x_189 = lean_float_div(x_188, x_186);
x_190 = lean_box_float(x_187);
x_191 = lean_box_float(x_189);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
lean_ctor_set_tag(x_116, 0);
lean_ctor_set(x_116, 1, x_192);
lean_ctor_set(x_116, 0, x_167);
x_19 = x_116;
x_20 = x_182;
goto block_112;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; double x_202; double x_203; double x_204; double x_205; double x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_193 = lean_ctor_get(x_116, 0);
x_194 = lean_ctor_get(x_116, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_116);
x_195 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_195, 0, x_193);
x_196 = lean_io_mono_nanos_now(x_194);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_199 = x_196;
} else {
 lean_dec_ref(x_196);
 x_199 = lean_box(0);
}
x_200 = 0;
x_201 = lean_unsigned_to_nat(0u);
x_202 = l_Float_ofScientific(x_114, x_200, x_201);
lean_dec(x_114);
x_203 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5;
x_204 = lean_float_div(x_202, x_203);
x_205 = l_Float_ofScientific(x_197, x_200, x_201);
lean_dec(x_197);
x_206 = lean_float_div(x_205, x_203);
x_207 = lean_box_float(x_204);
x_208 = lean_box_float(x_206);
if (lean_is_scalar(x_199)) {
 x_209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_209 = x_199;
}
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_195);
lean_ctor_set(x_210, 1, x_209);
x_19 = x_210;
x_20 = x_198;
goto block_112;
}
}
block_112:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2;
x_26 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__2(x_1, x_25);
if (x_26 == 0)
{
if (x_6 == 0)
{
uint8_t x_92; 
x_92 = 0;
x_27 = x_92;
goto block_91;
}
else
{
lean_object* x_93; double x_94; double x_95; lean_object* x_96; 
x_93 = lean_box(0);
x_94 = lean_unbox_float(x_23);
lean_dec(x_23);
x_95 = lean_unbox_float(x_24);
lean_dec(x_24);
x_96 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_22, x_26, x_94, x_95, x_5, x_93, x_9, x_10, x_11, x_12, x_20);
return x_96;
}
}
else
{
if (x_6 == 0)
{
double x_97; double x_98; double x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; double x_104; double x_105; double x_106; uint8_t x_107; 
x_97 = lean_unbox_float(x_24);
x_98 = lean_unbox_float(x_23);
x_99 = lean_float_sub(x_97, x_98);
x_100 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3;
x_101 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__1(x_1, x_100);
x_102 = 0;
x_103 = lean_unsigned_to_nat(0u);
x_104 = l_Float_ofScientific(x_101, x_102, x_103);
lean_dec(x_101);
x_105 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__4;
x_106 = lean_float_div(x_104, x_105);
x_107 = lean_float_decLt(x_106, x_99);
x_27 = x_107;
goto block_91;
}
else
{
lean_object* x_108; double x_109; double x_110; lean_object* x_111; 
x_108 = lean_box(0);
x_109 = lean_unbox_float(x_23);
lean_dec(x_23);
x_110 = lean_unbox_float(x_24);
lean_dec(x_24);
x_111 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_22, x_26, x_109, x_110, x_5, x_108, x_9, x_10, x_11, x_12, x_20);
return x_111;
}
}
block_91:
{
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_28 = lean_st_ref_take(x_12, x_20);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_29, 3);
lean_dec(x_33);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = l_Lean_PersistentArray_append___rarg(x_15, x_35);
lean_dec(x_35);
lean_ctor_set(x_30, 0, x_36);
x_37 = lean_st_ref_set(x_12, x_29, x_31);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_22, x_9, x_10, x_11, x_12, x_38);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_22);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
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
uint64_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_48 = lean_ctor_get_uint64(x_30, sizeof(void*)*1);
x_49 = lean_ctor_get(x_30, 0);
lean_inc(x_49);
lean_dec(x_30);
x_50 = l_Lean_PersistentArray_append___rarg(x_15, x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set_uint64(x_51, sizeof(void*)*1, x_48);
lean_ctor_set(x_29, 3, x_51);
x_52 = lean_st_ref_set(x_12, x_29, x_31);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_22, x_9, x_10, x_11, x_12, x_53);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_22);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_61 = x_54;
} else {
 lean_dec_ref(x_54);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint64_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_63 = lean_ctor_get(x_29, 0);
x_64 = lean_ctor_get(x_29, 1);
x_65 = lean_ctor_get(x_29, 2);
x_66 = lean_ctor_get(x_29, 4);
x_67 = lean_ctor_get(x_29, 5);
x_68 = lean_ctor_get(x_29, 6);
x_69 = lean_ctor_get(x_29, 7);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_29);
x_70 = lean_ctor_get_uint64(x_30, sizeof(void*)*1);
x_71 = lean_ctor_get(x_30, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_72 = x_30;
} else {
 lean_dec_ref(x_30);
 x_72 = lean_box(0);
}
x_73 = l_Lean_PersistentArray_append___rarg(x_15, x_71);
lean_dec(x_71);
if (lean_is_scalar(x_72)) {
 x_74 = lean_alloc_ctor(0, 1, 8);
} else {
 x_74 = x_72;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set_uint64(x_74, sizeof(void*)*1, x_70);
x_75 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_75, 0, x_63);
lean_ctor_set(x_75, 1, x_64);
lean_ctor_set(x_75, 2, x_65);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set(x_75, 4, x_66);
lean_ctor_set(x_75, 5, x_67);
lean_ctor_set(x_75, 6, x_68);
lean_ctor_set(x_75, 7, x_69);
x_76 = lean_st_ref_set(x_12, x_75, x_31);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_22, x_9, x_10, x_11, x_12, x_77);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_22);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_81 = x_78;
} else {
 lean_dec_ref(x_78);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_78, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_78, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_85 = x_78;
} else {
 lean_dec_ref(x_78);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
else
{
lean_object* x_87; double x_88; double x_89; lean_object* x_90; 
x_87 = lean_box(0);
x_88 = lean_unbox_float(x_23);
lean_dec(x_23);
x_89 = lean_unbox_float(x_24);
lean_dec(x_24);
x_90 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_22, x_26, x_88, x_89, x_5, x_87, x_9, x_10, x_11, x_12, x_20);
return x_90;
}
}
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_io_get_num_heartbeats(x_16);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_306 = lean_apply_5(x_7, x_9, x_10, x_11, x_12, x_305);
if (lean_obj_tag(x_306) == 0)
{
uint8_t x_307; 
x_307 = !lean_is_exclusive(x_306);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_308 = lean_ctor_get(x_306, 0);
x_309 = lean_ctor_get(x_306, 1);
x_310 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_310, 0, x_308);
x_311 = lean_io_get_num_heartbeats(x_309);
x_312 = !lean_is_exclusive(x_311);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; uint8_t x_315; lean_object* x_316; double x_317; double x_318; lean_object* x_319; lean_object* x_320; 
x_313 = lean_ctor_get(x_311, 0);
x_314 = lean_ctor_get(x_311, 1);
x_315 = 0;
x_316 = lean_unsigned_to_nat(0u);
x_317 = l_Float_ofScientific(x_304, x_315, x_316);
lean_dec(x_304);
x_318 = l_Float_ofScientific(x_313, x_315, x_316);
lean_dec(x_313);
x_319 = lean_box_float(x_317);
x_320 = lean_box_float(x_318);
lean_ctor_set(x_311, 1, x_320);
lean_ctor_set(x_311, 0, x_319);
lean_ctor_set(x_306, 1, x_311);
lean_ctor_set(x_306, 0, x_310);
x_211 = x_306;
x_212 = x_314;
goto block_302;
}
else
{
lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; double x_325; double x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_321 = lean_ctor_get(x_311, 0);
x_322 = lean_ctor_get(x_311, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_311);
x_323 = 0;
x_324 = lean_unsigned_to_nat(0u);
x_325 = l_Float_ofScientific(x_304, x_323, x_324);
lean_dec(x_304);
x_326 = l_Float_ofScientific(x_321, x_323, x_324);
lean_dec(x_321);
x_327 = lean_box_float(x_325);
x_328 = lean_box_float(x_326);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set(x_329, 1, x_328);
lean_ctor_set(x_306, 1, x_329);
lean_ctor_set(x_306, 0, x_310);
x_211 = x_306;
x_212 = x_322;
goto block_302;
}
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; lean_object* x_338; double x_339; double x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_330 = lean_ctor_get(x_306, 0);
x_331 = lean_ctor_get(x_306, 1);
lean_inc(x_331);
lean_inc(x_330);
lean_dec(x_306);
x_332 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_332, 0, x_330);
x_333 = lean_io_get_num_heartbeats(x_331);
x_334 = lean_ctor_get(x_333, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_333, 1);
lean_inc(x_335);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 lean_ctor_release(x_333, 1);
 x_336 = x_333;
} else {
 lean_dec_ref(x_333);
 x_336 = lean_box(0);
}
x_337 = 0;
x_338 = lean_unsigned_to_nat(0u);
x_339 = l_Float_ofScientific(x_304, x_337, x_338);
lean_dec(x_304);
x_340 = l_Float_ofScientific(x_334, x_337, x_338);
lean_dec(x_334);
x_341 = lean_box_float(x_339);
x_342 = lean_box_float(x_340);
if (lean_is_scalar(x_336)) {
 x_343 = lean_alloc_ctor(0, 2, 0);
} else {
 x_343 = x_336;
}
lean_ctor_set(x_343, 0, x_341);
lean_ctor_set(x_343, 1, x_342);
x_344 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_344, 0, x_332);
lean_ctor_set(x_344, 1, x_343);
x_211 = x_344;
x_212 = x_335;
goto block_302;
}
}
else
{
uint8_t x_345; 
x_345 = !lean_is_exclusive(x_306);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_346 = lean_ctor_get(x_306, 0);
x_347 = lean_ctor_get(x_306, 1);
x_348 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_348, 0, x_346);
x_349 = lean_io_get_num_heartbeats(x_347);
x_350 = !lean_is_exclusive(x_349);
if (x_350 == 0)
{
lean_object* x_351; lean_object* x_352; uint8_t x_353; lean_object* x_354; double x_355; double x_356; lean_object* x_357; lean_object* x_358; 
x_351 = lean_ctor_get(x_349, 0);
x_352 = lean_ctor_get(x_349, 1);
x_353 = 0;
x_354 = lean_unsigned_to_nat(0u);
x_355 = l_Float_ofScientific(x_304, x_353, x_354);
lean_dec(x_304);
x_356 = l_Float_ofScientific(x_351, x_353, x_354);
lean_dec(x_351);
x_357 = lean_box_float(x_355);
x_358 = lean_box_float(x_356);
lean_ctor_set(x_349, 1, x_358);
lean_ctor_set(x_349, 0, x_357);
lean_ctor_set_tag(x_306, 0);
lean_ctor_set(x_306, 1, x_349);
lean_ctor_set(x_306, 0, x_348);
x_211 = x_306;
x_212 = x_352;
goto block_302;
}
else
{
lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; double x_363; double x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_359 = lean_ctor_get(x_349, 0);
x_360 = lean_ctor_get(x_349, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_349);
x_361 = 0;
x_362 = lean_unsigned_to_nat(0u);
x_363 = l_Float_ofScientific(x_304, x_361, x_362);
lean_dec(x_304);
x_364 = l_Float_ofScientific(x_359, x_361, x_362);
lean_dec(x_359);
x_365 = lean_box_float(x_363);
x_366 = lean_box_float(x_364);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
lean_ctor_set_tag(x_306, 0);
lean_ctor_set(x_306, 1, x_367);
lean_ctor_set(x_306, 0, x_348);
x_211 = x_306;
x_212 = x_360;
goto block_302;
}
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; lean_object* x_376; double x_377; double x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_368 = lean_ctor_get(x_306, 0);
x_369 = lean_ctor_get(x_306, 1);
lean_inc(x_369);
lean_inc(x_368);
lean_dec(x_306);
x_370 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_370, 0, x_368);
x_371 = lean_io_get_num_heartbeats(x_369);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_374 = x_371;
} else {
 lean_dec_ref(x_371);
 x_374 = lean_box(0);
}
x_375 = 0;
x_376 = lean_unsigned_to_nat(0u);
x_377 = l_Float_ofScientific(x_304, x_375, x_376);
lean_dec(x_304);
x_378 = l_Float_ofScientific(x_372, x_375, x_376);
lean_dec(x_372);
x_379 = lean_box_float(x_377);
x_380 = lean_box_float(x_378);
if (lean_is_scalar(x_374)) {
 x_381 = lean_alloc_ctor(0, 2, 0);
} else {
 x_381 = x_374;
}
lean_ctor_set(x_381, 0, x_379);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_382, 0, x_370);
lean_ctor_set(x_382, 1, x_381);
x_211 = x_382;
x_212 = x_373;
goto block_302;
}
}
block_302:
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; uint8_t x_219; 
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
x_214 = lean_ctor_get(x_211, 0);
lean_inc(x_214);
lean_dec(x_211);
x_215 = lean_ctor_get(x_213, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_213, 1);
lean_inc(x_216);
lean_dec(x_213);
x_217 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2;
x_218 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__2(x_1, x_217);
if (x_218 == 0)
{
if (x_6 == 0)
{
uint8_t x_284; 
x_284 = 0;
x_219 = x_284;
goto block_283;
}
else
{
lean_object* x_285; double x_286; double x_287; lean_object* x_288; 
x_285 = lean_box(0);
x_286 = lean_unbox_float(x_215);
lean_dec(x_215);
x_287 = lean_unbox_float(x_216);
lean_dec(x_216);
x_288 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_214, x_218, x_286, x_287, x_5, x_285, x_9, x_10, x_11, x_12, x_212);
return x_288;
}
}
else
{
if (x_6 == 0)
{
double x_289; double x_290; double x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; lean_object* x_295; double x_296; uint8_t x_297; 
x_289 = lean_unbox_float(x_216);
x_290 = lean_unbox_float(x_215);
x_291 = lean_float_sub(x_289, x_290);
x_292 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3;
x_293 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__1(x_1, x_292);
x_294 = 0;
x_295 = lean_unsigned_to_nat(0u);
x_296 = l_Float_ofScientific(x_293, x_294, x_295);
lean_dec(x_293);
x_297 = lean_float_decLt(x_296, x_291);
x_219 = x_297;
goto block_283;
}
else
{
lean_object* x_298; double x_299; double x_300; lean_object* x_301; 
x_298 = lean_box(0);
x_299 = lean_unbox_float(x_215);
lean_dec(x_215);
x_300 = lean_unbox_float(x_216);
lean_dec(x_216);
x_301 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_214, x_218, x_299, x_300, x_5, x_298, x_9, x_10, x_11, x_12, x_212);
return x_301;
}
}
block_283:
{
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
lean_dec(x_216);
lean_dec(x_215);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_220 = lean_st_ref_take(x_12, x_212);
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_221, 3);
lean_inc(x_222);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
lean_dec(x_220);
x_224 = !lean_is_exclusive(x_221);
if (x_224 == 0)
{
lean_object* x_225; uint8_t x_226; 
x_225 = lean_ctor_get(x_221, 3);
lean_dec(x_225);
x_226 = !lean_is_exclusive(x_222);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_227 = lean_ctor_get(x_222, 0);
x_228 = l_Lean_PersistentArray_append___rarg(x_15, x_227);
lean_dec(x_227);
lean_ctor_set(x_222, 0, x_228);
x_229 = lean_st_ref_set(x_12, x_221, x_223);
x_230 = lean_ctor_get(x_229, 1);
lean_inc(x_230);
lean_dec(x_229);
x_231 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_214, x_9, x_10, x_11, x_12, x_230);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_214);
if (lean_obj_tag(x_231) == 0)
{
uint8_t x_232; 
x_232 = !lean_is_exclusive(x_231);
if (x_232 == 0)
{
return x_231;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_231, 0);
x_234 = lean_ctor_get(x_231, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_231);
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
else
{
uint8_t x_236; 
x_236 = !lean_is_exclusive(x_231);
if (x_236 == 0)
{
return x_231;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_231, 0);
x_238 = lean_ctor_get(x_231, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_231);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
else
{
uint64_t x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_240 = lean_ctor_get_uint64(x_222, sizeof(void*)*1);
x_241 = lean_ctor_get(x_222, 0);
lean_inc(x_241);
lean_dec(x_222);
x_242 = l_Lean_PersistentArray_append___rarg(x_15, x_241);
lean_dec(x_241);
x_243 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set_uint64(x_243, sizeof(void*)*1, x_240);
lean_ctor_set(x_221, 3, x_243);
x_244 = lean_st_ref_set(x_12, x_221, x_223);
x_245 = lean_ctor_get(x_244, 1);
lean_inc(x_245);
lean_dec(x_244);
x_246 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_214, x_9, x_10, x_11, x_12, x_245);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_214);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_249 = x_246;
} else {
 lean_dec_ref(x_246);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_251 = lean_ctor_get(x_246, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_246, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_253 = x_246;
} else {
 lean_dec_ref(x_246);
 x_253 = lean_box(0);
}
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(1, 2, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_251);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; uint64_t x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_255 = lean_ctor_get(x_221, 0);
x_256 = lean_ctor_get(x_221, 1);
x_257 = lean_ctor_get(x_221, 2);
x_258 = lean_ctor_get(x_221, 4);
x_259 = lean_ctor_get(x_221, 5);
x_260 = lean_ctor_get(x_221, 6);
x_261 = lean_ctor_get(x_221, 7);
lean_inc(x_261);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_inc(x_257);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_221);
x_262 = lean_ctor_get_uint64(x_222, sizeof(void*)*1);
x_263 = lean_ctor_get(x_222, 0);
lean_inc(x_263);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 x_264 = x_222;
} else {
 lean_dec_ref(x_222);
 x_264 = lean_box(0);
}
x_265 = l_Lean_PersistentArray_append___rarg(x_15, x_263);
lean_dec(x_263);
if (lean_is_scalar(x_264)) {
 x_266 = lean_alloc_ctor(0, 1, 8);
} else {
 x_266 = x_264;
}
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set_uint64(x_266, sizeof(void*)*1, x_262);
x_267 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_267, 0, x_255);
lean_ctor_set(x_267, 1, x_256);
lean_ctor_set(x_267, 2, x_257);
lean_ctor_set(x_267, 3, x_266);
lean_ctor_set(x_267, 4, x_258);
lean_ctor_set(x_267, 5, x_259);
lean_ctor_set(x_267, 6, x_260);
lean_ctor_set(x_267, 7, x_261);
x_268 = lean_st_ref_set(x_12, x_267, x_223);
x_269 = lean_ctor_get(x_268, 1);
lean_inc(x_269);
lean_dec(x_268);
x_270 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_214, x_9, x_10, x_11, x_12, x_269);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_214);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_273 = x_270;
} else {
 lean_dec_ref(x_270);
 x_273 = lean_box(0);
}
if (lean_is_scalar(x_273)) {
 x_274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_274 = x_273;
}
lean_ctor_set(x_274, 0, x_271);
lean_ctor_set(x_274, 1, x_272);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_275 = lean_ctor_get(x_270, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_270, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_277 = x_270;
} else {
 lean_dec_ref(x_270);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
}
else
{
lean_object* x_279; double x_280; double x_281; lean_object* x_282; 
x_279 = lean_box(0);
x_280 = lean_unbox_float(x_215);
lean_dec(x_215);
x_281 = lean_unbox_float(x_216);
lean_dec(x_216);
x_282 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_2, x_3, x_4, x_15, x_214, x_218, x_280, x_281, x_5, x_279, x_9, x_10, x_11, x_12, x_212);
return x_282;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 2);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2;
x_17 = l_Lean_Option_get___at_Lean_Compiler_LCNF_toConfigOptions___spec__2(x_11, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_apply_5(x_3, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_27 = lean_box(0);
x_28 = lean_unbox(x_13);
lean_dec(x_13);
x_29 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4(x_11, x_1, x_4, x_5, x_2, x_28, x_3, x_27, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_11);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
lean_dec(x_12);
x_31 = lean_box(0);
x_32 = lean_unbox(x_13);
lean_dec(x_13);
x_33 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4(x_11, x_1, x_4, x_5, x_2, x_32, x_3, x_31, x_6, x_7, x_8, x_9, x_30);
lean_dec(x_11);
return x_33;
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" finding squares", 16, 16);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_Lean_exceptEmoji___rarg(x_1);
x_8 = l_Lean_stringToMessageData(x_7);
lean_dec(x_7);
x_9 = l_Linarith_flipNegatedComparison___closed__4;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Batteries_RBNode_toList___rarg(x_1);
x_10 = lean_box(0);
x_11 = l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3(x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_box(0);
x_8 = 1;
x_9 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
return x_10;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("so we added proofs", 18, 18);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1;
lean_inc(x_1);
x_9 = l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6(x_8, x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_compWithZero;
x_2 = l_Linarith_Preprocessor_globalize(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("found:", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = 2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Mathlib_Tactic_AtomM_run___rarg(x_9, x_1, x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_11);
x_14 = l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5(x_11, x_13, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1;
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = lean_apply_6(x_18, x_15, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_3);
x_22 = l_Lean_isTracingEnabledFor___at_Lean_Meta_processPostponed_loop___spec__1(x_3, x_4, x_5, x_6, x_7, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_11);
lean_dec(x_3);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_box(0);
x_27 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(x_20, x_26, x_4, x_5, x_6, x_7, x_25);
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_29 = lean_ctor_get(x_22, 1);
x_30 = lean_ctor_get(x_22, 0);
lean_dec(x_30);
x_31 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7(x_11, x_13);
x_32 = l_Lean_MessageData_ofList(x_31);
x_33 = l_Lean_indentD(x_32);
x_34 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3;
lean_ctor_set_tag(x_22, 7);
lean_ctor_set(x_22, 1, x_33);
lean_ctor_set(x_22, 0, x_34);
x_35 = l_Linarith_flipNegatedComparison___closed__4;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_22);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_36, x_4, x_5, x_6, x_7, x_29);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(x_20, x_38, x_4, x_5, x_6, x_7, x_39);
lean_dec(x_38);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_41 = lean_ctor_get(x_22, 1);
lean_inc(x_41);
lean_dec(x_22);
x_42 = l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7(x_11, x_13);
x_43 = l_Lean_MessageData_ofList(x_42);
x_44 = l_Lean_indentD(x_43);
x_45 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3;
x_46 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Linarith_flipNegatedComparison___closed__4;
x_48 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_addTrace___at_Lean_Meta_processPostponed_loop___spec__2(x_3, x_48, x_4, x_5, x_6, x_7, x_41);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(x_20, x_50, x_4, x_5, x_6, x_7, x_51);
lean_dec(x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_53 = !lean_is_exclusive(x_19);
if (x_53 == 0)
{
return x_19;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_19, 0);
x_55 = lean_ctor_get(x_19, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_19);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_14);
if (x_57 == 0)
{
return x_14;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_14, 0);
x_59 = lean_ctor_get(x_14, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_14);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_61 = !lean_is_exclusive(x_10);
if (x_61 == 0)
{
return x_10;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_10, 0);
x_63 = lean_ctor_get(x_10, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_10);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_7 = lean_box(0);
x_8 = l_List_reverse___rarg(x_1);
x_9 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__2), 9, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_8);
x_10 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1;
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__4___rarg), 9, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2;
x_13 = l_Linarith_removeNegations___elambda__1___closed__4;
x_14 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5), 8, 3);
lean_closure_set(x_14, 0, x_11);
lean_closure_set(x_14, 1, x_12);
lean_closure_set(x_14, 2, x_13);
x_15 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3;
x_16 = 1;
x_17 = l_Linarith_flipNegatedComparison___closed__3;
x_18 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8(x_13, x_15, x_14, x_16, x_17, x_2, x_3, x_4, x_5, x_6);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_instantiateMVars___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MonadExcept_ofExcept___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__9(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; double x_18; double x_19; lean_object* x_20; 
x_16 = lean_unbox(x_2);
lean_dec(x_2);
x_17 = lean_unbox(x_7);
lean_dec(x_7);
x_18 = lean_unbox_float(x_8);
lean_dec(x_8);
x_19 = lean_unbox_float(x_9);
lean_dec(x_9);
x_20 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__2(x_1, x_16, x_3, x_4, x_5, x_6, x_17, x_18, x_19, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; double x_18; double x_19; lean_object* x_20; 
x_16 = lean_unbox(x_2);
lean_dec(x_2);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = lean_unbox_float(x_7);
lean_dec(x_7);
x_19 = lean_unbox_float(x_8);
lean_dec(x_8);
x_20 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3(x_1, x_16, x_3, x_4, x_5, x_17, x_18, x_19, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4(x_1, x_2, x_14, x_4, x_5, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8(x_1, x_2, x_3, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = l_List_reverse___rarg(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_11);
x_13 = lean_infer_type(x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Linarith_parseCompAndExpr(x_14, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_17, 1);
lean_dec(x_20);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_17);
{
lean_object* _tmp_0 = x_12;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_6 = x_18;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_23);
{
lean_object* _tmp_0 = x_12;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_6 = x_18;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_7 = _tmp_6;
}
goto _start;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
x_28 = l_Lean_Exception_isInterrupt(x_26);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_Exception_isRuntime(x_26);
if (x_29 == 0)
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_16);
lean_dec(x_26);
x_30 = 2;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_32);
{
lean_object* _tmp_0 = x_12;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_6 = x_27;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
else
{
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = l_Lean_Exception_isInterrupt(x_34);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Exception_isRuntime(x_34);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_34);
x_38 = 2;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_11);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_40);
{
lean_object* _tmp_0 = x_12;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_6 = x_35;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_42; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_35);
return x_42;
}
}
else
{
lean_object* x_43; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 0);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_13);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_1, 0);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_48);
x_50 = lean_infer_type(x_48, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_53 = l_Linarith_parseCompAndExpr(x_51, x_3, x_4, x_5, x_6, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_48);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_2);
x_1 = x_49;
x_2 = x_59;
x_7 = x_55;
goto _start;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_53, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_63 = x_53;
} else {
 lean_dec_ref(x_53);
 x_63 = lean_box(0);
}
x_64 = l_Lean_Exception_isInterrupt(x_61);
if (x_64 == 0)
{
uint8_t x_65; 
x_65 = l_Lean_Exception_isRuntime(x_61);
if (x_65 == 0)
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_63);
lean_dec(x_61);
x_66 = 2;
x_67 = lean_box(x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_48);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_2);
x_1 = x_49;
x_2 = x_69;
x_7 = x_62;
goto _start;
}
else
{
lean_object* x_71; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_63)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_63;
}
lean_ctor_set(x_71, 0, x_61);
lean_ctor_set(x_71, 1, x_62);
return x_71;
}
}
else
{
lean_object* x_72; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_63)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_63;
}
lean_ctor_set(x_72, 0, x_61);
lean_ctor_set(x_72, 1, x_62);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = lean_ctor_get(x_50, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_50, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_75 = x_50;
} else {
 lean_dec_ref(x_50);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_13 = lean_apply_7(x_1, x_2, x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_3, x_14);
x_3 = x_16;
x_4 = x_12;
x_9 = x_15;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_go___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_array_to_list(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc_n(x_11, 2);
x_13 = lean_apply_7(x_1, x_11, x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_3, x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_12);
lean_inc(x_1);
x_17 = l_List_foldlM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__4(x_1, x_11, x_16, x_12, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_2 = x_12;
x_3 = x_18;
x_8 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
static lean_object* _init_l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1;
x_9 = l_List_mapDiagM_go___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__3(x_1, x_2, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_filterMap___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__5(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_1 = x_4;
goto _start;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_List_filterMap___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__5(x_7);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_List_filterMap___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__5(x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" adding product terms", 21, 21);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_Lean_exceptEmoji___rarg(x_1);
x_8 = l_Lean_stringToMessageData(x_7);
lean_dec(x_7);
x_9 = l_Linarith_flipNegatedComparison___closed__4;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("zero_mul_eq", 11, 11);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_zero_eq", 11, 11);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_nonneg_of_nonpos_of_nonpos", 30, 30);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("le_of_lt", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mul_pos_of_neg_of_neg", 21, 21);
return x_1;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
switch (x_32) {
case 0:
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_2, 1);
x_35 = lean_ctor_get(x_2, 0);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_3);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_3, 1);
x_38 = lean_ctor_get(x_3, 0);
lean_dec(x_38);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_37);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_34);
x_39 = lean_array_mk(x_2);
x_40 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2;
x_41 = l_Lean_Meta_mkAppM(x_40, x_39, x_4, x_5, x_6, x_7, x_8);
x_9 = x_41;
goto block_30;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_3, 1);
lean_inc(x_42);
lean_dec(x_3);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_43);
lean_ctor_set(x_2, 0, x_34);
x_44 = lean_array_mk(x_2);
x_45 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2;
x_46 = l_Lean_Meta_mkAppM(x_45, x_44, x_4, x_5, x_6, x_7, x_8);
x_9 = x_46;
goto block_30;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_2, 1);
lean_inc(x_47);
lean_dec(x_2);
x_48 = lean_ctor_get(x_3, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_49 = x_3;
} else {
 lean_dec_ref(x_3);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
 lean_ctor_set_tag(x_50, 1);
}
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_1);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_47);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_array_mk(x_51);
x_53 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2;
x_54 = l_Lean_Meta_mkAppM(x_53, x_52, x_4, x_5, x_6, x_7, x_8);
x_9 = x_54;
goto block_30;
}
}
case 1:
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_3, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
switch (x_56) {
case 0:
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_2);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_2, 1);
x_59 = lean_ctor_get(x_2, 0);
lean_dec(x_59);
x_60 = !lean_is_exclusive(x_3);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_3, 1);
x_62 = lean_ctor_get(x_3, 0);
lean_dec(x_62);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_61);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_58);
x_63 = lean_array_mk(x_2);
x_64 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_65 = l_Lean_Meta_mkAppM(x_64, x_63, x_4, x_5, x_6, x_7, x_8);
x_9 = x_65;
goto block_30;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_66 = lean_ctor_get(x_3, 1);
lean_inc(x_66);
lean_dec(x_3);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_67);
lean_ctor_set(x_2, 0, x_58);
x_68 = lean_array_mk(x_2);
x_69 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_70 = l_Lean_Meta_mkAppM(x_69, x_68, x_4, x_5, x_6, x_7, x_8);
x_9 = x_70;
goto block_30;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
lean_dec(x_2);
x_72 = lean_ctor_get(x_3, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_73 = x_3;
} else {
 lean_dec_ref(x_3);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
 lean_ctor_set_tag(x_74, 1);
}
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_1);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_71);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_mk(x_75);
x_77 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_78 = l_Lean_Meta_mkAppM(x_77, x_76, x_4, x_5, x_6, x_7, x_8);
x_9 = x_78;
goto block_30;
}
}
case 1:
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_2);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_80 = lean_ctor_get(x_2, 1);
x_81 = lean_ctor_get(x_2, 0);
lean_dec(x_81);
x_82 = !lean_is_exclusive(x_3);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_3, 1);
x_84 = lean_ctor_get(x_3, 0);
lean_dec(x_84);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_83);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_80);
x_85 = lean_array_mk(x_2);
x_86 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_87 = l_Lean_Meta_mkAppM(x_86, x_85, x_4, x_5, x_6, x_7, x_8);
x_9 = x_87;
goto block_30;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_3, 1);
lean_inc(x_88);
lean_dec(x_3);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_89);
lean_ctor_set(x_2, 0, x_80);
x_90 = lean_array_mk(x_2);
x_91 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_92 = l_Lean_Meta_mkAppM(x_91, x_90, x_4, x_5, x_6, x_7, x_8);
x_9 = x_92;
goto block_30;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = lean_ctor_get(x_2, 1);
lean_inc(x_93);
lean_dec(x_2);
x_94 = lean_ctor_get(x_3, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_95 = x_3;
} else {
 lean_dec_ref(x_3);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
 lean_ctor_set_tag(x_96, 1);
}
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_1);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_93);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_mk(x_97);
x_99 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_100 = l_Lean_Meta_mkAppM(x_99, x_98, x_4, x_5, x_6, x_7, x_8);
x_9 = x_100;
goto block_30;
}
}
default: 
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_2);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_102 = lean_ctor_get(x_2, 1);
x_103 = lean_ctor_get(x_2, 0);
lean_dec(x_103);
x_104 = !lean_is_exclusive(x_3);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_3, 1);
x_106 = lean_ctor_get(x_3, 0);
lean_dec(x_106);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_105);
x_107 = lean_array_mk(x_3);
x_108 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_109 = l_Lean_Meta_mkAppM(x_108, x_107, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_102);
lean_ctor_set(x_112, 1, x_2);
x_113 = lean_array_mk(x_112);
x_114 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_115 = l_Lean_Meta_mkAppM(x_114, x_113, x_4, x_5, x_6, x_7, x_111);
x_9 = x_115;
goto block_30;
}
else
{
uint8_t x_116; 
lean_free_object(x_2);
lean_dec(x_102);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_109);
if (x_116 == 0)
{
x_9 = x_109;
goto block_30;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_109, 0);
x_118 = lean_ctor_get(x_109, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_109);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_9 = x_119;
goto block_30;
}
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_120 = lean_ctor_get(x_3, 1);
lean_inc(x_120);
lean_dec(x_3);
lean_inc(x_1);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_1);
x_122 = lean_array_mk(x_121);
x_123 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_124 = l_Lean_Meta_mkAppM(x_123, x_122, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_125);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_102);
lean_ctor_set(x_127, 1, x_2);
x_128 = lean_array_mk(x_127);
x_129 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_130 = l_Lean_Meta_mkAppM(x_129, x_128, x_4, x_5, x_6, x_7, x_126);
x_9 = x_130;
goto block_30;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_free_object(x_2);
lean_dec(x_102);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_131 = lean_ctor_get(x_124, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_124, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_133 = x_124;
} else {
 lean_dec_ref(x_124);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_132);
x_9 = x_134;
goto block_30;
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_135 = lean_ctor_get(x_2, 1);
lean_inc(x_135);
lean_dec(x_2);
x_136 = lean_ctor_get(x_3, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_137 = x_3;
} else {
 lean_dec_ref(x_3);
 x_137 = lean_box(0);
}
lean_inc(x_1);
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_137;
 lean_ctor_set_tag(x_138, 1);
}
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_1);
x_139 = lean_array_mk(x_138);
x_140 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_141 = l_Lean_Meta_mkAppM(x_140, x_139, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_1);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_135);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_array_mk(x_145);
x_147 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_148 = l_Lean_Meta_mkAppM(x_147, x_146, x_4, x_5, x_6, x_7, x_143);
x_9 = x_148;
goto block_30;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_135);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_149 = lean_ctor_get(x_141, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_141, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_151 = x_141;
} else {
 lean_dec_ref(x_141);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(1, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_150);
x_9 = x_152;
goto block_30;
}
}
}
}
}
default: 
{
lean_object* x_153; uint8_t x_154; 
x_153 = lean_ctor_get(x_3, 0);
lean_inc(x_153);
x_154 = lean_unbox(x_153);
lean_dec(x_153);
switch (x_154) {
case 0:
{
uint8_t x_155; 
x_155 = !lean_is_exclusive(x_2);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = lean_ctor_get(x_2, 1);
x_157 = lean_ctor_get(x_2, 0);
lean_dec(x_157);
x_158 = !lean_is_exclusive(x_3);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_ctor_get(x_3, 1);
x_160 = lean_ctor_get(x_3, 0);
lean_dec(x_160);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_159);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_156);
x_161 = lean_array_mk(x_2);
x_162 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_163 = l_Lean_Meta_mkAppM(x_162, x_161, x_4, x_5, x_6, x_7, x_8);
x_9 = x_163;
goto block_30;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_164 = lean_ctor_get(x_3, 1);
lean_inc(x_164);
lean_dec(x_3);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_165);
lean_ctor_set(x_2, 0, x_156);
x_166 = lean_array_mk(x_2);
x_167 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_168 = l_Lean_Meta_mkAppM(x_167, x_166, x_4, x_5, x_6, x_7, x_8);
x_9 = x_168;
goto block_30;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_169 = lean_ctor_get(x_2, 1);
lean_inc(x_169);
lean_dec(x_2);
x_170 = lean_ctor_get(x_3, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_171 = x_3;
} else {
 lean_dec_ref(x_3);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_172 = x_171;
 lean_ctor_set_tag(x_172, 1);
}
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_1);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_169);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_array_mk(x_173);
x_175 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4;
x_176 = l_Lean_Meta_mkAppM(x_175, x_174, x_4, x_5, x_6, x_7, x_8);
x_9 = x_176;
goto block_30;
}
}
case 1:
{
uint8_t x_177; 
x_177 = !lean_is_exclusive(x_2);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_178 = lean_ctor_get(x_2, 1);
x_179 = lean_ctor_get(x_2, 0);
lean_dec(x_179);
x_180 = !lean_is_exclusive(x_3);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_ctor_get(x_3, 1);
x_182 = lean_ctor_get(x_3, 0);
lean_dec(x_182);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_178);
x_183 = lean_array_mk(x_3);
x_184 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_185 = l_Lean_Meta_mkAppM(x_184, x_183, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_181);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_2);
x_189 = lean_array_mk(x_188);
x_190 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_191 = l_Lean_Meta_mkAppM(x_190, x_189, x_4, x_5, x_6, x_7, x_187);
x_9 = x_191;
goto block_30;
}
else
{
uint8_t x_192; 
lean_dec(x_181);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_192 = !lean_is_exclusive(x_185);
if (x_192 == 0)
{
x_9 = x_185;
goto block_30;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_193 = lean_ctor_get(x_185, 0);
x_194 = lean_ctor_get(x_185, 1);
lean_inc(x_194);
lean_inc(x_193);
lean_dec(x_185);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_193);
lean_ctor_set(x_195, 1, x_194);
x_9 = x_195;
goto block_30;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_196 = lean_ctor_get(x_3, 1);
lean_inc(x_196);
lean_dec(x_3);
lean_inc(x_1);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_178);
lean_ctor_set(x_197, 1, x_1);
x_198 = lean_array_mk(x_197);
x_199 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_200 = l_Lean_Meta_mkAppM(x_199, x_198, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_196);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_2);
x_204 = lean_array_mk(x_203);
x_205 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_206 = l_Lean_Meta_mkAppM(x_205, x_204, x_4, x_5, x_6, x_7, x_202);
x_9 = x_206;
goto block_30;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_196);
lean_free_object(x_2);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_207 = lean_ctor_get(x_200, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_200, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_209 = x_200;
} else {
 lean_dec_ref(x_200);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
x_9 = x_210;
goto block_30;
}
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_211 = lean_ctor_get(x_2, 1);
lean_inc(x_211);
lean_dec(x_2);
x_212 = lean_ctor_get(x_3, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_213 = x_3;
} else {
 lean_dec_ref(x_3);
 x_213 = lean_box(0);
}
lean_inc(x_1);
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
 lean_ctor_set_tag(x_214, 1);
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_1);
x_215 = lean_array_mk(x_214);
x_216 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_217 = l_Lean_Meta_mkAppM(x_216, x_215, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_212);
lean_ctor_set(x_220, 1, x_1);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_218);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_array_mk(x_221);
x_223 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6;
x_224 = l_Lean_Meta_mkAppM(x_223, x_222, x_4, x_5, x_6, x_7, x_219);
x_9 = x_224;
goto block_30;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_212);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_225 = lean_ctor_get(x_217, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_217, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_227 = x_217;
} else {
 lean_dec_ref(x_217);
 x_227 = lean_box(0);
}
if (lean_is_scalar(x_227)) {
 x_228 = lean_alloc_ctor(1, 2, 0);
} else {
 x_228 = x_227;
}
lean_ctor_set(x_228, 0, x_225);
lean_ctor_set(x_228, 1, x_226);
x_9 = x_228;
goto block_30;
}
}
}
default: 
{
uint8_t x_229; 
x_229 = !lean_is_exclusive(x_2);
if (x_229 == 0)
{
lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_230 = lean_ctor_get(x_2, 1);
x_231 = lean_ctor_get(x_2, 0);
lean_dec(x_231);
x_232 = !lean_is_exclusive(x_3);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_233 = lean_ctor_get(x_3, 1);
x_234 = lean_ctor_get(x_3, 0);
lean_dec(x_234);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_233);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_230);
x_235 = lean_array_mk(x_2);
x_236 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10;
x_237 = l_Lean_Meta_mkAppM(x_236, x_235, x_4, x_5, x_6, x_7, x_8);
x_9 = x_237;
goto block_30;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_238 = lean_ctor_get(x_3, 1);
lean_inc(x_238);
lean_dec(x_3);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 1, x_239);
lean_ctor_set(x_2, 0, x_230);
x_240 = lean_array_mk(x_2);
x_241 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10;
x_242 = l_Lean_Meta_mkAppM(x_241, x_240, x_4, x_5, x_6, x_7, x_8);
x_9 = x_242;
goto block_30;
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_243 = lean_ctor_get(x_2, 1);
lean_inc(x_243);
lean_dec(x_2);
x_244 = lean_ctor_get(x_3, 1);
lean_inc(x_244);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_245 = x_3;
} else {
 lean_dec_ref(x_3);
 x_245 = lean_box(0);
}
if (lean_is_scalar(x_245)) {
 x_246 = lean_alloc_ctor(1, 2, 0);
} else {
 x_246 = x_245;
 lean_ctor_set_tag(x_246, 1);
}
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_1);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_243);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_array_mk(x_247);
x_249 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10;
x_250 = l_Lean_Meta_mkAppM(x_249, x_248, x_4, x_5, x_6, x_7, x_8);
x_9 = x_250;
goto block_30;
}
}
}
}
}
block_30:
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_13);
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
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = l_Lean_Exception_isInterrupt(x_18);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = l_Lean_Exception_isRuntime(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
x_21 = lean_box(0);
lean_ctor_set_tag(x_9, 0);
lean_ctor_set(x_9, 0, x_21);
return x_9;
}
else
{
return x_9;
}
}
else
{
return x_9;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = l_Lean_Exception_isInterrupt(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Exception_isRuntime(x_22);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_22);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_23);
return x_28;
}
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
return x_29;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_mapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2), 8, 1);
lean_closure_set(x_11, 0, x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2(x_11, x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1;
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = l_List_filterMap___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__5(x_13);
x_18 = lean_apply_6(x_16, x_17, x_3, x_4, x_5, x_6, x_14);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__3), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Linarith_removeNegations___elambda__1___closed__4;
x_10 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1;
x_11 = 1;
x_12 = l_Linarith_flipNegatedComparison___closed__3;
x_13 = l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8(x_9, x_10, x_8, x_11, x_12, x_2, x_3, x_4, x_5, x_6);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Linarith_nlinarithExtras___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_List_appendTR___rarg(x_8, x_1);
lean_inc(x_10);
x_11 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs(x_10, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_List_appendTR___rarg(x_10, x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = l_List_appendTR___rarg(x_10, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_10);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_7, 0);
x_25 = lean_ctor_get(x_7, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_7);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("nlinarithExtras", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_nlinarithExtras___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("nonlinear arithmetic extras", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_nlinarithExtras___closed__2;
x_2 = l_Linarith_nlinarithExtras___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_nlinarithExtras___elambda__1), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_nlinarithExtras___closed__4;
x_2 = l_Linarith_nlinarithExtras___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_nlinarithExtras() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_nlinarithExtras___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_findSomeM_x3f___at_Linarith_removeNe__aux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_10);
x_12 = lean_infer_type(x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_13, x_2, x_3, x_4, x_5, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Expr_ne_x3f_x27(x_17);
lean_dec(x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_free_object(x_15);
lean_free_object(x_1);
lean_dec(x_10);
x_1 = x_11;
x_6 = x_18;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_22, 1);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_22, 1, x_28);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_22, 1);
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
lean_inc(x_30);
lean_dec(x_22);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_33 = x_29;
} else {
 lean_dec_ref(x_29);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_35);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_36 = lean_ctor_get(x_19, 0);
lean_inc(x_36);
lean_dec(x_19);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_42 = x_37;
} else {
 lean_dec_ref(x_37);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
if (lean_is_scalar(x_39)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_39;
}
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_44);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_15, 0, x_45);
return x_15;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_15, 0);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_48 = l_Lean_Expr_ne_x3f_x27(x_46);
lean_dec(x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_free_object(x_1);
lean_dec(x_10);
x_1 = x_11;
x_6 = x_47;
goto _start;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_51 = x_48;
} else {
 lean_dec_ref(x_48);
 x_51 = lean_box(0);
}
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_54 = x_50;
} else {
 lean_dec_ref(x_50);
 x_54 = lean_box(0);
}
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_57 = x_52;
} else {
 lean_dec_ref(x_52);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
if (lean_is_scalar(x_54)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_54;
}
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_59);
if (lean_is_scalar(x_51)) {
 x_60 = lean_alloc_ctor(1, 1, 0);
} else {
 x_60 = x_51;
}
lean_ctor_set(x_60, 0, x_1);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_47);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_12);
if (x_62 == 0)
{
return x_12;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_12, 0);
x_64 = lean_ctor_get(x_12, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_12);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_1, 0);
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_66);
x_68 = lean_infer_type(x_66, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_instantiateMVars___at___private_Lean_Meta_Basic_0__Lean_Meta_isClassApp_x3f___spec__1(x_69, x_2, x_3, x_4, x_5, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = l_Lean_Expr_ne_x3f_x27(x_72);
lean_dec(x_72);
if (lean_obj_tag(x_75) == 0)
{
lean_dec(x_74);
lean_dec(x_66);
x_1 = x_67;
x_6 = x_73;
goto _start;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_67);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_ctor_get(x_75, 0);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 0);
lean_inc(x_80);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_81 = x_77;
} else {
 lean_dec_ref(x_77);
 x_81 = lean_box(0);
}
x_82 = lean_ctor_get(x_79, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_79, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_84 = x_79;
} else {
 lean_dec_ref(x_79);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
if (lean_is_scalar(x_81)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_81;
}
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_66);
lean_ctor_set(x_87, 1, x_86);
if (lean_is_scalar(x_78)) {
 x_88 = lean_alloc_ctor(1, 1, 0);
} else {
 x_88 = x_78;
}
lean_ctor_set(x_88, 0, x_87);
if (lean_is_scalar(x_74)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_74;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_73);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_90 = lean_ctor_get(x_68, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_68, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_92 = x_68;
} else {
 lean_dec_ref(x_68);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_1);
x_10 = l_Lean_Expr_fvar___override(x_1);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_10);
lean_ctor_set(x_6, 1, x_2);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_3);
x_2 = x_8;
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_1);
x_16 = l_Lean_Expr_fvar___override(x_1);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_2);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
x_2 = x_13;
x_3 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_24 = x_20;
} else {
 lean_dec_ref(x_20);
 x_24 = lean_box(0);
}
lean_inc(x_1);
x_25 = l_Lean_Expr_fvar___override(x_1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_24)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_24;
}
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
x_2 = x_21;
x_3 = x_28;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_1);
x_10 = l_Lean_Expr_fvar___override(x_1);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_10);
lean_ctor_set(x_6, 1, x_2);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_3);
x_2 = x_8;
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_1);
x_16 = l_Lean_Expr_fvar___override(x_1);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_2, 0, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_2);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
x_2 = x_13;
x_3 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_24 = x_20;
} else {
 lean_dec_ref(x_20);
 x_24 = lean_box(0);
}
lean_inc(x_1);
x_25 = l_Lean_Expr_fvar___override(x_1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
if (lean_is_scalar(x_24)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_24;
}
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
x_2 = x_21;
x_3 = x_28;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Linarith_removeNe__aux(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__3(x_3, x_12, x_4);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__3(x_3, x_14, x_4);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Linarith_removeNe__aux(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__4(x_3, x_12, x_4);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_List_mapTR_loop___at_Linarith_removeNe__aux___spec__4(x_3, x_14, x_4);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lt_or_gt_of_ne", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_removeNe__aux___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Or", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("elim", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_removeNe__aux___closed__3;
x_2 = l_Linarith_removeNe__aux___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNe__aux___closed__6() {
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
LEAN_EXPORT lean_object* l_Linarith_removeNe__aux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_List_findSomeM_x3f___at_Linarith_removeNe__aux___spec__1(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_dec(x_8);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_1);
x_34 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_ctor_set(x_9, 0, x_29);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_32);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_33);
lean_inc(x_26);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_26);
x_41 = lean_box(0);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 1, x_41);
lean_ctor_set(x_23, 0, x_40);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_39);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_21);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_9);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_array_mk(x_43);
x_45 = l_Linarith_removeNe__aux___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_46 = l_Lean_Meta_mkAppOptM(x_45, x_44, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_35);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_41);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_37);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_37);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_mk(x_54);
x_56 = l_Linarith_removeNe__aux___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_57 = l_Lean_Meta_mkAppOptM(x_56, x_55, x_3, x_4, x_5, x_6, x_48);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Linarith_removeNe__aux___closed__6;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_61 = l_Lean_MVarId_apply(x_1, x_58, x_60, x_3, x_4, x_5, x_6, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_26);
lean_dec(x_2);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Linarith_isNatProp___lambda__1___closed__2;
x_65 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_64, x_3, x_4, x_5, x_6, x_63);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_65;
}
else
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_62);
lean_dec(x_26);
lean_dec(x_2);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = l_Linarith_isNatProp___lambda__1___closed__2;
x_69 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_68, x_3, x_4, x_5, x_6, x_67);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_69;
}
else
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_71 = lean_ctor_get(x_61, 1);
lean_inc(x_71);
lean_dec(x_61);
x_72 = lean_ctor_get(x_62, 0);
lean_inc(x_72);
lean_dec(x_62);
x_73 = !lean_is_exclusive(x_66);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; 
x_74 = lean_ctor_get(x_66, 0);
x_75 = lean_ctor_get(x_66, 1);
lean_dec(x_75);
x_76 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_77 = l_Lean_Meta_intro1Core(x_72, x_76, x_3, x_4, x_5, x_6, x_71);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
lean_ctor_set(x_66, 1, x_41);
lean_ctor_set(x_66, 0, x_26);
x_82 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_66);
lean_inc(x_82);
lean_inc(x_81);
x_83 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_83, 0, x_81);
lean_closure_set(x_83, 1, x_82);
lean_closure_set(x_83, 2, x_80);
lean_closure_set(x_83, 3, x_41);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_84 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_81, x_83, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_87 = l_Lean_Meta_intro1Core(x_74, x_76, x_3, x_4, x_5, x_6, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_ctor_get(x_88, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
lean_inc(x_91);
x_92 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_92, 0, x_91);
lean_closure_set(x_92, 1, x_82);
lean_closure_set(x_92, 2, x_90);
lean_closure_set(x_92, 3, x_41);
x_93 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_91, x_92, x_3, x_4, x_5, x_6, x_89);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = l_List_appendTR___rarg(x_85, x_95);
lean_ctor_set(x_93, 0, x_96);
return x_93;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_ctor_get(x_93, 0);
x_98 = lean_ctor_get(x_93, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_93);
x_99 = l_List_appendTR___rarg(x_85, x_97);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
else
{
uint8_t x_101; 
lean_dec(x_85);
x_101 = !lean_is_exclusive(x_93);
if (x_101 == 0)
{
return x_93;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_93, 0);
x_103 = lean_ctor_get(x_93, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_93);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_85);
lean_dec(x_82);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_105 = !lean_is_exclusive(x_87);
if (x_105 == 0)
{
return x_87;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_87, 0);
x_107 = lean_ctor_get(x_87, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_87);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_82);
lean_dec(x_74);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_109 = !lean_is_exclusive(x_84);
if (x_109 == 0)
{
return x_84;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_84, 0);
x_111 = lean_ctor_get(x_84, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_84);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_free_object(x_66);
lean_dec(x_74);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_77);
if (x_113 == 0)
{
return x_77;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_77, 0);
x_115 = lean_ctor_get(x_77, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_77);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_66, 0);
lean_inc(x_117);
lean_dec(x_66);
x_118 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_119 = l_Lean_Meta_intro1Core(x_72, x_118, x_3, x_4, x_5, x_6, x_71);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_ctor_get(x_120, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
lean_dec(x_120);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_26);
lean_ctor_set(x_124, 1, x_41);
x_125 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_124);
lean_inc(x_125);
lean_inc(x_123);
x_126 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_126, 0, x_123);
lean_closure_set(x_126, 1, x_125);
lean_closure_set(x_126, 2, x_122);
lean_closure_set(x_126, 3, x_41);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_127 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_123, x_126, x_3, x_4, x_5, x_6, x_121);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_130 = l_Lean_Meta_intro1Core(x_117, x_118, x_3, x_4, x_5, x_6, x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
lean_dec(x_131);
lean_inc(x_134);
x_135 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_135, 0, x_134);
lean_closure_set(x_135, 1, x_125);
lean_closure_set(x_135, 2, x_133);
lean_closure_set(x_135, 3, x_41);
x_136 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_134, x_135, x_3, x_4, x_5, x_6, x_132);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
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
x_140 = l_List_appendTR___rarg(x_128, x_137);
if (lean_is_scalar(x_139)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_139;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_138);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_128);
x_142 = lean_ctor_get(x_136, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_136, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 x_144 = x_136;
} else {
 lean_dec_ref(x_136);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_128);
lean_dec(x_125);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_146 = lean_ctor_get(x_130, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_130, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_148 = x_130;
} else {
 lean_dec_ref(x_130);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_125);
lean_dec(x_117);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_150 = lean_ctor_get(x_127, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_127, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_152 = x_127;
} else {
 lean_dec_ref(x_127);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_117);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_154 = lean_ctor_get(x_119, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_119, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_156 = x_119;
} else {
 lean_dec_ref(x_119);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_70);
lean_dec(x_66);
lean_dec(x_62);
lean_dec(x_26);
lean_dec(x_2);
x_158 = lean_ctor_get(x_61, 1);
lean_inc(x_158);
lean_dec(x_61);
x_159 = l_Linarith_isNatProp___lambda__1___closed__2;
x_160 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_159, x_3, x_4, x_5, x_6, x_158);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_160;
}
}
}
}
else
{
uint8_t x_161; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_161 = !lean_is_exclusive(x_61);
if (x_161 == 0)
{
return x_61;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_61, 0);
x_163 = lean_ctor_get(x_61, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_61);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_165 = !lean_is_exclusive(x_57);
if (x_165 == 0)
{
return x_57;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_57, 0);
x_167 = lean_ctor_get(x_57, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_57);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
else
{
uint8_t x_169; 
lean_dec(x_35);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_46);
if (x_169 == 0)
{
return x_46;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_46, 0);
x_171 = lean_ctor_get(x_46, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_46);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
else
{
uint8_t x_173; 
lean_free_object(x_23);
lean_dec(x_33);
lean_dec(x_32);
lean_free_object(x_22);
lean_dec(x_29);
lean_free_object(x_21);
lean_dec(x_26);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_173 = !lean_is_exclusive(x_34);
if (x_173 == 0)
{
return x_34;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_34, 0);
x_175 = lean_ctor_get(x_34, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_34);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_23, 0);
x_178 = lean_ctor_get(x_23, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_23);
lean_inc(x_1);
x_179 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_180 = lean_ctor_get(x_179, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_179, 1);
lean_inc(x_181);
lean_dec(x_179);
lean_ctor_set(x_9, 0, x_29);
x_182 = lean_box(0);
x_183 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_183, 0, x_177);
x_184 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_184, 0, x_178);
lean_inc(x_26);
x_185 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_185, 0, x_26);
x_186 = lean_box(0);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 1, x_187);
lean_ctor_set(x_22, 0, x_184);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_183);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_182);
lean_ctor_set(x_188, 1, x_21);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_9);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_array_mk(x_189);
x_191 = l_Linarith_removeNe__aux___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_192 = l_Lean_Meta_mkAppOptM(x_191, x_190, x_3, x_4, x_5, x_6, x_181);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_195 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_195, 0, x_180);
x_196 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_196, 0, x_193);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_186);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_197);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_182);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_182);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_array_mk(x_200);
x_202 = l_Linarith_removeNe__aux___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_203 = l_Lean_Meta_mkAppOptM(x_202, x_201, x_3, x_4, x_5, x_6, x_194);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_206 = l_Linarith_removeNe__aux___closed__6;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_207 = l_Lean_MVarId_apply(x_1, x_204, x_206, x_3, x_4, x_5, x_6, x_205);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_dec(x_26);
lean_dec(x_2);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_210 = l_Linarith_isNatProp___lambda__1___closed__2;
x_211 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_210, x_3, x_4, x_5, x_6, x_209);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_211;
}
else
{
lean_object* x_212; 
x_212 = lean_ctor_get(x_208, 1);
lean_inc(x_212);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_208);
lean_dec(x_26);
lean_dec(x_2);
x_213 = lean_ctor_get(x_207, 1);
lean_inc(x_213);
lean_dec(x_207);
x_214 = l_Linarith_isNatProp___lambda__1___closed__2;
x_215 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_214, x_3, x_4, x_5, x_6, x_213);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_215;
}
else
{
lean_object* x_216; 
x_216 = lean_ctor_get(x_212, 1);
lean_inc(x_216);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; 
x_217 = lean_ctor_get(x_207, 1);
lean_inc(x_217);
lean_dec(x_207);
x_218 = lean_ctor_get(x_208, 0);
lean_inc(x_218);
lean_dec(x_208);
x_219 = lean_ctor_get(x_212, 0);
lean_inc(x_219);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_220 = x_212;
} else {
 lean_dec_ref(x_212);
 x_220 = lean_box(0);
}
x_221 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_222 = l_Lean_Meta_intro1Core(x_218, x_221, x_3, x_4, x_5, x_6, x_217);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
lean_dec(x_222);
x_225 = lean_ctor_get(x_223, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_223, 1);
lean_inc(x_226);
lean_dec(x_223);
if (lean_is_scalar(x_220)) {
 x_227 = lean_alloc_ctor(1, 2, 0);
} else {
 x_227 = x_220;
}
lean_ctor_set(x_227, 0, x_26);
lean_ctor_set(x_227, 1, x_186);
x_228 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_227);
lean_inc(x_228);
lean_inc(x_226);
x_229 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_229, 0, x_226);
lean_closure_set(x_229, 1, x_228);
lean_closure_set(x_229, 2, x_225);
lean_closure_set(x_229, 3, x_186);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_230 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_226, x_229, x_3, x_4, x_5, x_6, x_224);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_233 = l_Lean_Meta_intro1Core(x_219, x_221, x_3, x_4, x_5, x_6, x_232);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_233, 1);
lean_inc(x_235);
lean_dec(x_233);
x_236 = lean_ctor_get(x_234, 0);
lean_inc(x_236);
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_dec(x_234);
lean_inc(x_237);
x_238 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_238, 0, x_237);
lean_closure_set(x_238, 1, x_228);
lean_closure_set(x_238, 2, x_236);
lean_closure_set(x_238, 3, x_186);
x_239 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_237, x_238, x_3, x_4, x_5, x_6, x_235);
if (lean_obj_tag(x_239) == 0)
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_240 = lean_ctor_get(x_239, 0);
lean_inc(x_240);
x_241 = lean_ctor_get(x_239, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_242 = x_239;
} else {
 lean_dec_ref(x_239);
 x_242 = lean_box(0);
}
x_243 = l_List_appendTR___rarg(x_231, x_240);
if (lean_is_scalar(x_242)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_242;
}
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_241);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_231);
x_245 = lean_ctor_get(x_239, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_239, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_247 = x_239;
} else {
 lean_dec_ref(x_239);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_231);
lean_dec(x_228);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_249 = lean_ctor_get(x_233, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_233, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_251 = x_233;
} else {
 lean_dec_ref(x_233);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_228);
lean_dec(x_219);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_253 = lean_ctor_get(x_230, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_230, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_255 = x_230;
} else {
 lean_dec_ref(x_230);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_220);
lean_dec(x_219);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_257 = lean_ctor_get(x_222, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_222, 1);
lean_inc(x_258);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_259 = x_222;
} else {
 lean_dec_ref(x_222);
 x_259 = lean_box(0);
}
if (lean_is_scalar(x_259)) {
 x_260 = lean_alloc_ctor(1, 2, 0);
} else {
 x_260 = x_259;
}
lean_ctor_set(x_260, 0, x_257);
lean_ctor_set(x_260, 1, x_258);
return x_260;
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_216);
lean_dec(x_212);
lean_dec(x_208);
lean_dec(x_26);
lean_dec(x_2);
x_261 = lean_ctor_get(x_207, 1);
lean_inc(x_261);
lean_dec(x_207);
x_262 = l_Linarith_isNatProp___lambda__1___closed__2;
x_263 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_262, x_3, x_4, x_5, x_6, x_261);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_263;
}
}
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_264 = lean_ctor_get(x_207, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_207, 1);
lean_inc(x_265);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_266 = x_207;
} else {
 lean_dec_ref(x_207);
 x_266 = lean_box(0);
}
if (lean_is_scalar(x_266)) {
 x_267 = lean_alloc_ctor(1, 2, 0);
} else {
 x_267 = x_266;
}
lean_ctor_set(x_267, 0, x_264);
lean_ctor_set(x_267, 1, x_265);
return x_267;
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_268 = lean_ctor_get(x_203, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_203, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_270 = x_203;
} else {
 lean_dec_ref(x_203);
 x_270 = lean_box(0);
}
if (lean_is_scalar(x_270)) {
 x_271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_271 = x_270;
}
lean_ctor_set(x_271, 0, x_268);
lean_ctor_set(x_271, 1, x_269);
return x_271;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_180);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_272 = lean_ctor_get(x_192, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_192, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_274 = x_192;
} else {
 lean_dec_ref(x_192);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_178);
lean_dec(x_177);
lean_free_object(x_22);
lean_dec(x_29);
lean_free_object(x_21);
lean_dec(x_26);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_276 = lean_ctor_get(x_179, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_179, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 lean_ctor_release(x_179, 1);
 x_278 = x_179;
} else {
 lean_dec_ref(x_179);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_280 = lean_ctor_get(x_22, 0);
lean_inc(x_280);
lean_dec(x_22);
x_281 = lean_ctor_get(x_23, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_23, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_283 = x_23;
} else {
 lean_dec_ref(x_23);
 x_283 = lean_box(0);
}
lean_inc(x_1);
x_284 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_284) == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
lean_ctor_set(x_9, 0, x_280);
x_287 = lean_box(0);
x_288 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_288, 0, x_281);
x_289 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_289, 0, x_282);
lean_inc(x_26);
x_290 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_290, 0, x_26);
x_291 = lean_box(0);
if (lean_is_scalar(x_283)) {
 x_292 = lean_alloc_ctor(1, 2, 0);
} else {
 x_292 = x_283;
 lean_ctor_set_tag(x_292, 1);
}
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_289);
lean_ctor_set(x_293, 1, x_292);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 1, x_293);
lean_ctor_set(x_21, 0, x_288);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_287);
lean_ctor_set(x_294, 1, x_21);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_9);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_array_mk(x_295);
x_297 = l_Linarith_removeNe__aux___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_298 = l_Lean_Meta_mkAppOptM(x_297, x_296, x_3, x_4, x_5, x_6, x_286);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
lean_dec(x_298);
x_301 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_301, 0, x_285);
x_302 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_302, 0, x_299);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_291);
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_287);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_287);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_array_mk(x_306);
x_308 = l_Linarith_removeNe__aux___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_309 = l_Lean_Meta_mkAppOptM(x_308, x_307, x_3, x_4, x_5, x_6, x_300);
if (lean_obj_tag(x_309) == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
lean_dec(x_309);
x_312 = l_Linarith_removeNe__aux___closed__6;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_313 = l_Lean_MVarId_apply(x_1, x_310, x_312, x_3, x_4, x_5, x_6, x_311);
if (lean_obj_tag(x_313) == 0)
{
lean_object* x_314; 
x_314 = lean_ctor_get(x_313, 0);
lean_inc(x_314);
if (lean_obj_tag(x_314) == 0)
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_26);
lean_dec(x_2);
x_315 = lean_ctor_get(x_313, 1);
lean_inc(x_315);
lean_dec(x_313);
x_316 = l_Linarith_isNatProp___lambda__1___closed__2;
x_317 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_316, x_3, x_4, x_5, x_6, x_315);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_317;
}
else
{
lean_object* x_318; 
x_318 = lean_ctor_get(x_314, 1);
lean_inc(x_318);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_314);
lean_dec(x_26);
lean_dec(x_2);
x_319 = lean_ctor_get(x_313, 1);
lean_inc(x_319);
lean_dec(x_313);
x_320 = l_Linarith_isNatProp___lambda__1___closed__2;
x_321 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_320, x_3, x_4, x_5, x_6, x_319);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_321;
}
else
{
lean_object* x_322; 
x_322 = lean_ctor_get(x_318, 1);
lean_inc(x_322);
if (lean_obj_tag(x_322) == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; lean_object* x_328; 
x_323 = lean_ctor_get(x_313, 1);
lean_inc(x_323);
lean_dec(x_313);
x_324 = lean_ctor_get(x_314, 0);
lean_inc(x_324);
lean_dec(x_314);
x_325 = lean_ctor_get(x_318, 0);
lean_inc(x_325);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 lean_ctor_release(x_318, 1);
 x_326 = x_318;
} else {
 lean_dec_ref(x_318);
 x_326 = lean_box(0);
}
x_327 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_328 = l_Lean_Meta_intro1Core(x_324, x_327, x_3, x_4, x_5, x_6, x_323);
if (lean_obj_tag(x_328) == 0)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
x_331 = lean_ctor_get(x_329, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_329, 1);
lean_inc(x_332);
lean_dec(x_329);
if (lean_is_scalar(x_326)) {
 x_333 = lean_alloc_ctor(1, 2, 0);
} else {
 x_333 = x_326;
}
lean_ctor_set(x_333, 0, x_26);
lean_ctor_set(x_333, 1, x_291);
x_334 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_333);
lean_inc(x_334);
lean_inc(x_332);
x_335 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_335, 0, x_332);
lean_closure_set(x_335, 1, x_334);
lean_closure_set(x_335, 2, x_331);
lean_closure_set(x_335, 3, x_291);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_336 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_332, x_335, x_3, x_4, x_5, x_6, x_330);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_336, 1);
lean_inc(x_338);
lean_dec(x_336);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_339 = l_Lean_Meta_intro1Core(x_325, x_327, x_3, x_4, x_5, x_6, x_338);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_340 = lean_ctor_get(x_339, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_339, 1);
lean_inc(x_341);
lean_dec(x_339);
x_342 = lean_ctor_get(x_340, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_340, 1);
lean_inc(x_343);
lean_dec(x_340);
lean_inc(x_343);
x_344 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_344, 0, x_343);
lean_closure_set(x_344, 1, x_334);
lean_closure_set(x_344, 2, x_342);
lean_closure_set(x_344, 3, x_291);
x_345 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_343, x_344, x_3, x_4, x_5, x_6, x_341);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_348 = x_345;
} else {
 lean_dec_ref(x_345);
 x_348 = lean_box(0);
}
x_349 = l_List_appendTR___rarg(x_337, x_346);
if (lean_is_scalar(x_348)) {
 x_350 = lean_alloc_ctor(0, 2, 0);
} else {
 x_350 = x_348;
}
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_347);
return x_350;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_337);
x_351 = lean_ctor_get(x_345, 0);
lean_inc(x_351);
x_352 = lean_ctor_get(x_345, 1);
lean_inc(x_352);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_353 = x_345;
} else {
 lean_dec_ref(x_345);
 x_353 = lean_box(0);
}
if (lean_is_scalar(x_353)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_353;
}
lean_ctor_set(x_354, 0, x_351);
lean_ctor_set(x_354, 1, x_352);
return x_354;
}
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_337);
lean_dec(x_334);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_355 = lean_ctor_get(x_339, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_339, 1);
lean_inc(x_356);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 x_357 = x_339;
} else {
 lean_dec_ref(x_339);
 x_357 = lean_box(0);
}
if (lean_is_scalar(x_357)) {
 x_358 = lean_alloc_ctor(1, 2, 0);
} else {
 x_358 = x_357;
}
lean_ctor_set(x_358, 0, x_355);
lean_ctor_set(x_358, 1, x_356);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_334);
lean_dec(x_325);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_359 = lean_ctor_get(x_336, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_336, 1);
lean_inc(x_360);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_361 = x_336;
} else {
 lean_dec_ref(x_336);
 x_361 = lean_box(0);
}
if (lean_is_scalar(x_361)) {
 x_362 = lean_alloc_ctor(1, 2, 0);
} else {
 x_362 = x_361;
}
lean_ctor_set(x_362, 0, x_359);
lean_ctor_set(x_362, 1, x_360);
return x_362;
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_326);
lean_dec(x_325);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_363 = lean_ctor_get(x_328, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_328, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_328)) {
 lean_ctor_release(x_328, 0);
 lean_ctor_release(x_328, 1);
 x_365 = x_328;
} else {
 lean_dec_ref(x_328);
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
lean_object* x_367; lean_object* x_368; lean_object* x_369; 
lean_dec(x_322);
lean_dec(x_318);
lean_dec(x_314);
lean_dec(x_26);
lean_dec(x_2);
x_367 = lean_ctor_get(x_313, 1);
lean_inc(x_367);
lean_dec(x_313);
x_368 = l_Linarith_isNatProp___lambda__1___closed__2;
x_369 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_368, x_3, x_4, x_5, x_6, x_367);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_369;
}
}
}
}
else
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_370 = lean_ctor_get(x_313, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_313, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_313)) {
 lean_ctor_release(x_313, 0);
 lean_ctor_release(x_313, 1);
 x_372 = x_313;
} else {
 lean_dec_ref(x_313);
 x_372 = lean_box(0);
}
if (lean_is_scalar(x_372)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_372;
}
lean_ctor_set(x_373, 0, x_370);
lean_ctor_set(x_373, 1, x_371);
return x_373;
}
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_374 = lean_ctor_get(x_309, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_309, 1);
lean_inc(x_375);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 x_376 = x_309;
} else {
 lean_dec_ref(x_309);
 x_376 = lean_box(0);
}
if (lean_is_scalar(x_376)) {
 x_377 = lean_alloc_ctor(1, 2, 0);
} else {
 x_377 = x_376;
}
lean_ctor_set(x_377, 0, x_374);
lean_ctor_set(x_377, 1, x_375);
return x_377;
}
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
lean_dec(x_285);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_378 = lean_ctor_get(x_298, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_298, 1);
lean_inc(x_379);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_380 = x_298;
} else {
 lean_dec_ref(x_298);
 x_380 = lean_box(0);
}
if (lean_is_scalar(x_380)) {
 x_381 = lean_alloc_ctor(1, 2, 0);
} else {
 x_381 = x_380;
}
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_379);
return x_381;
}
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_283);
lean_dec(x_282);
lean_dec(x_281);
lean_dec(x_280);
lean_free_object(x_21);
lean_dec(x_26);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_382 = lean_ctor_get(x_284, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_284, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 lean_ctor_release(x_284, 1);
 x_384 = x_284;
} else {
 lean_dec_ref(x_284);
 x_384 = lean_box(0);
}
if (lean_is_scalar(x_384)) {
 x_385 = lean_alloc_ctor(1, 2, 0);
} else {
 x_385 = x_384;
}
lean_ctor_set(x_385, 0, x_382);
lean_ctor_set(x_385, 1, x_383);
return x_385;
}
}
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_386 = lean_ctor_get(x_21, 0);
lean_inc(x_386);
lean_dec(x_21);
x_387 = lean_ctor_get(x_22, 0);
lean_inc(x_387);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_388 = x_22;
} else {
 lean_dec_ref(x_22);
 x_388 = lean_box(0);
}
x_389 = lean_ctor_get(x_23, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_23, 1);
lean_inc(x_390);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_391 = x_23;
} else {
 lean_dec_ref(x_23);
 x_391 = lean_box(0);
}
lean_inc(x_1);
x_392 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_24);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
lean_ctor_set(x_9, 0, x_387);
x_395 = lean_box(0);
x_396 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_396, 0, x_389);
x_397 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_397, 0, x_390);
lean_inc(x_386);
x_398 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_398, 0, x_386);
x_399 = lean_box(0);
if (lean_is_scalar(x_391)) {
 x_400 = lean_alloc_ctor(1, 2, 0);
} else {
 x_400 = x_391;
 lean_ctor_set_tag(x_400, 1);
}
lean_ctor_set(x_400, 0, x_398);
lean_ctor_set(x_400, 1, x_399);
if (lean_is_scalar(x_388)) {
 x_401 = lean_alloc_ctor(1, 2, 0);
} else {
 x_401 = x_388;
 lean_ctor_set_tag(x_401, 1);
}
lean_ctor_set(x_401, 0, x_397);
lean_ctor_set(x_401, 1, x_400);
x_402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_402, 0, x_396);
lean_ctor_set(x_402, 1, x_401);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_395);
lean_ctor_set(x_403, 1, x_402);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_9);
lean_ctor_set(x_404, 1, x_403);
x_405 = lean_array_mk(x_404);
x_406 = l_Linarith_removeNe__aux___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_407 = l_Lean_Meta_mkAppOptM(x_406, x_405, x_3, x_4, x_5, x_6, x_394);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 1);
lean_inc(x_409);
lean_dec(x_407);
x_410 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_410, 0, x_393);
x_411 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_411, 0, x_408);
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_399);
x_413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_413, 0, x_410);
lean_ctor_set(x_413, 1, x_412);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_395);
lean_ctor_set(x_414, 1, x_413);
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_395);
lean_ctor_set(x_415, 1, x_414);
x_416 = lean_array_mk(x_415);
x_417 = l_Linarith_removeNe__aux___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_418 = l_Lean_Meta_mkAppOptM(x_417, x_416, x_3, x_4, x_5, x_6, x_409);
if (lean_obj_tag(x_418) == 0)
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
lean_dec(x_418);
x_421 = l_Linarith_removeNe__aux___closed__6;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_422 = l_Lean_MVarId_apply(x_1, x_419, x_421, x_3, x_4, x_5, x_6, x_420);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; 
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
if (lean_obj_tag(x_423) == 0)
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; 
lean_dec(x_386);
lean_dec(x_2);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = l_Linarith_isNatProp___lambda__1___closed__2;
x_426 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_425, x_3, x_4, x_5, x_6, x_424);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_426;
}
else
{
lean_object* x_427; 
x_427 = lean_ctor_get(x_423, 1);
lean_inc(x_427);
if (lean_obj_tag(x_427) == 0)
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; 
lean_dec(x_423);
lean_dec(x_386);
lean_dec(x_2);
x_428 = lean_ctor_get(x_422, 1);
lean_inc(x_428);
lean_dec(x_422);
x_429 = l_Linarith_isNatProp___lambda__1___closed__2;
x_430 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_429, x_3, x_4, x_5, x_6, x_428);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_430;
}
else
{
lean_object* x_431; 
x_431 = lean_ctor_get(x_427, 1);
lean_inc(x_431);
if (lean_obj_tag(x_431) == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; lean_object* x_437; 
x_432 = lean_ctor_get(x_422, 1);
lean_inc(x_432);
lean_dec(x_422);
x_433 = lean_ctor_get(x_423, 0);
lean_inc(x_433);
lean_dec(x_423);
x_434 = lean_ctor_get(x_427, 0);
lean_inc(x_434);
if (lean_is_exclusive(x_427)) {
 lean_ctor_release(x_427, 0);
 lean_ctor_release(x_427, 1);
 x_435 = x_427;
} else {
 lean_dec_ref(x_427);
 x_435 = lean_box(0);
}
x_436 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_437 = l_Lean_Meta_intro1Core(x_433, x_436, x_3, x_4, x_5, x_6, x_432);
if (lean_obj_tag(x_437) == 0)
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_438 = lean_ctor_get(x_437, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_437, 1);
lean_inc(x_439);
lean_dec(x_437);
x_440 = lean_ctor_get(x_438, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_438, 1);
lean_inc(x_441);
lean_dec(x_438);
if (lean_is_scalar(x_435)) {
 x_442 = lean_alloc_ctor(1, 2, 0);
} else {
 x_442 = x_435;
}
lean_ctor_set(x_442, 0, x_386);
lean_ctor_set(x_442, 1, x_399);
x_443 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_442);
lean_inc(x_443);
lean_inc(x_441);
x_444 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_444, 0, x_441);
lean_closure_set(x_444, 1, x_443);
lean_closure_set(x_444, 2, x_440);
lean_closure_set(x_444, 3, x_399);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_445 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_441, x_444, x_3, x_4, x_5, x_6, x_439);
if (lean_obj_tag(x_445) == 0)
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_446 = lean_ctor_get(x_445, 0);
lean_inc(x_446);
x_447 = lean_ctor_get(x_445, 1);
lean_inc(x_447);
lean_dec(x_445);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_448 = l_Lean_Meta_intro1Core(x_434, x_436, x_3, x_4, x_5, x_6, x_447);
if (lean_obj_tag(x_448) == 0)
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_448, 1);
lean_inc(x_450);
lean_dec(x_448);
x_451 = lean_ctor_get(x_449, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_449, 1);
lean_inc(x_452);
lean_dec(x_449);
lean_inc(x_452);
x_453 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_453, 0, x_452);
lean_closure_set(x_453, 1, x_443);
lean_closure_set(x_453, 2, x_451);
lean_closure_set(x_453, 3, x_399);
x_454 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_452, x_453, x_3, x_4, x_5, x_6, x_450);
if (lean_obj_tag(x_454) == 0)
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; 
x_455 = lean_ctor_get(x_454, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_454, 1);
lean_inc(x_456);
if (lean_is_exclusive(x_454)) {
 lean_ctor_release(x_454, 0);
 lean_ctor_release(x_454, 1);
 x_457 = x_454;
} else {
 lean_dec_ref(x_454);
 x_457 = lean_box(0);
}
x_458 = l_List_appendTR___rarg(x_446, x_455);
if (lean_is_scalar(x_457)) {
 x_459 = lean_alloc_ctor(0, 2, 0);
} else {
 x_459 = x_457;
}
lean_ctor_set(x_459, 0, x_458);
lean_ctor_set(x_459, 1, x_456);
return x_459;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_446);
x_460 = lean_ctor_get(x_454, 0);
lean_inc(x_460);
x_461 = lean_ctor_get(x_454, 1);
lean_inc(x_461);
if (lean_is_exclusive(x_454)) {
 lean_ctor_release(x_454, 0);
 lean_ctor_release(x_454, 1);
 x_462 = x_454;
} else {
 lean_dec_ref(x_454);
 x_462 = lean_box(0);
}
if (lean_is_scalar(x_462)) {
 x_463 = lean_alloc_ctor(1, 2, 0);
} else {
 x_463 = x_462;
}
lean_ctor_set(x_463, 0, x_460);
lean_ctor_set(x_463, 1, x_461);
return x_463;
}
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
lean_dec(x_446);
lean_dec(x_443);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_464 = lean_ctor_get(x_448, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_448, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_448)) {
 lean_ctor_release(x_448, 0);
 lean_ctor_release(x_448, 1);
 x_466 = x_448;
} else {
 lean_dec_ref(x_448);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
}
lean_ctor_set(x_467, 0, x_464);
lean_ctor_set(x_467, 1, x_465);
return x_467;
}
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; 
lean_dec(x_443);
lean_dec(x_434);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_468 = lean_ctor_get(x_445, 0);
lean_inc(x_468);
x_469 = lean_ctor_get(x_445, 1);
lean_inc(x_469);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 x_470 = x_445;
} else {
 lean_dec_ref(x_445);
 x_470 = lean_box(0);
}
if (lean_is_scalar(x_470)) {
 x_471 = lean_alloc_ctor(1, 2, 0);
} else {
 x_471 = x_470;
}
lean_ctor_set(x_471, 0, x_468);
lean_ctor_set(x_471, 1, x_469);
return x_471;
}
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; 
lean_dec(x_435);
lean_dec(x_434);
lean_dec(x_386);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_472 = lean_ctor_get(x_437, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_437, 1);
lean_inc(x_473);
if (lean_is_exclusive(x_437)) {
 lean_ctor_release(x_437, 0);
 lean_ctor_release(x_437, 1);
 x_474 = x_437;
} else {
 lean_dec_ref(x_437);
 x_474 = lean_box(0);
}
if (lean_is_scalar(x_474)) {
 x_475 = lean_alloc_ctor(1, 2, 0);
} else {
 x_475 = x_474;
}
lean_ctor_set(x_475, 0, x_472);
lean_ctor_set(x_475, 1, x_473);
return x_475;
}
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
lean_dec(x_431);
lean_dec(x_427);
lean_dec(x_423);
lean_dec(x_386);
lean_dec(x_2);
x_476 = lean_ctor_get(x_422, 1);
lean_inc(x_476);
lean_dec(x_422);
x_477 = l_Linarith_isNatProp___lambda__1___closed__2;
x_478 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_477, x_3, x_4, x_5, x_6, x_476);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_478;
}
}
}
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec(x_386);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_479 = lean_ctor_get(x_422, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_422, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_422)) {
 lean_ctor_release(x_422, 0);
 lean_ctor_release(x_422, 1);
 x_481 = x_422;
} else {
 lean_dec_ref(x_422);
 x_481 = lean_box(0);
}
if (lean_is_scalar(x_481)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_481;
}
lean_ctor_set(x_482, 0, x_479);
lean_ctor_set(x_482, 1, x_480);
return x_482;
}
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; 
lean_dec(x_386);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_483 = lean_ctor_get(x_418, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_418, 1);
lean_inc(x_484);
if (lean_is_exclusive(x_418)) {
 lean_ctor_release(x_418, 0);
 lean_ctor_release(x_418, 1);
 x_485 = x_418;
} else {
 lean_dec_ref(x_418);
 x_485 = lean_box(0);
}
if (lean_is_scalar(x_485)) {
 x_486 = lean_alloc_ctor(1, 2, 0);
} else {
 x_486 = x_485;
}
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_484);
return x_486;
}
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; 
lean_dec(x_393);
lean_dec(x_386);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_487 = lean_ctor_get(x_407, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_407, 1);
lean_inc(x_488);
if (lean_is_exclusive(x_407)) {
 lean_ctor_release(x_407, 0);
 lean_ctor_release(x_407, 1);
 x_489 = x_407;
} else {
 lean_dec_ref(x_407);
 x_489 = lean_box(0);
}
if (lean_is_scalar(x_489)) {
 x_490 = lean_alloc_ctor(1, 2, 0);
} else {
 x_490 = x_489;
}
lean_ctor_set(x_490, 0, x_487);
lean_ctor_set(x_490, 1, x_488);
return x_490;
}
}
else
{
lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; 
lean_dec(x_391);
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_388);
lean_dec(x_387);
lean_dec(x_386);
lean_free_object(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_491 = lean_ctor_get(x_392, 0);
lean_inc(x_491);
x_492 = lean_ctor_get(x_392, 1);
lean_inc(x_492);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_493 = x_392;
} else {
 lean_dec_ref(x_392);
 x_493 = lean_box(0);
}
if (lean_is_scalar(x_493)) {
 x_494 = lean_alloc_ctor(1, 2, 0);
} else {
 x_494 = x_493;
}
lean_ctor_set(x_494, 0, x_491);
lean_ctor_set(x_494, 1, x_492);
return x_494;
}
}
}
else
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; 
x_495 = lean_ctor_get(x_9, 0);
lean_inc(x_495);
lean_dec(x_9);
x_496 = lean_ctor_get(x_495, 1);
lean_inc(x_496);
x_497 = lean_ctor_get(x_496, 1);
lean_inc(x_497);
x_498 = lean_ctor_get(x_8, 1);
lean_inc(x_498);
lean_dec(x_8);
x_499 = lean_ctor_get(x_495, 0);
lean_inc(x_499);
if (lean_is_exclusive(x_495)) {
 lean_ctor_release(x_495, 0);
 lean_ctor_release(x_495, 1);
 x_500 = x_495;
} else {
 lean_dec_ref(x_495);
 x_500 = lean_box(0);
}
x_501 = lean_ctor_get(x_496, 0);
lean_inc(x_501);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 lean_ctor_release(x_496, 1);
 x_502 = x_496;
} else {
 lean_dec_ref(x_496);
 x_502 = lean_box(0);
}
x_503 = lean_ctor_get(x_497, 0);
lean_inc(x_503);
x_504 = lean_ctor_get(x_497, 1);
lean_inc(x_504);
if (lean_is_exclusive(x_497)) {
 lean_ctor_release(x_497, 0);
 lean_ctor_release(x_497, 1);
 x_505 = x_497;
} else {
 lean_dec_ref(x_497);
 x_505 = lean_box(0);
}
lean_inc(x_1);
x_506 = l_Lean_MVarId_getType(x_1, x_3, x_4, x_5, x_6, x_498);
if (lean_obj_tag(x_506) == 0)
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
x_507 = lean_ctor_get(x_506, 0);
lean_inc(x_507);
x_508 = lean_ctor_get(x_506, 1);
lean_inc(x_508);
lean_dec(x_506);
x_509 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_509, 0, x_501);
x_510 = lean_box(0);
x_511 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_511, 0, x_503);
x_512 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_512, 0, x_504);
lean_inc(x_499);
x_513 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_513, 0, x_499);
x_514 = lean_box(0);
if (lean_is_scalar(x_505)) {
 x_515 = lean_alloc_ctor(1, 2, 0);
} else {
 x_515 = x_505;
 lean_ctor_set_tag(x_515, 1);
}
lean_ctor_set(x_515, 0, x_513);
lean_ctor_set(x_515, 1, x_514);
if (lean_is_scalar(x_502)) {
 x_516 = lean_alloc_ctor(1, 2, 0);
} else {
 x_516 = x_502;
 lean_ctor_set_tag(x_516, 1);
}
lean_ctor_set(x_516, 0, x_512);
lean_ctor_set(x_516, 1, x_515);
if (lean_is_scalar(x_500)) {
 x_517 = lean_alloc_ctor(1, 2, 0);
} else {
 x_517 = x_500;
 lean_ctor_set_tag(x_517, 1);
}
lean_ctor_set(x_517, 0, x_511);
lean_ctor_set(x_517, 1, x_516);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_510);
lean_ctor_set(x_518, 1, x_517);
x_519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_519, 0, x_509);
lean_ctor_set(x_519, 1, x_518);
x_520 = lean_array_mk(x_519);
x_521 = l_Linarith_removeNe__aux___closed__2;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_522 = l_Lean_Meta_mkAppOptM(x_521, x_520, x_3, x_4, x_5, x_6, x_508);
if (lean_obj_tag(x_522) == 0)
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_523 = lean_ctor_get(x_522, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_522, 1);
lean_inc(x_524);
lean_dec(x_522);
x_525 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_525, 0, x_507);
x_526 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_526, 0, x_523);
x_527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_527, 0, x_526);
lean_ctor_set(x_527, 1, x_514);
x_528 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_528, 0, x_525);
lean_ctor_set(x_528, 1, x_527);
x_529 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_529, 0, x_510);
lean_ctor_set(x_529, 1, x_528);
x_530 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_530, 0, x_510);
lean_ctor_set(x_530, 1, x_529);
x_531 = lean_array_mk(x_530);
x_532 = l_Linarith_removeNe__aux___closed__5;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_533 = l_Lean_Meta_mkAppOptM(x_532, x_531, x_3, x_4, x_5, x_6, x_524);
if (lean_obj_tag(x_533) == 0)
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
x_534 = lean_ctor_get(x_533, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_533, 1);
lean_inc(x_535);
lean_dec(x_533);
x_536 = l_Linarith_removeNe__aux___closed__6;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_537 = l_Lean_MVarId_apply(x_1, x_534, x_536, x_3, x_4, x_5, x_6, x_535);
if (lean_obj_tag(x_537) == 0)
{
lean_object* x_538; 
x_538 = lean_ctor_get(x_537, 0);
lean_inc(x_538);
if (lean_obj_tag(x_538) == 0)
{
lean_object* x_539; lean_object* x_540; lean_object* x_541; 
lean_dec(x_499);
lean_dec(x_2);
x_539 = lean_ctor_get(x_537, 1);
lean_inc(x_539);
lean_dec(x_537);
x_540 = l_Linarith_isNatProp___lambda__1___closed__2;
x_541 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_540, x_3, x_4, x_5, x_6, x_539);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_541;
}
else
{
lean_object* x_542; 
x_542 = lean_ctor_get(x_538, 1);
lean_inc(x_542);
if (lean_obj_tag(x_542) == 0)
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; 
lean_dec(x_538);
lean_dec(x_499);
lean_dec(x_2);
x_543 = lean_ctor_get(x_537, 1);
lean_inc(x_543);
lean_dec(x_537);
x_544 = l_Linarith_isNatProp___lambda__1___closed__2;
x_545 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_544, x_3, x_4, x_5, x_6, x_543);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_545;
}
else
{
lean_object* x_546; 
x_546 = lean_ctor_get(x_542, 1);
lean_inc(x_546);
if (lean_obj_tag(x_546) == 0)
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; uint8_t x_551; lean_object* x_552; 
x_547 = lean_ctor_get(x_537, 1);
lean_inc(x_547);
lean_dec(x_537);
x_548 = lean_ctor_get(x_538, 0);
lean_inc(x_548);
lean_dec(x_538);
x_549 = lean_ctor_get(x_542, 0);
lean_inc(x_549);
if (lean_is_exclusive(x_542)) {
 lean_ctor_release(x_542, 0);
 lean_ctor_release(x_542, 1);
 x_550 = x_542;
} else {
 lean_dec_ref(x_542);
 x_550 = lean_box(0);
}
x_551 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_552 = l_Lean_Meta_intro1Core(x_548, x_551, x_3, x_4, x_5, x_6, x_547);
if (lean_obj_tag(x_552) == 0)
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; 
x_553 = lean_ctor_get(x_552, 0);
lean_inc(x_553);
x_554 = lean_ctor_get(x_552, 1);
lean_inc(x_554);
lean_dec(x_552);
x_555 = lean_ctor_get(x_553, 0);
lean_inc(x_555);
x_556 = lean_ctor_get(x_553, 1);
lean_inc(x_556);
lean_dec(x_553);
if (lean_is_scalar(x_550)) {
 x_557 = lean_alloc_ctor(1, 2, 0);
} else {
 x_557 = x_550;
}
lean_ctor_set(x_557, 0, x_499);
lean_ctor_set(x_557, 1, x_514);
x_558 = l_List_removeAll___at_Lean_Meta_SolveByElim_mkAssumptionSet___spec__4(x_2, x_557);
lean_inc(x_558);
lean_inc(x_556);
x_559 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__1), 9, 4);
lean_closure_set(x_559, 0, x_556);
lean_closure_set(x_559, 1, x_558);
lean_closure_set(x_559, 2, x_555);
lean_closure_set(x_559, 3, x_514);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_560 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_556, x_559, x_3, x_4, x_5, x_6, x_554);
if (lean_obj_tag(x_560) == 0)
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; 
x_561 = lean_ctor_get(x_560, 0);
lean_inc(x_561);
x_562 = lean_ctor_get(x_560, 1);
lean_inc(x_562);
lean_dec(x_560);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_563 = l_Lean_Meta_intro1Core(x_549, x_551, x_3, x_4, x_5, x_6, x_562);
if (lean_obj_tag(x_563) == 0)
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; 
x_564 = lean_ctor_get(x_563, 0);
lean_inc(x_564);
x_565 = lean_ctor_get(x_563, 1);
lean_inc(x_565);
lean_dec(x_563);
x_566 = lean_ctor_get(x_564, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_564, 1);
lean_inc(x_567);
lean_dec(x_564);
lean_inc(x_567);
x_568 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux___lambda__2), 9, 4);
lean_closure_set(x_568, 0, x_567);
lean_closure_set(x_568, 1, x_558);
lean_closure_set(x_568, 2, x_566);
lean_closure_set(x_568, 3, x_514);
x_569 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_567, x_568, x_3, x_4, x_5, x_6, x_565);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; 
x_570 = lean_ctor_get(x_569, 0);
lean_inc(x_570);
x_571 = lean_ctor_get(x_569, 1);
lean_inc(x_571);
if (lean_is_exclusive(x_569)) {
 lean_ctor_release(x_569, 0);
 lean_ctor_release(x_569, 1);
 x_572 = x_569;
} else {
 lean_dec_ref(x_569);
 x_572 = lean_box(0);
}
x_573 = l_List_appendTR___rarg(x_561, x_570);
if (lean_is_scalar(x_572)) {
 x_574 = lean_alloc_ctor(0, 2, 0);
} else {
 x_574 = x_572;
}
lean_ctor_set(x_574, 0, x_573);
lean_ctor_set(x_574, 1, x_571);
return x_574;
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; 
lean_dec(x_561);
x_575 = lean_ctor_get(x_569, 0);
lean_inc(x_575);
x_576 = lean_ctor_get(x_569, 1);
lean_inc(x_576);
if (lean_is_exclusive(x_569)) {
 lean_ctor_release(x_569, 0);
 lean_ctor_release(x_569, 1);
 x_577 = x_569;
} else {
 lean_dec_ref(x_569);
 x_577 = lean_box(0);
}
if (lean_is_scalar(x_577)) {
 x_578 = lean_alloc_ctor(1, 2, 0);
} else {
 x_578 = x_577;
}
lean_ctor_set(x_578, 0, x_575);
lean_ctor_set(x_578, 1, x_576);
return x_578;
}
}
else
{
lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; 
lean_dec(x_561);
lean_dec(x_558);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_579 = lean_ctor_get(x_563, 0);
lean_inc(x_579);
x_580 = lean_ctor_get(x_563, 1);
lean_inc(x_580);
if (lean_is_exclusive(x_563)) {
 lean_ctor_release(x_563, 0);
 lean_ctor_release(x_563, 1);
 x_581 = x_563;
} else {
 lean_dec_ref(x_563);
 x_581 = lean_box(0);
}
if (lean_is_scalar(x_581)) {
 x_582 = lean_alloc_ctor(1, 2, 0);
} else {
 x_582 = x_581;
}
lean_ctor_set(x_582, 0, x_579);
lean_ctor_set(x_582, 1, x_580);
return x_582;
}
}
else
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; 
lean_dec(x_558);
lean_dec(x_549);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_583 = lean_ctor_get(x_560, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_560, 1);
lean_inc(x_584);
if (lean_is_exclusive(x_560)) {
 lean_ctor_release(x_560, 0);
 lean_ctor_release(x_560, 1);
 x_585 = x_560;
} else {
 lean_dec_ref(x_560);
 x_585 = lean_box(0);
}
if (lean_is_scalar(x_585)) {
 x_586 = lean_alloc_ctor(1, 2, 0);
} else {
 x_586 = x_585;
}
lean_ctor_set(x_586, 0, x_583);
lean_ctor_set(x_586, 1, x_584);
return x_586;
}
}
else
{
lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; 
lean_dec(x_550);
lean_dec(x_549);
lean_dec(x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_587 = lean_ctor_get(x_552, 0);
lean_inc(x_587);
x_588 = lean_ctor_get(x_552, 1);
lean_inc(x_588);
if (lean_is_exclusive(x_552)) {
 lean_ctor_release(x_552, 0);
 lean_ctor_release(x_552, 1);
 x_589 = x_552;
} else {
 lean_dec_ref(x_552);
 x_589 = lean_box(0);
}
if (lean_is_scalar(x_589)) {
 x_590 = lean_alloc_ctor(1, 2, 0);
} else {
 x_590 = x_589;
}
lean_ctor_set(x_590, 0, x_587);
lean_ctor_set(x_590, 1, x_588);
return x_590;
}
}
else
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; 
lean_dec(x_546);
lean_dec(x_542);
lean_dec(x_538);
lean_dec(x_499);
lean_dec(x_2);
x_591 = lean_ctor_get(x_537, 1);
lean_inc(x_591);
lean_dec(x_537);
x_592 = l_Linarith_isNatProp___lambda__1___closed__2;
x_593 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_592, x_3, x_4, x_5, x_6, x_591);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_593;
}
}
}
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
lean_dec(x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_594 = lean_ctor_get(x_537, 0);
lean_inc(x_594);
x_595 = lean_ctor_get(x_537, 1);
lean_inc(x_595);
if (lean_is_exclusive(x_537)) {
 lean_ctor_release(x_537, 0);
 lean_ctor_release(x_537, 1);
 x_596 = x_537;
} else {
 lean_dec_ref(x_537);
 x_596 = lean_box(0);
}
if (lean_is_scalar(x_596)) {
 x_597 = lean_alloc_ctor(1, 2, 0);
} else {
 x_597 = x_596;
}
lean_ctor_set(x_597, 0, x_594);
lean_ctor_set(x_597, 1, x_595);
return x_597;
}
}
else
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_598 = lean_ctor_get(x_533, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_533, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_533)) {
 lean_ctor_release(x_533, 0);
 lean_ctor_release(x_533, 1);
 x_600 = x_533;
} else {
 lean_dec_ref(x_533);
 x_600 = lean_box(0);
}
if (lean_is_scalar(x_600)) {
 x_601 = lean_alloc_ctor(1, 2, 0);
} else {
 x_601 = x_600;
}
lean_ctor_set(x_601, 0, x_598);
lean_ctor_set(x_601, 1, x_599);
return x_601;
}
}
else
{
lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; 
lean_dec(x_507);
lean_dec(x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_602 = lean_ctor_get(x_522, 0);
lean_inc(x_602);
x_603 = lean_ctor_get(x_522, 1);
lean_inc(x_603);
if (lean_is_exclusive(x_522)) {
 lean_ctor_release(x_522, 0);
 lean_ctor_release(x_522, 1);
 x_604 = x_522;
} else {
 lean_dec_ref(x_522);
 x_604 = lean_box(0);
}
if (lean_is_scalar(x_604)) {
 x_605 = lean_alloc_ctor(1, 2, 0);
} else {
 x_605 = x_604;
}
lean_ctor_set(x_605, 0, x_602);
lean_ctor_set(x_605, 1, x_603);
return x_605;
}
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; 
lean_dec(x_505);
lean_dec(x_504);
lean_dec(x_503);
lean_dec(x_502);
lean_dec(x_501);
lean_dec(x_500);
lean_dec(x_499);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_606 = lean_ctor_get(x_506, 0);
lean_inc(x_606);
x_607 = lean_ctor_get(x_506, 1);
lean_inc(x_607);
if (lean_is_exclusive(x_506)) {
 lean_ctor_release(x_506, 0);
 lean_ctor_release(x_506, 1);
 x_608 = x_506;
} else {
 lean_dec_ref(x_506);
 x_608 = lean_box(0);
}
if (lean_is_scalar(x_608)) {
 x_609 = lean_alloc_ctor(1, 2, 0);
} else {
 x_609 = x_608;
}
lean_ctor_set(x_609, 0, x_606);
lean_ctor_set(x_609, 1, x_607);
return x_609;
}
}
}
}
else
{
uint8_t x_610; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_610 = !lean_is_exclusive(x_8);
if (x_610 == 0)
{
return x_8;
}
else
{
lean_object* x_611; lean_object* x_612; lean_object* x_613; 
x_611 = lean_ctor_get(x_8, 0);
x_612 = lean_ctor_get(x_8, 1);
lean_inc(x_612);
lean_inc(x_611);
lean_dec(x_8);
x_613 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_613, 0, x_611);
lean_ctor_set(x_613, 1, x_612);
return x_613;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_removeNe__aux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Linarith_removeNe__aux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("removeNe", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_splitConjunctions___closed__1;
x_2 = l_Linarith_removeNe___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("case split on ≠", 17, 15);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_removeNe___closed__2;
x_2 = l_Linarith_removeNe___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_removeNe__aux), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_removeNe___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_removeNe___closed__4;
x_2 = l_Linarith_removeNe___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_removeNe() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_removeNe___closed__6;
return x_1;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_filterComparisons;
x_2 = l_Linarith_Preprocessor_globalize(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_defaultPreprocessors___closed__1;
x_2 = l_Linarith_GlobalPreprocessor_branching(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_removeNegations;
x_2 = l_Linarith_Preprocessor_globalize(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_defaultPreprocessors___closed__3;
x_2 = l_Linarith_GlobalPreprocessor_branching(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_strengthenStrictInt;
x_2 = l_Linarith_Preprocessor_globalize(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_defaultPreprocessors___closed__5;
x_2 = l_Linarith_GlobalPreprocessor_branching(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1;
x_2 = l_Linarith_GlobalPreprocessor_branching(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_cancelDenoms;
x_2 = l_Linarith_Preprocessor_globalize(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_defaultPreprocessors___closed__8;
x_2 = l_Linarith_GlobalPreprocessor_branching(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_defaultPreprocessors___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_defaultPreprocessors___closed__7;
x_2 = l_Linarith_defaultPreprocessors___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_defaultPreprocessors___closed__6;
x_2 = l_Linarith_defaultPreprocessors___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_natToInt;
x_2 = l_Linarith_defaultPreprocessors___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_defaultPreprocessors___closed__4;
x_2 = l_Linarith_defaultPreprocessors___closed__13;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_defaultPreprocessors___closed__2;
x_2 = l_Linarith_defaultPreprocessors___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_defaultPreprocessors() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_defaultPreprocessors___closed__15;
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Linarith_preprocess___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_9 = l_List_reverse___rarg(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_16 = l_Linarith_GlobalBranchingPreprocessor_process(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_17);
{
lean_object* _tmp_1 = x_13;
lean_object* _tmp_2 = x_2;
lean_object* _tmp_7 = x_18;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_8 = _tmp_7;
}
goto _start;
}
else
{
uint8_t x_20; 
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_2, 0);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_2);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_28 = l_Linarith_GlobalBranchingPreprocessor_process(x_1, x_26, x_27, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_3);
x_2 = x_25;
x_3 = x_31;
x_8 = x_30;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = lean_ctor_get(x_28, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_35 = x_28;
} else {
 lean_dec_ref(x_28);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(1, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_Linarith_preprocess___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_2, x_4);
x_1 = x_5;
x_2 = x_6;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Linarith_preprocess___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_List_mapM_loop___at_Linarith_preprocess___spec__1(x_9, x_1, x_11, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1;
x_16 = l_List_flatMapTR_go___at_Linarith_preprocess___spec__2(x_13, x_15);
x_1 = x_16;
x_2 = x_10;
x_7 = x_14;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
static lean_object* _init_l_Linarith_preprocess___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" Running preprocessors", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Linarith_preprocess___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_preprocess___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_Lean_exceptEmoji___rarg(x_1);
x_8 = l_Lean_stringToMessageData(x_7);
lean_dec(x_7);
x_9 = l_Linarith_flipNegatedComparison___closed__4;
x_10 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Linarith_preprocess___lambda__1___closed__2;
x_12 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
static lean_object* _init_l_Linarith_preprocess___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_preprocess___lambda__1___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_List_foldlM___at_Linarith_preprocess___spec__3), 7, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Linarith_removeNegations___elambda__1___closed__4;
x_15 = l_Linarith_preprocess___closed__1;
x_16 = 1;
x_17 = l_Linarith_flipNegatedComparison___closed__3;
x_18 = l_Lean_withTraceNode___at_Linarith_GlobalBranchingPreprocessor_process___spec__2(x_14, x_15, x_13, x_16, x_17, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Linarith_preprocess___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Linarith_preprocess___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Datatypes(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Zify(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_CancelDenoms_Core(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_RBMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_AtomM(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Linarith_Preprocessing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Datatypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Zify(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_CancelDenoms_Core(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_RBMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_AtomM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Linarith_splitConjunctions_aux___closed__1 = _init_l_Linarith_splitConjunctions_aux___closed__1();
lean_mark_persistent(l_Linarith_splitConjunctions_aux___closed__1);
l_Linarith_splitConjunctions_aux___closed__2 = _init_l_Linarith_splitConjunctions_aux___closed__2();
lean_mark_persistent(l_Linarith_splitConjunctions_aux___closed__2);
l_Linarith_splitConjunctions_aux___closed__3 = _init_l_Linarith_splitConjunctions_aux___closed__3();
lean_mark_persistent(l_Linarith_splitConjunctions_aux___closed__3);
l_Linarith_splitConjunctions_aux___closed__4 = _init_l_Linarith_splitConjunctions_aux___closed__4();
lean_mark_persistent(l_Linarith_splitConjunctions_aux___closed__4);
l_Linarith_splitConjunctions_aux___closed__5 = _init_l_Linarith_splitConjunctions_aux___closed__5();
lean_mark_persistent(l_Linarith_splitConjunctions_aux___closed__5);
l_Linarith_splitConjunctions___closed__1 = _init_l_Linarith_splitConjunctions___closed__1();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__1);
l_Linarith_splitConjunctions___closed__2 = _init_l_Linarith_splitConjunctions___closed__2();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__2);
l_Linarith_splitConjunctions___closed__3 = _init_l_Linarith_splitConjunctions___closed__3();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__3);
l_Linarith_splitConjunctions___closed__4 = _init_l_Linarith_splitConjunctions___closed__4();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__4);
l_Linarith_splitConjunctions___closed__5 = _init_l_Linarith_splitConjunctions___closed__5();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__5);
l_Linarith_splitConjunctions___closed__6 = _init_l_Linarith_splitConjunctions___closed__6();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__6);
l_Linarith_splitConjunctions___closed__7 = _init_l_Linarith_splitConjunctions___closed__7();
lean_mark_persistent(l_Linarith_splitConjunctions___closed__7);
l_Linarith_splitConjunctions = _init_l_Linarith_splitConjunctions();
lean_mark_persistent(l_Linarith_splitConjunctions);
l_Linarith_filterComparisons___closed__1 = _init_l_Linarith_filterComparisons___closed__1();
lean_mark_persistent(l_Linarith_filterComparisons___closed__1);
l_Linarith_filterComparisons___closed__2 = _init_l_Linarith_filterComparisons___closed__2();
lean_mark_persistent(l_Linarith_filterComparisons___closed__2);
l_Linarith_filterComparisons___closed__3 = _init_l_Linarith_filterComparisons___closed__3();
lean_mark_persistent(l_Linarith_filterComparisons___closed__3);
l_Linarith_filterComparisons___closed__4 = _init_l_Linarith_filterComparisons___closed__4();
lean_mark_persistent(l_Linarith_filterComparisons___closed__4);
l_Linarith_filterComparisons___closed__5 = _init_l_Linarith_filterComparisons___closed__5();
lean_mark_persistent(l_Linarith_filterComparisons___closed__5);
l_Linarith_filterComparisons___closed__6 = _init_l_Linarith_filterComparisons___closed__6();
lean_mark_persistent(l_Linarith_filterComparisons___closed__6);
l_Linarith_filterComparisons = _init_l_Linarith_filterComparisons();
lean_mark_persistent(l_Linarith_filterComparisons);
l_Linarith_flipNegatedComparison___closed__1 = _init_l_Linarith_flipNegatedComparison___closed__1();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__1);
l_Linarith_flipNegatedComparison___closed__2 = _init_l_Linarith_flipNegatedComparison___closed__2();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__2);
l_Linarith_flipNegatedComparison___closed__3 = _init_l_Linarith_flipNegatedComparison___closed__3();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__3);
l_Linarith_flipNegatedComparison___closed__4 = _init_l_Linarith_flipNegatedComparison___closed__4();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__4);
l_Linarith_flipNegatedComparison___closed__5 = _init_l_Linarith_flipNegatedComparison___closed__5();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__5);
l_Linarith_flipNegatedComparison___closed__6 = _init_l_Linarith_flipNegatedComparison___closed__6();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__6);
l_Linarith_flipNegatedComparison___closed__7 = _init_l_Linarith_flipNegatedComparison___closed__7();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__7);
l_Linarith_flipNegatedComparison___closed__8 = _init_l_Linarith_flipNegatedComparison___closed__8();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__8);
l_Linarith_flipNegatedComparison___closed__9 = _init_l_Linarith_flipNegatedComparison___closed__9();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__9);
l_Linarith_flipNegatedComparison___closed__10 = _init_l_Linarith_flipNegatedComparison___closed__10();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__10);
l_Linarith_flipNegatedComparison___closed__11 = _init_l_Linarith_flipNegatedComparison___closed__11();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__11);
l_Linarith_flipNegatedComparison___closed__12 = _init_l_Linarith_flipNegatedComparison___closed__12();
lean_mark_persistent(l_Linarith_flipNegatedComparison___closed__12);
l_Linarith_removeNegations___elambda__1___lambda__1___closed__1 = _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__1();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___lambda__1___closed__1);
l_Linarith_removeNegations___elambda__1___lambda__1___closed__2 = _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__2();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___lambda__1___closed__2);
l_Linarith_removeNegations___elambda__1___lambda__1___closed__3 = _init_l_Linarith_removeNegations___elambda__1___lambda__1___closed__3();
l_Linarith_removeNegations___elambda__1___closed__1 = _init_l_Linarith_removeNegations___elambda__1___closed__1();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__1);
l_Linarith_removeNegations___elambda__1___closed__2 = _init_l_Linarith_removeNegations___elambda__1___closed__2();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__2);
l_Linarith_removeNegations___elambda__1___closed__3 = _init_l_Linarith_removeNegations___elambda__1___closed__3();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__3);
l_Linarith_removeNegations___elambda__1___closed__4 = _init_l_Linarith_removeNegations___elambda__1___closed__4();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__4);
l_Linarith_removeNegations___elambda__1___closed__5 = _init_l_Linarith_removeNegations___elambda__1___closed__5();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__5);
l_Linarith_removeNegations___elambda__1___closed__6 = _init_l_Linarith_removeNegations___elambda__1___closed__6();
lean_mark_persistent(l_Linarith_removeNegations___elambda__1___closed__6);
l_Linarith_removeNegations___closed__1 = _init_l_Linarith_removeNegations___closed__1();
lean_mark_persistent(l_Linarith_removeNegations___closed__1);
l_Linarith_removeNegations___closed__2 = _init_l_Linarith_removeNegations___closed__2();
lean_mark_persistent(l_Linarith_removeNegations___closed__2);
l_Linarith_removeNegations___closed__3 = _init_l_Linarith_removeNegations___closed__3();
lean_mark_persistent(l_Linarith_removeNegations___closed__3);
l_Linarith_removeNegations___closed__4 = _init_l_Linarith_removeNegations___closed__4();
lean_mark_persistent(l_Linarith_removeNegations___closed__4);
l_Linarith_removeNegations___closed__5 = _init_l_Linarith_removeNegations___closed__5();
lean_mark_persistent(l_Linarith_removeNegations___closed__5);
l_Linarith_removeNegations___closed__6 = _init_l_Linarith_removeNegations___closed__6();
lean_mark_persistent(l_Linarith_removeNegations___closed__6);
l_Linarith_removeNegations = _init_l_Linarith_removeNegations();
lean_mark_persistent(l_Linarith_removeNegations);
l_Linarith_isNatProp___lambda__1___closed__1 = _init_l_Linarith_isNatProp___lambda__1___closed__1();
lean_mark_persistent(l_Linarith_isNatProp___lambda__1___closed__1);
l_Linarith_isNatProp___lambda__1___closed__2 = _init_l_Linarith_isNatProp___lambda__1___closed__2();
lean_mark_persistent(l_Linarith_isNatProp___lambda__1___closed__2);
l_Linarith_isNatProp___lambda__1___closed__3 = _init_l_Linarith_isNatProp___lambda__1___closed__3();
lean_mark_persistent(l_Linarith_isNatProp___lambda__1___closed__3);
l_Linarith_isNatCoe___closed__1 = _init_l_Linarith_isNatCoe___closed__1();
lean_mark_persistent(l_Linarith_isNatCoe___closed__1);
l_Linarith_getNatComparisons___closed__1 = _init_l_Linarith_getNatComparisons___closed__1();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__1);
l_Linarith_getNatComparisons___closed__2 = _init_l_Linarith_getNatComparisons___closed__2();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__2);
l_Linarith_getNatComparisons___closed__3 = _init_l_Linarith_getNatComparisons___closed__3();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__3);
l_Linarith_getNatComparisons___closed__4 = _init_l_Linarith_getNatComparisons___closed__4();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__4);
l_Linarith_getNatComparisons___closed__5 = _init_l_Linarith_getNatComparisons___closed__5();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__5);
l_Linarith_getNatComparisons___closed__6 = _init_l_Linarith_getNatComparisons___closed__6();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__6);
l_Linarith_getNatComparisons___closed__7 = _init_l_Linarith_getNatComparisons___closed__7();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__7);
l_Linarith_getNatComparisons___closed__8 = _init_l_Linarith_getNatComparisons___closed__8();
lean_mark_persistent(l_Linarith_getNatComparisons___closed__8);
l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1 = _init_l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___lambda__1___closed__1);
l_Linarith_mk__natCast__nonneg__prf___closed__1 = _init_l_Linarith_mk__natCast__nonneg__prf___closed__1();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___closed__1);
l_Linarith_mk__natCast__nonneg__prf___closed__2 = _init_l_Linarith_mk__natCast__nonneg__prf___closed__2();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___closed__2);
l_Linarith_mk__natCast__nonneg__prf___closed__3 = _init_l_Linarith_mk__natCast__nonneg__prf___closed__3();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___closed__3);
l_Linarith_mk__natCast__nonneg__prf___closed__4 = _init_l_Linarith_mk__natCast__nonneg__prf___closed__4();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___closed__4);
l_Linarith_mk__natCast__nonneg__prf___closed__5 = _init_l_Linarith_mk__natCast__nonneg__prf___closed__5();
lean_mark_persistent(l_Linarith_mk__natCast__nonneg__prf___closed__5);
l_Linarith_Expr_Ord___closed__1 = _init_l_Linarith_Expr_Ord___closed__1();
lean_mark_persistent(l_Linarith_Expr_Ord___closed__1);
l_Linarith_Expr_Ord = _init_l_Linarith_Expr_Ord();
lean_mark_persistent(l_Linarith_Expr_Ord);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__1);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__2);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__3);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__4);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__5);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__6);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__7);
l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8 = _init_l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8();
lean_mark_persistent(l_List_mapM_loop___at_Linarith_natToInt___elambda__1___spec__1___closed__8);
l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1 = _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1();
lean_mark_persistent(l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__1);
l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2 = _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2();
lean_mark_persistent(l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2___closed__2);
l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2 = _init_l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2();
lean_mark_persistent(l_lexOrd___at_Linarith_natToInt___elambda__1___spec__2);
l_Linarith_natToInt___closed__1 = _init_l_Linarith_natToInt___closed__1();
lean_mark_persistent(l_Linarith_natToInt___closed__1);
l_Linarith_natToInt___closed__2 = _init_l_Linarith_natToInt___closed__2();
lean_mark_persistent(l_Linarith_natToInt___closed__2);
l_Linarith_natToInt___closed__3 = _init_l_Linarith_natToInt___closed__3();
lean_mark_persistent(l_Linarith_natToInt___closed__3);
l_Linarith_natToInt___closed__4 = _init_l_Linarith_natToInt___closed__4();
lean_mark_persistent(l_Linarith_natToInt___closed__4);
l_Linarith_natToInt___closed__5 = _init_l_Linarith_natToInt___closed__5();
lean_mark_persistent(l_Linarith_natToInt___closed__5);
l_Linarith_natToInt___closed__6 = _init_l_Linarith_natToInt___closed__6();
lean_mark_persistent(l_Linarith_natToInt___closed__6);
l_Linarith_natToInt = _init_l_Linarith_natToInt();
lean_mark_persistent(l_Linarith_natToInt);
l_Linarith_mkNonstrictIntProof___closed__1 = _init_l_Linarith_mkNonstrictIntProof___closed__1();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__1);
l_Linarith_mkNonstrictIntProof___closed__2 = _init_l_Linarith_mkNonstrictIntProof___closed__2();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__2);
l_Linarith_mkNonstrictIntProof___closed__3 = _init_l_Linarith_mkNonstrictIntProof___closed__3();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__3);
l_Linarith_mkNonstrictIntProof___closed__4 = _init_l_Linarith_mkNonstrictIntProof___closed__4();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__4);
l_Linarith_mkNonstrictIntProof___closed__5 = _init_l_Linarith_mkNonstrictIntProof___closed__5();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__5);
l_Linarith_mkNonstrictIntProof___closed__6 = _init_l_Linarith_mkNonstrictIntProof___closed__6();
lean_mark_persistent(l_Linarith_mkNonstrictIntProof___closed__6);
l_Linarith_strengthenStrictInt___closed__1 = _init_l_Linarith_strengthenStrictInt___closed__1();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__1);
l_Linarith_strengthenStrictInt___closed__2 = _init_l_Linarith_strengthenStrictInt___closed__2();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__2);
l_Linarith_strengthenStrictInt___closed__3 = _init_l_Linarith_strengthenStrictInt___closed__3();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__3);
l_Linarith_strengthenStrictInt___closed__4 = _init_l_Linarith_strengthenStrictInt___closed__4();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__4);
l_Linarith_strengthenStrictInt___closed__5 = _init_l_Linarith_strengthenStrictInt___closed__5();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__5);
l_Linarith_strengthenStrictInt___closed__6 = _init_l_Linarith_strengthenStrictInt___closed__6();
lean_mark_persistent(l_Linarith_strengthenStrictInt___closed__6);
l_Linarith_strengthenStrictInt = _init_l_Linarith_strengthenStrictInt();
lean_mark_persistent(l_Linarith_strengthenStrictInt);
l_Linarith_rearrangeComparison___closed__1 = _init_l_Linarith_rearrangeComparison___closed__1();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__1);
l_Linarith_rearrangeComparison___closed__2 = _init_l_Linarith_rearrangeComparison___closed__2();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__2);
l_Linarith_rearrangeComparison___closed__3 = _init_l_Linarith_rearrangeComparison___closed__3();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__3);
l_Linarith_rearrangeComparison___closed__4 = _init_l_Linarith_rearrangeComparison___closed__4();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__4);
l_Linarith_rearrangeComparison___closed__5 = _init_l_Linarith_rearrangeComparison___closed__5();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__5);
l_Linarith_rearrangeComparison___closed__6 = _init_l_Linarith_rearrangeComparison___closed__6();
lean_mark_persistent(l_Linarith_rearrangeComparison___closed__6);
l_Linarith_compWithZero___closed__1 = _init_l_Linarith_compWithZero___closed__1();
lean_mark_persistent(l_Linarith_compWithZero___closed__1);
l_Linarith_compWithZero___closed__2 = _init_l_Linarith_compWithZero___closed__2();
lean_mark_persistent(l_Linarith_compWithZero___closed__2);
l_Linarith_compWithZero___closed__3 = _init_l_Linarith_compWithZero___closed__3();
lean_mark_persistent(l_Linarith_compWithZero___closed__3);
l_Linarith_compWithZero___closed__4 = _init_l_Linarith_compWithZero___closed__4();
lean_mark_persistent(l_Linarith_compWithZero___closed__4);
l_Linarith_compWithZero___closed__5 = _init_l_Linarith_compWithZero___closed__5();
lean_mark_persistent(l_Linarith_compWithZero___closed__5);
l_Linarith_compWithZero___closed__6 = _init_l_Linarith_compWithZero___closed__6();
lean_mark_persistent(l_Linarith_compWithZero___closed__6);
l_Linarith_compWithZero = _init_l_Linarith_compWithZero();
lean_mark_persistent(l_Linarith_compWithZero);
l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1 = _init_l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1();
lean_mark_persistent(l_Linarith_normalizeDenominatorsLHS___lambda__2___closed__1);
l_Linarith_normalizeDenominatorsLHS___closed__1 = _init_l_Linarith_normalizeDenominatorsLHS___closed__1();
lean_mark_persistent(l_Linarith_normalizeDenominatorsLHS___closed__1);
l_Linarith_normalizeDenominatorsLHS___closed__2 = _init_l_Linarith_normalizeDenominatorsLHS___closed__2();
lean_mark_persistent(l_Linarith_normalizeDenominatorsLHS___closed__2);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__1);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__2);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__3);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__4);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__5);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__6);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__7);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__8);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__9);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__10);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__11);
l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12 = _init_l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___lambda__1___closed__12);
l_Linarith_cancelDenoms___elambda__1___closed__1 = _init_l_Linarith_cancelDenoms___elambda__1___closed__1();
lean_mark_persistent(l_Linarith_cancelDenoms___elambda__1___closed__1);
l_Linarith_cancelDenoms___closed__1 = _init_l_Linarith_cancelDenoms___closed__1();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__1);
l_Linarith_cancelDenoms___closed__2 = _init_l_Linarith_cancelDenoms___closed__2();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__2);
l_Linarith_cancelDenoms___closed__3 = _init_l_Linarith_cancelDenoms___closed__3();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__3);
l_Linarith_cancelDenoms___closed__4 = _init_l_Linarith_cancelDenoms___closed__4();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__4);
l_Linarith_cancelDenoms___closed__5 = _init_l_Linarith_cancelDenoms___closed__5();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__5);
l_Linarith_cancelDenoms___closed__6 = _init_l_Linarith_cancelDenoms___closed__6();
lean_mark_persistent(l_Linarith_cancelDenoms___closed__6);
l_Linarith_cancelDenoms = _init_l_Linarith_cancelDenoms();
lean_mark_persistent(l_Linarith_cancelDenoms);
l_lexOrd___at_Linarith_findSquares___spec__3 = _init_l_lexOrd___at_Linarith_findSquares___spec__3();
lean_mark_persistent(l_lexOrd___at_Linarith_findSquares___spec__3);
l_Linarith_findSquares___closed__1 = _init_l_Linarith_findSquares___closed__1();
lean_mark_persistent(l_Linarith_findSquares___closed__1);
l_Linarith_findSquares___closed__2 = _init_l_Linarith_findSquares___closed__2();
lean_mark_persistent(l_Linarith_findSquares___closed__2);
l_Linarith_findSquares___closed__3 = _init_l_Linarith_findSquares___closed__3();
lean_mark_persistent(l_Linarith_findSquares___closed__3);
l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1 = _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__1);
l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2 = _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__2);
l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3 = _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__3);
l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4 = _init_l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4();
lean_mark_persistent(l_List_filterMapM_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__5___closed__4);
l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1 = _init_l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__1();
l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2 = _init_l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2();
lean_mark_persistent(l_Linarith_linarithTraceProofs___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__6___closed__2);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__1);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__2);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__3);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__4);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__5);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__6);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__7);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__8);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__9);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__10);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__11);
l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12 = _init_l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12();
lean_mark_persistent(l_List_mapTR_loop___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__7___closed__12);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__1);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__3___closed__2);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__1);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__2);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3();
lean_mark_persistent(l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__3);
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__4 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__4();
l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5 = _init_l_Lean_withTraceNode___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___spec__8___lambda__4___closed__5();
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__1___closed__2);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__4___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__2);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___lambda__5___closed__3);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__2);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetSquareProofs___closed__3);
l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1 = _init_l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1();
lean_mark_persistent(l_List_mapDiagM___at___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___spec__2___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__1___closed__2);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__1);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__2);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__3);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__4);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__5);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__6);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__7);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__8);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__9);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___lambda__2___closed__10);
l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1 = _init_l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_Linarith_Preprocessing_0__Linarith_nlinarithGetProductsProofs___closed__1);
l_Linarith_nlinarithExtras___closed__1 = _init_l_Linarith_nlinarithExtras___closed__1();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__1);
l_Linarith_nlinarithExtras___closed__2 = _init_l_Linarith_nlinarithExtras___closed__2();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__2);
l_Linarith_nlinarithExtras___closed__3 = _init_l_Linarith_nlinarithExtras___closed__3();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__3);
l_Linarith_nlinarithExtras___closed__4 = _init_l_Linarith_nlinarithExtras___closed__4();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__4);
l_Linarith_nlinarithExtras___closed__5 = _init_l_Linarith_nlinarithExtras___closed__5();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__5);
l_Linarith_nlinarithExtras___closed__6 = _init_l_Linarith_nlinarithExtras___closed__6();
lean_mark_persistent(l_Linarith_nlinarithExtras___closed__6);
l_Linarith_nlinarithExtras = _init_l_Linarith_nlinarithExtras();
lean_mark_persistent(l_Linarith_nlinarithExtras);
l_Linarith_removeNe__aux___closed__1 = _init_l_Linarith_removeNe__aux___closed__1();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__1);
l_Linarith_removeNe__aux___closed__2 = _init_l_Linarith_removeNe__aux___closed__2();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__2);
l_Linarith_removeNe__aux___closed__3 = _init_l_Linarith_removeNe__aux___closed__3();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__3);
l_Linarith_removeNe__aux___closed__4 = _init_l_Linarith_removeNe__aux___closed__4();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__4);
l_Linarith_removeNe__aux___closed__5 = _init_l_Linarith_removeNe__aux___closed__5();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__5);
l_Linarith_removeNe__aux___closed__6 = _init_l_Linarith_removeNe__aux___closed__6();
lean_mark_persistent(l_Linarith_removeNe__aux___closed__6);
l_Linarith_removeNe___closed__1 = _init_l_Linarith_removeNe___closed__1();
lean_mark_persistent(l_Linarith_removeNe___closed__1);
l_Linarith_removeNe___closed__2 = _init_l_Linarith_removeNe___closed__2();
lean_mark_persistent(l_Linarith_removeNe___closed__2);
l_Linarith_removeNe___closed__3 = _init_l_Linarith_removeNe___closed__3();
lean_mark_persistent(l_Linarith_removeNe___closed__3);
l_Linarith_removeNe___closed__4 = _init_l_Linarith_removeNe___closed__4();
lean_mark_persistent(l_Linarith_removeNe___closed__4);
l_Linarith_removeNe___closed__5 = _init_l_Linarith_removeNe___closed__5();
lean_mark_persistent(l_Linarith_removeNe___closed__5);
l_Linarith_removeNe___closed__6 = _init_l_Linarith_removeNe___closed__6();
lean_mark_persistent(l_Linarith_removeNe___closed__6);
l_Linarith_removeNe = _init_l_Linarith_removeNe();
lean_mark_persistent(l_Linarith_removeNe);
l_Linarith_defaultPreprocessors___closed__1 = _init_l_Linarith_defaultPreprocessors___closed__1();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__1);
l_Linarith_defaultPreprocessors___closed__2 = _init_l_Linarith_defaultPreprocessors___closed__2();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__2);
l_Linarith_defaultPreprocessors___closed__3 = _init_l_Linarith_defaultPreprocessors___closed__3();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__3);
l_Linarith_defaultPreprocessors___closed__4 = _init_l_Linarith_defaultPreprocessors___closed__4();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__4);
l_Linarith_defaultPreprocessors___closed__5 = _init_l_Linarith_defaultPreprocessors___closed__5();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__5);
l_Linarith_defaultPreprocessors___closed__6 = _init_l_Linarith_defaultPreprocessors___closed__6();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__6);
l_Linarith_defaultPreprocessors___closed__7 = _init_l_Linarith_defaultPreprocessors___closed__7();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__7);
l_Linarith_defaultPreprocessors___closed__8 = _init_l_Linarith_defaultPreprocessors___closed__8();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__8);
l_Linarith_defaultPreprocessors___closed__9 = _init_l_Linarith_defaultPreprocessors___closed__9();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__9);
l_Linarith_defaultPreprocessors___closed__10 = _init_l_Linarith_defaultPreprocessors___closed__10();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__10);
l_Linarith_defaultPreprocessors___closed__11 = _init_l_Linarith_defaultPreprocessors___closed__11();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__11);
l_Linarith_defaultPreprocessors___closed__12 = _init_l_Linarith_defaultPreprocessors___closed__12();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__12);
l_Linarith_defaultPreprocessors___closed__13 = _init_l_Linarith_defaultPreprocessors___closed__13();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__13);
l_Linarith_defaultPreprocessors___closed__14 = _init_l_Linarith_defaultPreprocessors___closed__14();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__14);
l_Linarith_defaultPreprocessors___closed__15 = _init_l_Linarith_defaultPreprocessors___closed__15();
lean_mark_persistent(l_Linarith_defaultPreprocessors___closed__15);
l_Linarith_defaultPreprocessors = _init_l_Linarith_defaultPreprocessors();
lean_mark_persistent(l_Linarith_defaultPreprocessors);
l_Linarith_preprocess___lambda__1___closed__1 = _init_l_Linarith_preprocess___lambda__1___closed__1();
lean_mark_persistent(l_Linarith_preprocess___lambda__1___closed__1);
l_Linarith_preprocess___lambda__1___closed__2 = _init_l_Linarith_preprocess___lambda__1___closed__2();
lean_mark_persistent(l_Linarith_preprocess___lambda__1___closed__2);
l_Linarith_preprocess___closed__1 = _init_l_Linarith_preprocess___closed__1();
lean_mark_persistent(l_Linarith_preprocess___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
