// Lean compiler output
// Module: Mathlib.Data.Ordmap.Ordnode
// Imports: Init Mathlib.Order.Compare Mathlib.Data.List.Defs Mathlib.Data.Nat.PSub Mathlib.Data.Option.Basic
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
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11;
LEAN_EXPORT lean_object* l_Ordnode_filter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insertWith(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_drop___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_filter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_dropWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__inst___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instSingleton(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_eraseMin___rarg(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23;
LEAN_EXPORT lean_object* l_Ordnode_findGtAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_recOn___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_adjustWith(lean_object*);
static lean_object* l_Ordnode_instToString___rarg___closed__2;
LEAN_EXPORT lean_object* l_Ordnode_findGtAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMin___rarg___boxed(lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__9;
LEAN_EXPORT lean_object* l_Ordnode_findGe(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findIndex(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_eraseMin(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_isSubset(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLe___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_All_decidable___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitMin_x27(lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1;
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_powerset(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_empty___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_recOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_All_decidable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_attach_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_fold(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_span___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_eraseMax___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insert(lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_isSubsetAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Ordnode_instRepr(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitMax(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_prod(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8;
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_split3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_split3___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_pmap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLeAux(lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_Any_decidable___rarg(lean_object*, lean_object*);
uint8_t l_List_hasDecEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_isSubset___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_cmpLE___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_adjustWith___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_ofList_x27___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_drop(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instEmptyCollection(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLeAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2;
LEAN_EXPORT lean_object* l_Ordnode_isSubsetAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceR___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5;
LEAN_EXPORT lean_object* l_Ordnode_empty(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_image(lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2;
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6;
static lean_object* l_Ordnode_repr___rarg___closed__7;
LEAN_EXPORT lean_object* l_Ordnode_nth___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insert___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17;
LEAN_EXPORT lean_object* l_Ordnode_split___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7;
LEAN_EXPORT lean_object* l_Ordnode_alter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_singleton___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instInsert(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_take___rarg___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_partition___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLtAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_union___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_glue(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insertMin___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__inst(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_takeAux___rarg(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10;
LEAN_EXPORT lean_object* l_Ordnode_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_map(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Ordnode_image___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instInsert___rarg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_powerset___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_nth___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_find___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_toList___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_mem(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitMin___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3;
LEAN_EXPORT lean_object* l_Ordnode_insertMax___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_split3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instToFormat(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4;
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_erase(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_mem_decidable(lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__2;
LEAN_EXPORT lean_object* l_Ordnode_findGe___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_find(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19;
LEAN_EXPORT lean_object* l_Ordnode_splitAt(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_size(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_flip___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_toRevList(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMin(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_pmap___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_mem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_eraseMax(lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12;
static lean_object* l_Ordnode_repr___rarg___closed__1;
static lean_object* l_Ordnode_instToFormat___rarg___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_updateWith(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_size___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_union___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25;
LEAN_EXPORT lean_object* l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGeAux(lean_object*);
static lean_object* l_Ordnode_copair___rarg___closed__2;
static lean_object* l_Ordnode_repr___rarg___closed__8;
LEAN_EXPORT uint8_t l_Ordnode_Amem_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_updateWith___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_toList___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofAscList(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9;
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11;
LEAN_EXPORT lean_object* l_Ordnode_instRepr___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGeAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_toList(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21;
LEAN_EXPORT lean_object* l_Ordnode_ofAscList___rarg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_fold___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_partition___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_balanceL___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_recOn___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_powerset___rarg(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10;
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_dual(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_diff(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_singleton(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_removeNth___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_disjoint(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_delta;
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2082___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22;
LEAN_EXPORT lean_object* l_Ordnode_insert_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceL(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLe(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_removeNth(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_union(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitAt___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_partition(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_disjoint___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_instSingleton___closed__1;
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9;
LEAN_EXPORT lean_object* l_Ordnode_inter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Any_decidable___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitMax_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_foldl___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_empty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_nth(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_split(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_span(lean_object*, lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__4;
static lean_object* l_Ordnode_copair___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instToFormat___rarg(lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15;
LEAN_EXPORT lean_object* l_Ordnode_brecOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balance___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_link___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_isSubset___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4;
static lean_object* l_Ordnode_repr___rarg___closed__3;
LEAN_EXPORT lean_object* l_Ordnode_splitMax___rarg(lean_object*);
lean_object* lean_string_length(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24;
LEAN_EXPORT lean_object* l_Ordnode_updateWith___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_foldr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instDecidableRelEquivOfDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Emem_decidable(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_isSubsetAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_take___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Emem_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_find___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLtAux(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18;
LEAN_EXPORT lean_object* l_Ordnode_findLeAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLt___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8;
static lean_object* l_Ordnode_attach_x27___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_insertWith___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_size___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findIndex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insertWith___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___at_Prod_repr___spec__1(lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7;
LEAN_EXPORT lean_object* l_Ordnode_takeWhile(lean_object*, lean_object*);
lean_object* l_List_decidableChain___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_brecOn___rarg(lean_object*, lean_object*);
static lean_object* l_Ordnode_merge___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_inter___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_dropWhile___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balance(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_repr___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_diff___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instToString(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitAt___rarg___boxed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_Ordnode_split3___rarg___closed__2;
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1;
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16;
LEAN_EXPORT lean_object* l_Ordnode_splitMin_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_split___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_merge___rarg___closed__2;
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_toRevList___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_erase___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Ordnode_mem_decidable___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_mem_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_takeAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGeAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insert_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_merge(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMin___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_Any_decidable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instMembership___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_repr(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ratio;
LEAN_EXPORT lean_object* l_Ordnode_dropAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_node_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_mem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2082(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLt(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13;
LEAN_EXPORT lean_object* l_Ordnode_findGt(lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12;
LEAN_EXPORT lean_object* l_Ordnode_toRevList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_dropAux(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_split3(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_fold___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_diff___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_disjoint___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Ordnode_adjustWith___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_alter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_takeAux___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_balanceR(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insertMin(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_map___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_inter(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGt___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_alter(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_brecOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_instMembership(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insertMax(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27(lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__10;
LEAN_EXPORT lean_object* l_Ordnode_foldr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__5;
LEAN_EXPORT lean_object* l_Ordnode_splitMax_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_copair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_link(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_takeWhile___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_All_decidable___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2;
static lean_object* l_Ordnode_ofAscListAux_u2081___rarg___closed__1;
static lean_object* l_Ordnode_instToString___rarg___closed__3;
LEAN_EXPORT lean_object* l_Ordnode_findGe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_glue___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_foldl(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13;
static lean_object* l_Ordnode_instToString___rarg___closed__1;
LEAN_EXPORT lean_object* l_Ordnode_dual___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_splitMin(lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5;
LEAN_EXPORT lean_object* l_Ordnode_instToString___rarg(lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3;
lean_object* l_String_toSubstring_x27(lean_object*);
lean_object* l_Option_rec____x40_Mathlib_Data_Option_Basic___hyg_2881____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findIndex___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106_;
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_image___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findLtAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14;
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode_repr___rarg___closed__6;
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6;
static lean_object* l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20;
LEAN_EXPORT uint8_t l_Ordnode_Emem_decidable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_findGtAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081(lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_removeNth___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_insert_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_ofList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 3);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_5);
lean_inc(x_2);
x_8 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_1, x_2, x_5);
lean_inc(x_7);
lean_inc(x_2);
x_9 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_1, x_2, x_7);
x_10 = lean_apply_6(x_2, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_recOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_recOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_recOn___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_recOn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_recOn___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_brecOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_inc(x_9);
x_10 = lean_apply_2(x_1, x_8, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Ordnode_brecOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_box(0);
x_4 = lean_box(0);
lean_inc(x_2);
x_5 = lean_apply_2(x_2, x_3, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_Ordnode_brecOn___rarg___lambda__1), 7, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_6, x_7, x_1);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Ordnode_brecOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_brecOn___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_8, x_2);
x_10 = lean_nat_add(x_9, x_6);
lean_dec(x_9);
x_11 = lean_apply_1(x_1, x_4);
x_12 = lean_nat_add(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
x_13 = lean_nat_add(x_12, x_7);
lean_dec(x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Ordnode___sizeOf__1___rarg___lambda__1___boxed), 7, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_4, x_3, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode___sizeOf__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Ordnode___sizeOf__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__inst___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode___sizeOf__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode___sizeOf__inst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode___sizeOf__inst___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instEmptyCollection(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_delta() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(3u);
return x_1;
}
}
static lean_object* _init_l_Ordnode_ratio() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(2u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_singleton___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
lean_ctor_set(x_4, 3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_singleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_singleton___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ordnode", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("termι_", 7, 6);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Mathlib", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Data", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ordmap", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15;
x_2 = lean_unsigned_to_nat(106u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("andthen", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ι", 2, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22;
x_2 = lean_unsigned_to_nat(1023u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18;
x_2 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20;
x_3 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16;
x_2 = lean_unsigned_to_nat(1023u);
x_3 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106_() {
_start:
{
lean_object* x_1; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25;
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1;
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2;
x_3 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3;
x_4 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ordnode.singleton", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("singleton", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1;
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 5);
lean_inc(x_10);
x_11 = 0;
x_12 = l_Lean_SourceInfo_fromRef(x_10, x_11);
lean_dec(x_10);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9;
x_16 = l_Lean_addMacroScope(x_14, x_15, x_13);
x_17 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7;
x_18 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11;
lean_inc(x_12);
x_19 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13;
lean_inc(x_12);
x_21 = l_Lean_Syntax_node1(x_12, x_20, x_9);
x_22 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5;
x_23 = l_Lean_Syntax_node2(x_12, x_22, x_19, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ident", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
lean_inc(x_15);
x_16 = l_Lean_Syntax_matchesNull(x_15, x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = l_Lean_Syntax_getArg(x_15, x_8);
lean_dec(x_15);
x_20 = l_Lean_replaceRef(x_9, x_2);
lean_dec(x_9);
x_21 = 0;
x_22 = l_Lean_SourceInfo_fromRef(x_20, x_21);
lean_dec(x_20);
x_23 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19;
lean_inc(x_22);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16;
x_26 = l_Lean_Syntax_node2(x_22, x_25, x_24, x_19);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Ordnode_instSingleton___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_singleton___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instSingleton(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_instSingleton___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_size___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_size(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_size___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_size___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_size___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Ordnode_empty___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
LEAN_EXPORT lean_object* l_Ordnode_empty(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_empty___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_empty___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Ordnode_empty___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_dual___rarg(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 3);
x_6 = l_Ordnode_dual___rarg(x_5);
x_7 = l_Ordnode_dual___rarg(x_4);
lean_ctor_set(x_1, 3, x_7);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_12 = l_Ordnode_dual___rarg(x_11);
x_13 = l_Ordnode_dual___rarg(x_9);
x_14 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_dual(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_dual___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Ordmap_Ordnode_0__Ordnode_size_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_node_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_add(x_7, x_6);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_8, x_9);
lean_dec(x_8);
x_11 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_1);
lean_ctor_set(x_11, 2, x_2);
lean_ctor_set(x_11, 3, x_3);
return x_11;
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_add(x_12, x_13);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
lean_ctor_set(x_17, 2, x_2);
lean_ctor_set(x_17, 3, x_3);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
x_20 = lean_nat_add(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_20, x_21);
lean_dec(x_20);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set(x_23, 2, x_2);
lean_ctor_set(x_23, 3, x_3);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_node_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_node_x27___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("∅", 3, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__5;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__6;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__5;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_repr___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_repr___rarg___closed__9;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_repr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = l_Ordnode_repr___rarg___closed__2;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Ordnode_repr___rarg(x_1, x_5, x_3);
lean_inc(x_1);
lean_inc(x_3);
x_9 = lean_apply_2(x_1, x_6, x_3);
x_10 = l_Ordnode_repr___rarg(x_1, x_7, x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Ordnode_repr___rarg___closed__4;
x_16 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_14, x_15);
x_17 = l_Ordnode_repr___rarg___closed__8;
x_18 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Ordnode_repr___rarg___closed__10;
x_20 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Ordnode_repr___rarg___closed__7;
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = 0;
x_24 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_23);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_repr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_repr___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instRepr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_repr___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instRepr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_instRepr___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceL___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_1);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_8, 2);
x_18 = lean_ctor_get(x_8, 3);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 1);
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_dec(x_20);
x_21 = lean_box(0);
x_22 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_8, 3, x_21);
lean_ctor_set(x_8, 2, x_12);
lean_ctor_set(x_8, 1, x_21);
lean_ctor_set(x_8, 0, x_22);
lean_ctor_set(x_1, 3, x_21);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_21);
lean_ctor_set(x_1, 0, x_22);
x_23 = lean_unsigned_to_nat(3u);
x_24 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_8);
lean_ctor_set(x_24, 2, x_17);
lean_ctor_set(x_24, 3, x_1);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_8, 2);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_box(0);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_12);
lean_ctor_set(x_28, 3, x_26);
lean_ctor_set(x_1, 3, x_26);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_27);
x_29 = lean_unsigned_to_nat(3u);
x_30 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_25);
lean_ctor_set(x_30, 3, x_1);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_ctor_get(x_1, 2);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get(x_8, 2);
lean_inc(x_32);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 lean_ctor_release(x_8, 2);
 lean_ctor_release(x_8, 3);
 x_33 = x_8;
} else {
 lean_dec_ref(x_8);
 x_33 = lean_box(0);
}
x_34 = lean_box(0);
x_35 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_33)) {
 x_36 = lean_alloc_ctor(1, 4, 0);
} else {
 x_36 = x_33;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_31);
lean_ctor_set(x_36, 3, x_34);
x_37 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_2);
lean_ctor_set(x_37, 3, x_34);
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
lean_ctor_set(x_39, 2, x_32);
lean_ctor_set(x_39, 3, x_37);
return x_39;
}
}
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_1, 3);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_1, 2);
x_43 = lean_ctor_get(x_1, 3);
lean_dec(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_1, 0);
lean_dec(x_45);
x_46 = lean_box(0);
x_47 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_1, 3, x_46);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_46);
lean_ctor_set(x_1, 0, x_47);
x_48 = lean_unsigned_to_nat(3u);
x_49 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_7);
lean_ctor_set(x_49, 2, x_42);
lean_ctor_set(x_49, 3, x_1);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_1, 2);
lean_inc(x_50);
lean_dec(x_1);
x_51 = lean_box(0);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
lean_ctor_set(x_53, 2, x_2);
lean_ctor_set(x_53, 3, x_51);
x_54 = lean_unsigned_to_nat(3u);
x_55 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_7);
lean_ctor_set(x_55, 2, x_50);
lean_ctor_set(x_55, 3, x_53);
return x_55;
}
}
else
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_1);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get(x_1, 2);
x_59 = lean_ctor_get(x_1, 3);
lean_dec(x_59);
x_60 = lean_ctor_get(x_1, 1);
lean_dec(x_60);
x_61 = lean_ctor_get(x_7, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_40, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_40, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_40, 2);
lean_inc(x_64);
x_65 = lean_ctor_get(x_40, 3);
lean_inc(x_65);
x_66 = lean_unsigned_to_nat(2u);
x_67 = lean_nat_mul(x_66, x_61);
x_68 = lean_nat_dec_lt(x_62, x_67);
lean_dec(x_67);
if (x_68 == 0)
{
uint8_t x_69; 
lean_dec(x_62);
x_69 = !lean_is_exclusive(x_40);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_40, 3);
lean_dec(x_70);
x_71 = lean_ctor_get(x_40, 2);
lean_dec(x_71);
x_72 = lean_ctor_get(x_40, 1);
lean_dec(x_72);
x_73 = lean_ctor_get(x_40, 0);
lean_dec(x_73);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_add(x_57, x_74);
lean_dec(x_57);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_76 = lean_unsigned_to_nat(0u);
x_77 = lean_nat_add(x_61, x_76);
lean_dec(x_61);
x_78 = lean_nat_add(x_77, x_74);
lean_dec(x_77);
lean_inc(x_7);
lean_ctor_set(x_40, 3, x_63);
lean_ctor_set(x_40, 2, x_58);
lean_ctor_set(x_40, 1, x_7);
lean_ctor_set(x_40, 0, x_78);
x_79 = !lean_is_exclusive(x_7);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_7, 3);
lean_dec(x_80);
x_81 = lean_ctor_get(x_7, 2);
lean_dec(x_81);
x_82 = lean_ctor_get(x_7, 1);
lean_dec(x_82);
x_83 = lean_ctor_get(x_7, 0);
lean_dec(x_83);
if (lean_obj_tag(x_65) == 0)
{
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_65);
lean_ctor_set(x_7, 0, x_74);
lean_ctor_set(x_1, 3, x_7);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_65, 0);
lean_inc(x_84);
x_85 = lean_nat_add(x_84, x_74);
lean_dec(x_84);
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_65);
lean_ctor_set(x_7, 0, x_85);
lean_ctor_set(x_1, 3, x_7);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
}
else
{
lean_dec(x_7);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_86; 
x_86 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_86, 0, x_74);
lean_ctor_set(x_86, 1, x_65);
lean_ctor_set(x_86, 2, x_2);
lean_ctor_set(x_86, 3, x_3);
lean_ctor_set(x_1, 3, x_86);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_65, 0);
lean_inc(x_87);
x_88 = lean_nat_add(x_87, x_74);
lean_dec(x_87);
x_89 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_65);
lean_ctor_set(x_89, 2, x_2);
lean_ctor_set(x_89, 3, x_3);
lean_ctor_set(x_1, 3, x_89);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_63, 0);
lean_inc(x_90);
x_91 = lean_nat_add(x_61, x_90);
lean_dec(x_90);
lean_dec(x_61);
x_92 = lean_nat_add(x_91, x_74);
lean_dec(x_91);
lean_inc(x_7);
lean_ctor_set(x_40, 3, x_63);
lean_ctor_set(x_40, 2, x_58);
lean_ctor_set(x_40, 1, x_7);
lean_ctor_set(x_40, 0, x_92);
x_93 = !lean_is_exclusive(x_7);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_7, 3);
lean_dec(x_94);
x_95 = lean_ctor_get(x_7, 2);
lean_dec(x_95);
x_96 = lean_ctor_get(x_7, 1);
lean_dec(x_96);
x_97 = lean_ctor_get(x_7, 0);
lean_dec(x_97);
if (lean_obj_tag(x_65) == 0)
{
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_65);
lean_ctor_set(x_7, 0, x_74);
lean_ctor_set(x_1, 3, x_7);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_65, 0);
lean_inc(x_98);
x_99 = lean_nat_add(x_98, x_74);
lean_dec(x_98);
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_65);
lean_ctor_set(x_7, 0, x_99);
lean_ctor_set(x_1, 3, x_7);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
}
else
{
lean_dec(x_7);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_100; 
x_100 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_100, 0, x_74);
lean_ctor_set(x_100, 1, x_65);
lean_ctor_set(x_100, 2, x_2);
lean_ctor_set(x_100, 3, x_3);
lean_ctor_set(x_1, 3, x_100);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_65, 0);
lean_inc(x_101);
x_102 = lean_nat_add(x_101, x_74);
lean_dec(x_101);
x_103 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_65);
lean_ctor_set(x_103, 2, x_2);
lean_ctor_set(x_103, 3, x_3);
lean_ctor_set(x_1, 3, x_103);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_75);
return x_1;
}
}
}
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_40);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_add(x_57, x_104);
lean_dec(x_57);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_106 = lean_unsigned_to_nat(0u);
x_107 = lean_nat_add(x_61, x_106);
lean_dec(x_61);
x_108 = lean_nat_add(x_107, x_104);
lean_dec(x_107);
lean_inc(x_7);
x_109 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_7);
lean_ctor_set(x_109, 2, x_58);
lean_ctor_set(x_109, 3, x_63);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_110 = x_7;
} else {
 lean_dec_ref(x_7);
 x_110 = lean_box(0);
}
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_111; 
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 4, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_104);
lean_ctor_set(x_111, 1, x_65);
lean_ctor_set(x_111, 2, x_2);
lean_ctor_set(x_111, 3, x_3);
lean_ctor_set(x_1, 3, x_111);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_109);
lean_ctor_set(x_1, 0, x_105);
return x_1;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_65, 0);
lean_inc(x_112);
x_113 = lean_nat_add(x_112, x_104);
lean_dec(x_112);
if (lean_is_scalar(x_110)) {
 x_114 = lean_alloc_ctor(1, 4, 0);
} else {
 x_114 = x_110;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_65);
lean_ctor_set(x_114, 2, x_2);
lean_ctor_set(x_114, 3, x_3);
lean_ctor_set(x_1, 3, x_114);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_109);
lean_ctor_set(x_1, 0, x_105);
return x_1;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_115 = lean_ctor_get(x_63, 0);
lean_inc(x_115);
x_116 = lean_nat_add(x_61, x_115);
lean_dec(x_115);
lean_dec(x_61);
x_117 = lean_nat_add(x_116, x_104);
lean_dec(x_116);
lean_inc(x_7);
x_118 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_7);
lean_ctor_set(x_118, 2, x_58);
lean_ctor_set(x_118, 3, x_63);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_119 = x_7;
} else {
 lean_dec_ref(x_7);
 x_119 = lean_box(0);
}
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_120; 
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 4, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_104);
lean_ctor_set(x_120, 1, x_65);
lean_ctor_set(x_120, 2, x_2);
lean_ctor_set(x_120, 3, x_3);
lean_ctor_set(x_1, 3, x_120);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_118);
lean_ctor_set(x_1, 0, x_105);
return x_1;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_65, 0);
lean_inc(x_121);
x_122 = lean_nat_add(x_121, x_104);
lean_dec(x_121);
if (lean_is_scalar(x_119)) {
 x_123 = lean_alloc_ctor(1, 4, 0);
} else {
 x_123 = x_119;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_65);
lean_ctor_set(x_123, 2, x_2);
lean_ctor_set(x_123, 3, x_3);
lean_ctor_set(x_1, 3, x_123);
lean_ctor_set(x_1, 2, x_64);
lean_ctor_set(x_1, 1, x_118);
lean_ctor_set(x_1, 0, x_105);
return x_1;
}
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_61);
x_124 = lean_unsigned_to_nat(1u);
x_125 = lean_nat_add(x_57, x_124);
lean_dec(x_57);
x_126 = lean_nat_add(x_62, x_124);
lean_dec(x_62);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_40);
lean_ctor_set(x_1, 0, x_126);
x_127 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_7);
lean_ctor_set(x_127, 2, x_58);
lean_ctor_set(x_127, 3, x_1);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_128 = lean_ctor_get(x_1, 0);
x_129 = lean_ctor_get(x_1, 2);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_1);
x_130 = lean_ctor_get(x_7, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_40, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_40, 1);
lean_inc(x_132);
x_133 = lean_ctor_get(x_40, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_40, 3);
lean_inc(x_134);
x_135 = lean_unsigned_to_nat(2u);
x_136 = lean_nat_mul(x_135, x_130);
x_137 = lean_nat_dec_lt(x_131, x_136);
lean_dec(x_136);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_131);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 x_138 = x_40;
} else {
 lean_dec_ref(x_40);
 x_138 = lean_box(0);
}
x_139 = lean_unsigned_to_nat(1u);
x_140 = lean_nat_add(x_128, x_139);
lean_dec(x_128);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_141 = lean_unsigned_to_nat(0u);
x_142 = lean_nat_add(x_130, x_141);
lean_dec(x_130);
x_143 = lean_nat_add(x_142, x_139);
lean_dec(x_142);
lean_inc(x_7);
if (lean_is_scalar(x_138)) {
 x_144 = lean_alloc_ctor(1, 4, 0);
} else {
 x_144 = x_138;
}
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_7);
lean_ctor_set(x_144, 2, x_129);
lean_ctor_set(x_144, 3, x_132);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_145 = x_7;
} else {
 lean_dec_ref(x_7);
 x_145 = lean_box(0);
}
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_146; lean_object* x_147; 
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 4, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_139);
lean_ctor_set(x_146, 1, x_134);
lean_ctor_set(x_146, 2, x_2);
lean_ctor_set(x_146, 3, x_3);
x_147 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_147, 0, x_140);
lean_ctor_set(x_147, 1, x_144);
lean_ctor_set(x_147, 2, x_133);
lean_ctor_set(x_147, 3, x_146);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_134, 0);
lean_inc(x_148);
x_149 = lean_nat_add(x_148, x_139);
lean_dec(x_148);
if (lean_is_scalar(x_145)) {
 x_150 = lean_alloc_ctor(1, 4, 0);
} else {
 x_150 = x_145;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_134);
lean_ctor_set(x_150, 2, x_2);
lean_ctor_set(x_150, 3, x_3);
x_151 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_151, 0, x_140);
lean_ctor_set(x_151, 1, x_144);
lean_ctor_set(x_151, 2, x_133);
lean_ctor_set(x_151, 3, x_150);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_152 = lean_ctor_get(x_132, 0);
lean_inc(x_152);
x_153 = lean_nat_add(x_130, x_152);
lean_dec(x_152);
lean_dec(x_130);
x_154 = lean_nat_add(x_153, x_139);
lean_dec(x_153);
lean_inc(x_7);
if (lean_is_scalar(x_138)) {
 x_155 = lean_alloc_ctor(1, 4, 0);
} else {
 x_155 = x_138;
}
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_7);
lean_ctor_set(x_155, 2, x_129);
lean_ctor_set(x_155, 3, x_132);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_156 = x_7;
} else {
 lean_dec_ref(x_7);
 x_156 = lean_box(0);
}
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_157; lean_object* x_158; 
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 4, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_139);
lean_ctor_set(x_157, 1, x_134);
lean_ctor_set(x_157, 2, x_2);
lean_ctor_set(x_157, 3, x_3);
x_158 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_158, 0, x_140);
lean_ctor_set(x_158, 1, x_155);
lean_ctor_set(x_158, 2, x_133);
lean_ctor_set(x_158, 3, x_157);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_134, 0);
lean_inc(x_159);
x_160 = lean_nat_add(x_159, x_139);
lean_dec(x_159);
if (lean_is_scalar(x_156)) {
 x_161 = lean_alloc_ctor(1, 4, 0);
} else {
 x_161 = x_156;
}
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_134);
lean_ctor_set(x_161, 2, x_2);
lean_ctor_set(x_161, 3, x_3);
x_162 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_162, 0, x_140);
lean_ctor_set(x_162, 1, x_155);
lean_ctor_set(x_162, 2, x_133);
lean_ctor_set(x_162, 3, x_161);
return x_162;
}
}
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_130);
x_163 = lean_unsigned_to_nat(1u);
x_164 = lean_nat_add(x_128, x_163);
lean_dec(x_128);
x_165 = lean_nat_add(x_131, x_163);
lean_dec(x_131);
x_166 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_40);
lean_ctor_set(x_166, 2, x_2);
lean_ctor_set(x_166, 3, x_3);
x_167 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_167, 0, x_164);
lean_ctor_set(x_167, 1, x_7);
lean_ctor_set(x_167, 2, x_129);
lean_ctor_set(x_167, 3, x_166);
return x_167;
}
}
}
}
}
}
else
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_168 = lean_ctor_get(x_3, 0);
lean_inc(x_168);
x_169 = lean_unsigned_to_nat(1u);
x_170 = lean_nat_add(x_168, x_169);
lean_dec(x_168);
x_171 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_1);
lean_ctor_set(x_171, 2, x_2);
lean_ctor_set(x_171, 3, x_3);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_172 = lean_ctor_get(x_3, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_1, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_1, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_1, 2);
lean_inc(x_175);
x_176 = lean_ctor_get(x_1, 3);
lean_inc(x_176);
x_177 = lean_unsigned_to_nat(3u);
x_178 = lean_nat_mul(x_177, x_172);
x_179 = lean_nat_dec_lt(x_178, x_173);
lean_dec(x_178);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_174);
x_180 = lean_nat_add(x_173, x_172);
lean_dec(x_172);
lean_dec(x_173);
x_181 = lean_unsigned_to_nat(1u);
x_182 = lean_nat_add(x_180, x_181);
lean_dec(x_180);
x_183 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_1);
lean_ctor_set(x_183, 2, x_2);
lean_ctor_set(x_183, 3, x_3);
return x_183;
}
else
{
uint8_t x_184; 
x_184 = !lean_is_exclusive(x_1);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_185 = lean_ctor_get(x_1, 3);
lean_dec(x_185);
x_186 = lean_ctor_get(x_1, 2);
lean_dec(x_186);
x_187 = lean_ctor_get(x_1, 1);
lean_dec(x_187);
x_188 = lean_ctor_get(x_1, 0);
lean_dec(x_188);
if (lean_obj_tag(x_174) == 0)
{
lean_free_object(x_1);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_173);
lean_dec(x_172);
lean_dec(x_3);
lean_dec(x_2);
return x_174;
}
else
{
if (lean_obj_tag(x_176) == 0)
{
lean_free_object(x_1);
lean_dec(x_175);
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_172);
lean_dec(x_3);
lean_dec(x_2);
return x_176;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_189 = lean_ctor_get(x_174, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_176, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_176, 1);
lean_inc(x_191);
x_192 = lean_ctor_get(x_176, 2);
lean_inc(x_192);
x_193 = lean_ctor_get(x_176, 3);
lean_inc(x_193);
x_194 = lean_unsigned_to_nat(2u);
x_195 = lean_nat_mul(x_194, x_189);
x_196 = lean_nat_dec_lt(x_190, x_195);
lean_dec(x_195);
if (x_196 == 0)
{
uint8_t x_197; 
lean_dec(x_190);
x_197 = !lean_is_exclusive(x_176);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_198 = lean_ctor_get(x_176, 3);
lean_dec(x_198);
x_199 = lean_ctor_get(x_176, 2);
lean_dec(x_199);
x_200 = lean_ctor_get(x_176, 1);
lean_dec(x_200);
x_201 = lean_ctor_get(x_176, 0);
lean_dec(x_201);
x_202 = lean_nat_add(x_173, x_172);
lean_dec(x_173);
x_203 = lean_unsigned_to_nat(1u);
x_204 = lean_nat_add(x_202, x_203);
lean_dec(x_202);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_205 = lean_unsigned_to_nat(0u);
x_206 = lean_nat_add(x_189, x_205);
lean_dec(x_189);
x_207 = lean_nat_add(x_206, x_203);
lean_dec(x_206);
lean_inc(x_174);
lean_ctor_set(x_176, 3, x_191);
lean_ctor_set(x_176, 2, x_175);
lean_ctor_set(x_176, 1, x_174);
lean_ctor_set(x_176, 0, x_207);
x_208 = !lean_is_exclusive(x_174);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_209 = lean_ctor_get(x_174, 3);
lean_dec(x_209);
x_210 = lean_ctor_get(x_174, 2);
lean_dec(x_210);
x_211 = lean_ctor_get(x_174, 1);
lean_dec(x_211);
x_212 = lean_ctor_get(x_174, 0);
lean_dec(x_212);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_nat_add(x_205, x_172);
lean_dec(x_172);
x_214 = lean_nat_add(x_213, x_203);
lean_dec(x_213);
lean_ctor_set(x_174, 3, x_3);
lean_ctor_set(x_174, 2, x_2);
lean_ctor_set(x_174, 1, x_193);
lean_ctor_set(x_174, 0, x_214);
lean_ctor_set(x_1, 3, x_174);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_193, 0);
lean_inc(x_215);
x_216 = lean_nat_add(x_215, x_172);
lean_dec(x_172);
lean_dec(x_215);
x_217 = lean_nat_add(x_216, x_203);
lean_dec(x_216);
lean_ctor_set(x_174, 3, x_3);
lean_ctor_set(x_174, 2, x_2);
lean_ctor_set(x_174, 1, x_193);
lean_ctor_set(x_174, 0, x_217);
lean_ctor_set(x_1, 3, x_174);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
}
else
{
lean_dec(x_174);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_nat_add(x_205, x_172);
lean_dec(x_172);
x_219 = lean_nat_add(x_218, x_203);
lean_dec(x_218);
x_220 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_193);
lean_ctor_set(x_220, 2, x_2);
lean_ctor_set(x_220, 3, x_3);
lean_ctor_set(x_1, 3, x_220);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_193, 0);
lean_inc(x_221);
x_222 = lean_nat_add(x_221, x_172);
lean_dec(x_172);
lean_dec(x_221);
x_223 = lean_nat_add(x_222, x_203);
lean_dec(x_222);
x_224 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_193);
lean_ctor_set(x_224, 2, x_2);
lean_ctor_set(x_224, 3, x_3);
lean_ctor_set(x_1, 3, x_224);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_225 = lean_ctor_get(x_191, 0);
lean_inc(x_225);
x_226 = lean_nat_add(x_189, x_225);
lean_dec(x_225);
lean_dec(x_189);
x_227 = lean_nat_add(x_226, x_203);
lean_dec(x_226);
lean_inc(x_174);
lean_ctor_set(x_176, 3, x_191);
lean_ctor_set(x_176, 2, x_175);
lean_ctor_set(x_176, 1, x_174);
lean_ctor_set(x_176, 0, x_227);
x_228 = !lean_is_exclusive(x_174);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_229 = lean_ctor_get(x_174, 3);
lean_dec(x_229);
x_230 = lean_ctor_get(x_174, 2);
lean_dec(x_230);
x_231 = lean_ctor_get(x_174, 1);
lean_dec(x_231);
x_232 = lean_ctor_get(x_174, 0);
lean_dec(x_232);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_unsigned_to_nat(0u);
x_234 = lean_nat_add(x_233, x_172);
lean_dec(x_172);
x_235 = lean_nat_add(x_234, x_203);
lean_dec(x_234);
lean_ctor_set(x_174, 3, x_3);
lean_ctor_set(x_174, 2, x_2);
lean_ctor_set(x_174, 1, x_193);
lean_ctor_set(x_174, 0, x_235);
lean_ctor_set(x_1, 3, x_174);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_ctor_get(x_193, 0);
lean_inc(x_236);
x_237 = lean_nat_add(x_236, x_172);
lean_dec(x_172);
lean_dec(x_236);
x_238 = lean_nat_add(x_237, x_203);
lean_dec(x_237);
lean_ctor_set(x_174, 3, x_3);
lean_ctor_set(x_174, 2, x_2);
lean_ctor_set(x_174, 1, x_193);
lean_ctor_set(x_174, 0, x_238);
lean_ctor_set(x_1, 3, x_174);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
}
else
{
lean_dec(x_174);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_239 = lean_unsigned_to_nat(0u);
x_240 = lean_nat_add(x_239, x_172);
lean_dec(x_172);
x_241 = lean_nat_add(x_240, x_203);
lean_dec(x_240);
x_242 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_193);
lean_ctor_set(x_242, 2, x_2);
lean_ctor_set(x_242, 3, x_3);
lean_ctor_set(x_1, 3, x_242);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_243 = lean_ctor_get(x_193, 0);
lean_inc(x_243);
x_244 = lean_nat_add(x_243, x_172);
lean_dec(x_172);
lean_dec(x_243);
x_245 = lean_nat_add(x_244, x_203);
lean_dec(x_244);
x_246 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_193);
lean_ctor_set(x_246, 2, x_2);
lean_ctor_set(x_246, 3, x_3);
lean_ctor_set(x_1, 3, x_246);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_204);
return x_1;
}
}
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_176);
x_247 = lean_nat_add(x_173, x_172);
lean_dec(x_173);
x_248 = lean_unsigned_to_nat(1u);
x_249 = lean_nat_add(x_247, x_248);
lean_dec(x_247);
if (lean_obj_tag(x_191) == 0)
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_250 = lean_unsigned_to_nat(0u);
x_251 = lean_nat_add(x_189, x_250);
lean_dec(x_189);
x_252 = lean_nat_add(x_251, x_248);
lean_dec(x_251);
lean_inc(x_174);
x_253 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_174);
lean_ctor_set(x_253, 2, x_175);
lean_ctor_set(x_253, 3, x_191);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 lean_ctor_release(x_174, 2);
 lean_ctor_release(x_174, 3);
 x_254 = x_174;
} else {
 lean_dec_ref(x_174);
 x_254 = lean_box(0);
}
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_255 = lean_nat_add(x_250, x_172);
lean_dec(x_172);
x_256 = lean_nat_add(x_255, x_248);
lean_dec(x_255);
if (lean_is_scalar(x_254)) {
 x_257 = lean_alloc_ctor(1, 4, 0);
} else {
 x_257 = x_254;
}
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_193);
lean_ctor_set(x_257, 2, x_2);
lean_ctor_set(x_257, 3, x_3);
lean_ctor_set(x_1, 3, x_257);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_253);
lean_ctor_set(x_1, 0, x_249);
return x_1;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_ctor_get(x_193, 0);
lean_inc(x_258);
x_259 = lean_nat_add(x_258, x_172);
lean_dec(x_172);
lean_dec(x_258);
x_260 = lean_nat_add(x_259, x_248);
lean_dec(x_259);
if (lean_is_scalar(x_254)) {
 x_261 = lean_alloc_ctor(1, 4, 0);
} else {
 x_261 = x_254;
}
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_193);
lean_ctor_set(x_261, 2, x_2);
lean_ctor_set(x_261, 3, x_3);
lean_ctor_set(x_1, 3, x_261);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_253);
lean_ctor_set(x_1, 0, x_249);
return x_1;
}
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_262 = lean_ctor_get(x_191, 0);
lean_inc(x_262);
x_263 = lean_nat_add(x_189, x_262);
lean_dec(x_262);
lean_dec(x_189);
x_264 = lean_nat_add(x_263, x_248);
lean_dec(x_263);
lean_inc(x_174);
x_265 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_174);
lean_ctor_set(x_265, 2, x_175);
lean_ctor_set(x_265, 3, x_191);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 lean_ctor_release(x_174, 2);
 lean_ctor_release(x_174, 3);
 x_266 = x_174;
} else {
 lean_dec_ref(x_174);
 x_266 = lean_box(0);
}
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_267 = lean_unsigned_to_nat(0u);
x_268 = lean_nat_add(x_267, x_172);
lean_dec(x_172);
x_269 = lean_nat_add(x_268, x_248);
lean_dec(x_268);
if (lean_is_scalar(x_266)) {
 x_270 = lean_alloc_ctor(1, 4, 0);
} else {
 x_270 = x_266;
}
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_193);
lean_ctor_set(x_270, 2, x_2);
lean_ctor_set(x_270, 3, x_3);
lean_ctor_set(x_1, 3, x_270);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_265);
lean_ctor_set(x_1, 0, x_249);
return x_1;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_193, 0);
lean_inc(x_271);
x_272 = lean_nat_add(x_271, x_172);
lean_dec(x_172);
lean_dec(x_271);
x_273 = lean_nat_add(x_272, x_248);
lean_dec(x_272);
if (lean_is_scalar(x_266)) {
 x_274 = lean_alloc_ctor(1, 4, 0);
} else {
 x_274 = x_266;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_193);
