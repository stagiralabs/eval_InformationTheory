// Lean compiler output
// Module: Mathlib.Data.List.Defs
// Imports: Init Mathlib.Data.Nat.Notation Mathlib.Control.Functor Mathlib.Data.SProd Mathlib.Util.CompileInductive Batteries.Tactic.Lint.Basic Batteries.Data.List.Lemmas Batteries.Data.RBMap.Basic Batteries.Logic
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
LEAN_EXPORT lean_object* l_List_takeI___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_replaceIf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_permutations_x27___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_iterate(lean_object*);
static lean_object* l_List_permutationsAux___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_instSDiffOfDecidableEq__mathlib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAccumr_u2082___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_orM(lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_orM___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extractp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_iterate___rarg___boxed(lean_object*, lean_object*, lean_object*);
extern uint8_t l_instDecidableTrue;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1(lean_object*);
lean_object* l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR(lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Left_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_dedup___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAccumr_u2082(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Left_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAccumr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAsyncChunked___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_task_spawn(lean_object*, lean_object*);
lean_object* l_List_getD___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_permutations_x27___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Right_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1(lean_object*);
lean_object* l_List_productTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_choose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup(lean_object*);
static lean_object* l_List_extractp___rarg___closed__1;
lean_object* l_List_mapTR_loop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1(lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_takeDTR___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAsyncChunked___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_List_toChunks___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_destutter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Left(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeI(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdxM_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_permutations(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_destutter_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_permutationsAux___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapAsyncChunked(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutations_x27Aux___rarg(lean_object*, lean_object*);
static lean_object* l_List_permutations_x27___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instSProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_flip___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableChain___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdxM_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extractp___rarg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_List_choose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instSDiffOfDecidableEq__mathlib(lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlIdxM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Task_Priority_default;
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_dedup___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_andM___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headI___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_destutter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastI(lean_object*);
LEAN_EXPORT lean_object* l_List_foldlIdxM(lean_object*);
LEAN_EXPORT lean_object* l_List_getLastI___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux_rec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_iterate___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1;
static lean_object* l_List_decidableChain___rarg___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_permutationsAux___spec__1(lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_foldrIdxM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutations_x27Aux(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain(lean_object*, lean_object*);
static lean_object* l_List_permutationsAux___rarg___closed__2;
LEAN_EXPORT lean_object* l_List_map_u2082Right_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replaceIf(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_dedup___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_replaceIf___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Right(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getI___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg___lambda__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_andM(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_chooseX___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_chooseX(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableChain___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastI___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_map_u2082Left_x27_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Right___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutations___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_headI(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_map_u2082Left___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_List_instSProd___closed__1;
LEAN_EXPORT lean_object* l_List_mapAccumr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_iterateTR_loop(lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutations_x27___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrIdxM(lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux_rec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux(lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_List_getI(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg___lambda__1(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutations_x27(lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_headI___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_destutter_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getI___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux2___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_map_u2082Left_x27_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_2, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_10 = 1;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_6);
x_8 = lean_apply_2(x_1, x_6, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_array_push(x_5, x_6);
x_4 = x_7;
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_array_get_size(x_5);
x_13 = lean_nat_dec_le(x_12, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_12);
if (x_15 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
return x_7;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_17 = 0;
x_18 = l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg(x_5, x_16, x_17, x_7);
lean_dec(x_5);
return x_18;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_12);
if (x_20 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
return x_7;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; 
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = 0;
x_23 = l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg(x_5, x_21, x_22, x_7);
lean_dec(x_5);
return x_23;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
static lean_object* _init_l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_1);
x_6 = l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg(x_1, x_4, x_2);
if (x_6 == 0)
{
lean_dec(x_4);
x_3 = x_5;
goto _start;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg(x_1, x_2, x_4, x_2, x_8);
lean_dec(x_2);
x_2 = x_9;
x_3 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_instSDiffOfDecidableEq__mathlib___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_instSDiffOfDecidableEq__mathlib(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_instSDiffOfDecidableEq__mathlib___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_elem___at_List_instSDiffOfDecidableEq__mathlib___spec__2___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__4___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_List_instSDiffOfDecidableEq__mathlib___spec__5___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_eraseTR_go___at_List_instSDiffOfDecidableEq__mathlib___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_getI___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_getD___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_getI(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getI___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_getI___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_getI___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_headI___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_List_headI(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_headI___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_headI___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_headI___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_getLastI___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
return x_6;
}
else
{
x_2 = x_5;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_getLastI(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLastI___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_getLastI___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLastI___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_takeI___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_takeDTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_takeI(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_takeI___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_firstM___at_List_findM___spec__1___rarg(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_inc(x_2);
lean_inc(x_6);
x_10 = lean_apply_1(x_2, x_6);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_6, x_10);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_List_firstM___at_List_findM___spec__1___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_7);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_3(x_14, lean_box(0), x_12, x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_firstM___at_List_findM___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_firstM___at_List_findM___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_findM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findM___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_firstM___at_List_findM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_firstM___at_List_findM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_List_findM_x3f_x27___rarg(x_1, lean_box(0), x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_4);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_9);
x_12 = lean_apply_1(x_3, x_9);
x_13 = lean_alloc_closure((void*)(l_List_findM_x3f_x27___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_10);
lean_closure_set(x_13, 3, x_9);
x_14 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_12, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findM_x3f_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_List_findM_x3f_x27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l_List_anyM___at_List_orM___spec__1___rarg(x_1, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = 1;
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_6, lean_box(0), x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 0;
x_6 = lean_box(x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_List_anyM___at_List_orM___spec__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_8, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_anyM___at_List_orM___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_orM___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_anyM___at_List_orM___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_orM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_orM___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at_List_orM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_List_anyM___at_List_orM___spec__1___rarg___lambda__1(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = 0;
x_7 = lean_box(x_6);
x_8 = lean_apply_2(x_5, lean_box(0), x_7);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_List_allM___at_List_andM___spec__1___rarg(x_1, x_2);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_List_allM___at_List_andM___spec__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_9);
x_12 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_8, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_allM___at_List_andM___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_andM___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_allM___at_List_andM___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_andM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_andM___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_allM___at_List_andM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_List_allM___at_List_andM___spec__1___rarg___lambda__1(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_7);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_7);
lean_closure_set(x_11, 2, x_8);
x_12 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_5, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_7, x_13);
lean_dec(x_7);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_5 = x_12;
x_6 = x_9;
x_7 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlIdx___at_List_foldlIdxM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldlIdxM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_5);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_foldlIdx___at_List_foldlIdxM___spec__1___rarg(x_1, lean_box(0), lean_box(0), x_4, x_9, x_6, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_List_foldlIdxM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldlIdxM___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_7, x_10);
lean_inc(x_4);
lean_inc(x_1);
x_12 = l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg(x_1, lean_box(0), lean_box(0), x_4, x_5, x_9, x_11);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_4, x_7, x_8);
x_15 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_12, x_14);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrIdxM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_5);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg(x_1, lean_box(0), lean_box(0), x_4, x_9, x_6, x_10);
lean_dec(x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_List_foldrIdxM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrIdxM___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_foldrIdx___at_List_foldrIdxM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l_List_mapIdxMAux_x27___rarg(x_2, lean_box(0), x_3, x_7, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 4);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_3);
lean_inc(x_4);
x_14 = lean_apply_2(x_3, x_4, x_10);
x_15 = lean_alloc_closure((void*)(l_List_mapIdxMAux_x27___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_11);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapIdxMAux_x27___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapIdxMAux_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_mapIdxMAux_x27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapIdxM_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_mapIdxMAux_x27___rarg(x_1, lean_box(0), x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_mapIdxM_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapIdxM_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_3(x_4, x_8, x_5, lean_box(0));
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Data_List_Defs_0__List_Forall_match__1_splitter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_List_permutationsAux2___rarg___lambda__1), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_5);
lean_inc(x_1);
x_11 = l_List_permutationsAux2___rarg(x_1, x_2, x_3, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_ctor_set(x_4, 1, x_13);
lean_inc(x_4);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_4);
x_16 = lean_apply_1(x_5, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_11, 1, x_17);
lean_ctor_set(x_11, 0, x_4);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
lean_ctor_set(x_4, 1, x_18);
lean_inc(x_4);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_4);
x_21 = lean_apply_1(x_5, x_20);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_ctor_get(x_4, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_4);
lean_inc(x_5);
lean_inc(x_24);
x_26 = lean_alloc_closure((void*)(l_List_permutationsAux2___rarg___lambda__1), 3, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_5);
lean_inc(x_1);
x_27 = l_List_permutationsAux2___rarg(x_1, x_2, x_3, x_25, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_28);
lean_inc(x_31);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_apply_1(x_5, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
if (lean_is_scalar(x_30)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_30;
}
lean_ctor_set(x_35, 0, x_31);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_permutationsAux2___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux_rec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_7);
lean_ctor_set(x_3, 1, x_4);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_List_permutationsAux_rec___rarg(x_1, x_2, x_8, x_3);
x_10 = lean_box(0);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_List_permutationsAux_rec___rarg(x_1, x_2, x_4, x_10);
x_12 = lean_apply_5(x_2, x_7, x_8, x_4, x_9, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_4);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_List_permutationsAux_rec___rarg(x_1, x_2, x_14, x_15);
x_17 = lean_box(0);
lean_inc(x_4);
lean_inc(x_2);
x_18 = l_List_permutationsAux_rec___rarg(x_1, x_2, x_4, x_17);
x_19 = lean_apply_5(x_2, x_13, x_14, x_4, x_16, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux_rec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_permutationsAux_rec___rarg), 4, 0);
return x_3;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
x_11 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_List_permutationsAux2___rarg(x_1, x_2, x_6, x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_4 = x_9;
x_6 = x_13;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
x_11 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1;
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_List_permutationsAux2___rarg(x_1, x_2, x_6, x_10, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_4 = x_9;
x_6 = x_13;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_permutationsAux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_mk(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_nat_dec_le(x_6, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = 0;
x_12 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_6);
if (x_14 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_permutationsAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_permutationsAux___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_List_foldrTR___at_List_permutationsAux___spec__1___rarg(x_1, x_2, x_4, x_6);
return x_7;
}
}
static lean_object* _init_l_List_permutationsAux___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_permutationsAux___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_List_permutationsAux___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_permutationsAux___rarg___lambda__2), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_List_permutationsAux___rarg___closed__1;
x_4 = l_List_permutationsAux___rarg___closed__2;
x_5 = l_List_permutationsAux_rec___rarg(x_3, x_4, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_permutationsAux___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_permutationsAux___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_permutationsAux___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_permutations___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = l_List_permutationsAux___rarg___closed__1;
x_4 = l_List_permutationsAux___rarg___closed__2;
lean_inc(x_1);
x_5 = l_List_permutationsAux_rec___rarg(x_3, x_4, x_1, x_2);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_permutations(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_permutations___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
lean_ctor_set(x_2, 1, x_6);
lean_ctor_set(x_2, 0, x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_permutations_x27Aux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_List_permutations_x27Aux___rarg(x_1, x_8);
x_11 = lean_box(0);
x_12 = l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1___rarg(x_7, x_10, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
lean_inc(x_15);
lean_inc(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_inc(x_1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_List_permutations_x27Aux___rarg(x_1, x_15);
x_19 = lean_box(0);
x_20 = l_List_mapTR_loop___at_List_permutations_x27Aux___spec__1___rarg(x_14, x_18, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_List_permutations_x27Aux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_permutations_x27Aux___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_List_Defs_0__List_headI_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_permutations_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_array_to_list(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = l_List_permutations_x27Aux___rarg(x_1, x_5);
x_8 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_3, x_7);
x_2 = x_6;
x_3 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_permutations_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_List_permutations_x27___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_permutations_x27___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_permutations_x27___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_permutations_x27___rarg___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_List_permutations_x27___rarg(x_4);
x_6 = l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1;
x_7 = l_List_flatMapTR_go___at_List_permutations_x27___spec__1___rarg(x_3, x_5, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_List_permutations_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_permutations_x27___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_List_extractp___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_extractp___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_List_extractp___rarg___closed__1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_List_extractp___rarg(x_1, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_9);
lean_ctor_set(x_2, 1, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_2);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_5);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_17);
x_19 = lean_apply_1(x_1, x_17);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = l_List_extractp___rarg(x_1, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_24 = x_21;
} else {
 lean_dec_ref(x_21);
 x_24 = lean_box(0);
}
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_23);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_17);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_18);
return x_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_extractp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_extractp___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_List_instSProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_productTR___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_instSProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_instSProd___closed__1;
return x_3;
}
}
LEAN_EXPORT uint8_t l_List_decidableChain___rarg___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_instDecidableTrue;
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
x_6 = lean_apply_2(x_1, x_5, x_2);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = 0;
x_9 = lean_box(x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_apply_1(x_4, x_2);
return x_10;
}
}
}
static lean_object* _init_l_List_decidableChain___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_decidableChain___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_alloc_closure((void*)(l_List_decidableChain___rarg___lambda__2___boxed), 5, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_decidableChain___rarg___closed__1;
x_6 = l_List_rec____x40_Mathlib_Util_CompileInductive___hyg_3274____rarg(x_5, x_4, x_3);
x_7 = lean_apply_1(x_6, x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_decidableChain___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_List_decidableChain___rarg___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_decidableChain___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_decidableChain_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_1);
x_3 = l_instDecidableTrue;
x_4 = lean_box(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_List_decidableChain___rarg(x_1, x_5, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_List_decidableChain_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_decidableChain_x27___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_inc(x_5);
x_11 = l_List_decidableBAll___rarg(x_10, x_5);
if (x_11 == 0)
{
lean_dec(x_9);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_5);
x_3 = x_8;
x_5 = x_13;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = 1;
x_8 = lean_usize_sub(x_3, x_7);
x_9 = lean_array_uget(x_2, x_8);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_inc(x_5);
x_11 = l_List_decidableBAll___rarg(x_10, x_5);
if (x_11 == 0)
{
lean_dec(x_9);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_5);
x_3 = x_8;
x_5 = x_13;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_dedup___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_mk(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_le(x_5, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = 0;
x_11 = l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg(x_1, x_4, x_9, x_10, x_2);
lean_dec(x_4);
return x_11;
}
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_5);
if (x_13 == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_dedup___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_dedup___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_List_dedup___spec__2___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_dedup___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_List_dedup___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_List_dedup___spec__3___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_List_dedup___spec__4___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_destutter_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_2);
x_9 = lean_apply_2(x_1, x_2, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = l_List_destutter_x27___rarg(x_1, x_7, x_8);
lean_ctor_set(x_3, 1, x_12);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_13);
lean_inc(x_2);
x_15 = lean_apply_2(x_1, x_2, x_13);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_dec(x_13);
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = l_List_destutter_x27___rarg(x_1, x_13, x_14);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_destutter_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_destutter_x27___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_destutter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_List_destutter_x27___rarg(x_1, x_4, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_List_destutter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_destutter___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_chooseX___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
x_2 = x_5;
x_3 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_1);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_chooseX(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_chooseX___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_choose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_chooseX___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_choose(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_choose___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapDiagM_x27___rarg(x_1, lean_box(0), x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_2);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_List_mapM_x27___rarg(x_3, x_7, x_4);
x_9 = lean_alloc_closure((void*)(l_List_mapDiagM_x27___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_4);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_3);
lean_inc_n(x_9, 2);
x_12 = lean_apply_2(x_3, x_9, x_9);
lean_inc(x_11);
x_13 = lean_alloc_closure((void*)(l_List_mapDiagM_x27___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_9);
lean_closure_set(x_13, 2, x_1);
lean_closure_set(x_13, 3, x_10);
lean_closure_set(x_13, 4, x_11);
x_14 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_12, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapDiagM_x27___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapDiagM_x27___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapDiagM_x27___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_mapDiagM_x27___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_box(0);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_6, x_8);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_9);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_box(0);
lean_inc(x_1);
x_14 = lean_apply_2(x_1, x_11, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Left_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1___rarg(x_1, x_2, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_box(0);
x_14 = l_List_mapTR_loop___at_List_map_u2082Left_x27___spec__1___rarg(x_1, x_12, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
x_21 = l_List_map_u2082Left_x27___rarg(x_1, x_17, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
x_23 = lean_apply_2(x_1, x_16, x_22);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_3, 1, x_25);
lean_ctor_set(x_3, 0, x_23);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_26);
lean_ctor_set(x_3, 0, x_23);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_3);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_3, 0);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_3);
lean_inc(x_1);
x_31 = l_List_map_u2082Left_x27___rarg(x_1, x_17, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_29);
x_33 = lean_apply_2(x_1, x_16, x_32);
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_36 = x_31;
} else {
 lean_dec_ref(x_31);
 x_36 = lean_box(0);
}
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Left_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_map_u2082Left_x27___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_map_u2082Left_x27_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_4(x_5, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_map_u2082Left_x27_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Defs_0__List_map_u2082Left_x27_match__1_splitter___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Right_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_flip___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_map_u2082Left_x27___rarg(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Right_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_map_u2082Right_x27___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_box(0);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_6, x_8);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_9);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_box(0);
lean_inc(x_1);
x_14 = lean_apply_2(x_1, x_11, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
x_2 = x_12;
x_3 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_map_u2082Left___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_map_u2082Left___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Left___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_List_map_u2082Left___spec__1___rarg(x_1, x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_box(0);
x_12 = l_List_mapTR_loop___at_List_map_u2082Left___spec__1___rarg(x_1, x_10, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_16);
lean_inc(x_1);
x_19 = lean_apply_2(x_1, x_13, x_18);
x_20 = l_List_map_u2082Left___rarg(x_1, x_14, x_17);
lean_ctor_set(x_3, 1, x_20);
lean_ctor_set(x_3, 0, x_19);
return x_3;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_21);
lean_inc(x_1);
x_24 = lean_apply_2(x_1, x_13, x_23);
x_25 = l_List_map_u2082Left___rarg(x_1, x_14, x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Left(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_map_u2082Left___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Right___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_flip___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_map_u2082Left___rarg(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_map_u2082Right(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_map_u2082Right___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
x_9 = l_Task_Priority_default;
x_10 = lean_task_spawn(x_8, x_9);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_10);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_12);
x_15 = l_Task_Priority_default;
x_16 = lean_task_spawn(x_14, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
x_2 = x_13;
x_3 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_task_get_own(x_4);
x_7 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_2, x_6);
x_1 = x_5;
x_2 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapAsyncChunked___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_List_toChunks___rarg(x_3, x_2);
x_5 = lean_box(0);
x_6 = l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg(x_1, x_4, x_5);
x_7 = l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1;
x_8 = l_List_flatMapTR_go___at_List_mapAsyncChunked___spec__2___rarg(x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapAsyncChunked(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapAsyncChunked___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_List_mapAsyncChunked___spec__1___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapAsyncChunked___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapAsyncChunked___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_zipWith3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_1);
x_15 = lean_apply_3(x_1, x_8, x_10, x_13);
x_16 = l_List_zipWith3___rarg(x_1, x_9, x_11, x_14);
lean_ctor_set(x_4, 1, x_16);
lean_ctor_set(x_4, 0, x_15);
return x_4;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
lean_inc(x_1);
x_19 = lean_apply_3(x_1, x_8, x_10, x_17);
x_20 = l_List_zipWith3___rarg(x_1, x_9, x_11, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_zipWith3___rarg), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_zipWith4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_5);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_1);
x_19 = lean_apply_4(x_1, x_10, x_12, x_14, x_17);
x_20 = l_List_zipWith4___rarg(x_1, x_11, x_13, x_15, x_18);
lean_ctor_set(x_5, 1, x_20);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
lean_inc(x_1);
x_23 = lean_apply_4(x_1, x_10, x_12, x_14, x_21);
x_24 = l_List_zipWith4___rarg(x_1, x_11, x_13, x_15, x_22);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_List_zipWith4___rarg), 5, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_zipWith5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
else
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_ctor_get(x_5, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
lean_inc(x_1);
x_23 = lean_apply_5(x_1, x_12, x_14, x_16, x_18, x_21);
x_24 = l_List_zipWith5___rarg(x_1, x_13, x_15, x_17, x_19, x_22);
lean_ctor_set(x_6, 1, x_24);
lean_ctor_set(x_6, 0, x_23);
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
lean_inc(x_1);
x_27 = lean_apply_5(x_1, x_12, x_14, x_16, x_18, x_25);
x_28 = l_List_zipWith5___rarg(x_1, x_13, x_15, x_17, x_19, x_26);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_List_zipWith5___rarg), 6, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_replaceIf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_3);
x_4 = lean_box(0);
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_3);
lean_inc(x_1);
return x_1;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_unbox(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_10 = l_List_replaceIf___rarg(x_8, x_9, x_3);
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_3, 0);
lean_dec(x_13);
lean_inc(x_7);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_inc(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_3, 1);
x_19 = l_List_replaceIf___rarg(x_16, x_17, x_18);
lean_ctor_set(x_3, 1, x_19);
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_2, 1);
x_22 = lean_ctor_get(x_3, 0);
x_23 = lean_ctor_get(x_3, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_3);
x_24 = l_List_replaceIf___rarg(x_20, x_21, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_replaceIf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_replaceIf___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_replaceIf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_replaceIf___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_iterate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_inc(x_1);
lean_inc(x_2);
x_8 = lean_apply_1(x_1, x_2);
x_9 = l_List_iterate___rarg(x_1, x_8, x_7);
lean_dec(x_7);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_List_iterate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_iterate___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_iterate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_iterate___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_List_Defs_0__List_iterate_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_iterateTR_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_9 = lean_apply_1(x_1, x_2);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_4);
x_2 = x_9;
x_3 = x_8;
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_List_reverse___rarg(x_4);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_List_iterateTR_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_iterateTR_loop___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_iterateTR___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_iterateTR_loop___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_iterateTR(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_iterateTR___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapAccumr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_9 = l_List_mapAccumr___rarg(x_1, x_8, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_apply_2(x_1, x_7, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 1);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_14);
lean_ctor_set(x_12, 1, x_2);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_2);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_1);
x_20 = l_List_mapAccumr___rarg(x_1, x_19, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_apply_2(x_1, x_18, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_22);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapAccumr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapAccumr___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapAccumr_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = lean_box(0);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_10);
lean_ctor_set(x_2, 0, x_4);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
x_18 = l_List_mapAccumr_u2082___rarg(x_1, x_14, x_17, x_4);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_apply_3(x_1, x_13, x_16, x_19);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 1);
lean_ctor_set(x_3, 1, x_20);
lean_ctor_set(x_3, 0, x_23);
lean_ctor_set(x_21, 1, x_3);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_21);
lean_ctor_set(x_3, 1, x_20);
lean_ctor_set(x_3, 0, x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_3, 0);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_3);
lean_inc(x_1);
x_29 = l_List_mapAccumr_u2082___rarg(x_1, x_14, x_28, x_4);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_apply_3(x_1, x_13, x_27, x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_35 = x_32;
} else {
 lean_dec_ref(x_32);
 x_35 = lean_box(0);
}
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_31);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapAccumr_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_mapAccumr_u2082___rarg), 4, 0);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Control_Functor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_SProd(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Util_CompileInductive(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Tactic_Lint_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_List_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_RBMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Logic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_List_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Control_Functor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_SProd(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_CompileInductive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Tactic_Lint_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_List_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_RBMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Logic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1 = _init_l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1();
lean_mark_persistent(l_List_diff___at_List_instSDiffOfDecidableEq__mathlib___spec__1___rarg___closed__1);
l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_List_permutationsAux___spec__2___rarg___closed__1);
l_List_permutationsAux___rarg___closed__1 = _init_l_List_permutationsAux___rarg___closed__1();
lean_mark_persistent(l_List_permutationsAux___rarg___closed__1);
l_List_permutationsAux___rarg___closed__2 = _init_l_List_permutationsAux___rarg___closed__2();
lean_mark_persistent(l_List_permutationsAux___rarg___closed__2);
l_List_permutations_x27___rarg___closed__1 = _init_l_List_permutations_x27___rarg___closed__1();
lean_mark_persistent(l_List_permutations_x27___rarg___closed__1);
l_List_extractp___rarg___closed__1 = _init_l_List_extractp___rarg___closed__1();
lean_mark_persistent(l_List_extractp___rarg___closed__1);
l_List_instSProd___closed__1 = _init_l_List_instSProd___closed__1();
lean_mark_persistent(l_List_instSProd___closed__1);
l_List_decidableChain___rarg___closed__1 = _init_l_List_decidableChain___rarg___closed__1();
lean_mark_persistent(l_List_decidableChain___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