lean_ctor_set(x_274, 2, x_2);
lean_ctor_set(x_274, 3, x_3);
lean_ctor_set(x_1, 3, x_274);
lean_ctor_set(x_1, 2, x_192);
lean_ctor_set(x_1, 1, x_265);
lean_ctor_set(x_1, 0, x_249);
return x_1;
}
}
}
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; 
lean_dec(x_193);
lean_dec(x_192);
lean_dec(x_191);
lean_dec(x_189);
x_275 = lean_nat_add(x_173, x_172);
lean_dec(x_173);
x_276 = lean_unsigned_to_nat(1u);
x_277 = lean_nat_add(x_275, x_276);
lean_dec(x_275);
x_278 = lean_nat_add(x_172, x_190);
lean_dec(x_190);
lean_dec(x_172);
x_279 = lean_nat_add(x_278, x_276);
lean_dec(x_278);
lean_inc(x_3);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_176);
lean_ctor_set(x_1, 0, x_279);
x_280 = !lean_is_exclusive(x_3);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_281 = lean_ctor_get(x_3, 3);
lean_dec(x_281);
x_282 = lean_ctor_get(x_3, 2);
lean_dec(x_282);
x_283 = lean_ctor_get(x_3, 1);
lean_dec(x_283);
x_284 = lean_ctor_get(x_3, 0);
lean_dec(x_284);
lean_ctor_set(x_3, 3, x_1);
lean_ctor_set(x_3, 2, x_175);
lean_ctor_set(x_3, 1, x_174);
lean_ctor_set(x_3, 0, x_277);
return x_3;
}
else
{
lean_object* x_285; 
lean_dec(x_3);
x_285 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_285, 0, x_277);
lean_ctor_set(x_285, 1, x_174);
lean_ctor_set(x_285, 2, x_175);
lean_ctor_set(x_285, 3, x_1);
return x_285;
}
}
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_174) == 0)
{
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_173);
lean_dec(x_172);
lean_dec(x_3);
lean_dec(x_2);
return x_174;
}
else
{
if (lean_obj_tag(x_176) == 0)
{
lean_dec(x_175);
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_172);
lean_dec(x_3);
lean_dec(x_2);
return x_176;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_286 = lean_ctor_get(x_174, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_176, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_176, 1);
lean_inc(x_288);
x_289 = lean_ctor_get(x_176, 2);
lean_inc(x_289);
x_290 = lean_ctor_get(x_176, 3);
lean_inc(x_290);
x_291 = lean_unsigned_to_nat(2u);
x_292 = lean_nat_mul(x_291, x_286);
x_293 = lean_nat_dec_lt(x_287, x_292);
lean_dec(x_292);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_287);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 lean_ctor_release(x_176, 2);
 lean_ctor_release(x_176, 3);
 x_294 = x_176;
} else {
 lean_dec_ref(x_176);
 x_294 = lean_box(0);
}
x_295 = lean_nat_add(x_173, x_172);
lean_dec(x_173);
x_296 = lean_unsigned_to_nat(1u);
x_297 = lean_nat_add(x_295, x_296);
lean_dec(x_295);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_298 = lean_unsigned_to_nat(0u);
x_299 = lean_nat_add(x_286, x_298);
lean_dec(x_286);
x_300 = lean_nat_add(x_299, x_296);
lean_dec(x_299);
lean_inc(x_174);
if (lean_is_scalar(x_294)) {
 x_301 = lean_alloc_ctor(1, 4, 0);
} else {
 x_301 = x_294;
}
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_174);
lean_ctor_set(x_301, 2, x_175);
lean_ctor_set(x_301, 3, x_288);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 lean_ctor_release(x_174, 2);
 lean_ctor_release(x_174, 3);
 x_302 = x_174;
} else {
 lean_dec_ref(x_174);
 x_302 = lean_box(0);
}
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_303 = lean_nat_add(x_298, x_172);
lean_dec(x_172);
x_304 = lean_nat_add(x_303, x_296);
lean_dec(x_303);
if (lean_is_scalar(x_302)) {
 x_305 = lean_alloc_ctor(1, 4, 0);
} else {
 x_305 = x_302;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_290);
lean_ctor_set(x_305, 2, x_2);
lean_ctor_set(x_305, 3, x_3);
x_306 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_306, 0, x_297);
lean_ctor_set(x_306, 1, x_301);
lean_ctor_set(x_306, 2, x_289);
lean_ctor_set(x_306, 3, x_305);
return x_306;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_307 = lean_ctor_get(x_290, 0);
lean_inc(x_307);
x_308 = lean_nat_add(x_307, x_172);
lean_dec(x_172);
lean_dec(x_307);
x_309 = lean_nat_add(x_308, x_296);
lean_dec(x_308);
if (lean_is_scalar(x_302)) {
 x_310 = lean_alloc_ctor(1, 4, 0);
} else {
 x_310 = x_302;
}
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_290);
lean_ctor_set(x_310, 2, x_2);
lean_ctor_set(x_310, 3, x_3);
x_311 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_311, 0, x_297);
lean_ctor_set(x_311, 1, x_301);
lean_ctor_set(x_311, 2, x_289);
lean_ctor_set(x_311, 3, x_310);
return x_311;
}
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_312 = lean_ctor_get(x_288, 0);
lean_inc(x_312);
x_313 = lean_nat_add(x_286, x_312);
lean_dec(x_312);
lean_dec(x_286);
x_314 = lean_nat_add(x_313, x_296);
lean_dec(x_313);
lean_inc(x_174);
if (lean_is_scalar(x_294)) {
 x_315 = lean_alloc_ctor(1, 4, 0);
} else {
 x_315 = x_294;
}
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_174);
lean_ctor_set(x_315, 2, x_175);
lean_ctor_set(x_315, 3, x_288);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 lean_ctor_release(x_174, 2);
 lean_ctor_release(x_174, 3);
 x_316 = x_174;
} else {
 lean_dec_ref(x_174);
 x_316 = lean_box(0);
}
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_317 = lean_unsigned_to_nat(0u);
x_318 = lean_nat_add(x_317, x_172);
lean_dec(x_172);
x_319 = lean_nat_add(x_318, x_296);
lean_dec(x_318);
if (lean_is_scalar(x_316)) {
 x_320 = lean_alloc_ctor(1, 4, 0);
} else {
 x_320 = x_316;
}
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_290);
lean_ctor_set(x_320, 2, x_2);
lean_ctor_set(x_320, 3, x_3);
x_321 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_321, 0, x_297);
lean_ctor_set(x_321, 1, x_315);
lean_ctor_set(x_321, 2, x_289);
lean_ctor_set(x_321, 3, x_320);
return x_321;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_322 = lean_ctor_get(x_290, 0);
lean_inc(x_322);
x_323 = lean_nat_add(x_322, x_172);
lean_dec(x_172);
lean_dec(x_322);
x_324 = lean_nat_add(x_323, x_296);
lean_dec(x_323);
if (lean_is_scalar(x_316)) {
 x_325 = lean_alloc_ctor(1, 4, 0);
} else {
 x_325 = x_316;
}
lean_ctor_set(x_325, 0, x_324);
lean_ctor_set(x_325, 1, x_290);
lean_ctor_set(x_325, 2, x_2);
lean_ctor_set(x_325, 3, x_3);
x_326 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_326, 0, x_297);
lean_ctor_set(x_326, 1, x_315);
lean_ctor_set(x_326, 2, x_289);
lean_ctor_set(x_326, 3, x_325);
return x_326;
}
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
lean_dec(x_290);
lean_dec(x_289);
lean_dec(x_288);
lean_dec(x_286);
x_327 = lean_nat_add(x_173, x_172);
lean_dec(x_173);
x_328 = lean_unsigned_to_nat(1u);
x_329 = lean_nat_add(x_327, x_328);
lean_dec(x_327);
x_330 = lean_nat_add(x_172, x_287);
lean_dec(x_287);
lean_dec(x_172);
x_331 = lean_nat_add(x_330, x_328);
lean_dec(x_330);
lean_inc(x_3);
x_332 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_176);
lean_ctor_set(x_332, 2, x_2);
lean_ctor_set(x_332, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_333 = x_3;
} else {
 lean_dec_ref(x_3);
 x_333 = lean_box(0);
}
if (lean_is_scalar(x_333)) {
 x_334 = lean_alloc_ctor(1, 4, 0);
} else {
 x_334 = x_333;
}
lean_ctor_set(x_334, 0, x_329);
lean_ctor_set(x_334, 1, x_174);
lean_ctor_set(x_334, 2, x_175);
lean_ctor_set(x_334, 3, x_332);
return x_334;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceL(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balanceL___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceR___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_3, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set(x_10, 3, x_3);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_3, 3);
lean_dec(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_3, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_8, 2);
x_17 = lean_ctor_get(x_8, 3);
lean_dec(x_17);
x_18 = lean_ctor_get(x_8, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 0);
lean_dec(x_19);
x_20 = lean_box(0);
x_21 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_8, 3, x_20);
lean_ctor_set(x_8, 2, x_2);
lean_ctor_set(x_8, 1, x_20);
lean_ctor_set(x_8, 0, x_21);
lean_ctor_set(x_3, 3, x_20);
lean_ctor_set(x_3, 1, x_20);
lean_ctor_set(x_3, 0, x_21);
x_22 = lean_unsigned_to_nat(3u);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_8);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_8, 2);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_box(0);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_25);
lean_ctor_set(x_3, 3, x_25);
lean_ctor_set(x_3, 1, x_25);
lean_ctor_set(x_3, 0, x_26);
x_28 = lean_unsigned_to_nat(3u);
x_29 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_3);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_3, 2);
lean_inc(x_30);
lean_dec(x_3);
x_31 = lean_ctor_get(x_8, 2);
lean_inc(x_31);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 lean_ctor_release(x_8, 2);
 lean_ctor_release(x_8, 3);
 x_32 = x_8;
} else {
 lean_dec_ref(x_8);
 x_32 = lean_box(0);
}
x_33 = lean_box(0);
x_34 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_32)) {
 x_35 = lean_alloc_ctor(1, 4, 0);
} else {
 x_35 = x_32;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_2);
lean_ctor_set(x_35, 3, x_33);
x_36 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_30);
lean_ctor_set(x_36, 3, x_33);
x_37 = lean_unsigned_to_nat(3u);
x_38 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
lean_ctor_set(x_38, 2, x_31);
lean_ctor_set(x_38, 3, x_36);
return x_38;
}
}
}
else
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_3);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_3, 2);
x_42 = lean_ctor_get(x_3, 3);
lean_dec(x_42);
x_43 = lean_ctor_get(x_3, 1);
lean_dec(x_43);
x_44 = lean_ctor_get(x_3, 0);
lean_dec(x_44);
x_45 = lean_box(0);
x_46 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_3, 3, x_45);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_45);
lean_ctor_set(x_3, 0, x_46);
x_47 = lean_unsigned_to_nat(3u);
x_48 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
lean_ctor_set(x_48, 2, x_41);
lean_ctor_set(x_48, 3, x_7);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_3, 2);
lean_inc(x_49);
lean_dec(x_3);
x_50 = lean_box(0);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set(x_52, 2, x_2);
lean_ctor_set(x_52, 3, x_50);
x_53 = lean_unsigned_to_nat(3u);
x_54 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
lean_ctor_set(x_54, 2, x_49);
lean_ctor_set(x_54, 3, x_7);
return x_54;
}
}
else
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_3);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_56 = lean_ctor_get(x_3, 0);
x_57 = lean_ctor_get(x_3, 2);
x_58 = lean_ctor_get(x_3, 3);
lean_dec(x_58);
x_59 = lean_ctor_get(x_3, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_7, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_39, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_39, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_39, 2);
lean_inc(x_63);
x_64 = lean_ctor_get(x_39, 3);
lean_inc(x_64);
x_65 = lean_unsigned_to_nat(2u);
x_66 = lean_nat_mul(x_65, x_60);
x_67 = lean_nat_dec_lt(x_61, x_66);
lean_dec(x_66);
if (x_67 == 0)
{
uint8_t x_68; 
lean_dec(x_61);
x_68 = !lean_is_exclusive(x_39);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_39, 3);
lean_dec(x_69);
x_70 = lean_ctor_get(x_39, 2);
lean_dec(x_70);
x_71 = lean_ctor_get(x_39, 1);
lean_dec(x_71);
x_72 = lean_ctor_get(x_39, 0);
lean_dec(x_72);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_add(x_56, x_73);
lean_dec(x_56);
if (lean_obj_tag(x_62) == 0)
{
lean_ctor_set(x_39, 3, x_62);
lean_ctor_set(x_39, 2, x_2);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 0, x_73);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_nat_add(x_75, x_60);
lean_dec(x_60);
x_77 = lean_nat_add(x_76, x_73);
lean_dec(x_76);
lean_inc(x_7);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_77);
x_78 = !lean_is_exclusive(x_7);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_7, 3);
lean_dec(x_79);
x_80 = lean_ctor_get(x_7, 2);
lean_dec(x_80);
x_81 = lean_ctor_get(x_7, 1);
lean_dec(x_81);
x_82 = lean_ctor_get(x_7, 0);
lean_dec(x_82);
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 2, x_63);
lean_ctor_set(x_7, 1, x_39);
lean_ctor_set(x_7, 0, x_74);
return x_7;
}
else
{
lean_object* x_83; 
lean_dec(x_7);
x_83 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_39);
lean_ctor_set(x_83, 2, x_63);
lean_ctor_set(x_83, 3, x_3);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_84 = lean_ctor_get(x_64, 0);
lean_inc(x_84);
x_85 = lean_nat_add(x_84, x_60);
lean_dec(x_60);
lean_dec(x_84);
x_86 = lean_nat_add(x_85, x_73);
lean_dec(x_85);
lean_inc(x_64);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_86);
x_87 = !lean_is_exclusive(x_64);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_64, 3);
lean_dec(x_88);
x_89 = lean_ctor_get(x_64, 2);
lean_dec(x_89);
x_90 = lean_ctor_get(x_64, 1);
lean_dec(x_90);
x_91 = lean_ctor_get(x_64, 0);
lean_dec(x_91);
lean_ctor_set(x_64, 3, x_3);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 1, x_39);
lean_ctor_set(x_64, 0, x_74);
return x_64;
}
else
{
lean_object* x_92; 
lean_dec(x_64);
x_92 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_92, 0, x_74);
lean_ctor_set(x_92, 1, x_39);
lean_ctor_set(x_92, 2, x_63);
lean_ctor_set(x_92, 3, x_3);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_93 = lean_ctor_get(x_62, 0);
lean_inc(x_93);
x_94 = lean_nat_add(x_93, x_73);
lean_dec(x_93);
lean_inc(x_62);
lean_ctor_set(x_39, 3, x_62);
lean_ctor_set(x_39, 2, x_2);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 0, x_94);
x_95 = !lean_is_exclusive(x_62);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_62, 3);
lean_dec(x_96);
x_97 = lean_ctor_get(x_62, 2);
lean_dec(x_97);
x_98 = lean_ctor_get(x_62, 1);
lean_dec(x_98);
x_99 = lean_ctor_get(x_62, 0);
lean_dec(x_99);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_nat_add(x_100, x_60);
lean_dec(x_60);
x_102 = lean_nat_add(x_101, x_73);
lean_dec(x_101);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_102);
lean_ctor_set(x_62, 3, x_3);
lean_ctor_set(x_62, 2, x_63);
lean_ctor_set(x_62, 1, x_39);
lean_ctor_set(x_62, 0, x_74);
return x_62;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_free_object(x_62);
x_103 = lean_ctor_get(x_64, 0);
lean_inc(x_103);
x_104 = lean_nat_add(x_103, x_60);
lean_dec(x_60);
lean_dec(x_103);
x_105 = lean_nat_add(x_104, x_73);
lean_dec(x_104);
lean_inc(x_64);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_105);
x_106 = !lean_is_exclusive(x_64);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_64, 3);
lean_dec(x_107);
x_108 = lean_ctor_get(x_64, 2);
lean_dec(x_108);
x_109 = lean_ctor_get(x_64, 1);
lean_dec(x_109);
x_110 = lean_ctor_get(x_64, 0);
lean_dec(x_110);
lean_ctor_set(x_64, 3, x_3);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 1, x_39);
lean_ctor_set(x_64, 0, x_74);
return x_64;
}
else
{
lean_object* x_111; 
lean_dec(x_64);
x_111 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_111, 0, x_74);
lean_ctor_set(x_111, 1, x_39);
lean_ctor_set(x_111, 2, x_63);
lean_ctor_set(x_111, 3, x_3);
return x_111;
}
}
}
else
{
lean_dec(x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_unsigned_to_nat(0u);
x_113 = lean_nat_add(x_112, x_60);
lean_dec(x_60);
x_114 = lean_nat_add(x_113, x_73);
lean_dec(x_113);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_114);
x_115 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_115, 0, x_74);
lean_ctor_set(x_115, 1, x_39);
lean_ctor_set(x_115, 2, x_63);
lean_ctor_set(x_115, 3, x_3);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_64, 0);
lean_inc(x_116);
x_117 = lean_nat_add(x_116, x_60);
lean_dec(x_60);
lean_dec(x_116);
x_118 = lean_nat_add(x_117, x_73);
lean_dec(x_117);
lean_inc(x_64);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_118);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 lean_ctor_release(x_64, 2);
 lean_ctor_release(x_64, 3);
 x_119 = x_64;
} else {
 lean_dec_ref(x_64);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 4, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_74);
lean_ctor_set(x_120, 1, x_39);
lean_ctor_set(x_120, 2, x_63);
lean_ctor_set(x_120, 3, x_3);
return x_120;
}
}
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_39);
x_121 = lean_unsigned_to_nat(1u);
x_122 = lean_nat_add(x_56, x_121);
lean_dec(x_56);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_123; 
x_123 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_1);
lean_ctor_set(x_123, 2, x_2);
lean_ctor_set(x_123, 3, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_unsigned_to_nat(0u);
x_125 = lean_nat_add(x_124, x_60);
lean_dec(x_60);
x_126 = lean_nat_add(x_125, x_121);
lean_dec(x_125);
lean_inc(x_7);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_126);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_127 = x_7;
} else {
 lean_dec_ref(x_7);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 4, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_122);
lean_ctor_set(x_128, 1, x_123);
lean_ctor_set(x_128, 2, x_63);
lean_ctor_set(x_128, 3, x_3);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_64, 0);
lean_inc(x_129);
x_130 = lean_nat_add(x_129, x_60);
lean_dec(x_60);
lean_dec(x_129);
x_131 = lean_nat_add(x_130, x_121);
lean_dec(x_130);
lean_inc(x_64);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_131);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 lean_ctor_release(x_64, 2);
 lean_ctor_release(x_64, 3);
 x_132 = x_64;
} else {
 lean_dec_ref(x_64);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 4, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_122);
lean_ctor_set(x_133, 1, x_123);
lean_ctor_set(x_133, 2, x_63);
lean_ctor_set(x_133, 3, x_3);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_134 = lean_ctor_get(x_62, 0);
lean_inc(x_134);
x_135 = lean_nat_add(x_134, x_121);
lean_dec(x_134);
lean_inc(x_62);
x_136 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_1);
lean_ctor_set(x_136, 2, x_2);
lean_ctor_set(x_136, 3, x_62);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 lean_ctor_release(x_62, 3);
 x_137 = x_62;
} else {
 lean_dec_ref(x_62);
 x_137 = lean_box(0);
}
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_unsigned_to_nat(0u);
x_139 = lean_nat_add(x_138, x_60);
lean_dec(x_60);
x_140 = lean_nat_add(x_139, x_121);
lean_dec(x_139);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_140);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(1, 4, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_122);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_63);
lean_ctor_set(x_141, 3, x_3);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_137);
x_142 = lean_ctor_get(x_64, 0);
lean_inc(x_142);
x_143 = lean_nat_add(x_142, x_60);
lean_dec(x_60);
lean_dec(x_142);
x_144 = lean_nat_add(x_143, x_121);
lean_dec(x_143);
lean_inc(x_64);
lean_ctor_set(x_3, 1, x_64);
lean_ctor_set(x_3, 0, x_144);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 lean_ctor_release(x_64, 2);
 lean_ctor_release(x_64, 3);
 x_145 = x_64;
} else {
 lean_dec_ref(x_64);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 4, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_122);
lean_ctor_set(x_146, 1, x_136);
lean_ctor_set(x_146, 2, x_63);
lean_ctor_set(x_146, 3, x_3);
return x_146;
}
}
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_60);
x_147 = lean_unsigned_to_nat(1u);
x_148 = lean_nat_add(x_56, x_147);
lean_dec(x_56);
x_149 = lean_nat_add(x_61, x_147);
lean_dec(x_61);
lean_ctor_set(x_3, 3, x_39);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_149);
x_150 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_3);
lean_ctor_set(x_150, 2, x_57);
lean_ctor_set(x_150, 3, x_7);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_151 = lean_ctor_get(x_3, 0);
x_152 = lean_ctor_get(x_3, 2);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_3);
x_153 = lean_ctor_get(x_7, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_39, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_39, 1);
lean_inc(x_155);
x_156 = lean_ctor_get(x_39, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_39, 3);
lean_inc(x_157);
x_158 = lean_unsigned_to_nat(2u);
x_159 = lean_nat_mul(x_158, x_153);
x_160 = lean_nat_dec_lt(x_154, x_159);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_154);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 lean_ctor_release(x_39, 3);
 x_161 = x_39;
} else {
 lean_dec_ref(x_39);
 x_161 = lean_box(0);
}
x_162 = lean_unsigned_to_nat(1u);
x_163 = lean_nat_add(x_151, x_162);
lean_dec(x_151);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_164; 
if (lean_is_scalar(x_161)) {
 x_164 = lean_alloc_ctor(1, 4, 0);
} else {
 x_164 = x_161;
}
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_1);
lean_ctor_set(x_164, 2, x_2);
lean_ctor_set(x_164, 3, x_155);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_nat_add(x_165, x_153);
lean_dec(x_153);
x_167 = lean_nat_add(x_166, x_162);
lean_dec(x_166);
lean_inc(x_7);
x_168 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_157);
lean_ctor_set(x_168, 2, x_152);
lean_ctor_set(x_168, 3, x_7);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_169 = x_7;
} else {
 lean_dec_ref(x_7);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(1, 4, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_163);
lean_ctor_set(x_170, 1, x_164);
lean_ctor_set(x_170, 2, x_156);
lean_ctor_set(x_170, 3, x_168);
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_171 = lean_ctor_get(x_157, 0);
lean_inc(x_171);
x_172 = lean_nat_add(x_171, x_153);
lean_dec(x_153);
lean_dec(x_171);
x_173 = lean_nat_add(x_172, x_162);
lean_dec(x_172);
lean_inc(x_157);
x_174 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_157);
lean_ctor_set(x_174, 2, x_152);
lean_ctor_set(x_174, 3, x_7);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 lean_ctor_release(x_157, 2);
 lean_ctor_release(x_157, 3);
 x_175 = x_157;
} else {
 lean_dec_ref(x_157);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_163);
lean_ctor_set(x_176, 1, x_164);
lean_ctor_set(x_176, 2, x_156);
lean_ctor_set(x_176, 3, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_155, 0);
lean_inc(x_177);
x_178 = lean_nat_add(x_177, x_162);
lean_dec(x_177);
lean_inc(x_155);
if (lean_is_scalar(x_161)) {
 x_179 = lean_alloc_ctor(1, 4, 0);
} else {
 x_179 = x_161;
}
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_1);
lean_ctor_set(x_179, 2, x_2);
lean_ctor_set(x_179, 3, x_155);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 lean_ctor_release(x_155, 2);
 lean_ctor_release(x_155, 3);
 x_180 = x_155;
} else {
 lean_dec_ref(x_155);
 x_180 = lean_box(0);
}
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_unsigned_to_nat(0u);
x_182 = lean_nat_add(x_181, x_153);
lean_dec(x_153);
x_183 = lean_nat_add(x_182, x_162);
lean_dec(x_182);
x_184 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_157);
lean_ctor_set(x_184, 2, x_152);
lean_ctor_set(x_184, 3, x_7);
if (lean_is_scalar(x_180)) {
 x_185 = lean_alloc_ctor(1, 4, 0);
} else {
 x_185 = x_180;
}
lean_ctor_set(x_185, 0, x_163);
lean_ctor_set(x_185, 1, x_179);
lean_ctor_set(x_185, 2, x_156);
lean_ctor_set(x_185, 3, x_184);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_180);
x_186 = lean_ctor_get(x_157, 0);
lean_inc(x_186);
x_187 = lean_nat_add(x_186, x_153);
lean_dec(x_153);
lean_dec(x_186);
x_188 = lean_nat_add(x_187, x_162);
lean_dec(x_187);
lean_inc(x_157);
x_189 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_157);
lean_ctor_set(x_189, 2, x_152);
lean_ctor_set(x_189, 3, x_7);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 lean_ctor_release(x_157, 2);
 lean_ctor_release(x_157, 3);
 x_190 = x_157;
} else {
 lean_dec_ref(x_157);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(1, 4, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_163);
lean_ctor_set(x_191, 1, x_179);
lean_ctor_set(x_191, 2, x_156);
lean_ctor_set(x_191, 3, x_189);
return x_191;
}
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_155);
lean_dec(x_153);
x_192 = lean_unsigned_to_nat(1u);
x_193 = lean_nat_add(x_151, x_192);
lean_dec(x_151);
x_194 = lean_nat_add(x_154, x_192);
lean_dec(x_154);
x_195 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_1);
lean_ctor_set(x_195, 2, x_2);
lean_ctor_set(x_195, 3, x_39);
x_196 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_195);
lean_ctor_set(x_196, 2, x_152);
lean_ctor_set(x_196, 3, x_7);
return x_196;
}
}
}
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_197 = lean_ctor_get(x_1, 0);
lean_inc(x_197);
x_198 = lean_unsigned_to_nat(1u);
x_199 = lean_nat_add(x_197, x_198);
lean_dec(x_197);
x_200 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_1);
lean_ctor_set(x_200, 2, x_2);
lean_ctor_set(x_200, 3, x_3);
return x_200;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_201 = lean_ctor_get(x_1, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_3, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_3, 1);
lean_inc(x_203);
x_204 = lean_ctor_get(x_3, 2);
lean_inc(x_204);
x_205 = lean_ctor_get(x_3, 3);
lean_inc(x_205);
x_206 = lean_unsigned_to_nat(3u);
x_207 = lean_nat_mul(x_206, x_201);
x_208 = lean_nat_dec_lt(x_207, x_202);
lean_dec(x_207);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_203);
x_209 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
lean_dec(x_201);
x_210 = lean_unsigned_to_nat(1u);
x_211 = lean_nat_add(x_209, x_210);
lean_dec(x_209);
x_212 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_1);
lean_ctor_set(x_212, 2, x_2);
lean_ctor_set(x_212, 3, x_3);
return x_212;
}
else
{
uint8_t x_213; 
x_213 = !lean_is_exclusive(x_3);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_214 = lean_ctor_get(x_3, 3);
lean_dec(x_214);
x_215 = lean_ctor_get(x_3, 2);
lean_dec(x_215);
x_216 = lean_ctor_get(x_3, 1);
lean_dec(x_216);
x_217 = lean_ctor_get(x_3, 0);
lean_dec(x_217);
if (lean_obj_tag(x_205) == 0)
{
lean_free_object(x_3);
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_2);
lean_dec(x_1);
return x_205;
}
else
{
if (lean_obj_tag(x_203) == 0)
{
lean_free_object(x_3);
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_2);
lean_dec(x_1);
return x_203;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_218 = lean_ctor_get(x_205, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_203, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_203, 1);
lean_inc(x_220);
x_221 = lean_ctor_get(x_203, 2);
lean_inc(x_221);
x_222 = lean_ctor_get(x_203, 3);
lean_inc(x_222);
x_223 = lean_unsigned_to_nat(2u);
x_224 = lean_nat_mul(x_223, x_218);
x_225 = lean_nat_dec_lt(x_219, x_224);
lean_dec(x_224);
if (x_225 == 0)
{
uint8_t x_226; 
lean_dec(x_219);
x_226 = !lean_is_exclusive(x_203);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_227 = lean_ctor_get(x_203, 3);
lean_dec(x_227);
x_228 = lean_ctor_get(x_203, 2);
lean_dec(x_228);
x_229 = lean_ctor_get(x_203, 1);
lean_dec(x_229);
x_230 = lean_ctor_get(x_203, 0);
lean_dec(x_230);
x_231 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
x_232 = lean_unsigned_to_nat(1u);
x_233 = lean_nat_add(x_231, x_232);
lean_dec(x_231);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; 
x_234 = lean_unsigned_to_nat(0u);
x_235 = lean_nat_add(x_201, x_234);
lean_dec(x_201);
x_236 = lean_nat_add(x_235, x_232);
lean_dec(x_235);
lean_inc(x_1);
lean_ctor_set(x_203, 3, x_220);
lean_ctor_set(x_203, 2, x_2);
lean_ctor_set(x_203, 1, x_1);
lean_ctor_set(x_203, 0, x_236);
x_237 = !lean_is_exclusive(x_1);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_238 = lean_ctor_get(x_1, 3);
lean_dec(x_238);
x_239 = lean_ctor_get(x_1, 2);
lean_dec(x_239);
x_240 = lean_ctor_get(x_1, 1);
lean_dec(x_240);
x_241 = lean_ctor_get(x_1, 0);
lean_dec(x_241);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_nat_add(x_234, x_218);
lean_dec(x_218);
x_243 = lean_nat_add(x_242, x_232);
lean_dec(x_242);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_243);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_221);
lean_ctor_set(x_1, 1, x_203);
lean_ctor_set(x_1, 0, x_233);
return x_1;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_222, 0);
lean_inc(x_244);
x_245 = lean_nat_add(x_244, x_218);
lean_dec(x_218);
lean_dec(x_244);
x_246 = lean_nat_add(x_245, x_232);
lean_dec(x_245);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_246);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_221);
lean_ctor_set(x_1, 1, x_203);
lean_ctor_set(x_1, 0, x_233);
return x_1;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_nat_add(x_234, x_218);
lean_dec(x_218);
x_248 = lean_nat_add(x_247, x_232);
lean_dec(x_247);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_248);
x_249 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_249, 0, x_233);
lean_ctor_set(x_249, 1, x_203);
lean_ctor_set(x_249, 2, x_221);
lean_ctor_set(x_249, 3, x_3);
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_250 = lean_ctor_get(x_222, 0);
lean_inc(x_250);
x_251 = lean_nat_add(x_250, x_218);
lean_dec(x_218);
lean_dec(x_250);
x_252 = lean_nat_add(x_251, x_232);
lean_dec(x_251);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_252);
x_253 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_253, 0, x_233);
lean_ctor_set(x_253, 1, x_203);
lean_ctor_set(x_253, 2, x_221);
lean_ctor_set(x_253, 3, x_3);
return x_253;
}
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; uint8_t x_257; 
x_254 = lean_ctor_get(x_220, 0);
lean_inc(x_254);
x_255 = lean_nat_add(x_201, x_254);
lean_dec(x_254);
lean_dec(x_201);
x_256 = lean_nat_add(x_255, x_232);
lean_dec(x_255);
lean_inc(x_1);
lean_ctor_set(x_203, 3, x_220);
lean_ctor_set(x_203, 2, x_2);
lean_ctor_set(x_203, 1, x_1);
lean_ctor_set(x_203, 0, x_256);
x_257 = !lean_is_exclusive(x_1);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_ctor_get(x_1, 3);
lean_dec(x_258);
x_259 = lean_ctor_get(x_1, 2);
lean_dec(x_259);
x_260 = lean_ctor_get(x_1, 1);
lean_dec(x_260);
x_261 = lean_ctor_get(x_1, 0);
lean_dec(x_261);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_unsigned_to_nat(0u);
x_263 = lean_nat_add(x_262, x_218);
lean_dec(x_218);
x_264 = lean_nat_add(x_263, x_232);
lean_dec(x_263);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_264);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_221);
lean_ctor_set(x_1, 1, x_203);
lean_ctor_set(x_1, 0, x_233);
return x_1;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_265 = lean_ctor_get(x_222, 0);
lean_inc(x_265);
x_266 = lean_nat_add(x_265, x_218);
lean_dec(x_218);
lean_dec(x_265);
x_267 = lean_nat_add(x_266, x_232);
lean_dec(x_266);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_267);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_221);
lean_ctor_set(x_1, 1, x_203);
lean_ctor_set(x_1, 0, x_233);
return x_1;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_268 = lean_unsigned_to_nat(0u);
x_269 = lean_nat_add(x_268, x_218);
lean_dec(x_218);
x_270 = lean_nat_add(x_269, x_232);
lean_dec(x_269);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_270);
x_271 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_271, 0, x_233);
lean_ctor_set(x_271, 1, x_203);
lean_ctor_set(x_271, 2, x_221);
lean_ctor_set(x_271, 3, x_3);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_272 = lean_ctor_get(x_222, 0);
lean_inc(x_272);
x_273 = lean_nat_add(x_272, x_218);
lean_dec(x_218);
lean_dec(x_272);
x_274 = lean_nat_add(x_273, x_232);
lean_dec(x_273);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_274);
x_275 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_275, 0, x_233);
lean_ctor_set(x_275, 1, x_203);
lean_ctor_set(x_275, 2, x_221);
lean_ctor_set(x_275, 3, x_3);
return x_275;
}
}
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_203);
x_276 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
x_277 = lean_unsigned_to_nat(1u);
x_278 = lean_nat_add(x_276, x_277);
lean_dec(x_276);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_279 = lean_unsigned_to_nat(0u);
x_280 = lean_nat_add(x_201, x_279);
lean_dec(x_201);
x_281 = lean_nat_add(x_280, x_277);
lean_dec(x_280);
lean_inc(x_1);
x_282 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_1);
lean_ctor_set(x_282, 2, x_2);
lean_ctor_set(x_282, 3, x_220);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_283 = x_1;
} else {
 lean_dec_ref(x_1);
 x_283 = lean_box(0);
}
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_nat_add(x_279, x_218);
lean_dec(x_218);
x_285 = lean_nat_add(x_284, x_277);
lean_dec(x_284);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_285);
if (lean_is_scalar(x_283)) {
 x_286 = lean_alloc_ctor(1, 4, 0);
} else {
 x_286 = x_283;
}
lean_ctor_set(x_286, 0, x_278);
lean_ctor_set(x_286, 1, x_282);
lean_ctor_set(x_286, 2, x_221);
lean_ctor_set(x_286, 3, x_3);
return x_286;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_287 = lean_ctor_get(x_222, 0);
lean_inc(x_287);
x_288 = lean_nat_add(x_287, x_218);
lean_dec(x_218);
lean_dec(x_287);
x_289 = lean_nat_add(x_288, x_277);
lean_dec(x_288);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_289);
if (lean_is_scalar(x_283)) {
 x_290 = lean_alloc_ctor(1, 4, 0);
} else {
 x_290 = x_283;
}
lean_ctor_set(x_290, 0, x_278);
lean_ctor_set(x_290, 1, x_282);
lean_ctor_set(x_290, 2, x_221);
lean_ctor_set(x_290, 3, x_3);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_291 = lean_ctor_get(x_220, 0);
lean_inc(x_291);
x_292 = lean_nat_add(x_201, x_291);
lean_dec(x_291);
lean_dec(x_201);
x_293 = lean_nat_add(x_292, x_277);
lean_dec(x_292);
lean_inc(x_1);
x_294 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_1);
lean_ctor_set(x_294, 2, x_2);
lean_ctor_set(x_294, 3, x_220);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_295 = x_1;
} else {
 lean_dec_ref(x_1);
 x_295 = lean_box(0);
}
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_296 = lean_unsigned_to_nat(0u);
x_297 = lean_nat_add(x_296, x_218);
lean_dec(x_218);
x_298 = lean_nat_add(x_297, x_277);
lean_dec(x_297);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_298);
if (lean_is_scalar(x_295)) {
 x_299 = lean_alloc_ctor(1, 4, 0);
} else {
 x_299 = x_295;
}
lean_ctor_set(x_299, 0, x_278);
lean_ctor_set(x_299, 1, x_294);
lean_ctor_set(x_299, 2, x_221);
lean_ctor_set(x_299, 3, x_3);
return x_299;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_300 = lean_ctor_get(x_222, 0);
lean_inc(x_300);
x_301 = lean_nat_add(x_300, x_218);
lean_dec(x_218);
lean_dec(x_300);
x_302 = lean_nat_add(x_301, x_277);
lean_dec(x_301);
lean_ctor_set(x_3, 1, x_222);
lean_ctor_set(x_3, 0, x_302);
if (lean_is_scalar(x_295)) {
 x_303 = lean_alloc_ctor(1, 4, 0);
} else {
 x_303 = x_295;
}
lean_ctor_set(x_303, 0, x_278);
lean_ctor_set(x_303, 1, x_294);
lean_ctor_set(x_303, 2, x_221);
lean_ctor_set(x_303, 3, x_3);
return x_303;
}
}
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; uint8_t x_309; 
lean_dec(x_222);
lean_dec(x_221);
lean_dec(x_220);
lean_dec(x_218);
x_304 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
x_305 = lean_unsigned_to_nat(1u);
x_306 = lean_nat_add(x_304, x_305);
lean_dec(x_304);
x_307 = lean_nat_add(x_201, x_219);
lean_dec(x_219);
lean_dec(x_201);
x_308 = lean_nat_add(x_307, x_305);
lean_dec(x_307);
lean_inc(x_1);
lean_ctor_set(x_3, 3, x_203);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_308);
x_309 = !lean_is_exclusive(x_1);
if (x_309 == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_310 = lean_ctor_get(x_1, 3);
lean_dec(x_310);
x_311 = lean_ctor_get(x_1, 2);
lean_dec(x_311);
x_312 = lean_ctor_get(x_1, 1);
lean_dec(x_312);
x_313 = lean_ctor_get(x_1, 0);
lean_dec(x_313);
lean_ctor_set(x_1, 3, x_205);
lean_ctor_set(x_1, 2, x_204);
lean_ctor_set(x_1, 1, x_3);
lean_ctor_set(x_1, 0, x_306);
return x_1;
}
else
{
lean_object* x_314; 
lean_dec(x_1);
x_314 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_314, 0, x_306);
lean_ctor_set(x_314, 1, x_3);
lean_ctor_set(x_314, 2, x_204);
lean_ctor_set(x_314, 3, x_205);
return x_314;
}
}
}
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_205) == 0)
{
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_2);
lean_dec(x_1);
return x_205;
}
else
{
if (lean_obj_tag(x_203) == 0)
{
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_2);
lean_dec(x_1);
return x_203;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_315 = lean_ctor_get(x_205, 0);
lean_inc(x_315);
x_316 = lean_ctor_get(x_203, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_203, 1);
lean_inc(x_317);
x_318 = lean_ctor_get(x_203, 2);
lean_inc(x_318);
x_319 = lean_ctor_get(x_203, 3);
lean_inc(x_319);
x_320 = lean_unsigned_to_nat(2u);
x_321 = lean_nat_mul(x_320, x_315);
x_322 = lean_nat_dec_lt(x_316, x_321);
lean_dec(x_321);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_316);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 lean_ctor_release(x_203, 2);
 lean_ctor_release(x_203, 3);
 x_323 = x_203;
} else {
 lean_dec_ref(x_203);
 x_323 = lean_box(0);
}
x_324 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
x_325 = lean_unsigned_to_nat(1u);
x_326 = lean_nat_add(x_324, x_325);
lean_dec(x_324);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_327 = lean_unsigned_to_nat(0u);
x_328 = lean_nat_add(x_201, x_327);
lean_dec(x_201);
x_329 = lean_nat_add(x_328, x_325);
lean_dec(x_328);
lean_inc(x_1);
if (lean_is_scalar(x_323)) {
 x_330 = lean_alloc_ctor(1, 4, 0);
} else {
 x_330 = x_323;
}
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_1);
lean_ctor_set(x_330, 2, x_2);
lean_ctor_set(x_330, 3, x_317);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_331 = x_1;
} else {
 lean_dec_ref(x_1);
 x_331 = lean_box(0);
}
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_332 = lean_nat_add(x_327, x_315);
lean_dec(x_315);
x_333 = lean_nat_add(x_332, x_325);
lean_dec(x_332);
x_334 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_319);
lean_ctor_set(x_334, 2, x_204);
lean_ctor_set(x_334, 3, x_205);
if (lean_is_scalar(x_331)) {
 x_335 = lean_alloc_ctor(1, 4, 0);
} else {
 x_335 = x_331;
}
lean_ctor_set(x_335, 0, x_326);
lean_ctor_set(x_335, 1, x_330);
lean_ctor_set(x_335, 2, x_318);
lean_ctor_set(x_335, 3, x_334);
return x_335;
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_336 = lean_ctor_get(x_319, 0);
lean_inc(x_336);
x_337 = lean_nat_add(x_336, x_315);
lean_dec(x_315);
lean_dec(x_336);
x_338 = lean_nat_add(x_337, x_325);
lean_dec(x_337);
x_339 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_319);
lean_ctor_set(x_339, 2, x_204);
lean_ctor_set(x_339, 3, x_205);
if (lean_is_scalar(x_331)) {
 x_340 = lean_alloc_ctor(1, 4, 0);
} else {
 x_340 = x_331;
}
lean_ctor_set(x_340, 0, x_326);
lean_ctor_set(x_340, 1, x_330);
lean_ctor_set(x_340, 2, x_318);
lean_ctor_set(x_340, 3, x_339);
return x_340;
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_341 = lean_ctor_get(x_317, 0);
lean_inc(x_341);
x_342 = lean_nat_add(x_201, x_341);
lean_dec(x_341);
lean_dec(x_201);
x_343 = lean_nat_add(x_342, x_325);
lean_dec(x_342);
lean_inc(x_1);
if (lean_is_scalar(x_323)) {
 x_344 = lean_alloc_ctor(1, 4, 0);
} else {
 x_344 = x_323;
}
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_1);
lean_ctor_set(x_344, 2, x_2);
lean_ctor_set(x_344, 3, x_317);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_345 = x_1;
} else {
 lean_dec_ref(x_1);
 x_345 = lean_box(0);
}
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_346 = lean_unsigned_to_nat(0u);
x_347 = lean_nat_add(x_346, x_315);
lean_dec(x_315);
x_348 = lean_nat_add(x_347, x_325);
lean_dec(x_347);
x_349 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_349, 0, x_348);
lean_ctor_set(x_349, 1, x_319);
lean_ctor_set(x_349, 2, x_204);
lean_ctor_set(x_349, 3, x_205);
if (lean_is_scalar(x_345)) {
 x_350 = lean_alloc_ctor(1, 4, 0);
} else {
 x_350 = x_345;
}
lean_ctor_set(x_350, 0, x_326);
lean_ctor_set(x_350, 1, x_344);
lean_ctor_set(x_350, 2, x_318);
lean_ctor_set(x_350, 3, x_349);
return x_350;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_351 = lean_ctor_get(x_319, 0);
lean_inc(x_351);
x_352 = lean_nat_add(x_351, x_315);
lean_dec(x_315);
lean_dec(x_351);
x_353 = lean_nat_add(x_352, x_325);
lean_dec(x_352);
x_354 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_319);
lean_ctor_set(x_354, 2, x_204);
lean_ctor_set(x_354, 3, x_205);
if (lean_is_scalar(x_345)) {
 x_355 = lean_alloc_ctor(1, 4, 0);
} else {
 x_355 = x_345;
}
lean_ctor_set(x_355, 0, x_326);
lean_ctor_set(x_355, 1, x_344);
lean_ctor_set(x_355, 2, x_318);
lean_ctor_set(x_355, 3, x_354);
return x_355;
}
}
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
lean_dec(x_319);
lean_dec(x_318);
lean_dec(x_317);
lean_dec(x_315);
x_356 = lean_nat_add(x_201, x_202);
lean_dec(x_202);
x_357 = lean_unsigned_to_nat(1u);
x_358 = lean_nat_add(x_356, x_357);
lean_dec(x_356);
x_359 = lean_nat_add(x_201, x_316);
lean_dec(x_316);
lean_dec(x_201);
x_360 = lean_nat_add(x_359, x_357);
lean_dec(x_359);
lean_inc(x_1);
x_361 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_1);
lean_ctor_set(x_361, 2, x_2);
lean_ctor_set(x_361, 3, x_203);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_362 = x_1;
} else {
 lean_dec_ref(x_1);
 x_362 = lean_box(0);
}
if (lean_is_scalar(x_362)) {
 x_363 = lean_alloc_ctor(1, 4, 0);
} else {
 x_363 = x_362;
}
lean_ctor_set(x_363, 0, x_358);
lean_ctor_set(x_363, 1, x_361);
lean_ctor_set(x_363, 2, x_204);
lean_ctor_set(x_363, 3, x_205);
return x_363;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balanceR(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balanceR___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_balance___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_3, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set(x_10, 3, x_3);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 3);
lean_dec(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
x_16 = lean_box(0);
x_17 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_3, 3, x_16);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_16);
lean_ctor_set(x_3, 0, x_17);
x_18 = lean_unsigned_to_nat(3u);
x_19 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
lean_ctor_set(x_19, 2, x_12);
lean_ctor_set(x_19, 3, x_8);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_3, 2);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_2);
lean_ctor_set(x_23, 3, x_21);
x_24 = lean_unsigned_to_nat(3u);
x_25 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_8);
return x_25;
}
}
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_3);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_3, 3);
lean_dec(x_28);
x_29 = lean_ctor_get(x_3, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_3, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_7);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_32 = lean_ctor_get(x_7, 2);
x_33 = lean_ctor_get(x_7, 3);
lean_dec(x_33);
x_34 = lean_ctor_get(x_7, 1);
lean_dec(x_34);
x_35 = lean_ctor_get(x_7, 0);
lean_dec(x_35);
x_36 = lean_box(0);
x_37 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_7, 3, x_36);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_36);
lean_ctor_set(x_7, 0, x_37);
lean_ctor_set(x_3, 3, x_36);
lean_ctor_set(x_3, 1, x_36);
lean_ctor_set(x_3, 0, x_37);
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_7);
lean_ctor_set(x_39, 2, x_32);
lean_ctor_set(x_39, 3, x_3);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_7, 2);
lean_inc(x_40);
lean_dec(x_7);
x_41 = lean_box(0);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_2);
lean_ctor_set(x_43, 3, x_41);
lean_ctor_set(x_3, 3, x_41);
lean_ctor_set(x_3, 1, x_41);
lean_ctor_set(x_3, 0, x_42);
x_44 = lean_unsigned_to_nat(3u);
x_45 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_40);
lean_ctor_set(x_45, 3, x_3);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_3, 2);
lean_inc(x_46);
lean_dec(x_3);
x_47 = lean_ctor_get(x_7, 2);
lean_inc(x_47);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_48 = x_7;
} else {
 lean_dec_ref(x_7);
 x_48 = lean_box(0);
}
x_49 = lean_box(0);
x_50 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_48)) {
 x_51 = lean_alloc_ctor(1, 4, 0);
} else {
 x_51 = x_48;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_2);
lean_ctor_set(x_51, 3, x_49);
x_52 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_49);
lean_ctor_set(x_52, 2, x_46);
lean_ctor_set(x_52, 3, x_49);
x_53 = lean_unsigned_to_nat(3u);
x_54 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
lean_ctor_set(x_54, 2, x_47);
lean_ctor_set(x_54, 3, x_52);
return x_54;
}
}
else
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_3);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_56 = lean_ctor_get(x_3, 0);
x_57 = lean_ctor_get(x_3, 2);
x_58 = lean_ctor_get(x_3, 3);
lean_dec(x_58);
x_59 = lean_ctor_get(x_3, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_7, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_7, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_7, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_7, 3);
lean_inc(x_63);
x_64 = lean_ctor_get(x_26, 0);
lean_inc(x_64);
x_65 = lean_unsigned_to_nat(2u);
x_66 = lean_nat_mul(x_65, x_64);
x_67 = lean_nat_dec_lt(x_60, x_66);
lean_dec(x_66);
if (x_67 == 0)
{
uint8_t x_68; 
lean_dec(x_60);
x_68 = !lean_is_exclusive(x_7);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_ctor_get(x_7, 3);
lean_dec(x_69);
x_70 = lean_ctor_get(x_7, 2);
lean_dec(x_70);
x_71 = lean_ctor_get(x_7, 1);
lean_dec(x_71);
x_72 = lean_ctor_get(x_7, 0);
lean_dec(x_72);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_add(x_56, x_73);
lean_dec(x_56);
if (lean_obj_tag(x_61) == 0)
{
lean_ctor_set(x_7, 3, x_61);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_73);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_nat_add(x_75, x_64);
lean_dec(x_64);
x_77 = lean_nat_add(x_76, x_73);
lean_dec(x_76);
lean_inc(x_26);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_77);
x_78 = !lean_is_exclusive(x_26);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_26, 3);
lean_dec(x_79);
x_80 = lean_ctor_get(x_26, 2);
lean_dec(x_80);
x_81 = lean_ctor_get(x_26, 1);
lean_dec(x_81);
x_82 = lean_ctor_get(x_26, 0);
lean_dec(x_82);
lean_ctor_set(x_26, 3, x_3);
lean_ctor_set(x_26, 2, x_62);
lean_ctor_set(x_26, 1, x_7);
lean_ctor_set(x_26, 0, x_74);
return x_26;
}
else
{
lean_object* x_83; 
lean_dec(x_26);
x_83 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_83, 0, x_74);
lean_ctor_set(x_83, 1, x_7);
lean_ctor_set(x_83, 2, x_62);
lean_ctor_set(x_83, 3, x_3);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_84 = lean_ctor_get(x_63, 0);
lean_inc(x_84);
x_85 = lean_nat_add(x_84, x_64);
lean_dec(x_64);
lean_dec(x_84);
x_86 = lean_nat_add(x_85, x_73);
lean_dec(x_85);
lean_inc(x_63);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_86);
x_87 = !lean_is_exclusive(x_63);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_63, 3);
lean_dec(x_88);
x_89 = lean_ctor_get(x_63, 2);
lean_dec(x_89);
x_90 = lean_ctor_get(x_63, 1);
lean_dec(x_90);
x_91 = lean_ctor_get(x_63, 0);
lean_dec(x_91);
lean_ctor_set(x_63, 3, x_3);
lean_ctor_set(x_63, 2, x_62);
lean_ctor_set(x_63, 1, x_7);
lean_ctor_set(x_63, 0, x_74);
return x_63;
}
else
{
lean_object* x_92; 
lean_dec(x_63);
x_92 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_92, 0, x_74);
lean_ctor_set(x_92, 1, x_7);
lean_ctor_set(x_92, 2, x_62);
lean_ctor_set(x_92, 3, x_3);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_93 = lean_ctor_get(x_61, 0);
lean_inc(x_93);
x_94 = lean_nat_add(x_93, x_73);
lean_dec(x_93);
lean_inc(x_61);
lean_ctor_set(x_7, 3, x_61);
lean_ctor_set(x_7, 2, x_2);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_94);
x_95 = !lean_is_exclusive(x_61);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_61, 3);
lean_dec(x_96);
x_97 = lean_ctor_get(x_61, 2);
lean_dec(x_97);
x_98 = lean_ctor_get(x_61, 1);
lean_dec(x_98);
x_99 = lean_ctor_get(x_61, 0);
lean_dec(x_99);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_nat_add(x_100, x_64);
lean_dec(x_64);
x_102 = lean_nat_add(x_101, x_73);
lean_dec(x_101);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_102);
lean_ctor_set(x_61, 3, x_3);
lean_ctor_set(x_61, 2, x_62);
lean_ctor_set(x_61, 1, x_7);
lean_ctor_set(x_61, 0, x_74);
return x_61;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_free_object(x_61);
x_103 = lean_ctor_get(x_63, 0);
lean_inc(x_103);
x_104 = lean_nat_add(x_103, x_64);
lean_dec(x_64);
lean_dec(x_103);
x_105 = lean_nat_add(x_104, x_73);
lean_dec(x_104);
lean_inc(x_63);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_105);
x_106 = !lean_is_exclusive(x_63);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_63, 3);
lean_dec(x_107);
x_108 = lean_ctor_get(x_63, 2);
lean_dec(x_108);
x_109 = lean_ctor_get(x_63, 1);
lean_dec(x_109);
x_110 = lean_ctor_get(x_63, 0);
lean_dec(x_110);
lean_ctor_set(x_63, 3, x_3);
lean_ctor_set(x_63, 2, x_62);
lean_ctor_set(x_63, 1, x_7);
lean_ctor_set(x_63, 0, x_74);
return x_63;
}
else
{
lean_object* x_111; 
lean_dec(x_63);
x_111 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_111, 0, x_74);
lean_ctor_set(x_111, 1, x_7);
lean_ctor_set(x_111, 2, x_62);
lean_ctor_set(x_111, 3, x_3);
return x_111;
}
}
}
else
{
lean_dec(x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_unsigned_to_nat(0u);
x_113 = lean_nat_add(x_112, x_64);
lean_dec(x_64);
x_114 = lean_nat_add(x_113, x_73);
lean_dec(x_113);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_114);
x_115 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_115, 0, x_74);
lean_ctor_set(x_115, 1, x_7);
lean_ctor_set(x_115, 2, x_62);
lean_ctor_set(x_115, 3, x_3);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_63, 0);
lean_inc(x_116);
x_117 = lean_nat_add(x_116, x_64);
lean_dec(x_64);
lean_dec(x_116);
x_118 = lean_nat_add(x_117, x_73);
lean_dec(x_117);
lean_inc(x_63);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_118);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 x_119 = x_63;
} else {
 lean_dec_ref(x_63);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 4, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_74);
lean_ctor_set(x_120, 1, x_7);
lean_ctor_set(x_120, 2, x_62);
lean_ctor_set(x_120, 3, x_3);
return x_120;
}
}
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_7);
x_121 = lean_unsigned_to_nat(1u);
x_122 = lean_nat_add(x_56, x_121);
lean_dec(x_56);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_123; 
x_123 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_1);
lean_ctor_set(x_123, 2, x_2);
lean_ctor_set(x_123, 3, x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_unsigned_to_nat(0u);
x_125 = lean_nat_add(x_124, x_64);
lean_dec(x_64);
x_126 = lean_nat_add(x_125, x_121);
lean_dec(x_125);
lean_inc(x_26);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_126);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_127 = x_26;
} else {
 lean_dec_ref(x_26);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 4, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_122);
lean_ctor_set(x_128, 1, x_123);
lean_ctor_set(x_128, 2, x_62);
lean_ctor_set(x_128, 3, x_3);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_63, 0);
lean_inc(x_129);
x_130 = lean_nat_add(x_129, x_64);
lean_dec(x_64);
lean_dec(x_129);
x_131 = lean_nat_add(x_130, x_121);
lean_dec(x_130);
lean_inc(x_63);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_131);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 x_132 = x_63;
} else {
 lean_dec_ref(x_63);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 4, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_122);
lean_ctor_set(x_133, 1, x_123);
lean_ctor_set(x_133, 2, x_62);
lean_ctor_set(x_133, 3, x_3);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_134 = lean_ctor_get(x_61, 0);
lean_inc(x_134);
x_135 = lean_nat_add(x_134, x_121);
lean_dec(x_134);
lean_inc(x_61);
x_136 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_1);
lean_ctor_set(x_136, 2, x_2);
lean_ctor_set(x_136, 3, x_61);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 lean_ctor_release(x_61, 2);
 lean_ctor_release(x_61, 3);
 x_137 = x_61;
} else {
 lean_dec_ref(x_61);
 x_137 = lean_box(0);
}
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_unsigned_to_nat(0u);
x_139 = lean_nat_add(x_138, x_64);
lean_dec(x_64);
x_140 = lean_nat_add(x_139, x_121);
lean_dec(x_139);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_140);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(1, 4, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_122);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_62);
lean_ctor_set(x_141, 3, x_3);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_137);
x_142 = lean_ctor_get(x_63, 0);
lean_inc(x_142);
x_143 = lean_nat_add(x_142, x_64);
lean_dec(x_64);
lean_dec(x_142);
x_144 = lean_nat_add(x_143, x_121);
lean_dec(x_143);
lean_inc(x_63);
lean_ctor_set(x_3, 1, x_63);
lean_ctor_set(x_3, 0, x_144);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 x_145 = x_63;
} else {
 lean_dec_ref(x_63);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 4, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_122);
lean_ctor_set(x_146, 1, x_136);
lean_ctor_set(x_146, 2, x_62);
lean_ctor_set(x_146, 3, x_3);
return x_146;
}
}
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
x_147 = lean_unsigned_to_nat(1u);
x_148 = lean_nat_add(x_56, x_147);
lean_dec(x_56);
x_149 = lean_nat_add(x_60, x_147);
lean_dec(x_60);
lean_ctor_set(x_3, 3, x_7);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_149);
x_150 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_3);
lean_ctor_set(x_150, 2, x_57);
lean_ctor_set(x_150, 3, x_26);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint8_t x_160; 
x_151 = lean_ctor_get(x_3, 0);
x_152 = lean_ctor_get(x_3, 2);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_3);
x_153 = lean_ctor_get(x_7, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_7, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_7, 2);
lean_inc(x_155);
x_156 = lean_ctor_get(x_7, 3);
lean_inc(x_156);
x_157 = lean_ctor_get(x_26, 0);
lean_inc(x_157);
x_158 = lean_unsigned_to_nat(2u);
x_159 = lean_nat_mul(x_158, x_157);
x_160 = lean_nat_dec_lt(x_153, x_159);
lean_dec(x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_153);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 x_161 = x_7;
} else {
 lean_dec_ref(x_7);
 x_161 = lean_box(0);
}
x_162 = lean_unsigned_to_nat(1u);
x_163 = lean_nat_add(x_151, x_162);
lean_dec(x_151);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_164; 
if (lean_is_scalar(x_161)) {
 x_164 = lean_alloc_ctor(1, 4, 0);
} else {
 x_164 = x_161;
}
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_1);
lean_ctor_set(x_164, 2, x_2);
lean_ctor_set(x_164, 3, x_154);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_nat_add(x_165, x_157);
lean_dec(x_157);
x_167 = lean_nat_add(x_166, x_162);
lean_dec(x_166);
lean_inc(x_26);
x_168 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_156);
lean_ctor_set(x_168, 2, x_152);
lean_ctor_set(x_168, 3, x_26);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_169 = x_26;
} else {
 lean_dec_ref(x_26);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(1, 4, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_163);
lean_ctor_set(x_170, 1, x_164);
lean_ctor_set(x_170, 2, x_155);
lean_ctor_set(x_170, 3, x_168);
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_171 = lean_ctor_get(x_156, 0);
lean_inc(x_171);
x_172 = lean_nat_add(x_171, x_157);
lean_dec(x_157);
lean_dec(x_171);
x_173 = lean_nat_add(x_172, x_162);
lean_dec(x_172);
lean_inc(x_156);
x_174 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_156);
lean_ctor_set(x_174, 2, x_152);
lean_ctor_set(x_174, 3, x_26);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 lean_ctor_release(x_156, 2);
 lean_ctor_release(x_156, 3);
 x_175 = x_156;
} else {
 lean_dec_ref(x_156);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 4, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_163);
lean_ctor_set(x_176, 1, x_164);
lean_ctor_set(x_176, 2, x_155);
lean_ctor_set(x_176, 3, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_154, 0);
lean_inc(x_177);
x_178 = lean_nat_add(x_177, x_162);
lean_dec(x_177);
lean_inc(x_154);
if (lean_is_scalar(x_161)) {
 x_179 = lean_alloc_ctor(1, 4, 0);
} else {
 x_179 = x_161;
}
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_1);
lean_ctor_set(x_179, 2, x_2);
lean_ctor_set(x_179, 3, x_154);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 lean_ctor_release(x_154, 2);
 lean_ctor_release(x_154, 3);
 x_180 = x_154;
} else {
 lean_dec_ref(x_154);
 x_180 = lean_box(0);
}
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_181 = lean_unsigned_to_nat(0u);
x_182 = lean_nat_add(x_181, x_157);
lean_dec(x_157);
x_183 = lean_nat_add(x_182, x_162);
lean_dec(x_182);
x_184 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_156);
lean_ctor_set(x_184, 2, x_152);
lean_ctor_set(x_184, 3, x_26);
if (lean_is_scalar(x_180)) {
 x_185 = lean_alloc_ctor(1, 4, 0);
} else {
 x_185 = x_180;
}
lean_ctor_set(x_185, 0, x_163);
lean_ctor_set(x_185, 1, x_179);
lean_ctor_set(x_185, 2, x_155);
lean_ctor_set(x_185, 3, x_184);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_180);
x_186 = lean_ctor_get(x_156, 0);
lean_inc(x_186);
x_187 = lean_nat_add(x_186, x_157);
lean_dec(x_157);
lean_dec(x_186);
x_188 = lean_nat_add(x_187, x_162);
lean_dec(x_187);
lean_inc(x_156);
x_189 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_156);
lean_ctor_set(x_189, 2, x_152);
lean_ctor_set(x_189, 3, x_26);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 lean_ctor_release(x_156, 2);
 lean_ctor_release(x_156, 3);
 x_190 = x_156;
} else {
 lean_dec_ref(x_156);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(1, 4, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_163);
lean_ctor_set(x_191, 1, x_179);
lean_ctor_set(x_191, 2, x_155);
lean_ctor_set(x_191, 3, x_189);
return x_191;
}
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_155);
lean_dec(x_154);
x_192 = lean_unsigned_to_nat(1u);
x_193 = lean_nat_add(x_151, x_192);
lean_dec(x_151);
x_194 = lean_nat_add(x_153, x_192);
lean_dec(x_153);
x_195 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_1);
lean_ctor_set(x_195, 2, x_2);
lean_ctor_set(x_195, 3, x_7);
x_196 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_196, 0, x_193);
lean_ctor_set(x_196, 1, x_195);
lean_ctor_set(x_196, 2, x_152);
lean_ctor_set(x_196, 3, x_26);
return x_196;
}
}
}
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_1, 1);
lean_inc(x_197);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; 
x_198 = lean_ctor_get(x_1, 3);
lean_inc(x_198);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; 
x_199 = lean_unsigned_to_nat(2u);
x_200 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_1);
lean_ctor_set(x_200, 2, x_2);
lean_ctor_set(x_200, 3, x_198);
return x_200;
}
else
{
uint8_t x_201; 
x_201 = !lean_is_exclusive(x_1);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_202 = lean_ctor_get(x_1, 2);
x_203 = lean_ctor_get(x_1, 3);
lean_dec(x_203);
x_204 = lean_ctor_get(x_1, 1);
lean_dec(x_204);
x_205 = lean_ctor_get(x_1, 0);
lean_dec(x_205);
x_206 = !lean_is_exclusive(x_198);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_207 = lean_ctor_get(x_198, 2);
x_208 = lean_ctor_get(x_198, 3);
lean_dec(x_208);
x_209 = lean_ctor_get(x_198, 1);
lean_dec(x_209);
x_210 = lean_ctor_get(x_198, 0);
lean_dec(x_210);
x_211 = lean_box(0);
x_212 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_198, 3, x_211);
lean_ctor_set(x_198, 2, x_202);
lean_ctor_set(x_198, 1, x_211);
lean_ctor_set(x_198, 0, x_212);
lean_ctor_set(x_1, 3, x_211);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_211);
lean_ctor_set(x_1, 0, x_212);
x_213 = lean_unsigned_to_nat(3u);
x_214 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_198);
lean_ctor_set(x_214, 2, x_207);
lean_ctor_set(x_214, 3, x_1);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_215 = lean_ctor_get(x_198, 2);
lean_inc(x_215);
lean_dec(x_198);
x_216 = lean_box(0);
x_217 = lean_unsigned_to_nat(1u);
x_218 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
lean_ctor_set(x_218, 2, x_202);
lean_ctor_set(x_218, 3, x_216);
lean_ctor_set(x_1, 3, x_216);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_216);
lean_ctor_set(x_1, 0, x_217);
x_219 = lean_unsigned_to_nat(3u);
x_220 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
lean_ctor_set(x_220, 2, x_215);
lean_ctor_set(x_220, 3, x_1);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_221 = lean_ctor_get(x_1, 2);
lean_inc(x_221);
lean_dec(x_1);
x_222 = lean_ctor_get(x_198, 2);
lean_inc(x_222);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 lean_ctor_release(x_198, 2);
 lean_ctor_release(x_198, 3);
 x_223 = x_198;
} else {
 lean_dec_ref(x_198);
 x_223 = lean_box(0);
}
x_224 = lean_box(0);
x_225 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_223)) {
 x_226 = lean_alloc_ctor(1, 4, 0);
} else {
 x_226 = x_223;
}
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_224);
lean_ctor_set(x_226, 2, x_221);
lean_ctor_set(x_226, 3, x_224);
x_227 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_227, 0, x_225);
lean_ctor_set(x_227, 1, x_224);
lean_ctor_set(x_227, 2, x_2);
lean_ctor_set(x_227, 3, x_224);
x_228 = lean_unsigned_to_nat(3u);
x_229 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_226);
lean_ctor_set(x_229, 2, x_222);
lean_ctor_set(x_229, 3, x_227);
return x_229;
}
}
}
else
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_1, 3);
lean_inc(x_230);
if (lean_obj_tag(x_230) == 0)
{
uint8_t x_231; 
x_231 = !lean_is_exclusive(x_1);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_232 = lean_ctor_get(x_1, 2);
x_233 = lean_ctor_get(x_1, 3);
lean_dec(x_233);
x_234 = lean_ctor_get(x_1, 1);
lean_dec(x_234);
x_235 = lean_ctor_get(x_1, 0);
lean_dec(x_235);
x_236 = lean_box(0);
x_237 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_1, 3, x_236);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_236);
lean_ctor_set(x_1, 0, x_237);
x_238 = lean_unsigned_to_nat(3u);
x_239 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_197);
lean_ctor_set(x_239, 2, x_232);
lean_ctor_set(x_239, 3, x_1);
return x_239;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_240 = lean_ctor_get(x_1, 2);
lean_inc(x_240);
lean_dec(x_1);
x_241 = lean_box(0);
x_242 = lean_unsigned_to_nat(1u);
x_243 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_241);
lean_ctor_set(x_243, 2, x_2);
lean_ctor_set(x_243, 3, x_241);
x_244 = lean_unsigned_to_nat(3u);
x_245 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_197);
lean_ctor_set(x_245, 2, x_240);
lean_ctor_set(x_245, 3, x_243);
return x_245;
}
}
else
{
uint8_t x_246; 
x_246 = !lean_is_exclusive(x_1);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; 
x_247 = lean_ctor_get(x_1, 0);
x_248 = lean_ctor_get(x_1, 2);
x_249 = lean_ctor_get(x_1, 3);
lean_dec(x_249);
x_250 = lean_ctor_get(x_1, 1);
lean_dec(x_250);
x_251 = lean_ctor_get(x_197, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_230, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_230, 1);
lean_inc(x_253);
x_254 = lean_ctor_get(x_230, 2);
lean_inc(x_254);
x_255 = lean_ctor_get(x_230, 3);
lean_inc(x_255);
x_256 = lean_unsigned_to_nat(2u);
x_257 = lean_nat_mul(x_256, x_251);
x_258 = lean_nat_dec_lt(x_252, x_257);
lean_dec(x_257);
if (x_258 == 0)
{
uint8_t x_259; 
lean_dec(x_252);
x_259 = !lean_is_exclusive(x_230);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_260 = lean_ctor_get(x_230, 3);
lean_dec(x_260);
x_261 = lean_ctor_get(x_230, 2);
lean_dec(x_261);
x_262 = lean_ctor_get(x_230, 1);
lean_dec(x_262);
x_263 = lean_ctor_get(x_230, 0);
lean_dec(x_263);
x_264 = lean_unsigned_to_nat(1u);
x_265 = lean_nat_add(x_247, x_264);
lean_dec(x_247);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_266 = lean_unsigned_to_nat(0u);
x_267 = lean_nat_add(x_251, x_266);
lean_dec(x_251);
x_268 = lean_nat_add(x_267, x_264);
lean_dec(x_267);
lean_inc(x_197);
lean_ctor_set(x_230, 3, x_253);
lean_ctor_set(x_230, 2, x_248);
lean_ctor_set(x_230, 1, x_197);
lean_ctor_set(x_230, 0, x_268);
x_269 = !lean_is_exclusive(x_197);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_270 = lean_ctor_get(x_197, 3);
lean_dec(x_270);
x_271 = lean_ctor_get(x_197, 2);
lean_dec(x_271);
x_272 = lean_ctor_get(x_197, 1);
lean_dec(x_272);
x_273 = lean_ctor_get(x_197, 0);
lean_dec(x_273);
if (lean_obj_tag(x_255) == 0)
{
lean_ctor_set(x_197, 3, x_3);
lean_ctor_set(x_197, 2, x_2);
lean_ctor_set(x_197, 1, x_255);
lean_ctor_set(x_197, 0, x_264);
lean_ctor_set(x_1, 3, x_197);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
else
{
lean_object* x_274; lean_object* x_275; 
x_274 = lean_ctor_get(x_255, 0);
lean_inc(x_274);
x_275 = lean_nat_add(x_274, x_264);
lean_dec(x_274);
lean_ctor_set(x_197, 3, x_3);
lean_ctor_set(x_197, 2, x_2);
lean_ctor_set(x_197, 1, x_255);
lean_ctor_set(x_197, 0, x_275);
lean_ctor_set(x_1, 3, x_197);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
}
else
{
lean_dec(x_197);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_276; 
x_276 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_276, 0, x_264);
lean_ctor_set(x_276, 1, x_255);
lean_ctor_set(x_276, 2, x_2);
lean_ctor_set(x_276, 3, x_3);
lean_ctor_set(x_1, 3, x_276);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_255, 0);
lean_inc(x_277);
x_278 = lean_nat_add(x_277, x_264);
lean_dec(x_277);
x_279 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_255);
lean_ctor_set(x_279, 2, x_2);
lean_ctor_set(x_279, 3, x_3);
lean_ctor_set(x_1, 3, x_279);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; uint8_t x_283; 
x_280 = lean_ctor_get(x_253, 0);
lean_inc(x_280);
x_281 = lean_nat_add(x_251, x_280);
lean_dec(x_280);
lean_dec(x_251);
x_282 = lean_nat_add(x_281, x_264);
lean_dec(x_281);
lean_inc(x_197);
lean_ctor_set(x_230, 3, x_253);
lean_ctor_set(x_230, 2, x_248);
lean_ctor_set(x_230, 1, x_197);
lean_ctor_set(x_230, 0, x_282);
x_283 = !lean_is_exclusive(x_197);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_284 = lean_ctor_get(x_197, 3);
lean_dec(x_284);
x_285 = lean_ctor_get(x_197, 2);
lean_dec(x_285);
x_286 = lean_ctor_get(x_197, 1);
lean_dec(x_286);
x_287 = lean_ctor_get(x_197, 0);
lean_dec(x_287);
if (lean_obj_tag(x_255) == 0)
{
lean_ctor_set(x_197, 3, x_3);
lean_ctor_set(x_197, 2, x_2);
lean_ctor_set(x_197, 1, x_255);
lean_ctor_set(x_197, 0, x_264);
lean_ctor_set(x_1, 3, x_197);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
else
{
lean_object* x_288; lean_object* x_289; 
x_288 = lean_ctor_get(x_255, 0);
lean_inc(x_288);
x_289 = lean_nat_add(x_288, x_264);
lean_dec(x_288);
lean_ctor_set(x_197, 3, x_3);
lean_ctor_set(x_197, 2, x_2);
lean_ctor_set(x_197, 1, x_255);
lean_ctor_set(x_197, 0, x_289);
lean_ctor_set(x_1, 3, x_197);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
}
else
{
lean_dec(x_197);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_290; 
x_290 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_290, 0, x_264);
lean_ctor_set(x_290, 1, x_255);
lean_ctor_set(x_290, 2, x_2);
lean_ctor_set(x_290, 3, x_3);
lean_ctor_set(x_1, 3, x_290);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_255, 0);
lean_inc(x_291);
x_292 = lean_nat_add(x_291, x_264);
lean_dec(x_291);
x_293 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_255);
lean_ctor_set(x_293, 2, x_2);
lean_ctor_set(x_293, 3, x_3);
lean_ctor_set(x_1, 3, x_293);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_265);
return x_1;
}
}
}
}
else
{
lean_object* x_294; lean_object* x_295; 
lean_dec(x_230);
x_294 = lean_unsigned_to_nat(1u);
x_295 = lean_nat_add(x_247, x_294);
lean_dec(x_247);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_296 = lean_unsigned_to_nat(0u);
x_297 = lean_nat_add(x_251, x_296);
lean_dec(x_251);
x_298 = lean_nat_add(x_297, x_294);
lean_dec(x_297);
lean_inc(x_197);
x_299 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_299, 1, x_197);
lean_ctor_set(x_299, 2, x_248);
lean_ctor_set(x_299, 3, x_253);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 lean_ctor_release(x_197, 2);
 lean_ctor_release(x_197, 3);
 x_300 = x_197;
} else {
 lean_dec_ref(x_197);
 x_300 = lean_box(0);
}
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_301; 
if (lean_is_scalar(x_300)) {
 x_301 = lean_alloc_ctor(1, 4, 0);
} else {
 x_301 = x_300;
}
lean_ctor_set(x_301, 0, x_294);
lean_ctor_set(x_301, 1, x_255);
lean_ctor_set(x_301, 2, x_2);
lean_ctor_set(x_301, 3, x_3);
lean_ctor_set(x_1, 3, x_301);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_299);
lean_ctor_set(x_1, 0, x_295);
return x_1;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; 
x_302 = lean_ctor_get(x_255, 0);
lean_inc(x_302);
x_303 = lean_nat_add(x_302, x_294);
lean_dec(x_302);
if (lean_is_scalar(x_300)) {
 x_304 = lean_alloc_ctor(1, 4, 0);
} else {
 x_304 = x_300;
}
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_255);
lean_ctor_set(x_304, 2, x_2);
lean_ctor_set(x_304, 3, x_3);
lean_ctor_set(x_1, 3, x_304);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_299);
lean_ctor_set(x_1, 0, x_295);
return x_1;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_305 = lean_ctor_get(x_253, 0);
lean_inc(x_305);
x_306 = lean_nat_add(x_251, x_305);
lean_dec(x_305);
lean_dec(x_251);
x_307 = lean_nat_add(x_306, x_294);
lean_dec(x_306);
lean_inc(x_197);
x_308 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_197);
lean_ctor_set(x_308, 2, x_248);
lean_ctor_set(x_308, 3, x_253);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 lean_ctor_release(x_197, 2);
 lean_ctor_release(x_197, 3);
 x_309 = x_197;
} else {
 lean_dec_ref(x_197);
 x_309 = lean_box(0);
}
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_310; 
if (lean_is_scalar(x_309)) {
 x_310 = lean_alloc_ctor(1, 4, 0);
} else {
 x_310 = x_309;
}
lean_ctor_set(x_310, 0, x_294);
lean_ctor_set(x_310, 1, x_255);
lean_ctor_set(x_310, 2, x_2);
lean_ctor_set(x_310, 3, x_3);
lean_ctor_set(x_1, 3, x_310);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_308);
lean_ctor_set(x_1, 0, x_295);
return x_1;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_311 = lean_ctor_get(x_255, 0);
lean_inc(x_311);
x_312 = lean_nat_add(x_311, x_294);
lean_dec(x_311);
if (lean_is_scalar(x_309)) {
 x_313 = lean_alloc_ctor(1, 4, 0);
} else {
 x_313 = x_309;
}
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_255);
lean_ctor_set(x_313, 2, x_2);
lean_ctor_set(x_313, 3, x_3);
lean_ctor_set(x_1, 3, x_313);
lean_ctor_set(x_1, 2, x_254);
lean_ctor_set(x_1, 1, x_308);
lean_ctor_set(x_1, 0, x_295);
return x_1;
}
}
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_255);
lean_dec(x_254);
lean_dec(x_253);
lean_dec(x_251);
x_314 = lean_unsigned_to_nat(1u);
x_315 = lean_nat_add(x_247, x_314);
lean_dec(x_247);
x_316 = lean_nat_add(x_252, x_314);
lean_dec(x_252);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_230);
lean_ctor_set(x_1, 0, x_316);
x_317 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_197);
lean_ctor_set(x_317, 2, x_248);
lean_ctor_set(x_317, 3, x_1);
return x_317;
}
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; 
x_318 = lean_ctor_get(x_1, 0);
x_319 = lean_ctor_get(x_1, 2);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_1);
x_320 = lean_ctor_get(x_197, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_230, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_230, 1);
lean_inc(x_322);
x_323 = lean_ctor_get(x_230, 2);
lean_inc(x_323);
x_324 = lean_ctor_get(x_230, 3);
lean_inc(x_324);
x_325 = lean_unsigned_to_nat(2u);
x_326 = lean_nat_mul(x_325, x_320);
x_327 = lean_nat_dec_lt(x_321, x_326);
lean_dec(x_326);
if (x_327 == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_321);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 lean_ctor_release(x_230, 2);
 lean_ctor_release(x_230, 3);
 x_328 = x_230;
} else {
 lean_dec_ref(x_230);
 x_328 = lean_box(0);
}
x_329 = lean_unsigned_to_nat(1u);
x_330 = lean_nat_add(x_318, x_329);
lean_dec(x_318);
if (lean_obj_tag(x_322) == 0)
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_331 = lean_unsigned_to_nat(0u);
x_332 = lean_nat_add(x_320, x_331);
lean_dec(x_320);
x_333 = lean_nat_add(x_332, x_329);
lean_dec(x_332);
lean_inc(x_197);
if (lean_is_scalar(x_328)) {
 x_334 = lean_alloc_ctor(1, 4, 0);
} else {
 x_334 = x_328;
}
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_197);
lean_ctor_set(x_334, 2, x_319);
lean_ctor_set(x_334, 3, x_322);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 lean_ctor_release(x_197, 2);
 lean_ctor_release(x_197, 3);
 x_335 = x_197;
} else {
 lean_dec_ref(x_197);
 x_335 = lean_box(0);
}
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_336; lean_object* x_337; 
if (lean_is_scalar(x_335)) {
 x_336 = lean_alloc_ctor(1, 4, 0);
} else {
 x_336 = x_335;
}
lean_ctor_set(x_336, 0, x_329);
lean_ctor_set(x_336, 1, x_324);
lean_ctor_set(x_336, 2, x_2);
lean_ctor_set(x_336, 3, x_3);
x_337 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_337, 0, x_330);
lean_ctor_set(x_337, 1, x_334);
lean_ctor_set(x_337, 2, x_323);
lean_ctor_set(x_337, 3, x_336);
return x_337;
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_338 = lean_ctor_get(x_324, 0);
lean_inc(x_338);
x_339 = lean_nat_add(x_338, x_329);
lean_dec(x_338);
if (lean_is_scalar(x_335)) {
 x_340 = lean_alloc_ctor(1, 4, 0);
} else {
 x_340 = x_335;
}
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_324);
lean_ctor_set(x_340, 2, x_2);
lean_ctor_set(x_340, 3, x_3);
x_341 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_341, 0, x_330);
lean_ctor_set(x_341, 1, x_334);
lean_ctor_set(x_341, 2, x_323);
lean_ctor_set(x_341, 3, x_340);
return x_341;
}
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_342 = lean_ctor_get(x_322, 0);
lean_inc(x_342);
x_343 = lean_nat_add(x_320, x_342);
lean_dec(x_342);
lean_dec(x_320);
x_344 = lean_nat_add(x_343, x_329);
lean_dec(x_343);
lean_inc(x_197);
if (lean_is_scalar(x_328)) {
 x_345 = lean_alloc_ctor(1, 4, 0);
} else {
 x_345 = x_328;
}
lean_ctor_set(x_345, 0, x_344);
lean_ctor_set(x_345, 1, x_197);
lean_ctor_set(x_345, 2, x_319);
lean_ctor_set(x_345, 3, x_322);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 lean_ctor_release(x_197, 2);
 lean_ctor_release(x_197, 3);
 x_346 = x_197;
} else {
 lean_dec_ref(x_197);
 x_346 = lean_box(0);
}
if (lean_obj_tag(x_324) == 0)
{
lean_object* x_347; lean_object* x_348; 
if (lean_is_scalar(x_346)) {
 x_347 = lean_alloc_ctor(1, 4, 0);
} else {
 x_347 = x_346;
}
lean_ctor_set(x_347, 0, x_329);
lean_ctor_set(x_347, 1, x_324);
lean_ctor_set(x_347, 2, x_2);
lean_ctor_set(x_347, 3, x_3);
x_348 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_348, 0, x_330);
lean_ctor_set(x_348, 1, x_345);
lean_ctor_set(x_348, 2, x_323);
lean_ctor_set(x_348, 3, x_347);
return x_348;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_349 = lean_ctor_get(x_324, 0);
lean_inc(x_349);
x_350 = lean_nat_add(x_349, x_329);
lean_dec(x_349);
if (lean_is_scalar(x_346)) {
 x_351 = lean_alloc_ctor(1, 4, 0);
} else {
 x_351 = x_346;
}
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_324);
lean_ctor_set(x_351, 2, x_2);
lean_ctor_set(x_351, 3, x_3);
x_352 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_352, 0, x_330);
lean_ctor_set(x_352, 1, x_345);
lean_ctor_set(x_352, 2, x_323);
lean_ctor_set(x_352, 3, x_351);
return x_352;
}
}
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
lean_dec(x_324);
lean_dec(x_323);
lean_dec(x_322);
lean_dec(x_320);
x_353 = lean_unsigned_to_nat(1u);
x_354 = lean_nat_add(x_318, x_353);
lean_dec(x_318);
x_355 = lean_nat_add(x_321, x_353);
lean_dec(x_321);
x_356 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_356, 0, x_355);
lean_ctor_set(x_356, 1, x_230);
lean_ctor_set(x_356, 2, x_2);
lean_ctor_set(x_356, 3, x_3);
x_357 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_357, 0, x_354);
lean_ctor_set(x_357, 1, x_197);
lean_ctor_set(x_357, 2, x_319);
lean_ctor_set(x_357, 3, x_356);
return x_357;
}
}
}
}
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; uint8_t x_368; 
x_358 = lean_ctor_get(x_1, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_1, 1);
lean_inc(x_359);
x_360 = lean_ctor_get(x_1, 2);
lean_inc(x_360);
x_361 = lean_ctor_get(x_1, 3);
lean_inc(x_361);
x_362 = lean_ctor_get(x_3, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_3, 1);
lean_inc(x_363);
x_364 = lean_ctor_get(x_3, 2);
lean_inc(x_364);
x_365 = lean_ctor_get(x_3, 3);
lean_inc(x_365);
x_366 = lean_unsigned_to_nat(3u);
x_367 = lean_nat_mul(x_366, x_358);
x_368 = lean_nat_dec_lt(x_367, x_362);
lean_dec(x_367);
if (x_368 == 0)
{
lean_object* x_369; uint8_t x_370; 
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_363);
x_369 = lean_nat_mul(x_366, x_362);
x_370 = lean_nat_dec_lt(x_369, x_358);
lean_dec(x_369);
if (x_370 == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
lean_dec(x_361);
lean_dec(x_360);
lean_dec(x_359);
x_371 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
lean_dec(x_358);
x_372 = lean_unsigned_to_nat(1u);
x_373 = lean_nat_add(x_371, x_372);
lean_dec(x_371);
x_374 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_1);
lean_ctor_set(x_374, 2, x_2);
lean_ctor_set(x_374, 3, x_3);
return x_374;
}
else
{
uint8_t x_375; 
x_375 = !lean_is_exclusive(x_1);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_376 = lean_ctor_get(x_1, 3);
lean_dec(x_376);
x_377 = lean_ctor_get(x_1, 2);
lean_dec(x_377);
x_378 = lean_ctor_get(x_1, 1);
lean_dec(x_378);
x_379 = lean_ctor_get(x_1, 0);
lean_dec(x_379);
if (lean_obj_tag(x_359) == 0)
{
lean_free_object(x_1);
lean_dec(x_362);
lean_dec(x_361);
lean_dec(x_360);
lean_dec(x_358);
lean_dec(x_3);
lean_dec(x_2);
return x_359;
}
else
{
if (lean_obj_tag(x_361) == 0)
{
lean_free_object(x_1);
lean_dec(x_362);
lean_dec(x_360);
lean_dec(x_359);
lean_dec(x_358);
lean_dec(x_3);
lean_dec(x_2);
return x_361;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_380 = lean_ctor_get(x_359, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_361, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_361, 1);
lean_inc(x_382);
x_383 = lean_ctor_get(x_361, 2);
lean_inc(x_383);
x_384 = lean_ctor_get(x_361, 3);
lean_inc(x_384);
x_385 = lean_unsigned_to_nat(2u);
x_386 = lean_nat_mul(x_385, x_380);
x_387 = lean_nat_dec_lt(x_381, x_386);
lean_dec(x_386);
if (x_387 == 0)
{
uint8_t x_388; 
lean_dec(x_381);
lean_free_object(x_1);
x_388 = !lean_is_exclusive(x_361);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_389 = lean_ctor_get(x_361, 3);
lean_dec(x_389);
x_390 = lean_ctor_get(x_361, 2);
lean_dec(x_390);
x_391 = lean_ctor_get(x_361, 1);
lean_dec(x_391);
x_392 = lean_ctor_get(x_361, 0);
lean_dec(x_392);
x_393 = lean_nat_add(x_358, x_362);
lean_dec(x_358);
x_394 = lean_unsigned_to_nat(1u);
x_395 = lean_nat_add(x_393, x_394);
lean_dec(x_393);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; 
x_396 = lean_unsigned_to_nat(0u);
x_397 = lean_nat_add(x_380, x_396);
lean_dec(x_380);
x_398 = lean_nat_add(x_397, x_394);
lean_dec(x_397);
lean_inc(x_359);
lean_ctor_set(x_361, 3, x_382);
lean_ctor_set(x_361, 2, x_360);
lean_ctor_set(x_361, 1, x_359);
lean_ctor_set(x_361, 0, x_398);
x_399 = !lean_is_exclusive(x_359);
if (x_399 == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
x_400 = lean_ctor_get(x_359, 3);
lean_dec(x_400);
x_401 = lean_ctor_get(x_359, 2);
lean_dec(x_401);
x_402 = lean_ctor_get(x_359, 1);
lean_dec(x_402);
x_403 = lean_ctor_get(x_359, 0);
lean_dec(x_403);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_404 = lean_nat_add(x_396, x_362);
lean_dec(x_362);
x_405 = lean_nat_add(x_404, x_394);
lean_dec(x_404);
lean_inc(x_3);
lean_ctor_set(x_359, 3, x_3);
lean_ctor_set(x_359, 2, x_2);
lean_ctor_set(x_359, 1, x_384);
lean_ctor_set(x_359, 0, x_405);
x_406 = !lean_is_exclusive(x_3);
if (x_406 == 0)
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_407 = lean_ctor_get(x_3, 3);
lean_dec(x_407);
x_408 = lean_ctor_get(x_3, 2);
lean_dec(x_408);
x_409 = lean_ctor_get(x_3, 1);
lean_dec(x_409);
x_410 = lean_ctor_get(x_3, 0);
lean_dec(x_410);
lean_ctor_set(x_3, 3, x_359);
lean_ctor_set(x_3, 2, x_383);
lean_ctor_set(x_3, 1, x_361);
lean_ctor_set(x_3, 0, x_395);
return x_3;
}
else
{
lean_object* x_411; 
lean_dec(x_3);
x_411 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_411, 0, x_395);
lean_ctor_set(x_411, 1, x_361);
lean_ctor_set(x_411, 2, x_383);
lean_ctor_set(x_411, 3, x_359);
return x_411;
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; uint8_t x_415; 
x_412 = lean_ctor_get(x_384, 0);
lean_inc(x_412);
x_413 = lean_nat_add(x_412, x_362);
lean_dec(x_362);
lean_dec(x_412);
x_414 = lean_nat_add(x_413, x_394);
lean_dec(x_413);
lean_inc(x_3);
lean_ctor_set(x_359, 3, x_3);
lean_ctor_set(x_359, 2, x_2);
lean_ctor_set(x_359, 1, x_384);
lean_ctor_set(x_359, 0, x_414);
x_415 = !lean_is_exclusive(x_3);
if (x_415 == 0)
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_416 = lean_ctor_get(x_3, 3);
lean_dec(x_416);
x_417 = lean_ctor_get(x_3, 2);
lean_dec(x_417);
x_418 = lean_ctor_get(x_3, 1);
lean_dec(x_418);
x_419 = lean_ctor_get(x_3, 0);
lean_dec(x_419);
lean_ctor_set(x_3, 3, x_359);
lean_ctor_set(x_3, 2, x_383);
lean_ctor_set(x_3, 1, x_361);
lean_ctor_set(x_3, 0, x_395);
return x_3;
}
else
{
lean_object* x_420; 
lean_dec(x_3);
x_420 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_420, 0, x_395);
lean_ctor_set(x_420, 1, x_361);
lean_ctor_set(x_420, 2, x_383);
lean_ctor_set(x_420, 3, x_359);
return x_420;
}
}
}
else
{
lean_dec(x_359);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_421 = lean_nat_add(x_396, x_362);
lean_dec(x_362);
x_422 = lean_nat_add(x_421, x_394);
lean_dec(x_421);
lean_inc(x_3);
x_423 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_384);
lean_ctor_set(x_423, 2, x_2);
lean_ctor_set(x_423, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_424 = x_3;
} else {
 lean_dec_ref(x_3);
 x_424 = lean_box(0);
}
if (lean_is_scalar(x_424)) {
 x_425 = lean_alloc_ctor(1, 4, 0);
} else {
 x_425 = x_424;
}
lean_ctor_set(x_425, 0, x_395);
lean_ctor_set(x_425, 1, x_361);
lean_ctor_set(x_425, 2, x_383);
lean_ctor_set(x_425, 3, x_423);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
x_426 = lean_ctor_get(x_384, 0);
lean_inc(x_426);
x_427 = lean_nat_add(x_426, x_362);
lean_dec(x_362);
lean_dec(x_426);
x_428 = lean_nat_add(x_427, x_394);
lean_dec(x_427);
lean_inc(x_3);
x_429 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_384);
lean_ctor_set(x_429, 2, x_2);
lean_ctor_set(x_429, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_430 = x_3;
} else {
 lean_dec_ref(x_3);
 x_430 = lean_box(0);
}
if (lean_is_scalar(x_430)) {
 x_431 = lean_alloc_ctor(1, 4, 0);
} else {
 x_431 = x_430;
}
lean_ctor_set(x_431, 0, x_395);
lean_ctor_set(x_431, 1, x_361);
lean_ctor_set(x_431, 2, x_383);
lean_ctor_set(x_431, 3, x_429);
return x_431;
}
}
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; uint8_t x_435; 
x_432 = lean_ctor_get(x_382, 0);
lean_inc(x_432);
x_433 = lean_nat_add(x_380, x_432);
lean_dec(x_432);
lean_dec(x_380);
x_434 = lean_nat_add(x_433, x_394);
lean_dec(x_433);
lean_inc(x_359);
lean_ctor_set(x_361, 3, x_382);
lean_ctor_set(x_361, 2, x_360);
lean_ctor_set(x_361, 1, x_359);
lean_ctor_set(x_361, 0, x_434);
x_435 = !lean_is_exclusive(x_359);
if (x_435 == 0)
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_436 = lean_ctor_get(x_359, 3);
lean_dec(x_436);
x_437 = lean_ctor_get(x_359, 2);
lean_dec(x_437);
x_438 = lean_ctor_get(x_359, 1);
lean_dec(x_438);
x_439 = lean_ctor_get(x_359, 0);
lean_dec(x_439);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; uint8_t x_443; 
x_440 = lean_unsigned_to_nat(0u);
x_441 = lean_nat_add(x_440, x_362);
lean_dec(x_362);
x_442 = lean_nat_add(x_441, x_394);
lean_dec(x_441);
lean_inc(x_3);
lean_ctor_set(x_359, 3, x_3);
lean_ctor_set(x_359, 2, x_2);
lean_ctor_set(x_359, 1, x_384);
lean_ctor_set(x_359, 0, x_442);
x_443 = !lean_is_exclusive(x_3);
if (x_443 == 0)
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; 
x_444 = lean_ctor_get(x_3, 3);
lean_dec(x_444);
x_445 = lean_ctor_get(x_3, 2);
lean_dec(x_445);
x_446 = lean_ctor_get(x_3, 1);
lean_dec(x_446);
x_447 = lean_ctor_get(x_3, 0);
lean_dec(x_447);
lean_ctor_set(x_3, 3, x_359);
lean_ctor_set(x_3, 2, x_383);
lean_ctor_set(x_3, 1, x_361);
lean_ctor_set(x_3, 0, x_395);
return x_3;
}
else
{
lean_object* x_448; 
lean_dec(x_3);
x_448 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_448, 0, x_395);
lean_ctor_set(x_448, 1, x_361);
lean_ctor_set(x_448, 2, x_383);
lean_ctor_set(x_448, 3, x_359);
return x_448;
}
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; uint8_t x_452; 
x_449 = lean_ctor_get(x_384, 0);
lean_inc(x_449);
x_450 = lean_nat_add(x_449, x_362);
lean_dec(x_362);
lean_dec(x_449);
x_451 = lean_nat_add(x_450, x_394);
lean_dec(x_450);
lean_inc(x_3);
lean_ctor_set(x_359, 3, x_3);
lean_ctor_set(x_359, 2, x_2);
lean_ctor_set(x_359, 1, x_384);
lean_ctor_set(x_359, 0, x_451);
x_452 = !lean_is_exclusive(x_3);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_453 = lean_ctor_get(x_3, 3);
lean_dec(x_453);
x_454 = lean_ctor_get(x_3, 2);
lean_dec(x_454);
x_455 = lean_ctor_get(x_3, 1);
lean_dec(x_455);
x_456 = lean_ctor_get(x_3, 0);
lean_dec(x_456);
lean_ctor_set(x_3, 3, x_359);
lean_ctor_set(x_3, 2, x_383);
lean_ctor_set(x_3, 1, x_361);
lean_ctor_set(x_3, 0, x_395);
return x_3;
}
else
{
lean_object* x_457; 
lean_dec(x_3);
x_457 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_457, 0, x_395);
lean_ctor_set(x_457, 1, x_361);
lean_ctor_set(x_457, 2, x_383);
lean_ctor_set(x_457, 3, x_359);
return x_457;
}
}
}
else
{
lean_dec(x_359);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_458 = lean_unsigned_to_nat(0u);
x_459 = lean_nat_add(x_458, x_362);
lean_dec(x_362);
x_460 = lean_nat_add(x_459, x_394);
lean_dec(x_459);
lean_inc(x_3);
x_461 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_461, 0, x_460);
lean_ctor_set(x_461, 1, x_384);
lean_ctor_set(x_461, 2, x_2);
lean_ctor_set(x_461, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_462 = x_3;
} else {
 lean_dec_ref(x_3);
 x_462 = lean_box(0);
}
if (lean_is_scalar(x_462)) {
 x_463 = lean_alloc_ctor(1, 4, 0);
} else {
 x_463 = x_462;
}
lean_ctor_set(x_463, 0, x_395);
lean_ctor_set(x_463, 1, x_361);
lean_ctor_set(x_463, 2, x_383);
lean_ctor_set(x_463, 3, x_461);
return x_463;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; 
x_464 = lean_ctor_get(x_384, 0);
lean_inc(x_464);
x_465 = lean_nat_add(x_464, x_362);
lean_dec(x_362);
lean_dec(x_464);
x_466 = lean_nat_add(x_465, x_394);
lean_dec(x_465);
lean_inc(x_3);
x_467 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_467, 0, x_466);
lean_ctor_set(x_467, 1, x_384);
lean_ctor_set(x_467, 2, x_2);
lean_ctor_set(x_467, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_468 = x_3;
} else {
 lean_dec_ref(x_3);
 x_468 = lean_box(0);
}
if (lean_is_scalar(x_468)) {
 x_469 = lean_alloc_ctor(1, 4, 0);
} else {
 x_469 = x_468;
}
lean_ctor_set(x_469, 0, x_395);
lean_ctor_set(x_469, 1, x_361);
lean_ctor_set(x_469, 2, x_383);
lean_ctor_set(x_469, 3, x_467);
return x_469;
}
}
}
}
else
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; 
lean_dec(x_361);
x_470 = lean_nat_add(x_358, x_362);
lean_dec(x_358);
x_471 = lean_unsigned_to_nat(1u);
x_472 = lean_nat_add(x_470, x_471);
lean_dec(x_470);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_473 = lean_unsigned_to_nat(0u);
x_474 = lean_nat_add(x_380, x_473);
lean_dec(x_380);
x_475 = lean_nat_add(x_474, x_471);
lean_dec(x_474);
lean_inc(x_359);
x_476 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_359);
lean_ctor_set(x_476, 2, x_360);
lean_ctor_set(x_476, 3, x_382);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 lean_ctor_release(x_359, 2);
 lean_ctor_release(x_359, 3);
 x_477 = x_359;
} else {
 lean_dec_ref(x_359);
 x_477 = lean_box(0);
}
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
x_478 = lean_nat_add(x_473, x_362);
lean_dec(x_362);
x_479 = lean_nat_add(x_478, x_471);
lean_dec(x_478);
lean_inc(x_3);
if (lean_is_scalar(x_477)) {
 x_480 = lean_alloc_ctor(1, 4, 0);
} else {
 x_480 = x_477;
}
lean_ctor_set(x_480, 0, x_479);
lean_ctor_set(x_480, 1, x_384);
lean_ctor_set(x_480, 2, x_2);
lean_ctor_set(x_480, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_481 = x_3;
} else {
 lean_dec_ref(x_3);
 x_481 = lean_box(0);
}
if (lean_is_scalar(x_481)) {
 x_482 = lean_alloc_ctor(1, 4, 0);
} else {
 x_482 = x_481;
}
lean_ctor_set(x_482, 0, x_472);
lean_ctor_set(x_482, 1, x_476);
lean_ctor_set(x_482, 2, x_383);
lean_ctor_set(x_482, 3, x_480);
return x_482;
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_483 = lean_ctor_get(x_384, 0);
lean_inc(x_483);
x_484 = lean_nat_add(x_483, x_362);
lean_dec(x_362);
lean_dec(x_483);
x_485 = lean_nat_add(x_484, x_471);
lean_dec(x_484);
lean_inc(x_3);
if (lean_is_scalar(x_477)) {
 x_486 = lean_alloc_ctor(1, 4, 0);
} else {
 x_486 = x_477;
}
lean_ctor_set(x_486, 0, x_485);
lean_ctor_set(x_486, 1, x_384);
lean_ctor_set(x_486, 2, x_2);
lean_ctor_set(x_486, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_487 = x_3;
} else {
 lean_dec_ref(x_3);
 x_487 = lean_box(0);
}
if (lean_is_scalar(x_487)) {
 x_488 = lean_alloc_ctor(1, 4, 0);
} else {
 x_488 = x_487;
}
lean_ctor_set(x_488, 0, x_472);
lean_ctor_set(x_488, 1, x_476);
lean_ctor_set(x_488, 2, x_383);
lean_ctor_set(x_488, 3, x_486);
return x_488;
}
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; 
x_489 = lean_ctor_get(x_382, 0);
lean_inc(x_489);
x_490 = lean_nat_add(x_380, x_489);
lean_dec(x_489);
lean_dec(x_380);
x_491 = lean_nat_add(x_490, x_471);
lean_dec(x_490);
lean_inc(x_359);
x_492 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_492, 0, x_491);
lean_ctor_set(x_492, 1, x_359);
lean_ctor_set(x_492, 2, x_360);
lean_ctor_set(x_492, 3, x_382);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 lean_ctor_release(x_359, 2);
 lean_ctor_release(x_359, 3);
 x_493 = x_359;
} else {
 lean_dec_ref(x_359);
 x_493 = lean_box(0);
}
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
x_494 = lean_unsigned_to_nat(0u);
x_495 = lean_nat_add(x_494, x_362);
lean_dec(x_362);
x_496 = lean_nat_add(x_495, x_471);
lean_dec(x_495);
lean_inc(x_3);
if (lean_is_scalar(x_493)) {
 x_497 = lean_alloc_ctor(1, 4, 0);
} else {
 x_497 = x_493;
}
lean_ctor_set(x_497, 0, x_496);
lean_ctor_set(x_497, 1, x_384);
lean_ctor_set(x_497, 2, x_2);
lean_ctor_set(x_497, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_498 = x_3;
} else {
 lean_dec_ref(x_3);
 x_498 = lean_box(0);
}
if (lean_is_scalar(x_498)) {
 x_499 = lean_alloc_ctor(1, 4, 0);
} else {
 x_499 = x_498;
}
lean_ctor_set(x_499, 0, x_472);
lean_ctor_set(x_499, 1, x_492);
lean_ctor_set(x_499, 2, x_383);
lean_ctor_set(x_499, 3, x_497);
return x_499;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_500 = lean_ctor_get(x_384, 0);
lean_inc(x_500);
x_501 = lean_nat_add(x_500, x_362);
lean_dec(x_362);
lean_dec(x_500);
x_502 = lean_nat_add(x_501, x_471);
lean_dec(x_501);
lean_inc(x_3);
if (lean_is_scalar(x_493)) {
 x_503 = lean_alloc_ctor(1, 4, 0);
} else {
 x_503 = x_493;
}
lean_ctor_set(x_503, 0, x_502);
lean_ctor_set(x_503, 1, x_384);
lean_ctor_set(x_503, 2, x_2);
lean_ctor_set(x_503, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_504 = x_3;
} else {
 lean_dec_ref(x_3);
 x_504 = lean_box(0);
}
if (lean_is_scalar(x_504)) {
 x_505 = lean_alloc_ctor(1, 4, 0);
} else {
 x_505 = x_504;
}
lean_ctor_set(x_505, 0, x_472);
lean_ctor_set(x_505, 1, x_492);
lean_ctor_set(x_505, 2, x_383);
lean_ctor_set(x_505, 3, x_503);
return x_505;
}
}
}
}
else
{
lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; 
lean_dec(x_384);
lean_dec(x_383);
lean_dec(x_382);
lean_dec(x_380);
x_506 = lean_nat_add(x_358, x_362);
lean_dec(x_358);
x_507 = lean_unsigned_to_nat(1u);
x_508 = lean_nat_add(x_506, x_507);
lean_dec(x_506);
x_509 = lean_nat_add(x_381, x_362);
lean_dec(x_362);
lean_dec(x_381);
x_510 = lean_nat_add(x_509, x_507);
lean_dec(x_509);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_2);
lean_ctor_set(x_1, 1, x_361);
lean_ctor_set(x_1, 0, x_510);
x_511 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_511, 0, x_508);
lean_ctor_set(x_511, 1, x_359);
lean_ctor_set(x_511, 2, x_360);
lean_ctor_set(x_511, 3, x_1);
return x_511;
}
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_359) == 0)
{
lean_dec(x_362);
lean_dec(x_361);
lean_dec(x_360);
lean_dec(x_358);
lean_dec(x_3);
lean_dec(x_2);
return x_359;
}
else
{
if (lean_obj_tag(x_361) == 0)
{
lean_dec(x_362);
lean_dec(x_360);
lean_dec(x_359);
lean_dec(x_358);
lean_dec(x_3);
lean_dec(x_2);
return x_361;
}
else
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; 
x_512 = lean_ctor_get(x_359, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_361, 0);
lean_inc(x_513);
x_514 = lean_ctor_get(x_361, 1);
lean_inc(x_514);
x_515 = lean_ctor_get(x_361, 2);
lean_inc(x_515);
x_516 = lean_ctor_get(x_361, 3);
lean_inc(x_516);
x_517 = lean_unsigned_to_nat(2u);
x_518 = lean_nat_mul(x_517, x_512);
x_519 = lean_nat_dec_lt(x_513, x_518);
lean_dec(x_518);
if (x_519 == 0)
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; 
lean_dec(x_513);
if (lean_is_exclusive(x_361)) {
 lean_ctor_release(x_361, 0);
 lean_ctor_release(x_361, 1);
 lean_ctor_release(x_361, 2);
 lean_ctor_release(x_361, 3);
 x_520 = x_361;
} else {
 lean_dec_ref(x_361);
 x_520 = lean_box(0);
}
x_521 = lean_nat_add(x_358, x_362);
lean_dec(x_358);
x_522 = lean_unsigned_to_nat(1u);
x_523 = lean_nat_add(x_521, x_522);
lean_dec(x_521);
if (lean_obj_tag(x_514) == 0)
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; 
x_524 = lean_unsigned_to_nat(0u);
x_525 = lean_nat_add(x_512, x_524);
lean_dec(x_512);
x_526 = lean_nat_add(x_525, x_522);
lean_dec(x_525);
lean_inc(x_359);
if (lean_is_scalar(x_520)) {
 x_527 = lean_alloc_ctor(1, 4, 0);
} else {
 x_527 = x_520;
}
lean_ctor_set(x_527, 0, x_526);
lean_ctor_set(x_527, 1, x_359);
lean_ctor_set(x_527, 2, x_360);
lean_ctor_set(x_527, 3, x_514);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 lean_ctor_release(x_359, 2);
 lean_ctor_release(x_359, 3);
 x_528 = x_359;
} else {
 lean_dec_ref(x_359);
 x_528 = lean_box(0);
}
if (lean_obj_tag(x_516) == 0)
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_529 = lean_nat_add(x_524, x_362);
lean_dec(x_362);
x_530 = lean_nat_add(x_529, x_522);
lean_dec(x_529);
lean_inc(x_3);
if (lean_is_scalar(x_528)) {
 x_531 = lean_alloc_ctor(1, 4, 0);
} else {
 x_531 = x_528;
}
lean_ctor_set(x_531, 0, x_530);
lean_ctor_set(x_531, 1, x_516);
lean_ctor_set(x_531, 2, x_2);
lean_ctor_set(x_531, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_532 = x_3;
} else {
 lean_dec_ref(x_3);
 x_532 = lean_box(0);
}
if (lean_is_scalar(x_532)) {
 x_533 = lean_alloc_ctor(1, 4, 0);
} else {
 x_533 = x_532;
}
lean_ctor_set(x_533, 0, x_523);
lean_ctor_set(x_533, 1, x_527);
lean_ctor_set(x_533, 2, x_515);
lean_ctor_set(x_533, 3, x_531);
return x_533;
}
else
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; 
x_534 = lean_ctor_get(x_516, 0);
lean_inc(x_534);
x_535 = lean_nat_add(x_534, x_362);
lean_dec(x_362);
lean_dec(x_534);
x_536 = lean_nat_add(x_535, x_522);
lean_dec(x_535);
lean_inc(x_3);
if (lean_is_scalar(x_528)) {
 x_537 = lean_alloc_ctor(1, 4, 0);
} else {
 x_537 = x_528;
}
lean_ctor_set(x_537, 0, x_536);
lean_ctor_set(x_537, 1, x_516);
lean_ctor_set(x_537, 2, x_2);
lean_ctor_set(x_537, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_538 = x_3;
} else {
 lean_dec_ref(x_3);
 x_538 = lean_box(0);
}
if (lean_is_scalar(x_538)) {
 x_539 = lean_alloc_ctor(1, 4, 0);
} else {
 x_539 = x_538;
}
lean_ctor_set(x_539, 0, x_523);
lean_ctor_set(x_539, 1, x_527);
lean_ctor_set(x_539, 2, x_515);
lean_ctor_set(x_539, 3, x_537);
return x_539;
}
}
else
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_540 = lean_ctor_get(x_514, 0);
lean_inc(x_540);
x_541 = lean_nat_add(x_512, x_540);
lean_dec(x_540);
lean_dec(x_512);
x_542 = lean_nat_add(x_541, x_522);
lean_dec(x_541);
lean_inc(x_359);
if (lean_is_scalar(x_520)) {
 x_543 = lean_alloc_ctor(1, 4, 0);
} else {
 x_543 = x_520;
}
lean_ctor_set(x_543, 0, x_542);
lean_ctor_set(x_543, 1, x_359);
lean_ctor_set(x_543, 2, x_360);
lean_ctor_set(x_543, 3, x_514);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 lean_ctor_release(x_359, 2);
 lean_ctor_release(x_359, 3);
 x_544 = x_359;
} else {
 lean_dec_ref(x_359);
 x_544 = lean_box(0);
}
if (lean_obj_tag(x_516) == 0)
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; 
x_545 = lean_unsigned_to_nat(0u);
x_546 = lean_nat_add(x_545, x_362);
lean_dec(x_362);
x_547 = lean_nat_add(x_546, x_522);
lean_dec(x_546);
lean_inc(x_3);
if (lean_is_scalar(x_544)) {
 x_548 = lean_alloc_ctor(1, 4, 0);
} else {
 x_548 = x_544;
}
lean_ctor_set(x_548, 0, x_547);
lean_ctor_set(x_548, 1, x_516);
lean_ctor_set(x_548, 2, x_2);
lean_ctor_set(x_548, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_549 = x_3;
} else {
 lean_dec_ref(x_3);
 x_549 = lean_box(0);
}
if (lean_is_scalar(x_549)) {
 x_550 = lean_alloc_ctor(1, 4, 0);
} else {
 x_550 = x_549;
}
lean_ctor_set(x_550, 0, x_523);
lean_ctor_set(x_550, 1, x_543);
lean_ctor_set(x_550, 2, x_515);
lean_ctor_set(x_550, 3, x_548);
return x_550;
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; 
x_551 = lean_ctor_get(x_516, 0);
lean_inc(x_551);
x_552 = lean_nat_add(x_551, x_362);
lean_dec(x_362);
lean_dec(x_551);
x_553 = lean_nat_add(x_552, x_522);
lean_dec(x_552);
lean_inc(x_3);
if (lean_is_scalar(x_544)) {
 x_554 = lean_alloc_ctor(1, 4, 0);
} else {
 x_554 = x_544;
}
lean_ctor_set(x_554, 0, x_553);
lean_ctor_set(x_554, 1, x_516);
lean_ctor_set(x_554, 2, x_2);
lean_ctor_set(x_554, 3, x_3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 x_555 = x_3;
} else {
 lean_dec_ref(x_3);
 x_555 = lean_box(0);
}
if (lean_is_scalar(x_555)) {
 x_556 = lean_alloc_ctor(1, 4, 0);
} else {
 x_556 = x_555;
}
lean_ctor_set(x_556, 0, x_523);
lean_ctor_set(x_556, 1, x_543);
lean_ctor_set(x_556, 2, x_515);
lean_ctor_set(x_556, 3, x_554);
return x_556;
}
}
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; 
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_514);
lean_dec(x_512);
x_557 = lean_nat_add(x_358, x_362);
lean_dec(x_358);
x_558 = lean_unsigned_to_nat(1u);
x_559 = lean_nat_add(x_557, x_558);
lean_dec(x_557);
x_560 = lean_nat_add(x_513, x_362);
lean_dec(x_362);
lean_dec(x_513);
x_561 = lean_nat_add(x_560, x_558);
lean_dec(x_560);
x_562 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_562, 0, x_561);
lean_ctor_set(x_562, 1, x_361);
lean_ctor_set(x_562, 2, x_2);
lean_ctor_set(x_562, 3, x_3);
x_563 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_563, 0, x_559);
lean_ctor_set(x_563, 1, x_359);
lean_ctor_set(x_563, 2, x_360);
lean_ctor_set(x_563, 3, x_562);
return x_563;
}
}
}
}
}
}
else
{
uint8_t x_564; 
lean_dec(x_361);
lean_dec(x_360);
lean_dec(x_359);
x_564 = !lean_is_exclusive(x_3);
if (x_564 == 0)
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; 
x_565 = lean_ctor_get(x_3, 3);
lean_dec(x_565);
x_566 = lean_ctor_get(x_3, 2);
lean_dec(x_566);
x_567 = lean_ctor_get(x_3, 1);
lean_dec(x_567);
x_568 = lean_ctor_get(x_3, 0);
lean_dec(x_568);
if (lean_obj_tag(x_363) == 0)
{
lean_free_object(x_3);
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_362);
lean_dec(x_358);
lean_dec(x_2);
lean_dec(x_1);
return x_363;
}
else
{
if (lean_obj_tag(x_365) == 0)
{
lean_free_object(x_3);
lean_dec(x_364);
lean_dec(x_363);
lean_dec(x_362);
lean_dec(x_358);
lean_dec(x_2);
lean_dec(x_1);
return x_365;
}
else
{
lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; uint8_t x_576; 
x_569 = lean_ctor_get(x_363, 0);
lean_inc(x_569);
x_570 = lean_ctor_get(x_363, 1);
lean_inc(x_570);
x_571 = lean_ctor_get(x_363, 2);
lean_inc(x_571);
x_572 = lean_ctor_get(x_363, 3);
lean_inc(x_572);
x_573 = lean_ctor_get(x_365, 0);
lean_inc(x_573);
x_574 = lean_unsigned_to_nat(2u);
x_575 = lean_nat_mul(x_574, x_573);
x_576 = lean_nat_dec_lt(x_569, x_575);
lean_dec(x_575);
if (x_576 == 0)
{
uint8_t x_577; 
lean_dec(x_569);
x_577 = !lean_is_exclusive(x_363);
if (x_577 == 0)
{
lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; 
x_578 = lean_ctor_get(x_363, 3);
lean_dec(x_578);
x_579 = lean_ctor_get(x_363, 2);
lean_dec(x_579);
x_580 = lean_ctor_get(x_363, 1);
lean_dec(x_580);
x_581 = lean_ctor_get(x_363, 0);
lean_dec(x_581);
x_582 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
x_583 = lean_unsigned_to_nat(1u);
x_584 = lean_nat_add(x_582, x_583);
lean_dec(x_582);
if (lean_obj_tag(x_570) == 0)
{
lean_object* x_585; lean_object* x_586; lean_object* x_587; uint8_t x_588; 
x_585 = lean_unsigned_to_nat(0u);
x_586 = lean_nat_add(x_358, x_585);
lean_dec(x_358);
x_587 = lean_nat_add(x_586, x_583);
lean_dec(x_586);
lean_inc(x_1);
lean_ctor_set(x_363, 3, x_570);
lean_ctor_set(x_363, 2, x_2);
lean_ctor_set(x_363, 1, x_1);
lean_ctor_set(x_363, 0, x_587);
x_588 = !lean_is_exclusive(x_1);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
x_589 = lean_ctor_get(x_1, 3);
lean_dec(x_589);
x_590 = lean_ctor_get(x_1, 2);
lean_dec(x_590);
x_591 = lean_ctor_get(x_1, 1);
lean_dec(x_591);
x_592 = lean_ctor_get(x_1, 0);
lean_dec(x_592);
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_593; lean_object* x_594; 
x_593 = lean_nat_add(x_585, x_573);
lean_dec(x_573);
x_594 = lean_nat_add(x_593, x_583);
lean_dec(x_593);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_594);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_571);
lean_ctor_set(x_1, 1, x_363);
lean_ctor_set(x_1, 0, x_584);
return x_1;
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_595 = lean_ctor_get(x_572, 0);
lean_inc(x_595);
x_596 = lean_nat_add(x_595, x_573);
lean_dec(x_573);
lean_dec(x_595);
x_597 = lean_nat_add(x_596, x_583);
lean_dec(x_596);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_597);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_571);
lean_ctor_set(x_1, 1, x_363);
lean_ctor_set(x_1, 0, x_584);
return x_1;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; 
x_598 = lean_nat_add(x_585, x_573);
lean_dec(x_573);
x_599 = lean_nat_add(x_598, x_583);
lean_dec(x_598);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_599);
x_600 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_600, 0, x_584);
lean_ctor_set(x_600, 1, x_363);
lean_ctor_set(x_600, 2, x_571);
lean_ctor_set(x_600, 3, x_3);
return x_600;
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; 
x_601 = lean_ctor_get(x_572, 0);
lean_inc(x_601);
x_602 = lean_nat_add(x_601, x_573);
lean_dec(x_573);
lean_dec(x_601);
x_603 = lean_nat_add(x_602, x_583);
lean_dec(x_602);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_603);
x_604 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_604, 0, x_584);
lean_ctor_set(x_604, 1, x_363);
lean_ctor_set(x_604, 2, x_571);
lean_ctor_set(x_604, 3, x_3);
return x_604;
}
}
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; uint8_t x_608; 
x_605 = lean_ctor_get(x_570, 0);
lean_inc(x_605);
x_606 = lean_nat_add(x_358, x_605);
lean_dec(x_605);
lean_dec(x_358);
x_607 = lean_nat_add(x_606, x_583);
lean_dec(x_606);
lean_inc(x_1);
lean_ctor_set(x_363, 3, x_570);
lean_ctor_set(x_363, 2, x_2);
lean_ctor_set(x_363, 1, x_1);
lean_ctor_set(x_363, 0, x_607);
x_608 = !lean_is_exclusive(x_1);
if (x_608 == 0)
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
x_609 = lean_ctor_get(x_1, 3);
lean_dec(x_609);
x_610 = lean_ctor_get(x_1, 2);
lean_dec(x_610);
x_611 = lean_ctor_get(x_1, 1);
lean_dec(x_611);
x_612 = lean_ctor_get(x_1, 0);
lean_dec(x_612);
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; 
x_613 = lean_unsigned_to_nat(0u);
x_614 = lean_nat_add(x_613, x_573);
lean_dec(x_573);
x_615 = lean_nat_add(x_614, x_583);
lean_dec(x_614);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_615);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_571);
lean_ctor_set(x_1, 1, x_363);
lean_ctor_set(x_1, 0, x_584);
return x_1;
}
else
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; 
x_616 = lean_ctor_get(x_572, 0);
lean_inc(x_616);
x_617 = lean_nat_add(x_616, x_573);
lean_dec(x_573);
lean_dec(x_616);
x_618 = lean_nat_add(x_617, x_583);
lean_dec(x_617);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_618);
lean_ctor_set(x_1, 3, x_3);
lean_ctor_set(x_1, 2, x_571);
lean_ctor_set(x_1, 1, x_363);
lean_ctor_set(x_1, 0, x_584);
return x_1;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; 
x_619 = lean_unsigned_to_nat(0u);
x_620 = lean_nat_add(x_619, x_573);
lean_dec(x_573);
x_621 = lean_nat_add(x_620, x_583);
lean_dec(x_620);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_621);
x_622 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_622, 0, x_584);
lean_ctor_set(x_622, 1, x_363);
lean_ctor_set(x_622, 2, x_571);
lean_ctor_set(x_622, 3, x_3);
return x_622;
}
else
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; 
x_623 = lean_ctor_get(x_572, 0);
lean_inc(x_623);
x_624 = lean_nat_add(x_623, x_573);
lean_dec(x_573);
lean_dec(x_623);
x_625 = lean_nat_add(x_624, x_583);
lean_dec(x_624);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_625);
x_626 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_626, 0, x_584);
lean_ctor_set(x_626, 1, x_363);
lean_ctor_set(x_626, 2, x_571);
lean_ctor_set(x_626, 3, x_3);
return x_626;
}
}
}
}
else
{
lean_object* x_627; lean_object* x_628; lean_object* x_629; 
lean_dec(x_363);
x_627 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
x_628 = lean_unsigned_to_nat(1u);
x_629 = lean_nat_add(x_627, x_628);
lean_dec(x_627);
if (lean_obj_tag(x_570) == 0)
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; 
x_630 = lean_unsigned_to_nat(0u);
x_631 = lean_nat_add(x_358, x_630);
lean_dec(x_358);
x_632 = lean_nat_add(x_631, x_628);
lean_dec(x_631);
lean_inc(x_1);
x_633 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_633, 0, x_632);
lean_ctor_set(x_633, 1, x_1);
lean_ctor_set(x_633, 2, x_2);
lean_ctor_set(x_633, 3, x_570);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_634 = x_1;
} else {
 lean_dec_ref(x_1);
 x_634 = lean_box(0);
}
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_635; lean_object* x_636; lean_object* x_637; 
x_635 = lean_nat_add(x_630, x_573);
lean_dec(x_573);
x_636 = lean_nat_add(x_635, x_628);
lean_dec(x_635);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_636);
if (lean_is_scalar(x_634)) {
 x_637 = lean_alloc_ctor(1, 4, 0);
} else {
 x_637 = x_634;
}
lean_ctor_set(x_637, 0, x_629);
lean_ctor_set(x_637, 1, x_633);
lean_ctor_set(x_637, 2, x_571);
lean_ctor_set(x_637, 3, x_3);
return x_637;
}
else
{
lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; 
x_638 = lean_ctor_get(x_572, 0);
lean_inc(x_638);
x_639 = lean_nat_add(x_638, x_573);
lean_dec(x_573);
lean_dec(x_638);
x_640 = lean_nat_add(x_639, x_628);
lean_dec(x_639);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_640);
if (lean_is_scalar(x_634)) {
 x_641 = lean_alloc_ctor(1, 4, 0);
} else {
 x_641 = x_634;
}
lean_ctor_set(x_641, 0, x_629);
lean_ctor_set(x_641, 1, x_633);
lean_ctor_set(x_641, 2, x_571);
lean_ctor_set(x_641, 3, x_3);
return x_641;
}
}
else
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; 
x_642 = lean_ctor_get(x_570, 0);
lean_inc(x_642);
x_643 = lean_nat_add(x_358, x_642);
lean_dec(x_642);
lean_dec(x_358);
x_644 = lean_nat_add(x_643, x_628);
lean_dec(x_643);
lean_inc(x_1);
x_645 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_645, 0, x_644);
lean_ctor_set(x_645, 1, x_1);
lean_ctor_set(x_645, 2, x_2);
lean_ctor_set(x_645, 3, x_570);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_646 = x_1;
} else {
 lean_dec_ref(x_1);
 x_646 = lean_box(0);
}
if (lean_obj_tag(x_572) == 0)
{
lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; 
x_647 = lean_unsigned_to_nat(0u);
x_648 = lean_nat_add(x_647, x_573);
lean_dec(x_573);
x_649 = lean_nat_add(x_648, x_628);
lean_dec(x_648);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_649);
if (lean_is_scalar(x_646)) {
 x_650 = lean_alloc_ctor(1, 4, 0);
} else {
 x_650 = x_646;
}
lean_ctor_set(x_650, 0, x_629);
lean_ctor_set(x_650, 1, x_645);
lean_ctor_set(x_650, 2, x_571);
lean_ctor_set(x_650, 3, x_3);
return x_650;
}
else
{
lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; 
x_651 = lean_ctor_get(x_572, 0);
lean_inc(x_651);
x_652 = lean_nat_add(x_651, x_573);
lean_dec(x_573);
lean_dec(x_651);
x_653 = lean_nat_add(x_652, x_628);
lean_dec(x_652);
lean_ctor_set(x_3, 1, x_572);
lean_ctor_set(x_3, 0, x_653);
if (lean_is_scalar(x_646)) {
 x_654 = lean_alloc_ctor(1, 4, 0);
} else {
 x_654 = x_646;
}
lean_ctor_set(x_654, 0, x_629);
lean_ctor_set(x_654, 1, x_645);
lean_ctor_set(x_654, 2, x_571);
lean_ctor_set(x_654, 3, x_3);
return x_654;
}
}
}
}
else
{
lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; uint8_t x_660; 
lean_dec(x_573);
lean_dec(x_572);
lean_dec(x_571);
lean_dec(x_570);
x_655 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
x_656 = lean_unsigned_to_nat(1u);
x_657 = lean_nat_add(x_655, x_656);
lean_dec(x_655);
x_658 = lean_nat_add(x_358, x_569);
lean_dec(x_569);
lean_dec(x_358);
x_659 = lean_nat_add(x_658, x_656);
lean_dec(x_658);
lean_inc(x_1);
lean_ctor_set(x_3, 3, x_363);
lean_ctor_set(x_3, 2, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_659);
x_660 = !lean_is_exclusive(x_1);
if (x_660 == 0)
{
lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; 
x_661 = lean_ctor_get(x_1, 3);
lean_dec(x_661);
x_662 = lean_ctor_get(x_1, 2);
lean_dec(x_662);
x_663 = lean_ctor_get(x_1, 1);
lean_dec(x_663);
x_664 = lean_ctor_get(x_1, 0);
lean_dec(x_664);
lean_ctor_set(x_1, 3, x_365);
lean_ctor_set(x_1, 2, x_364);
lean_ctor_set(x_1, 1, x_3);
lean_ctor_set(x_1, 0, x_657);
return x_1;
}
else
{
lean_object* x_665; 
lean_dec(x_1);
x_665 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_665, 0, x_657);
lean_ctor_set(x_665, 1, x_3);
lean_ctor_set(x_665, 2, x_364);
lean_ctor_set(x_665, 3, x_365);
return x_665;
}
}
}
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_363) == 0)
{
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_362);
lean_dec(x_358);
lean_dec(x_2);
lean_dec(x_1);
return x_363;
}
else
{
if (lean_obj_tag(x_365) == 0)
{
lean_dec(x_364);
lean_dec(x_363);
lean_dec(x_362);
lean_dec(x_358);
lean_dec(x_2);
lean_dec(x_1);
return x_365;
}
else
{
lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; uint8_t x_673; 
x_666 = lean_ctor_get(x_363, 0);
lean_inc(x_666);
x_667 = lean_ctor_get(x_363, 1);
lean_inc(x_667);
x_668 = lean_ctor_get(x_363, 2);
lean_inc(x_668);
x_669 = lean_ctor_get(x_363, 3);
lean_inc(x_669);
x_670 = lean_ctor_get(x_365, 0);
lean_inc(x_670);
x_671 = lean_unsigned_to_nat(2u);
x_672 = lean_nat_mul(x_671, x_670);
x_673 = lean_nat_dec_lt(x_666, x_672);
lean_dec(x_672);
if (x_673 == 0)
{
lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; 
lean_dec(x_666);
if (lean_is_exclusive(x_363)) {
 lean_ctor_release(x_363, 0);
 lean_ctor_release(x_363, 1);
 lean_ctor_release(x_363, 2);
 lean_ctor_release(x_363, 3);
 x_674 = x_363;
} else {
 lean_dec_ref(x_363);
 x_674 = lean_box(0);
}
x_675 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
x_676 = lean_unsigned_to_nat(1u);
x_677 = lean_nat_add(x_675, x_676);
lean_dec(x_675);
if (lean_obj_tag(x_667) == 0)
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; 
x_678 = lean_unsigned_to_nat(0u);
x_679 = lean_nat_add(x_358, x_678);
lean_dec(x_358);
x_680 = lean_nat_add(x_679, x_676);
lean_dec(x_679);
lean_inc(x_1);
if (lean_is_scalar(x_674)) {
 x_681 = lean_alloc_ctor(1, 4, 0);
} else {
 x_681 = x_674;
}
lean_ctor_set(x_681, 0, x_680);
lean_ctor_set(x_681, 1, x_1);
lean_ctor_set(x_681, 2, x_2);
lean_ctor_set(x_681, 3, x_667);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_682 = x_1;
} else {
 lean_dec_ref(x_1);
 x_682 = lean_box(0);
}
if (lean_obj_tag(x_669) == 0)
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; 
x_683 = lean_nat_add(x_678, x_670);
lean_dec(x_670);
x_684 = lean_nat_add(x_683, x_676);
lean_dec(x_683);
x_685 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_685, 0, x_684);
lean_ctor_set(x_685, 1, x_669);
lean_ctor_set(x_685, 2, x_364);
lean_ctor_set(x_685, 3, x_365);
if (lean_is_scalar(x_682)) {
 x_686 = lean_alloc_ctor(1, 4, 0);
} else {
 x_686 = x_682;
}
lean_ctor_set(x_686, 0, x_677);
lean_ctor_set(x_686, 1, x_681);
lean_ctor_set(x_686, 2, x_668);
lean_ctor_set(x_686, 3, x_685);
return x_686;
}
else
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_687 = lean_ctor_get(x_669, 0);
lean_inc(x_687);
x_688 = lean_nat_add(x_687, x_670);
lean_dec(x_670);
lean_dec(x_687);
x_689 = lean_nat_add(x_688, x_676);
lean_dec(x_688);
x_690 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_690, 0, x_689);
lean_ctor_set(x_690, 1, x_669);
lean_ctor_set(x_690, 2, x_364);
lean_ctor_set(x_690, 3, x_365);
if (lean_is_scalar(x_682)) {
 x_691 = lean_alloc_ctor(1, 4, 0);
} else {
 x_691 = x_682;
}
lean_ctor_set(x_691, 0, x_677);
lean_ctor_set(x_691, 1, x_681);
lean_ctor_set(x_691, 2, x_668);
lean_ctor_set(x_691, 3, x_690);
return x_691;
}
}
else
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; 
x_692 = lean_ctor_get(x_667, 0);
lean_inc(x_692);
x_693 = lean_nat_add(x_358, x_692);
lean_dec(x_692);
lean_dec(x_358);
x_694 = lean_nat_add(x_693, x_676);
lean_dec(x_693);
lean_inc(x_1);
if (lean_is_scalar(x_674)) {
 x_695 = lean_alloc_ctor(1, 4, 0);
} else {
 x_695 = x_674;
}
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_1);
lean_ctor_set(x_695, 2, x_2);
lean_ctor_set(x_695, 3, x_667);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_696 = x_1;
} else {
 lean_dec_ref(x_1);
 x_696 = lean_box(0);
}
if (lean_obj_tag(x_669) == 0)
{
lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; 
x_697 = lean_unsigned_to_nat(0u);
x_698 = lean_nat_add(x_697, x_670);
lean_dec(x_670);
x_699 = lean_nat_add(x_698, x_676);
lean_dec(x_698);
x_700 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_700, 0, x_699);
lean_ctor_set(x_700, 1, x_669);
lean_ctor_set(x_700, 2, x_364);
lean_ctor_set(x_700, 3, x_365);
if (lean_is_scalar(x_696)) {
 x_701 = lean_alloc_ctor(1, 4, 0);
} else {
 x_701 = x_696;
}
lean_ctor_set(x_701, 0, x_677);
lean_ctor_set(x_701, 1, x_695);
lean_ctor_set(x_701, 2, x_668);
lean_ctor_set(x_701, 3, x_700);
return x_701;
}
else
{
lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; 
x_702 = lean_ctor_get(x_669, 0);
lean_inc(x_702);
x_703 = lean_nat_add(x_702, x_670);
lean_dec(x_670);
lean_dec(x_702);
x_704 = lean_nat_add(x_703, x_676);
lean_dec(x_703);
x_705 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_705, 0, x_704);
lean_ctor_set(x_705, 1, x_669);
lean_ctor_set(x_705, 2, x_364);
lean_ctor_set(x_705, 3, x_365);
if (lean_is_scalar(x_696)) {
 x_706 = lean_alloc_ctor(1, 4, 0);
} else {
 x_706 = x_696;
}
lean_ctor_set(x_706, 0, x_677);
lean_ctor_set(x_706, 1, x_695);
lean_ctor_set(x_706, 2, x_668);
lean_ctor_set(x_706, 3, x_705);
return x_706;
}
}
}
else
{
lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; 
lean_dec(x_670);
lean_dec(x_669);
lean_dec(x_668);
lean_dec(x_667);
x_707 = lean_nat_add(x_358, x_362);
lean_dec(x_362);
x_708 = lean_unsigned_to_nat(1u);
x_709 = lean_nat_add(x_707, x_708);
lean_dec(x_707);
x_710 = lean_nat_add(x_358, x_666);
lean_dec(x_666);
lean_dec(x_358);
x_711 = lean_nat_add(x_710, x_708);
lean_dec(x_710);
lean_inc(x_1);
x_712 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_712, 0, x_711);
lean_ctor_set(x_712, 1, x_1);
lean_ctor_set(x_712, 2, x_2);
lean_ctor_set(x_712, 3, x_363);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_713 = x_1;
} else {
 lean_dec_ref(x_1);
 x_713 = lean_box(0);
}
if (lean_is_scalar(x_713)) {
 x_714 = lean_alloc_ctor(1, 4, 0);
} else {
 x_714 = x_713;
}
lean_ctor_set(x_714, 0, x_709);
lean_ctor_set(x_714, 1, x_712);
lean_ctor_set(x_714, 2, x_364);
lean_ctor_set(x_714, 3, x_365);
return x_714;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_balance(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_balance___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Ordnode_All_decidable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
lean_dec(x_2);
x_3 = 1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_2);
x_7 = l_Ordnode_All_decidable___rarg(x_4, x_2);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; lean_object* x_10; uint8_t x_11; 
lean_inc(x_2);
x_9 = l_Ordnode_All_decidable___rarg(x_6, x_2);
x_10 = lean_apply_1(x_2, x_5);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
return x_9;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_All_decidable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_All_decidable___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_All_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Ordnode_All_decidable___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordnode_Any_decidable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
lean_dec(x_2);
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_2);
x_7 = l_Ordnode_Any_decidable___rarg(x_4, x_2);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
x_8 = l_Ordnode_Any_decidable___rarg(x_6, x_2);
x_9 = lean_apply_1(x_2, x_5);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
return x_8;
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_12 = 1;
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_Any_decidable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_Any_decidable___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Any_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Ordnode_Any_decidable___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordnode_Emem_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_apply_1(x_2, x_1);
x_5 = l_Ordnode_Any_decidable___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Emem_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_Emem_decidable___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Emem_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Ordnode_Emem_decidable___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_2(x_1, x_3, x_2);
return x_8;
}
}
}
LEAN_EXPORT uint8_t l_Ordnode_Amem_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_Ordnode_Amem_decidable___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = l_Ordnode_Any_decidable___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_Amem_decidable___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Ordnode_Amem_decidable___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_Amem_decidable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_Amem_decidable(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_1 = x_3;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findMin_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_findMin_x27___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin___rarg(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_Ordnode_findMin_x27___rarg(x_3, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findMin___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMin___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_findMin___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 2);
x_4 = lean_ctor_get(x_2, 3);
x_1 = x_3;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findMax_x27___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_findMax_x27___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax___rarg(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Ordnode_findMax_x27___rarg(x_3, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findMax___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findMax___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_findMax___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_eraseMin___rarg(lean_object* x_1) {
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
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Ordnode_eraseMin___rarg(x_3);
x_9 = l_Ordnode_balanceR___rarg(x_8, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_13);
x_15 = l_Ordnode_eraseMin___rarg(x_14);
x_16 = l_Ordnode_balanceR___rarg(x_15, x_5, x_6);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_eraseMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_eraseMin___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_eraseMax___rarg(lean_object* x_1) {
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
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Ordnode_eraseMax___rarg(x_3);
x_9 = l_Ordnode_balanceL___rarg(x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_13);
x_15 = l_Ordnode_eraseMax___rarg(x_14);
x_16 = l_Ordnode_balanceL___rarg(x_5, x_6, x_15);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_eraseMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_eraseMax___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMin_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Ordnode_splitMin_x27___rarg(x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = l_Ordnode_balanceR___rarg(x_10, x_2, x_3);
lean_ctor_set(x_8, 1, x_11);
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
x_14 = l_Ordnode_balanceR___rarg(x_13, x_2, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMin_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitMin_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMin___rarg(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Ordnode_splitMin_x27___rarg(x_3, x_4, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitMin___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMax_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 3);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Ordnode_splitMax_x27___rarg(x_5, x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Ordnode_balanceL___rarg(x_1, x_2, x_10);
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
x_14 = l_Ordnode_balanceL___rarg(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMax_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitMax_x27___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMax___rarg(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Ordnode_splitMax_x27___rarg(x_3, x_4, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitMax___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_glue___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
x_11 = lean_nat_dec_lt(x_7, x_3);
lean_dec(x_3);
lean_dec(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = l_Ordnode_splitMin_x27___rarg(x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Ordnode_balanceL___rarg(x_1, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_16 = l_Ordnode_splitMax_x27___rarg(x_4, x_5, x_6);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Ordnode_balanceR___rarg(x_17, x_18, x_2);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_glue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_glue___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_nat_mul(x_12, x_1);
x_14 = lean_nat_dec_lt(x_13, x_6);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_10);
x_15 = lean_nat_mul(x_12, x_6);
x_16 = lean_nat_dec_lt(x_15, x_1);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_7);
lean_ctor_set(x_17, 2, x_8);
lean_ctor_set(x_17, 3, x_9);
x_18 = l_Ordnode_glue___rarg(x_2, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_19 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_19, 0, x_6);
lean_ctor_set(x_19, 1, x_7);
lean_ctor_set(x_19, 2, x_8);
lean_ctor_set(x_19, 3, x_9);
x_20 = lean_apply_1(x_3, x_19);
x_21 = l_Ordnode_balanceR___rarg(x_4, x_5, x_20);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = l_Ordnode_balanceL___rarg(x_10, x_8, x_9);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Ordnode_merge___rarg___lambda__2___boxed), 11, 5);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
lean_closure_set(x_9, 2, x_6);
lean_closure_set(x_9, 3, x_2);
lean_closure_set(x_9, 4, x_3);
x_10 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_8, x_9, x_7);
lean_dec(x_8);
return x_10;
}
}
static lean_object* _init_l_Ordnode_merge___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_merge___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Ordnode_merge___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_merge___rarg___lambda__3___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Ordnode_merge___rarg___closed__1;
x_4 = l_Ordnode_merge___rarg___closed__2;
x_5 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_3, x_4, x_1);
x_6 = lean_apply_1(x_5, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_merge___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Ordnode_merge___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Ordnode_merge___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Ordnode_merge___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Ordnode_merge___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertMax___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Ordnode_insertMax___rarg(x_8, x_2);
x_10 = l_Ordnode_balanceR___rarg(x_6, x_7, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertMax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_insertMax___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertMin___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Ordnode_insertMin___rarg(x_1, x_6);
x_10 = l_Ordnode_balanceR___rarg(x_9, x_7, x_8);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_insertMin___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_link___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = l_Ordnode_insertMin___rarg(x_2, x_3);
return x_4;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
x_5 = l_Ordnode_insertMax___rarg(x_1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 3);
lean_inc(x_13);
x_14 = lean_unsigned_to_nat(3u);
x_15 = lean_nat_mul(x_14, x_6);
x_16 = lean_nat_dec_lt(x_15, x_10);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_nat_mul(x_14, x_10);
x_18 = lean_nat_dec_lt(x_17, x_6);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_19 = lean_nat_add(x_6, x_10);
lean_dec(x_10);
lean_dec(x_6);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_19, x_20);
lean_dec(x_19);
x_22 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_1);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_22, 3, x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_23 = l_Ordnode_link___rarg(x_9, x_2, x_13);
x_24 = l_Ordnode_balanceR___rarg(x_7, x_8, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_25 = l_Ordnode_link___rarg(x_7, x_2, x_11);
x_26 = l_Ordnode_balanceL___rarg(x_25, x_12, x_13);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_link(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_link___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_filter___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_inc(x_1);
x_9 = l_Ordnode_filter___rarg(x_1, x_4);
x_10 = l_Ordnode_filter___rarg(x_1, x_6);
x_11 = l_Ordnode_merge___rarg___closed__1;
x_12 = l_Ordnode_merge___rarg___closed__2;
x_13 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_11, x_12, x_9);
x_14 = lean_apply_1(x_13, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_15 = l_Ordnode_filter___rarg(x_1, x_4);
x_16 = l_Ordnode_filter___rarg(x_1, x_6);
x_17 = l_Ordnode_link___rarg(x_15, x_5, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_filter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_filter___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Ordnode_partition___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_partition___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_Ordnode_partition___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = l_Ordnode_partition___rarg(x_1, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Ordnode_partition___rarg(x_1, x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_5);
x_14 = lean_apply_1(x_1, x_5);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = l_Ordnode_merge___rarg___closed__1;
x_17 = l_Ordnode_merge___rarg___closed__2;
x_18 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_16, x_17, x_8);
x_19 = lean_apply_1(x_18, x_12);
x_20 = l_Ordnode_link___rarg(x_9, x_5, x_13);
lean_ctor_set(x_10, 1, x_20);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = l_Ordnode_link___rarg(x_8, x_5, x_12);
x_22 = l_Ordnode_merge___rarg___closed__1;
x_23 = l_Ordnode_merge___rarg___closed__2;
x_24 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_22, x_23, x_9);
x_25 = lean_apply_1(x_24, x_13);
lean_ctor_set(x_10, 1, x_25);
lean_ctor_set(x_10, 0, x_21);
return x_10;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
lean_inc(x_5);
x_28 = lean_apply_1(x_1, x_5);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = l_Ordnode_merge___rarg___closed__1;
x_31 = l_Ordnode_merge___rarg___closed__2;
x_32 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_30, x_31, x_8);
x_33 = lean_apply_1(x_32, x_26);
x_34 = l_Ordnode_link___rarg(x_9, x_5, x_27);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = l_Ordnode_link___rarg(x_8, x_5, x_26);
x_37 = l_Ordnode_merge___rarg___closed__1;
x_38 = l_Ordnode_merge___rarg___closed__2;
x_39 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_37, x_38, x_9);
x_40 = lean_apply_1(x_39, x_27);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_partition(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_partition___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_map___rarg(lean_object* x_1, lean_object* x_2) {
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
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_1);
x_8 = l_Ordnode_map___rarg(x_1, x_5);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_6);
x_10 = l_Ordnode_map___rarg(x_1, x_7);
lean_ctor_set(x_2, 3, x_10);
lean_ctor_set(x_2, 2, x_9);
lean_ctor_set(x_2, 1, x_8);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_2, 2);
x_14 = lean_ctor_get(x_2, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_1);
x_15 = l_Ordnode_map___rarg(x_1, x_12);
lean_inc(x_1);
x_16 = lean_apply_1(x_1, x_13);
x_17 = l_Ordnode_map___rarg(x_1, x_14);
x_18 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_map___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_fold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 3);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_2);
x_7 = l_Ordnode_fold___rarg(x_1, x_2, x_4);
lean_inc(x_2);
x_8 = l_Ordnode_fold___rarg(x_1, x_2, x_6);
x_9 = lean_apply_3(x_2, x_7, x_5, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_fold(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_fold___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_fold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_fold___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 3);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = l_Ordnode_foldl___rarg(x_1, x_2, x_4);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_7, x_5);
x_2 = x_8;
x_3 = x_6;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_foldl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_foldl___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_foldr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = l_Ordnode_foldr___rarg(x_1, x_6, x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_5, x_7);
x_2 = x_4;
x_3 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_foldr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_foldr___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_toList___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Ordnode_toList___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_toList___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_toList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_Ordnode_toList___rarg___closed__1;
x_4 = l_Ordnode_foldr___rarg(x_3, x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_toList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_toList___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_toRevList___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_toList___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_flip___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_toRevList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_Ordnode_toRevList___rarg___closed__1;
x_4 = l_Ordnode_foldl___rarg(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_toRevList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_toRevList___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_instToString___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Ordnode_instToString___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_instToString___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("}", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instToString___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = l_Ordnode_toList___rarg(x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___rarg(x_1, x_3, x_4);
x_6 = l_Ordnode_instToString___rarg___closed__1;
x_7 = l_String_intercalate(x_6, x_5);
x_8 = l_Ordnode_instToString___rarg___closed__2;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Ordnode_instToString___rarg___closed__3;
x_11 = lean_string_append(x_9, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instToString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_instToString___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Ordnode_instToFormat___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Ordnode_instToString___rarg___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instToFormat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Ordnode_toList___rarg(x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___rarg(x_1, x_3, x_4);
x_6 = l_Ordnode_instToFormat___rarg___closed__1;
x_7 = l_Std_Format_joinSep___at_Prod_repr___spec__1(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instToFormat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_instToFormat___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Ordnode_toList___rarg(x_2);
x_5 = l_Ordnode_toList___rarg(x_3);
x_6 = l_List_hasDecEq___rarg(x_1, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_8, x_7);
lean_dec(x_7);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Ordnode_toList___rarg(x_2);
x_12 = l_Ordnode_toList___rarg(x_3);
x_13 = l_List_hasDecEq___rarg(x_1, x_11, x_12);
return x_13;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_2);
lean_dec(x_1);
x_17 = 0;
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = l_Ordnode_toList___rarg(x_2);
x_19 = l_Ordnode_toList___rarg(x_3);
x_20 = l_List_hasDecEq___rarg(x_1, x_18, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_2, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = 0;
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = l_Ordnode_toList___rarg(x_2);
x_26 = l_Ordnode_toList___rarg(x_3);
x_27 = l_List_hasDecEq___rarg(x_1, x_25, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_instDecidableRelEquivOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Ordnode_instDecidableRelEquivOfDecidableEq___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_powerset___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_1);
x_6 = lean_alloc_closure((void*)(l_Ordnode_insertMin___rarg), 2, 1);
lean_closure_set(x_6, 0, x_2);
lean_inc(x_3);
x_7 = l_Ordnode_map___rarg(x_6, x_3);
x_8 = l_Ordnode_insertMin___rarg(x_5, x_7);
x_9 = l_Ordnode_glue___rarg(x_8, x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Ordnode_powerset___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_alloc_closure((void*)(l_Ordnode_powerset___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Ordnode_foldr___rarg(x_3, x_1, x_2);
x_5 = l_Ordnode_insertMin___rarg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_powerset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_powerset___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_alloc_closure((void*)(l_Ordnode_prod___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Ordnode_map___rarg(x_5, x_1);
x_7 = l_Ordnode_merge___rarg___closed__1;
x_8 = l_Ordnode_merge___rarg___closed__2;
x_9 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_7, x_8, x_6);
x_10 = lean_apply_1(x_9, x_4);
x_11 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_7, x_8, x_2);
x_12 = lean_apply_1(x_11, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Ordnode_prod___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_closure((void*)(l_Ordnode_prod___rarg___lambda__2), 4, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Ordnode_fold___rarg(x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_prod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_prod___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Ordnode_copair___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_copair___rarg___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Ordnode_copair___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_copair___rarg___lambda__2), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_copair___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_Ordnode_copair___rarg___closed__1;
x_4 = l_Ordnode_map___rarg(x_3, x_1);
x_5 = l_Ordnode_copair___rarg___closed__2;
x_6 = l_Ordnode_map___rarg(x_5, x_2);
x_7 = l_Ordnode_merge___rarg___closed__1;
x_8 = l_Ordnode_merge___rarg___closed__2;
x_9 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_7, x_8, x_4);
x_10 = lean_apply_1(x_9, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Ordnode_copair(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_copair___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_pmap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_1);
x_9 = l_Ordnode_pmap___rarg(x_1, x_6, lean_box(0));
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_7, lean_box(0));
x_11 = l_Ordnode_pmap___rarg(x_1, x_8, lean_box(0));
lean_ctor_set(x_2, 3, x_11);
lean_ctor_set(x_2, 2, x_10);
lean_ctor_set(x_2, 1, x_9);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
x_15 = lean_ctor_get(x_2, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_1);
x_16 = l_Ordnode_pmap___rarg(x_1, x_13, lean_box(0));
lean_inc(x_1);
x_17 = lean_apply_2(x_1, x_14, lean_box(0));
x_18 = l_Ordnode_pmap___rarg(x_1, x_15, lean_box(0));
x_19 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_17);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_pmap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Ordnode_pmap___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Ordnode_attach_x27___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Ordnode_attach_x27___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Ordnode_attach_x27___rarg___closed__1;
x_4 = l_Ordnode_pmap___rarg(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_attach_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_attach_x27___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_attach_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_attach_x27___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_nth___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_le(x_7, x_2);
if (x_8 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_nat_sub(x_2, x_7);
lean_dec(x_2);
x_11 = lean_nat_dec_eq(x_10, x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_10, x_12);
lean_dec(x_10);
x_1 = x_6;
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
lean_inc(x_5);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_5);
return x_15;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get(x_1, 3);
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_nat_dec_le(x_18, x_2);
if (x_19 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_nat_sub(x_2, x_18);
lean_dec(x_2);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_eq(x_21, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_21, x_24);
lean_dec(x_21);
x_1 = x_17;
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_27; 
lean_dec(x_21);
lean_inc(x_16);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_16);
return x_27;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_nth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_nth___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_nth___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_nth___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_removeNth___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_le(x_7, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Ordnode_removeNth___rarg(x_4, x_2);
x_10 = l_Ordnode_balanceR___rarg(x_9, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_nat_sub(x_2, x_7);
x_12 = lean_nat_dec_eq(x_11, x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_11, x_13);
lean_dec(x_11);
x_15 = l_Ordnode_removeNth___rarg(x_6, x_14);
lean_dec(x_14);
x_16 = l_Ordnode_balanceL___rarg(x_4, x_5, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_5);
x_17 = l_Ordnode_glue___rarg(x_4, x_6);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_4, 0);
lean_inc(x_20);
x_21 = lean_nat_dec_le(x_20, x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_20);
x_22 = l_Ordnode_removeNth___rarg(x_4, x_2);
x_23 = l_Ordnode_balanceR___rarg(x_22, x_18, x_19);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_nat_sub(x_2, x_20);
lean_dec(x_20);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_eq(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_24, x_27);
lean_dec(x_24);
x_29 = l_Ordnode_removeNth___rarg(x_19, x_28);
lean_dec(x_28);
x_30 = l_Ordnode_balanceL___rarg(x_4, x_18, x_29);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_18);
x_31 = l_Ordnode_glue___rarg(x_4, x_19);
return x_31;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_removeNth(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_removeNth___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_removeNth___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_removeNth___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_takeAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_2, x_7);
if (x_8 == 0)
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_7, x_2);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_nat_sub(x_2, x_7);
x_12 = lean_nat_dec_eq(x_11, x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_11, x_13);
lean_dec(x_11);
x_15 = l_Ordnode_takeAux___rarg(x_6, x_14);
lean_dec(x_14);
x_16 = l_Ordnode_link___rarg(x_4, x_5, x_15);
return x_16;
}
else
{
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_4;
}
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
x_18 = lean_nat_dec_le(x_17, x_2);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_nat_sub(x_2, x_17);
lean_dec(x_17);
x_21 = lean_nat_dec_eq(x_20, x_7);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_20, x_22);
lean_dec(x_20);
x_24 = l_Ordnode_takeAux___rarg(x_6, x_23);
lean_dec(x_23);
x_25 = l_Ordnode_link___rarg(x_4, x_5, x_24);
return x_25;
}
else
{
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_5);
return x_4;
}
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = lean_box(0);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_takeAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_takeAux___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_takeAux___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_takeAux___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_take___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_le(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Ordnode_takeAux___rarg(x_2, x_1);
return x_5;
}
else
{
return x_2;
}
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_nat_dec_le(x_6, x_1);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = l_Ordnode_takeAux___rarg(x_2, x_1);
return x_8;
}
else
{
return x_2;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_take(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_take___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_take___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_take___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_dropAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_2, x_7);
if (x_8 == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_7, x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Ordnode_dropAux___rarg(x_4, x_2);
x_11 = l_Ordnode_link___rarg(x_10, x_5, x_6);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_nat_sub(x_2, x_7);
lean_dec(x_2);
x_13 = lean_nat_dec_eq(x_12, x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_12, x_14);
lean_dec(x_12);
x_1 = x_6;
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
x_17 = l_Ordnode_insertMin___rarg(x_5, x_6);
return x_17;
}
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
x_19 = lean_nat_dec_le(x_18, x_2);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_18);
x_20 = l_Ordnode_dropAux___rarg(x_4, x_2);
x_21 = l_Ordnode_link___rarg(x_20, x_5, x_6);
return x_21;
}
else
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_4);
x_22 = lean_nat_sub(x_2, x_18);
lean_dec(x_18);
lean_dec(x_2);
x_23 = lean_nat_dec_eq(x_22, x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_5);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_22, x_24);
lean_dec(x_22);
x_1 = x_6;
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_27; 
lean_dec(x_22);
x_27 = l_Ordnode_insertMin___rarg(x_5, x_6);
return x_27;
}
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_1;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_dropAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_dropAux___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_drop___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_le(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Ordnode_dropAux___rarg(x_2, x_1);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_nat_dec_le(x_7, x_1);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Ordnode_dropAux___rarg(x_2, x_1);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_drop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_drop___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_Ordnode_partition___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_2, x_7);
if (x_8 == 0)
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_7, x_2);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Ordnode_splitAtAux___rarg(x_4, x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = l_Ordnode_link___rarg(x_12, x_5, x_6);
lean_ctor_set(x_10, 1, x_13);
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
x_16 = l_Ordnode_link___rarg(x_15, x_5, x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_nat_sub(x_2, x_7);
x_19 = lean_nat_dec_eq(x_18, x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_18, x_20);
lean_dec(x_18);
x_22 = l_Ordnode_splitAtAux___rarg(x_6, x_21);
lean_dec(x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = l_Ordnode_link___rarg(x_4, x_5, x_24);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
x_28 = l_Ordnode_link___rarg(x_4, x_5, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_18);
lean_inc(x_6);
x_30 = l_Ordnode_glue___rarg(x_4, x_6);
x_31 = l_Ordnode_insertMin___rarg(x_5, x_6);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_4, 0);
lean_inc(x_33);
x_34 = lean_nat_dec_le(x_33, x_2);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
lean_dec(x_33);
x_35 = l_Ordnode_splitAtAux___rarg(x_4, x_2);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 1);
x_38 = l_Ordnode_link___rarg(x_37, x_5, x_6);
lean_ctor_set(x_35, 1, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_35, 0);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_35);
x_41 = l_Ordnode_link___rarg(x_40, x_5, x_6);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_nat_sub(x_2, x_33);
lean_dec(x_33);
x_44 = lean_nat_dec_eq(x_43, x_7);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_sub(x_43, x_45);
lean_dec(x_43);
x_47 = l_Ordnode_splitAtAux___rarg(x_6, x_46);
lean_dec(x_46);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = l_Ordnode_link___rarg(x_4, x_5, x_49);
lean_ctor_set(x_47, 0, x_50);
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_47, 0);
x_52 = lean_ctor_get(x_47, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_47);
x_53 = l_Ordnode_link___rarg(x_4, x_5, x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_43);
lean_inc(x_6);
x_55 = l_Ordnode_glue___rarg(x_4, x_6);
x_56 = l_Ordnode_insertMin___rarg(x_5, x_6);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_1);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitAtAux___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAtAux___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_splitAtAux___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_le(x_3, x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Ordnode_splitAtAux___rarg(x_2, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_nat_dec_le(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Ordnode_splitAtAux___rarg(x_2, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_splitAt___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_splitAt___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_splitAt___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_takeWhile___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Ordnode_takeWhile___rarg(x_1, x_6);
x_11 = l_Ordnode_link___rarg(x_4, x_5, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_takeWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_takeWhile___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_dropWhile___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Ordnode_dropWhile___rarg(x_1, x_4);
x_10 = l_Ordnode_link___rarg(x_9, x_5, x_6);
return x_10;
}
else
{
lean_dec(x_5);
lean_dec(x_4);
x_2 = x_6;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_dropWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_dropWhile___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_span___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_Ordnode_partition___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Ordnode_span___rarg(x_1, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = l_Ordnode_link___rarg(x_11, x_5, x_6);
lean_ctor_set(x_9, 1, x_12);
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
x_15 = l_Ordnode_link___rarg(x_14, x_5, x_6);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Ordnode_span___rarg(x_1, x_6);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_Ordnode_link___rarg(x_4, x_5, x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = l_Ordnode_link___rarg(x_4, x_5, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_span(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_span___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Ordnode_ofAscListAux_u2081___rarg___closed__1() {
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
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_Ordnode_ofAscListAux_u2081___rarg___closed__1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_eq(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_free_object(x_1);
lean_dec(x_5);
x_9 = lean_nat_shiftl(x_2, x_7);
x_10 = l_Ordnode_ofAscListAux_u2081___rarg(x_6, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 1, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = l_Ordnode_ofAscListAux_u2081___rarg(x_20, x_9);
lean_dec(x_9);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Ordnode_link___rarg(x_18, x_19, x_23);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_21);
x_27 = l_Ordnode_link___rarg(x_18, x_19, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_5);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 0, x_30);
return x_1;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_1, 0);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_1);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_dec_eq(x_2, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_31);
x_35 = lean_nat_shiftl(x_2, x_33);
x_36 = l_Ordnode_ofAscListAux_u2081___rarg(x_32, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_35);
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
x_40 = lean_box(0);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_36, 0);
lean_inc(x_42);
lean_dec(x_36);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_dec(x_37);
x_45 = l_Ordnode_ofAscListAux_u2081___rarg(x_44, x_35);
lean_dec(x_35);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_48 = x_45;
} else {
 lean_dec_ref(x_45);
 x_48 = lean_box(0);
}
x_49 = l_Ordnode_link___rarg(x_42, x_43, x_46);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_52, 0, x_33);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_52, 2, x_31);
lean_ctor_set(x_52, 3, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_32);
return x_53;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_ofAscListAux_u2081___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2081___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Ordnode_ofAscListAux_u2081___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2082___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Ordnode_ofAscListAux_u2081___rarg(x_5, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Ordnode_link___rarg(x_2, x_4, x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_shiftl(x_3, x_10);
lean_dec(x_3);
x_1 = x_8;
x_2 = x_9;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscListAux_u2082(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_ofAscListAux_u2082___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscList___rarg(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_5);
x_8 = l_Ordnode_ofAscListAux_u2082___rarg(x_4, x_7, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofAscList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_ofAscList___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Ordnode_mem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_dec(x_8);
x_4 = x_6;
goto _start;
}
case 1:
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = 1;
return x_11;
}
default: 
{
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_mem(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_mem___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_mem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordnode_mem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_find___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_dec(x_8);
lean_dec(x_7);
x_4 = x_6;
goto _start;
}
case 1:
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_7);
return x_11;
}
default: 
{
lean_dec(x_7);
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_find(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_find___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_find___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_find___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instMembership(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instMembership___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_instMembership(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordnode_mem_decidable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Ordnode_mem___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_mem_decidable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_mem_decidable___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_mem_decidable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordnode_mem_decidable___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertWith___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 2);
x_13 = lean_ctor_get(x_5, 3);
lean_inc(x_12);
lean_inc(x_4);
lean_inc(x_2);
x_14 = l_cmpLE___rarg(x_2, x_4, x_12);
switch (x_14) {
case 0:
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_5);
lean_dec(x_10);
x_15 = l_Ordnode_insertWith___rarg(x_1, x_2, x_3, x_4, x_11);
x_16 = l_Ordnode_balanceL___rarg(x_15, x_12, x_13);
return x_16;
}
case 1:
{
lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_apply_1(x_3, x_12);
lean_ctor_set(x_5, 2, x_17);
return x_5;
}
default: 
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_5);
lean_dec(x_10);
x_18 = l_Ordnode_insertWith___rarg(x_1, x_2, x_3, x_4, x_13);
x_19 = l_Ordnode_balanceR___rarg(x_11, x_12, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
x_22 = lean_ctor_get(x_5, 2);
x_23 = lean_ctor_get(x_5, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
lean_inc(x_22);
lean_inc(x_4);
lean_inc(x_2);
x_24 = l_cmpLE___rarg(x_2, x_4, x_22);
switch (x_24) {
case 0:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_20);
x_25 = l_Ordnode_insertWith___rarg(x_1, x_2, x_3, x_4, x_21);
x_26 = l_Ordnode_balanceL___rarg(x_25, x_22, x_23);
return x_26;
}
case 1:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_4);
lean_dec(x_2);
x_27 = lean_apply_1(x_3, x_22);
x_28 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set(x_28, 3, x_23);
return x_28;
}
default: 
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_20);
x_29 = l_Ordnode_insertWith___rarg(x_1, x_2, x_3, x_4, x_23);
x_30 = l_Ordnode_balanceR___rarg(x_21, x_22, x_29);
return x_30;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertWith(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_insertWith___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insertWith___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_insertWith___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_adjustWith___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_5, 2);
x_10 = lean_ctor_get(x_5, 3);
lean_inc(x_9);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_cmpLE___rarg(x_2, x_4, x_9);
switch (x_11) {
case 0:
{
lean_object* x_12; 
x_12 = l_Ordnode_adjustWith___rarg(x_1, x_2, x_3, x_4, x_8);
lean_ctor_set(x_5, 1, x_12);
return x_5;
}
case 1:
{
lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_9);
lean_ctor_set(x_5, 2, x_13);
return x_5;
}
default: 
{
lean_object* x_14; 
x_14 = l_Ordnode_adjustWith___rarg(x_1, x_2, x_3, x_4, x_10);
lean_ctor_set(x_5, 3, x_14);
return x_5;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_ctor_get(x_5, 2);
x_18 = lean_ctor_get(x_5, 3);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
lean_inc(x_17);
lean_inc(x_4);
lean_inc(x_2);
x_19 = l_cmpLE___rarg(x_2, x_4, x_17);
switch (x_19) {
case 0:
{
lean_object* x_20; lean_object* x_21; 
x_20 = l_Ordnode_adjustWith___rarg(x_1, x_2, x_3, x_4, x_16);
x_21 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_18);
return x_21;
}
case 1:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_2);
x_22 = lean_apply_1(x_3, x_17);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_15);
lean_ctor_set(x_23, 1, x_16);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_18);
return x_23;
}
default: 
{
lean_object* x_24; lean_object* x_25; 
x_24 = l_Ordnode_adjustWith___rarg(x_1, x_2, x_3, x_4, x_18);
x_25 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_25, 0, x_15);
lean_ctor_set(x_25, 1, x_16);
lean_ctor_set(x_25, 2, x_17);
lean_ctor_set(x_25, 3, x_24);
return x_25;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_adjustWith(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_adjustWith___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_adjustWith___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_adjustWith___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_updateWith___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
x_10 = lean_ctor_get(x_5, 2);
x_11 = lean_ctor_get(x_5, 3);
lean_inc(x_10);
lean_inc(x_4);
lean_inc(x_2);
x_12 = l_cmpLE___rarg(x_2, x_4, x_10);
switch (x_12) {
case 0:
{
lean_object* x_13; lean_object* x_14; 
lean_free_object(x_5);
lean_dec(x_8);
x_13 = l_Ordnode_updateWith___rarg(x_1, x_2, x_3, x_4, x_9);
x_14 = l_Ordnode_balanceR___rarg(x_13, x_10, x_11);
return x_14;
}
case 1:
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_free_object(x_5);
lean_dec(x_8);
x_16 = l_Ordnode_glue___rarg(x_9, x_11);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_ctor_set(x_5, 2, x_17);
return x_5;
}
}
default: 
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_5);
lean_dec(x_8);
x_18 = l_Ordnode_updateWith___rarg(x_1, x_2, x_3, x_4, x_11);
x_19 = l_Ordnode_balanceL___rarg(x_9, x_10, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
x_22 = lean_ctor_get(x_5, 2);
x_23 = lean_ctor_get(x_5, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
lean_inc(x_22);
lean_inc(x_4);
lean_inc(x_2);
x_24 = l_cmpLE___rarg(x_2, x_4, x_22);
switch (x_24) {
case 0:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_20);
x_25 = l_Ordnode_updateWith___rarg(x_1, x_2, x_3, x_4, x_21);
x_26 = l_Ordnode_balanceR___rarg(x_25, x_22, x_23);
return x_26;
}
case 1:
{
lean_object* x_27; 
lean_dec(x_4);
lean_dec(x_2);
x_27 = lean_apply_1(x_3, x_22);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
lean_dec(x_20);
x_28 = l_Ordnode_glue___rarg(x_21, x_23);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_21);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_23);
return x_30;
}
}
default: 
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_20);
x_31 = l_Ordnode_updateWith___rarg(x_1, x_2, x_3, x_4, x_23);
x_32 = l_Ordnode_balanceL___rarg(x_21, x_22, x_31);
return x_32;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_updateWith(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_updateWith___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_updateWith___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_updateWith___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_alter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
x_8 = lean_box(0);
x_9 = l_Ordnode_instSingleton___closed__1;
x_10 = l_Option_rec____x40_Mathlib_Data_Option_Basic___hyg_2881____rarg(x_8, x_9, x_7);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_ctor_get(x_5, 2);
x_15 = lean_ctor_get(x_5, 3);
lean_inc(x_14);
lean_inc(x_4);
lean_inc(x_2);
x_16 = l_cmpLE___rarg(x_2, x_4, x_14);
switch (x_16) {
case 0:
{
lean_object* x_17; lean_object* x_18; 
lean_free_object(x_5);
lean_dec(x_12);
x_17 = l_Ordnode_alter___rarg(x_1, x_2, x_3, x_4, x_13);
x_18 = l_Ordnode_balance___rarg(x_17, x_14, x_15);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_2);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_14);
x_20 = lean_apply_1(x_3, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_free_object(x_5);
lean_dec(x_12);
x_21 = l_Ordnode_glue___rarg(x_13, x_15);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
lean_ctor_set(x_5, 2, x_22);
return x_5;
}
}
default: 
{
lean_object* x_23; lean_object* x_24; 
lean_free_object(x_5);
lean_dec(x_12);
x_23 = l_Ordnode_alter___rarg(x_1, x_2, x_3, x_4, x_15);
x_24 = l_Ordnode_balance___rarg(x_13, x_14, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
x_27 = lean_ctor_get(x_5, 2);
x_28 = lean_ctor_get(x_5, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
lean_inc(x_27);
lean_inc(x_4);
lean_inc(x_2);
x_29 = l_cmpLE___rarg(x_2, x_4, x_27);
switch (x_29) {
case 0:
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
x_30 = l_Ordnode_alter___rarg(x_1, x_2, x_3, x_4, x_26);
x_31 = l_Ordnode_balance___rarg(x_30, x_27, x_28);
return x_31;
}
case 1:
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_4);
lean_dec(x_2);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_27);
x_33 = lean_apply_1(x_3, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
lean_dec(x_25);
x_34 = l_Ordnode_glue___rarg(x_26, x_28);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_26);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_36, 3, x_28);
return x_36;
}
}
default: 
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_25);
x_37 = l_Ordnode_alter___rarg(x_1, x_2, x_3, x_4, x_28);
x_38 = l_Ordnode_balance___rarg(x_26, x_27, x_37);
return x_38;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_alter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_alter___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_alter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_alter___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_5);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_4, 2);
x_12 = lean_ctor_get(x_4, 3);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_cmpLE___rarg(x_2, x_3, x_11);
switch (x_13) {
case 0:
{
lean_object* x_14; lean_object* x_15; 
lean_free_object(x_4);
lean_dec(x_9);
x_14 = l_Ordnode_insert___rarg(x_1, x_2, x_3, x_10);
x_15 = l_Ordnode_balanceL___rarg(x_14, x_11, x_12);
return x_15;
}
case 1:
{
lean_dec(x_11);
lean_dec(x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_4);
lean_dec(x_9);
x_16 = l_Ordnode_insert___rarg(x_1, x_2, x_3, x_12);
x_17 = l_Ordnode_balanceR___rarg(x_10, x_11, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
x_20 = lean_ctor_get(x_4, 2);
x_21 = lean_ctor_get(x_4, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
lean_inc(x_20);
lean_inc(x_3);
lean_inc(x_2);
x_22 = l_cmpLE___rarg(x_2, x_3, x_20);
switch (x_22) {
case 0:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
x_23 = l_Ordnode_insert___rarg(x_1, x_2, x_3, x_19);
x_24 = l_Ordnode_balanceL___rarg(x_23, x_20, x_21);
return x_24;
}
case 1:
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_2);
x_25 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_3);
lean_ctor_set(x_25, 3, x_21);
return x_25;
}
default: 
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_18);
x_26 = l_Ordnode_insert___rarg(x_1, x_2, x_3, x_21);
x_27 = l_Ordnode_balanceR___rarg(x_19, x_20, x_26);
return x_27;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_insert___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_insert___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instInsert___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_insert___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_instInsert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_instInsert___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_cmpLE___rarg(x_2, x_3, x_9);
switch (x_11) {
case 0:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_12 = l_Ordnode_insert_x27___rarg(x_1, x_2, x_3, x_8);
x_13 = l_Ordnode_balanceL___rarg(x_12, x_9, x_10);
return x_13;
}
case 1:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
default: 
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = l_Ordnode_insert_x27___rarg(x_1, x_2, x_3, x_10);
x_15 = l_Ordnode_balanceR___rarg(x_8, x_9, x_14);
return x_15;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_insert_x27___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_insert_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_insert_x27___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_split___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = l_Ordnode_partition___rarg___closed__1;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Ordnode_split___rarg(x_1, x_2, x_3, x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = l_Ordnode_link___rarg(x_12, x_7, x_8);
lean_ctor_set(x_10, 1, x_13);
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
x_16 = l_Ordnode_link___rarg(x_15, x_7, x_8);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
case 1:
{
lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_6);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
default: 
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Ordnode_split___rarg(x_1, x_2, x_3, x_8);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = l_Ordnode_link___rarg(x_6, x_7, x_21);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = l_Ordnode_link___rarg(x_6, x_7, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_split(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_split___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_split___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_split___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Ordnode_split3___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Ordnode_split3___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Ordnode_split3___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_split3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = l_Ordnode_split3___rarg___closed__2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Ordnode_split3___rarg(x_1, x_2, x_3, x_6);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = l_Ordnode_link___rarg(x_14, x_7, x_8);
lean_ctor_set(x_12, 1, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Ordnode_link___rarg(x_17, x_7, x_8);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_10, 1, x_19);
return x_10;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_10, 1);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_inc(x_21);
lean_dec(x_10);
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
x_25 = l_Ordnode_link___rarg(x_23, x_7, x_8);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 2, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
case 1:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_7);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_8);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_6);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
default: 
{
lean_object* x_31; uint8_t x_32; 
x_31 = l_Ordnode_split3___rarg(x_1, x_2, x_3, x_8);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_31, 1);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = l_Ordnode_link___rarg(x_6, x_7, x_35);
lean_ctor_set(x_31, 0, x_36);
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_33, 0);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_33);
x_40 = l_Ordnode_link___rarg(x_6, x_7, x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_31, 1, x_41);
lean_ctor_set(x_31, 0, x_40);
return x_31;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_31, 1);
x_43 = lean_ctor_get(x_31, 0);
lean_inc(x_42);
lean_inc(x_43);
lean_dec(x_31);
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
x_47 = l_Ordnode_link___rarg(x_6, x_7, x_43);
if (lean_is_scalar(x_46)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_46;
}
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_45);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_split3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_split3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_split3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_split3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Ordnode_erase___rarg(x_1, x_2, x_3, x_6);
x_11 = l_Ordnode_balanceR___rarg(x_10, x_7, x_8);
return x_11;
}
case 1:
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l_Ordnode_glue___rarg(x_6, x_8);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Ordnode_erase___rarg(x_1, x_2, x_3, x_8);
x_14 = l_Ordnode_balanceL___rarg(x_6, x_7, x_13);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_erase(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_erase___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_erase___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_erase___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLtAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_7);
lean_inc(x_3);
x_9 = lean_apply_2(x_2, x_3, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_7);
x_4 = x_6;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLtAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findLtAux___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLtAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_findLtAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_7);
lean_inc(x_3);
x_9 = lean_apply_2(x_2, x_3, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
x_11 = l_Ordnode_findLtAux___rarg(x_1, x_2, x_3, x_8, x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
lean_dec(x_8);
lean_dec(x_7);
x_4 = x_6;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findLt___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLt___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_findLt___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGtAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_7);
x_9 = lean_apply_2(x_2, x_7, x_3);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
x_4 = x_6;
x_5 = x_7;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGtAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findGtAux___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGtAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_findGtAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_7);
x_9 = lean_apply_2(x_2, x_7, x_3);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
x_11 = l_Ordnode_findGtAux___rarg(x_1, x_2, x_3, x_6, x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findGt___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGt___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_findGt___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLeAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_dec(x_8);
lean_dec(x_7);
x_4 = x_6;
goto _start;
}
case 1:
{
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
default: 
{
lean_dec(x_6);
lean_dec(x_5);
x_4 = x_8;
x_5 = x_7;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLeAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findLeAux___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLeAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_findLeAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_dec(x_8);
lean_dec(x_7);
x_4 = x_6;
goto _start;
}
case 1:
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_7);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
x_12 = l_Ordnode_findLeAux___rarg(x_1, x_2, x_3, x_8, x_7);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findLe___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findLe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_findLe___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGeAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_dec(x_8);
lean_dec(x_5);
x_4 = x_6;
x_5 = x_7;
goto _start;
}
case 1:
{
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
default: 
{
lean_dec(x_7);
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGeAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findGeAux___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGeAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_findGeAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 3);
lean_inc(x_8);
lean_dec(x_4);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_cmpLE___rarg(x_2, x_3, x_7);
switch (x_9) {
case 0:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_10 = l_Ordnode_findGeAux___rarg(x_1, x_2, x_3, x_6, x_7);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
case 1:
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_7);
return x_12;
}
default: 
{
lean_dec(x_7);
lean_dec(x_6);
x_4 = x_8;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findGe___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findGe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_findGe___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 3);
lean_inc(x_9);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_cmpLE___rarg(x_2, x_3, x_8);
switch (x_10) {
case 0:
{
lean_dec(x_9);
x_4 = x_7;
goto _start;
}
case 1:
{
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_15);
lean_dec(x_5);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
default: 
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_19, x_20);
lean_dec(x_19);
x_4 = x_9;
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_nat_add(x_5, x_23);
lean_dec(x_23);
lean_dec(x_5);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_24, x_25);
lean_dec(x_24);
x_4 = x_9;
x_5 = x_26;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findIndexAux___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndexAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Ordnode_findIndexAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Ordnode_findIndexAux___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndex(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_findIndex___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_findIndex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_findIndex___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Ordnode_isSubsetAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_5; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = 1;
return x_5;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_2);
x_10 = l_Ordnode_split3___rarg(x_1, x_2, x_8, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_2);
x_16 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_7, x_14);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_2);
x_17 = 0;
return x_17;
}
else
{
x_3 = x_9;
x_4 = x_15;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_isSubsetAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_isSubsetAux___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_isSubsetAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Ordnode_isSubset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_le(x_7, x_6);
lean_dec(x_6);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = 0;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_3, x_4);
return x_10;
}
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_le(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = 0;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_3, x_4);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
x_18 = lean_nat_dec_le(x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = 0;
return x_19;
}
else
{
uint8_t x_20; 
x_20 = l_Ordnode_isSubsetAux___rarg(x_1, x_2, x_3, x_4);
return x_20;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_isSubset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_isSubset___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_isSubset___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordnode_isSubset___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Ordnode_disjoint___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_5; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = 1;
return x_5;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = 1;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 3);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_2);
x_10 = l_Ordnode_split3___rarg(x_1, x_2, x_8, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
lean_inc(x_2);
x_15 = l_Ordnode_disjoint___rarg(x_1, x_2, x_7, x_13);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_2);
x_16 = 0;
return x_16;
}
else
{
x_3 = x_9;
x_4 = x_14;
goto _start;
}
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_18 = 0;
return x_18;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_disjoint(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_disjoint___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_disjoint___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Ordnode_disjoint___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_union___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
return x_4;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 3);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_9, x_11);
lean_dec(x_9);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_10);
lean_dec(x_3);
x_13 = lean_nat_dec_eq(x_5, x_11);
lean_dec(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_7);
lean_inc(x_2);
x_14 = l_Ordnode_split___rarg(x_1, x_2, x_7, x_4);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_2);
x_17 = l_Ordnode_union___rarg(x_1, x_2, x_6, x_15);
x_18 = l_Ordnode_union___rarg(x_1, x_2, x_8, x_16);
x_19 = l_Ordnode_link___rarg(x_17, x_7, x_18);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_8);
lean_dec(x_6);
x_20 = l_Ordnode_insert___rarg(x_1, x_2, x_7, x_4);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = l_Ordnode_insert_x27___rarg(x_1, x_2, x_10, x_3);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_union(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_union___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_union___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_union___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_diff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 3);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Ordnode_split___rarg(x_1, x_2, x_6, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_2);
x_12 = l_Ordnode_diff___rarg(x_1, x_2, x_10, x_5);
x_13 = l_Ordnode_diff___rarg(x_1, x_2, x_11, x_7);
if (lean_obj_tag(x_12) == 0)
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_14, x_8);
lean_dec(x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_16 = l_Ordnode_merge___rarg___closed__1;
x_17 = l_Ordnode_merge___rarg___closed__2;
x_18 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_16, x_17, x_12);
x_19 = lean_apply_1(x_18, x_13);
return x_19;
}
else
{
return x_3;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_add(x_21, x_20);
lean_dec(x_20);
x_23 = lean_nat_dec_eq(x_22, x_8);
lean_dec(x_8);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_3);
x_24 = l_Ordnode_merge___rarg___closed__1;
x_25 = l_Ordnode_merge___rarg___closed__2;
x_26 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_24, x_25, x_12);
x_27 = lean_apply_1(x_26, x_13);
return x_27;
}
else
{
lean_dec(x_13);
return x_3;
}
}
}
else
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_add(x_28, x_29);
lean_dec(x_28);
x_31 = lean_nat_dec_eq(x_30, x_8);
lean_dec(x_8);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_3);
x_32 = l_Ordnode_merge___rarg___closed__1;
x_33 = l_Ordnode_merge___rarg___closed__2;
x_34 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_32, x_33, x_12);
x_35 = lean_apply_1(x_34, x_13);
return x_35;
}
else
{
lean_dec(x_12);
return x_3;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_13, 0);
lean_inc(x_37);
x_38 = lean_nat_add(x_36, x_37);
lean_dec(x_37);
lean_dec(x_36);
x_39 = lean_nat_dec_eq(x_38, x_8);
lean_dec(x_8);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_3);
x_40 = l_Ordnode_merge___rarg___closed__1;
x_41 = l_Ordnode_merge___rarg___closed__2;
x_42 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_40, x_41, x_12);
x_43 = lean_apply_1(x_42, x_13);
return x_43;
}
else
{
lean_dec(x_13);
lean_dec(x_12);
return x_3;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_diff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_diff___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_diff___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_diff___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_inter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 3);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_7);
lean_inc(x_2);
x_9 = l_Ordnode_split3___rarg(x_1, x_2, x_7, x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_2);
x_14 = l_Ordnode_inter___rarg(x_1, x_2, x_6, x_11);
x_15 = l_Ordnode_inter___rarg(x_1, x_2, x_8, x_13);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_16 = l_Ordnode_merge___rarg___closed__1;
x_17 = l_Ordnode_merge___rarg___closed__2;
x_18 = l_Ordnode_rec____x40_Mathlib_Data_Ordmap_Ordnode___hyg_54____rarg(x_16, x_17, x_14);
x_19 = lean_apply_1(x_18, x_15);
return x_19;
}
else
{
lean_object* x_20; 
lean_dec(x_12);
x_20 = l_Ordnode_link___rarg(x_14, x_7, x_15);
return x_20;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_inter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_inter___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_inter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_inter___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_2);
x_11 = l_Ordnode_insert___rarg(x_1, x_2, x_10, x_6);
x_4 = x_9;
x_6 = x_11;
goto _start;
}
else
{
lean_dec(x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_2);
x_11 = l_Ordnode_insert___rarg(x_1, x_2, x_10, x_6);
x_4 = x_9;
x_6 = x_11;
goto _start;
}
else
{
lean_dec(x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = 0;
x_12 = l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
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
return x_3;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_ofList___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_Ordnode_ofList___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_foldrTR___at_Ordnode_ofList___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_ofList___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Ordnode_ofList_x27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = lean_apply_2(x_1, x_3, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Ordnode_ofList_x27___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_8, 0, x_2);
lean_inc(x_7);
lean_inc(x_6);
x_9 = l_List_decidableChain___rarg(x_8, x_6, x_7);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Ordnode_ofList___rarg(x_1, x_2, x_3);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = l_Ordnode_ofAscList___rarg(x_3);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Ordnode_ofList_x27___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_15, 0, x_2);
lean_inc(x_14);
lean_inc(x_13);
x_16 = l_List_decidableChain___rarg(x_15, x_13, x_14);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
x_19 = l_Ordnode_ofList___rarg(x_1, x_2, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
x_21 = l_Ordnode_ofAscList___rarg(x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Ordnode_ofList_x27___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Ordnode_ofList_x27___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Ordnode_ofList_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Ordnode_ofList_x27___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Ordnode_image___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Ordnode_toList___rarg(x_4);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___rarg(x_3, x_5, x_6);
x_8 = l_Ordnode_ofList___rarg(x_1, x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Ordnode_image(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Ordnode_image___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Ordnode_image___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Ordnode_image___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Compare(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_PSub(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Option_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Ordmap_Ordnode(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Compare(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_PSub(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Option_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Ordnode_delta = _init_l_Ordnode_delta();
lean_mark_persistent(l_Ordnode_delta);
l_Ordnode_ratio = _init_l_Ordnode_ratio();
lean_mark_persistent(l_Ordnode_ratio);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__1);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__2);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__3);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__4);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__5);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__6);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__7);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__8);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__9);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__10);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__11);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__12);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__13);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__14);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__15);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__16);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__17);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__18);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__19);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__20);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__21);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__22);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__23);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__24);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25 = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106____closed__25);
l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106_ = _init_l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106_();
lean_mark_persistent(l_Ordnode_term_u03b9______x40_Mathlib_Data_Ordmap_Ordnode___hyg_106_);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__1);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__2);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__3);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__4);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__5);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__6);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__7);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__8);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__9);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__10);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__11);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__12);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______macroRules__Ordnode__term_u03b9____1___closed__13);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__1);
l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2 = _init_l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2();
lean_mark_persistent(l_Ordnode___aux__Mathlib__Data__Ordmap__Ordnode______unexpand__Ordnode__singleton__1___closed__2);
l_Ordnode_instSingleton___closed__1 = _init_l_Ordnode_instSingleton___closed__1();
lean_mark_persistent(l_Ordnode_instSingleton___closed__1);
l_Ordnode_repr___rarg___closed__1 = _init_l_Ordnode_repr___rarg___closed__1();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__1);
l_Ordnode_repr___rarg___closed__2 = _init_l_Ordnode_repr___rarg___closed__2();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__2);
l_Ordnode_repr___rarg___closed__3 = _init_l_Ordnode_repr___rarg___closed__3();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__3);
l_Ordnode_repr___rarg___closed__4 = _init_l_Ordnode_repr___rarg___closed__4();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__4);
l_Ordnode_repr___rarg___closed__5 = _init_l_Ordnode_repr___rarg___closed__5();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__5);
l_Ordnode_repr___rarg___closed__6 = _init_l_Ordnode_repr___rarg___closed__6();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__6);
l_Ordnode_repr___rarg___closed__7 = _init_l_Ordnode_repr___rarg___closed__7();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__7);
l_Ordnode_repr___rarg___closed__8 = _init_l_Ordnode_repr___rarg___closed__8();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__8);
l_Ordnode_repr___rarg___closed__9 = _init_l_Ordnode_repr___rarg___closed__9();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__9);
l_Ordnode_repr___rarg___closed__10 = _init_l_Ordnode_repr___rarg___closed__10();
lean_mark_persistent(l_Ordnode_repr___rarg___closed__10);
l_Ordnode_merge___rarg___closed__1 = _init_l_Ordnode_merge___rarg___closed__1();
lean_mark_persistent(l_Ordnode_merge___rarg___closed__1);
l_Ordnode_merge___rarg___closed__2 = _init_l_Ordnode_merge___rarg___closed__2();
lean_mark_persistent(l_Ordnode_merge___rarg___closed__2);
l_Ordnode_partition___rarg___closed__1 = _init_l_Ordnode_partition___rarg___closed__1();
lean_mark_persistent(l_Ordnode_partition___rarg___closed__1);
l_Ordnode_toList___rarg___closed__1 = _init_l_Ordnode_toList___rarg___closed__1();
lean_mark_persistent(l_Ordnode_toList___rarg___closed__1);
l_Ordnode_toRevList___rarg___closed__1 = _init_l_Ordnode_toRevList___rarg___closed__1();
lean_mark_persistent(l_Ordnode_toRevList___rarg___closed__1);
l_Ordnode_instToString___rarg___closed__1 = _init_l_Ordnode_instToString___rarg___closed__1();
lean_mark_persistent(l_Ordnode_instToString___rarg___closed__1);
l_Ordnode_instToString___rarg___closed__2 = _init_l_Ordnode_instToString___rarg___closed__2();
lean_mark_persistent(l_Ordnode_instToString___rarg___closed__2);
l_Ordnode_instToString___rarg___closed__3 = _init_l_Ordnode_instToString___rarg___closed__3();
lean_mark_persistent(l_Ordnode_instToString___rarg___closed__3);
l_Ordnode_instToFormat___rarg___closed__1 = _init_l_Ordnode_instToFormat___rarg___closed__1();
lean_mark_persistent(l_Ordnode_instToFormat___rarg___closed__1);
l_Ordnode_copair___rarg___closed__1 = _init_l_Ordnode_copair___rarg___closed__1();
lean_mark_persistent(l_Ordnode_copair___rarg___closed__1);
l_Ordnode_copair___rarg___closed__2 = _init_l_Ordnode_copair___rarg___closed__2();
lean_mark_persistent(l_Ordnode_copair___rarg___closed__2);
l_Ordnode_attach_x27___rarg___closed__1 = _init_l_Ordnode_attach_x27___rarg___closed__1();
lean_mark_persistent(l_Ordnode_attach_x27___rarg___closed__1);
l_Ordnode_ofAscListAux_u2081___rarg___closed__1 = _init_l_Ordnode_ofAscListAux_u2081___rarg___closed__1();
lean_mark_persistent(l_Ordnode_ofAscListAux_u2081___rarg___closed__1);
l_Ordnode_split3___rarg___closed__1 = _init_l_Ordnode_split3___rarg___closed__1();
lean_mark_persistent(l_Ordnode_split3___rarg___closed__1);
l_Ordnode_split3___rarg___closed__2 = _init_l_Ordnode_split3___rarg___closed__2();
lean_mark_persistent(l_Ordnode_split3___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
