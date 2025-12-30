// Lean compiler output
// Module: Mathlib.Data.FinEnum
// Imports: Init Mathlib.Data.Fintype.Basic Mathlib.Data.Fintype.EquivFin Mathlib.Data.List.ProdSigma Mathlib.Data.List.Pi
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
static lean_object* l_FinEnum_punit___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofUnique(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_pempty___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3;
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_sum(lean_object*, lean_object*);
lean_object* l_Function_decidableEqPFun___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_fin___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_toList(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Subtype_finEnum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_Pi_finEnum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_pi___at_List_Pi_enum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Subtype_finEnum(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2;
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_fin___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_punit___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Function_Injective_decidableEq___at_Equiv_decidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Subtype_finEnum___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_Finset_enum___rarg___closed__2;
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2(lean_object*);
lean_object* l_Equiv_ofUnique___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_instDecidableEqEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_ofNodupList___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_prod(lean_object*, lean_object*);
static lean_object* l_ULift_instFinEnum___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_prod___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSigma___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_Pi_finEnum___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft___rarg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSigma___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_punit___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instFinEnum___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_punit;
static lean_object* l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_prod___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_List_dedup___at_List_Pi_finEnum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__17___rarg(lean_object*, lean_object*);
static lean_object* l_FinEnum_Finset_enum___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_Pi_enum___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1(lean_object*, lean_object*);
lean_object* l_Equiv_equivOfIsEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__8___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Pi_finEnum___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_PSigma_finEnum___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_prod___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_prod___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg(lean_object*, lean_object*);
extern lean_object* l_Fin_instUnique;
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_sum___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_instSigma___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSigma___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_prod___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Subtype_finEnum___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_Pi_enum___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instSubtypeMemListOfDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_Pi_enum___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_empty___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1;
static lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_Quotient_enum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_productTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__12___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3(lean_object*);
lean_object* l_List_mapTR_loop___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_pempty;
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_toList___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8___rarg(lean_object*, lean_object*);
lean_object* l_instDecidableEqFin___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_fin___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1(uint8_t);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_instSigma___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8(lean_object*);
lean_object* l_Equiv_ulift(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_prod___spec__2(lean_object*, lean_object*);
lean_object* l_List_get___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_List_pi___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_Pi_finEnum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_fin___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_sum___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_fin(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_empty___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_Pi_finEnum___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSigma___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instSubtypeMemListOfDecidableEq___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_empty___spec__7(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSigma___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_prod___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_finEnum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_prod___spec__3(lean_object*, lean_object*);
lean_object* l_exists__prop__decidable___rarg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_enum(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instUnique___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__8___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofIsEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__11___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8(uint8_t);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Finset_finEnum___spec__13___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_punit___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSigma___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_pempty___spec__9(lean_object*, lean_object*);
static lean_object* l_FinEnum_instUniqueOfIsEmpty___closed__1;
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__8(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSigma___spec__5___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_finEnum(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1(lean_object*);
uint8_t l_List_isPerm___at_List_decidablePerm___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_finEnum(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_pempty___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_Pi_finEnum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Subtype_finEnum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instUniqueOfIsEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_fin___spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instFintype___rarg(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Subtype_finEnum___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instFintype(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSigma___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pi___at_List_Pi_enum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnum(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instSigma___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableBAll___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSigma___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11(lean_object*);
static lean_object* l_FinEnum_ofEquiv___rarg___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_instUniqueOfIsEmpty___closed__2;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_fin___spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__17(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sigma_instDecidableEqSigma___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Pi_finEnum___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_empty___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19(lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at_FinEnum_Finset_finEnum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1(lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Finset_finEnum___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instSigma(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Pi_finEnum___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14(lean_object*, lean_object*);
uint8_t l_Fintype_decidablePiFintype___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_enum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2;
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_fin___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_fin___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_prod___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Subtype_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_prod___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8(uint8_t);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_pempty___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2(lean_object*, lean_object*);
lean_object* l_List_ofFn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Finset_finEnum___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_punit___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Pi_finEnum___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_fin___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Multiset_ndinsert___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_decidableEq__of__subsingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PSigma_decidableEq___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_psigmaEquivSigma(lean_object*, lean_object*);
lean_object* l_Equiv_ofUnique___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1(lean_object*);
lean_object* l_Quotient_decidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_toEmbedding___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSigma___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_Pi_finEnum___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_pfunFinEnum___rarg___closed__1;
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_empty___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_pempty___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSigma___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_FinEnum_ofIsEmpty___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_prod___spec__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_instUnique(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pfunFinEnum(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1;
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_empty___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_Quotient_enum(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_fin___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg(lean_object*);
lean_object* l_List_finRange___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__18___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_ofNodupList___spec__1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_instDecidableEqPUnit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_sum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_prod___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Finset_finEnum___spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__4(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_empty;
static uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqPEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_pfunFinEnum___rarg___closed__2;
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_fin___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_prod___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_pempty___spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofUnique___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Finset_finEnum___spec__7___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_pwFilter___at_List_dedup___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSigma___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList(lean_object*);
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_instFinEnum(lean_object*);
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__3___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_Pi_finEnum___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Function_Injective_decidableEq___at_Equiv_decidableEq___spec__1___rarg(x_1, x_2, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 0);
return x_5;
}
}
static lean_object* _init_l_FinEnum_ofEquiv___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqFin___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
lean_dec(x_5);
x_6 = l_Equiv_trans___rarg(x_2, x_4);
x_7 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
lean_ctor_set(x_1, 2, x_8);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Equiv_trans___rarg(x_2, x_10);
x_12 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_11);
x_13 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FinEnum_ofEquiv___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
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
x_7 = lean_apply_2(x_1, x_5, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_ofNodupList___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_ofNodupList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_ofNodupList___spec__1___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_ofNodupList___spec__2___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_2, x_5);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_1, x_2);
x_5 = l_FinEnum_ofNodupList___rarg(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
x_9 = l_Equiv_symm___elambda__2___rarg(x_2, x_7);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_9);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_2);
x_13 = l_Equiv_symm___elambda__2___rarg(x_2, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
x_3 = x_12;
x_4 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
static lean_object* _init_l_FinEnum_toList___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_finRange___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_toList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_FinEnum_toList___rarg___closed__1;
x_5 = l_List_ofFn___rarg(x_3, x_4);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg(x_1, x_2, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_toList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_toList___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapTR_loop___at_FinEnum_toList___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_FinEnum_toList___rarg(x_3);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___rarg(x_1, x_5, x_6);
x_8 = l_FinEnum_ofList___rarg(x_2, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofSurjective___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_ULift_instFinEnum___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULift_instFinEnum___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = l_ULift_instFinEnum___rarg___closed__1;
x_5 = l_Equiv_trans___rarg(x_4, x_3);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Init_Data_ULift_0__decEqULift____x40_Init_Data_ULift___hyg_3____at_ULift_instFinEnum___spec__1___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 0);
lean_dec(x_10);
lean_ctor_set(x_1, 2, x_6);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_5);
lean_ctor_set(x_11, 2, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_ULift_instFinEnum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_instFinEnum___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
lean_inc(x_4);
x_12 = l_List_decidableBAll___rarg(x_11, x_4);
if (x_12 == 0)
{
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
x_2 = x_7;
x_4 = x_15;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
lean_inc(x_4);
x_12 = l_List_decidableBAll___rarg(x_11, x_4);
if (x_12 == 0)
{
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
x_2 = x_7;
x_4 = x_15;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_pempty___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_le(x_4, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = 0;
x_10 = l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5(x_3, x_8, x_9, x_1);
lean_dec(x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_4);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6(x_3, x_13, x_14, x_1);
lean_dec(x_3);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_pempty___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_FinEnum_pempty___spec__4(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_pempty___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_FinEnum_pempty___spec__3(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_pempty___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_findIdx_go___at_FinEnum_pempty___spec__9(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_pempty___spec__8___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_pempty___spec__9(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqPEmpty___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1;
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_pempty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_pwFilter___at_FinEnum_pempty___spec__3(x_1);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7(x_3, lean_box(0), lean_box(0));
return x_4;
}
}
static lean_object* _init_l_FinEnum_pempty() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_FinEnum_ofList___at_FinEnum_pempty___spec__1(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___lambda__1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_pempty___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_pempty___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_findIdx_go___at_FinEnum_pempty___spec__9(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_idxOf___at_FinEnum_pempty___spec__8___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_pempty___spec__8___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_List_idxOf___at_FinEnum_pempty___spec__8(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___lambda__1(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1(uint8_t x_1) {
_start:
{
lean_internal_panic_unreachable();
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; uint8_t x_11; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1;
lean_inc(x_4);
x_11 = l_List_decidableBAll___rarg(x_10, x_4);
if (x_11 == 0)
{
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(x_9);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
x_2 = x_7;
x_4 = x_14;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_empty___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = 0;
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5(x_3, x_7, x_8, x_1);
lean_dec(x_3);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_empty___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_FinEnum_empty___spec__4(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_empty___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_FinEnum_empty___spec__3(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_empty___spec__7(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqEmpty___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1;
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_empty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_pwFilter___at_FinEnum_empty___spec__3(x_1);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6(x_3, lean_box(0), lean_box(0));
return x_4;
}
}
static lean_object* _init_l_FinEnum_empty() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_FinEnum_ofList___at_FinEnum_empty___spec__1(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___lambda__1(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_findIdx_go___at_FinEnum_empty___spec__8___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_empty___spec__8___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_List_findIdx_go___at_FinEnum_empty___spec__8(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_empty___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_idxOf___at_FinEnum_empty___spec__7(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___lambda__1(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
static uint8_t _init_l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___closed__1;
return x_2;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1;
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1;
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_punit___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_le(x_4, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = 0;
x_10 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5(x_3, x_8, x_9, x_1);
lean_dec(x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_4);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6(x_3, x_13, x_14, x_1);
lean_dec(x_3);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_punit___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_FinEnum_punit___spec__4(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_punit___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_FinEnum_punit___spec__3(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_punit___spec__8___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
static lean_object* _init_l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqPUnit___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1;
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_punit___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_pwFilter___at_FinEnum_punit___spec__3(x_1);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7(x_3, lean_box(0), lean_box(0));
return x_4;
}
}
static lean_object* _init_l_FinEnum_punit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_FinEnum_punit() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_FinEnum_punit___closed__1;
x_2 = l_FinEnum_ofList___at_FinEnum_punit___spec__1(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_findIdx_go___at_FinEnum_punit___spec__9___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_punit___spec__9___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_findIdx_go___at_FinEnum_punit___spec__9(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_idxOf___at_FinEnum_punit___spec__8___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_punit___spec__8___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_idxOf___at_FinEnum_punit___spec__8(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_instDecidableEqProd___rarg(x_5, x_6, x_3, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_instDecidableNot___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_prod___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_12 = l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
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
x_17 = l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_prod___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_prod___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_prod___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_FinEnum_prod___spec__4___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_prod___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_prod___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_prod___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_prod___spec__3___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_prod___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_prod___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_prod___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_2);
lean_inc(x_3);
x_10 = l_instDecidableEqProd___rarg(x_8, x_9, x_6, x_3);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = x_7;
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_prod___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_prod___spec__9___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_prod___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_prod___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_prod___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_prod___spec__8___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_instDecidableEqProd___rarg(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_prod___spec__9___rarg(x_1, x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_3, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg___lambda__2), 4, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_prod___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_List_pwFilter___at_FinEnum_prod___spec__3___rarg(x_1, x_2, x_3);
x_6 = l_FinEnum_ofNodupList___at_FinEnum_prod___spec__7___rarg(x_1, x_2, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_prod___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_prod___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_prod___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_3 = l_FinEnum_toList___rarg(x_1);
lean_inc(x_2);
x_4 = l_FinEnum_toList___rarg(x_2);
x_5 = l_List_productTR___rarg(x_3, x_4);
x_6 = l_FinEnum_ofList___at_FinEnum_prod___spec__1___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_prod(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_prod___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__2(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__6___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_5, x_6);
return x_8;
}
else
{
uint8_t x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
return x_10;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = 0;
x_12 = lean_box(x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_apply_2(x_15, x_13, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_5);
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
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_9);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_sum___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_5);
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
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_9);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_sum___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_sum___spec__3___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_sum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____at_FinEnum_sum___spec__1___rarg), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_inc(x_5);
x_6 = l_List_pwFilter___at_List_dedup___spec__1___rarg(x_5, x_3);
x_7 = l_FinEnum_ofNodupList___rarg(x_5, x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_sum___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_sum___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_sum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_3 = l_FinEnum_toList___rarg(x_1);
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___at_FinEnum_sum___spec__2___rarg(x_3, x_4);
lean_inc(x_2);
x_6 = l_FinEnum_toList___rarg(x_2);
x_7 = l_List_mapTR_loop___at_FinEnum_sum___spec__3___rarg(x_6, x_4);
x_8 = l_List_appendTR___rarg(x_5, x_7);
x_9 = l_FinEnum_ofList___at_FinEnum_sum___spec__4___rarg(x_1, x_2, x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_FinEnum_sum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_sum___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = lean_nat_dec_eq(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_9);
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
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_9);
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
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_fin___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_10 = 0;
x_11 = l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5(x_1, x_4, x_9, x_10, x_2);
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
return x_2;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_fin___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_FinEnum_fin___spec__4(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_fin___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_FinEnum_fin___spec__3(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_fin___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_nat_dec_eq(x_5, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_4, x_8);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_fin___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_fin___spec__9(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_fin___spec__9(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_lengthTRAux___rarg(x_2, x_5);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
x_8 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_FinEnum_ofEquiv___rarg___closed__1;
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_fin___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_pwFilter___at_FinEnum_fin___spec__3(x_1, x_2);
x_5 = l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_fin(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_FinEnum_toList___rarg___closed__1;
lean_inc(x_1);
x_3 = l_List_ofFn___rarg(x_1, x_2);
x_4 = l_FinEnum_ofList___at_FinEnum_fin___spec__1(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__5(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_fin___spec__6(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_fin___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldrTR___at_FinEnum_fin___spec__4(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_fin___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_FinEnum_fin___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_fin___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_dedup___at_FinEnum_fin___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_fin___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_findIdx_go___at_FinEnum_fin___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_fin___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_idxOf___at_FinEnum_fin___spec__8(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FinEnum_ofNodupList___at_FinEnum_fin___spec__7___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 1);
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_6;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_3);
x_2 = x_9;
x_3 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_12 = l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
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
x_17 = l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_3);
x_8 = lean_apply_2(x_2, x_6, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_4 = x_7;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg(x_1, x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Quotient_decidableEq___rarg), 3, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_3, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_5 = l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg(x_1, x_2, x_3);
x_6 = l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg(x_1, x_2, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_FinEnum_toList___rarg(x_1);
x_6 = lean_box(0);
x_7 = l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg(x_2, x_5, x_6);
x_8 = l_FinEnum_ofList___at_FinEnum_Quotient_enum___spec__3___rarg(x_2, x_3, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Quotient_enum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_FinEnum_ofSurjective___at_FinEnum_Quotient_enum___spec__1___rarg(x_1, x_2, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Quotient_enum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_Quotient_enum___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_FinEnum_Quotient_enum___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__8___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_foldrTR___at_FinEnum_Quotient_enum___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_Quotient_enum___spec__5___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_dedup___at_FinEnum_Quotient_enum___spec__4___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_findIdx_go___at_FinEnum_Quotient_enum___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_idxOf___at_FinEnum_Quotient_enum___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FinEnum_ofNodupList___at_FinEnum_Quotient_enum___spec__9___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_array_to_list(x_4);
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
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Multiset_ndinsert___rarg(x_1, x_2, x_7);
x_10 = lean_box(0);
lean_ctor_set(x_3, 1, x_10);
lean_ctor_set(x_3, 0, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_3);
x_12 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_4, x_11);
x_3 = x_8;
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
lean_inc(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Multiset_ndinsert___rarg(x_1, x_2, x_14);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_4, x_19);
x_3 = x_15;
x_4 = x_20;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_FinEnum_Finset_enum___rarg___closed__1() {
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
static lean_object* _init_l_FinEnum_Finset_enum___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_FinEnum_Finset_enum___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = l_FinEnum_Finset_enum___rarg(x_1, x_5);
x_7 = l_FinEnum_Finset_enum___rarg___closed__2;
x_8 = l_List_flatMapTR_go___at_FinEnum_Finset_enum___spec__1___rarg(x_1, x_4, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_Finset_enum___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_FinEnum_0__FinEnum_Finset_enum_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_inc(x_2);
x_8 = lean_apply_2(x_7, x_2, x_5);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_11 = 1;
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at_FinEnum_Finset_finEnum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_array_to_list(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(x_1, x_2, x_8);
x_11 = lean_box(0);
lean_ctor_set(x_4, 1, x_11);
lean_ctor_set(x_4, 0, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_13 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_5, x_12);
x_4 = x_9;
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_15);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(x_1, x_2, x_15);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_5, x_20);
x_4 = x_16;
x_5 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_array_to_list(x_5);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(x_2, x_3, x_8);
x_11 = lean_box(0);
lean_ctor_set(x_4, 1, x_11);
lean_ctor_set(x_4, 0, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_13 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_5, x_12);
x_4 = x_9;
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l_Multiset_ndinsert___at_FinEnum_Finset_finEnum___spec__2___rarg(x_2, x_3, x_15);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_5, x_20);
x_4 = x_16;
x_5 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = l_FinEnum_Finset_enum___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1___rarg(x_1, x_5);
x_7 = l_FinEnum_Finset_enum___rarg___closed__2;
lean_inc(x_1);
x_8 = l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg(x_1, x_1, x_4, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_4 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_4, x_2, x_3);
x_6 = l_instDecidableNot___rarg(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg(x_1, x_4, x_9, x_10, x_2);
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
x_16 = l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_FinEnum_Finset_finEnum___spec__9___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Finset_finEnum___spec__7___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Finset_finEnum___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_Finset_finEnum___spec__7___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
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
x_7 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_2);
x_8 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_7, x_5, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Finset_finEnum___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Finset_finEnum___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_Finset_finEnum___spec__13___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_List_isPerm___at_List_decidablePerm___spec__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_Finset_finEnum___spec__14___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthTRAux___rarg(x_2, x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_List_pwFilter___at_FinEnum_Finset_finEnum___spec__8___rarg(x_1, x_2);
x_5 = l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_finEnum___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = l_FinEnum_toList___rarg(x_1);
lean_inc(x_1);
x_3 = l_FinEnum_Finset_enum___at_FinEnum_Finset_finEnum___spec__1___rarg(x_1, x_2);
x_4 = l_FinEnum_ofList___at_FinEnum_Finset_finEnum___spec__6___rarg(x_1, x_3, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Finset_finEnum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_Finset_finEnum___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_elem___at_FinEnum_Finset_finEnum___spec__3___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_flatMapTR_go___at_FinEnum_Finset_finEnum___spec__4___at_FinEnum_Finset_finEnum___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__10___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_Finset_finEnum___spec__11___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_FinEnum_ofNodupList___at_FinEnum_Finset_finEnum___spec__12___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_10; 
x_10 = lean_array_push(x_3, x_5);
x_2 = x_6;
x_3 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_instDecidableNot___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_2 = lean_box(0);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_2 = lean_box(0);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_2 = lean_box(0);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_2 = lean_box(0);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_dec(x_1);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = 0;
x_12 = l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg(x_1, lean_box(0), x_5, x_10, x_11, x_3);
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
lean_dec(x_1);
return x_3;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg(x_1, lean_box(0), x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_FinEnum_Subtype_finEnum___spec__5___rarg(x_1, lean_box(0), x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Subtype_finEnum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4___rarg(x_1, lean_box(0), x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_Subtype_finEnum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_Subtype_finEnum___spec__3___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_inc(x_3);
x_9 = lean_apply_2(x_8, x_6, x_3);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_2 = lean_box(0);
x_4 = x_7;
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Subtype_finEnum___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10___rarg(x_1, lean_box(0), x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_Subtype_finEnum___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_Subtype_finEnum___spec__9___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_Subtype_finEnum___spec__10___rarg(x_1, lean_box(0), x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_3, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_List_pwFilter___at_FinEnum_Subtype_finEnum___spec__4___rarg(x_1, lean_box(0), x_3);
x_6 = l_FinEnum_ofNodupList___at_FinEnum_Subtype_finEnum___spec__8___rarg(x_1, lean_box(0), x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Subtype_finEnum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_4 = l_FinEnum_toList___rarg(x_1);
x_5 = l_FinEnum_Finset_enum___rarg___closed__2;
x_6 = l_List_filterMapTR_go___at_FinEnum_Subtype_finEnum___spec__1___rarg(x_3, x_4, x_5);
x_7 = l_FinEnum_ofList___at_FinEnum_Subtype_finEnum___spec__2___rarg(x_1, lean_box(0), x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_Subtype_finEnum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_Subtype_finEnum___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__6___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_Subtype_finEnum___spec__7___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_instSigma___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_8);
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_instSigma___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_instSigma___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = l_FinEnum_toList___rarg(x_7);
x_9 = lean_box(0);
x_10 = l_List_mapTR_loop___at_FinEnum_instSigma___spec__1___rarg(x_5, x_8, x_9);
x_11 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_3, x_10);
x_2 = x_6;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_apply_1(x_1, x_2);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Sigma_instDecidableEqSigma___rarg(x_5, x_6, x_3, x_4);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_instDecidableNot___rarg(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSigma___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_12 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
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
x_17 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSigma___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_instSigma___spec__6___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSigma___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_FinEnum_instSigma___spec__6___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSigma___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_instSigma___spec__5___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSigma___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_instSigma___spec__5___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSigma___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_instSigma___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSigma___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_9, 0, x_2);
lean_inc(x_3);
x_10 = l_Sigma_instDecidableEqSigma___rarg(x_8, x_9, x_6, x_3);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = x_7;
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSigma___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_instSigma___spec__11___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSigma___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_instSigma___spec__11___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSigma___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_instSigma___spec__10___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_prod___spec__5___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Sigma_instDecidableEqSigma___rarg(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_instSigma___spec__11___rarg(x_1, x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_3, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg___lambda__2), 4, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSigma___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_List_pwFilter___at_FinEnum_instSigma___spec__5___rarg(x_1, x_2, x_3);
x_6 = l_FinEnum_ofNodupList___at_FinEnum_instSigma___spec__9___rarg(x_1, x_2, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSigma___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_instSigma___spec__3___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instSigma___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_3 = l_FinEnum_toList___rarg(x_1);
x_4 = l_FinEnum_Finset_enum___rarg___closed__2;
lean_inc(x_2);
x_5 = l_List_flatMapTR_go___at_FinEnum_instSigma___spec__2___rarg(x_2, x_3, x_4);
x_6 = l_FinEnum_ofList___at_FinEnum_instSigma___spec__3___rarg(x_1, x_2, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instSigma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_instSigma___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__2(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__8___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_FinEnum_instSigma___rarg(x_1, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 2);
lean_dec(x_7);
x_8 = l_Equiv_trans___rarg(x_3, x_6);
x_9 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_ctor_set(x_4, 2, x_10);
lean_ctor_set(x_4, 1, x_8);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = l_Equiv_trans___rarg(x_3, x_12);
x_14 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_13);
x_15 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_FinEnum_PSigma_finEnum___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_psigmaEquivSigma(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_FinEnum_PSigma_finEnum___rarg___closed__1;
x_4 = l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnum___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnum___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_apply_1(x_1, lean_box(0));
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, x_3, x_4);
return x_7;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_decidableEq__of__subsingleton___boxed), 4, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_4 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_6 = l_PSigma_decidableEq___rarg(x_5, x_4, x_2, x_3);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_instDecidableNot___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg(x_1, x_4, x_9, x_10, x_2);
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
x_16 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__4___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__2___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
lean_inc(x_2);
x_9 = l_PSigma_decidableEq___rarg(x_8, x_7, x_5, x_2);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_12;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__8___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_6 = l_PSigma_decidableEq___rarg(x_5, x_4, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__9___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthTRAux___rarg(x_2, x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__3___rarg(x_1, x_2);
x_5 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, lean_box(0));
lean_ctor_set(x_7, 1, x_5);
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
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, lean_box(0));
lean_ctor_set(x_11, 1, x_9);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
x_10 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed), 3, 2);
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
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_11 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg(x_1, x_4, x_9, x_10, x_2);
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
x_16 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg(x_1, x_4, x_14, x_15, x_2);
lean_dec(x_4);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_List_foldrTR___at_FinEnum_PSigma_finEnumPropLeft___spec__14___rarg(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__12___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_PSigma_finEnumPropLeft___spec__12___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
lean_inc(x_2);
x_9 = l_PSigma_decidableEq___rarg(x_8, x_7, x_5, x_2);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = x_6;
x_4 = x_12;
goto _start;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_PSigma_finEnumPropLeft___spec__18___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropLeft___spec__19___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__7___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_lengthTRAux___rarg(x_2, x_6);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_9, 0, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_5);
return x_11;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_4 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropLeft___spec__13___rarg(x_1, x_2);
x_5 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropLeft___spec__17___rarg(x_1, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft___rarg(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__1___rarg(x_1, x_3, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_5 = lean_apply_1(x_1, lean_box(0));
x_6 = l_FinEnum_toList___rarg(x_5);
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___at_FinEnum_PSigma_finEnumPropLeft___spec__10___rarg(x_6, x_7);
x_9 = l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropLeft___spec__11___rarg(x_1, x_8, lean_box(0));
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnumPropLeft___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__6___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__15___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__16___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropLeft___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_FinEnum_PSigma_finEnumPropLeft___rarg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_FinEnum_Subtype_finEnum___rarg(x_1, lean_box(0), x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 2);
lean_dec(x_7);
x_8 = l_Equiv_trans___rarg(x_3, x_6);
x_9 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_ctor_set(x_4, 2, x_10);
lean_ctor_set(x_4, 1, x_8);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = l_Equiv_trans___rarg(x_3, x_12);
x_14 = l_FinEnum_ofEquiv___rarg___closed__1;
lean_inc(x_13);
x_15 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___elambda__1___rarg), 4, 2);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1;
x_2 = l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3;
x_4 = l_FinEnum_ofEquiv___at_FinEnum_PSigma_finEnumPropRight___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnumPropRight___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FinEnum_PSigma_finEnumPropRight___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1;
x_5 = l_PSigma_decidableEq___rarg(x_3, x_4, x_1, x_2);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_instDecidableNot___rarg(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_le(x_4, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = 0;
x_10 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg(x_3, x_8, x_9, x_1);
lean_dec(x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_4);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg(x_3, x_13, x_14, x_1);
lean_dec(x_3);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__4___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__2___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1;
lean_inc(x_1);
x_8 = l_PSigma_decidableEq___rarg(x_6, x_7, x_4, x_1);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_2 = x_5;
x_3 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__8___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__8___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1;
x_5 = l_PSigma_decidableEq___rarg(x_3, x_4, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__9___rarg(x_2, x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__1), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___lambda__2), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1;
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__3___rarg(x_1);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg(x_3, lean_box(0), lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget(x_1, x_7);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_4);
x_10 = l_List_decidableBAll___rarg(x_9, x_4);
if (x_10 == 0)
{
lean_dec(x_8);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_4);
x_2 = x_7;
x_4 = x_12;
goto _start;
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_mk(x_2);
x_4 = lean_array_get_size(x_3);
x_5 = lean_nat_dec_le(x_4, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_9 = 0;
x_10 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg(x_3, x_8, x_9, x_1);
lean_dec(x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_4);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_1;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 0;
x_15 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg(x_3, x_13, x_14, x_1);
lean_dec(x_3);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_List_foldrTR___at_FinEnum_PSigma_finEnumPropProp___spec__13___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__11___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_PSigma_finEnumPropProp___spec__11___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1;
lean_inc(x_1);
x_8 = l_PSigma_decidableEq___rarg(x_6, x_7, x_4, x_1);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_2 = x_5;
x_3 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__17___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_PSigma_finEnumPropProp___spec__17___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_findIdx_go___at_FinEnum_PSigma_finEnumPropProp___spec__18___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_List_lengthTRAux___rarg(x_1, x_4);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1;
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_pwFilter___at_FinEnum_PSigma_finEnumPropProp___spec__12___rarg(x_1);
x_4 = l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__16___rarg(x_3, lean_box(0), lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1, 0, lean_box(0));
lean_ctor_set(x_1, 1, lean_box(0));
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_exists__prop__decidable___rarg(x_1, x_2);
x_4 = lean_unbox(x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__1___rarg(x_5, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1;
x_8 = l_FinEnum_ofList___at_FinEnum_PSigma_finEnumPropProp___spec__10___rarg(x_7, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FinEnum_PSigma_finEnumPropProp___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__1(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__6___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__14___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__15___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_PSigma_finEnumPropProp___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_FinEnum_PSigma_finEnumPropProp___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = 1;
x_9 = lean_usize_sub(x_4, x_8);
x_10 = lean_array_uget(x_3, x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_Quotient_enum___spec__7___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_6);
x_12 = l_List_decidableBAll___rarg(x_11, x_6);
if (x_12 == 0)
{
lean_dec(x_10);
x_4 = x_9;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_6);
x_4 = x_9;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_1);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_dec(x_1);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = 0;
x_12 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg(x_1, x_2, x_5, x_10, x_11, x_3);
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
lean_dec(x_1);
return x_3;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 0;
x_17 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg(x_1, x_2, x_5, x_15, x_16, x_3);
lean_dec(x_5);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
return x_5;
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
x_8 = lean_apply_2(x_1, x_6, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_4 = x_7;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg(x_1, x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Subtype_instDecidableEq___rarg), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_3, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
x_10 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_10, 0, x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_6);
return x_12;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg(x_1, x_2, x_3);
x_6 = l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg(x_1, x_2, x_5, lean_box(0), lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instSubtypeMemListOfDecidableEq___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = l_FinEnum_ofList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__1___rarg(x_1, x_2, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instSubtypeMemListOfDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_instSubtypeMemListOfDecidableEq___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldrMUnsafe_fold___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__6___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_foldrTR___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__4___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_pwFilter___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__3___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_dedup___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_findIdx_go___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_idxOf___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__8___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FinEnum_ofNodupList___at_FinEnum_instSubtypeMemListOfDecidableEq___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instFintype___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Equiv_symm___rarg(x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_toEmbedding___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_FinEnum_toList___rarg___closed__1;
x_7 = l_List_ofFn___rarg(x_5, x_6);
x_8 = l_Multiset_map___rarg(x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instFintype(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_instFintype___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_FinEnum_instUniqueOfIsEmpty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_equivOfIsEmpty(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_FinEnum_instUniqueOfIsEmpty___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_FinEnum_instUniqueOfIsEmpty___closed__1;
x_3 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instUniqueOfIsEmpty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FinEnum_instUniqueOfIsEmpty___closed__2;
return x_3;
}
}
static lean_object* _init_l_FinEnum_ofIsEmpty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_FinEnum_instUniqueOfIsEmpty(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofIsEmpty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_FinEnum_ofIsEmpty___closed__1;
return x_3;
}
}
static lean_object* _init_l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Fin_instUnique;
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instUnique___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1;
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FinEnum_instUnique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_instUnique___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofUnique___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_FinEnum_instUnique___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofUnique(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofUnique___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_7);
x_10 = lean_apply_2(x_9, x_7, x_4);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_apply_2(x_6, x_7, lean_box(0));
return x_12;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_inc(x_5);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg(x_1, lean_box(0), x_4, x_3, x_5, x_6, x_7, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = l_List_reverse___rarg(x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg___boxed), 8, 6);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_10);
lean_ctor_set(x_6, 1, x_7);
lean_ctor_set(x_6, 0, x_12);
{
lean_object* _tmp_1 = lean_box(0);
lean_object* _tmp_5 = x_11;
lean_object* _tmp_6 = x_6;
x_2 = _tmp_1;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg___boxed), 8, 6);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
x_2 = lean_box(0);
x_6 = x_15;
x_7 = x_17;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_Pi_enum___spec__4___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_Pi_enum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_array_to_list(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_1);
x_11 = l_List_pi___at_List_Pi_enum___spec__1___rarg(x_1, lean_box(0), x_5, x_3);
x_12 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_13 = l_List_mapTR_loop___at_List_Pi_enum___spec__4___rarg(x_1, lean_box(0), x_4, x_5, x_9, x_11, x_12);
x_14 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_7, x_13);
x_2 = lean_box(0);
x_6 = x_10;
x_7 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_flatMapTR_go___at_List_Pi_enum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_flatMapTR_go___at_List_Pi_enum___spec__5___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_pi___elambda__1___boxed), 4, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pi___at_List_Pi_enum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
lean_dec(x_1);
x_5 = l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_6);
x_8 = lean_apply_1(x_4, x_6);
x_9 = l_FinEnum_Finset_enum___rarg___closed__2;
x_10 = l_List_flatMapTR_go___at_List_Pi_enum___spec__5___rarg(x_1, lean_box(0), x_4, x_6, x_7, x_8, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_List_pi___at_List_Pi_enum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pi___at_List_Pi_enum___spec__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, x_2, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___lambda__1), 2, 1);
lean_closure_set(x_9, 0, x_7);
lean_ctor_set(x_3, 1, x_4);
lean_ctor_set(x_3, 0, x_9);
{
lean_object* _tmp_1 = lean_box(0);
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___lambda__1), 2, 1);
lean_closure_set(x_13, 0, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
x_2 = lean_box(0);
x_3 = x_12;
x_4 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Pi_enum___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_FinEnum_toList___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_Pi_enum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_4 = l_FinEnum_toList___rarg(x_1);
x_5 = lean_alloc_closure((void*)(l_List_Pi_enum___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_3);
lean_inc(x_1);
x_6 = l_List_pi___at_List_Pi_enum___spec__1___rarg(x_1, lean_box(0), x_4, x_5);
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg(x_1, lean_box(0), x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_Pi_enum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Pi_enum___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Multiset_Pi_cons___at_List_Pi_enum___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_Pi_cons___at_List_Pi_enum___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_mapTR_loop___at_List_Pi_enum___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_FinEnum_instFintype___rarg(x_2);
x_7 = l_Fintype_decidablePiFintype___rarg(x_5, x_6, x_3, x_4);
x_8 = l_instDecidableNot___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
lean_inc(x_11);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_11);
lean_inc(x_7);
x_13 = l_List_decidableBAll___rarg(x_12, x_7);
if (x_13 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_15;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
lean_inc(x_11);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_11);
lean_inc(x_7);
x_13 = l_List_decidableBAll___rarg(x_12, x_7);
if (x_13 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_15;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_Pi_finEnum___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_mk(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_nat_dec_le(x_7, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_12 = 0;
x_13 = l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg(x_1, lean_box(0), x_3, x_6, x_11, x_12, x_4);
lean_dec(x_6);
return x_13;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_7);
if (x_15 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 0;
x_18 = l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg(x_1, lean_box(0), x_3, x_6, x_16, x_17, x_4);
lean_dec(x_6);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_Pi_finEnum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_Pi_finEnum___spec__4___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_Pi_finEnum___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldrTR___at_List_Pi_finEnum___spec__4___rarg(x_1, lean_box(0), x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_Pi_finEnum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_List_Pi_finEnum___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_Pi_finEnum___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_pwFilter___at_List_Pi_finEnum___spec__3___rarg(x_1, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_Pi_finEnum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_List_Pi_finEnum___spec__2___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Pi_finEnum___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_9, 0, x_3);
lean_inc(x_1);
x_10 = l_FinEnum_instFintype___rarg(x_1);
lean_inc(x_4);
x_11 = l_Fintype_decidablePiFintype___rarg(x_9, x_10, x_7, x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_2 = lean_box(0);
x_5 = x_8;
x_6 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_Pi_finEnum___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_List_Pi_finEnum___spec__9___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Pi_finEnum___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_findIdx_go___at_List_Pi_finEnum___spec__9___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_Pi_finEnum___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_List_Pi_finEnum___spec__8___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_instSigma___spec__7___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_FinEnum_instFintype___rarg(x_2);
x_7 = l_Fintype_decidablePiFintype___rarg(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_List_Pi_finEnum___spec__9___rarg(x_1, lean_box(0), x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_List_lengthTRAux___rarg(x_4, x_8);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__2), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_7);
return x_13;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_Pi_finEnum___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
lean_inc(x_1);
x_6 = l_List_pwFilter___at_List_Pi_finEnum___spec__3___rarg(x_1, lean_box(0), x_3, x_4);
x_7 = l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg(x_1, lean_box(0), x_3, x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_Pi_finEnum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_List_Pi_finEnum___spec__1___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_Pi_finEnum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_List_Pi_enum___rarg(x_1, lean_box(0), x_3);
x_5 = l_FinEnum_ofList___at_List_Pi_finEnum___spec__1___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_Pi_finEnum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_Pi_finEnum___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__5___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldrMUnsafe_fold___at_List_Pi_finEnum___spec__6___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_FinEnum_ofNodupList___at_List_Pi_finEnum___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Function_decidableEqPFun___rarg(x_2, lean_box(0), x_5, x_3, x_4);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_instDecidableNot___rarg(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
x_12 = lean_box(x_1);
lean_inc(x_11);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_11);
lean_inc(x_7);
x_14 = l_List_decidableBAll___rarg(x_13, x_7);
if (x_14 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_16;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
x_12 = lean_box(x_1);
lean_inc(x_11);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_11);
lean_inc(x_7);
x_14 = l_List_decidableBAll___rarg(x_13, x_7);
if (x_14 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_16;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_mk(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_nat_dec_le(x_7, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_4;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_12 = 0;
x_13 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg(x_1, lean_box(0), x_3, x_6, x_11, x_12, x_4);
lean_dec(x_6);
return x_13;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_7);
if (x_15 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_4;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 0;
x_18 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg(x_1, lean_box(0), x_3, x_6, x_16, x_17, x_4);
lean_dec(x_6);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg(x_1, lean_box(0), x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg(x_1, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_List_pfunFinEnum___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_9, 0, x_3);
lean_inc(x_4);
x_10 = l_Function_decidableEqPFun___rarg(x_1, lean_box(0), x_9, x_7, x_4);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_2 = lean_box(0);
x_5 = x_8;
x_6 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Function_decidableEqPFun___rarg(x_2, lean_box(0), x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg(x_1, lean_box(0), x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_box(x_1);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_4, x_9);
x_11 = lean_box(x_1);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
x_13 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_15, 2, x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_6 = l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg(x_1, lean_box(0), x_3, x_4);
x_7 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg(x_1, lean_box(0), x_3, x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
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
x_7 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_5);
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
x_11 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_9);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
x_12 = lean_box(x_1);
lean_inc(x_11);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_11);
lean_inc(x_7);
x_14 = l_List_decidableBAll___rarg(x_13, x_7);
if (x_14 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_16;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = 1;
x_10 = lean_usize_sub(x_5, x_9);
x_11 = lean_array_uget(x_4, x_10);
x_12 = lean_box(x_1);
lean_inc(x_11);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_12);
lean_closure_set(x_13, 2, x_11);
lean_inc(x_7);
x_14 = l_List_decidableBAll___rarg(x_13, x_7);
if (x_14 == 0)
{
lean_dec(x_11);
x_2 = lean_box(0);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_7);
x_2 = lean_box(0);
x_5 = x_10;
x_7 = x_16;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_mk(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_nat_dec_le(x_7, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_4;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_12 = 0;
x_13 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg(x_1, lean_box(0), x_3, x_6, x_11, x_12, x_4);
lean_dec(x_6);
return x_13;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_7);
if (x_15 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_4;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 0;
x_18 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg(x_1, lean_box(0), x_3, x_6, x_16, x_17, x_4);
lean_dec(x_6);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg(x_1, lean_box(0), x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg(x_1, lean_box(0), x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_dedup___at_List_pfunFinEnum___spec__12___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__1), 4, 1);
lean_closure_set(x_9, 0, x_3);
lean_inc(x_4);
x_10 = l_Function_decidableEqPFun___rarg(x_1, lean_box(0), x_9, x_7, x_4);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_6, x_12);
lean_dec(x_6);
x_2 = lean_box(0);
x_5 = x_8;
x_6 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg(x_1, lean_box(0), x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg(x_1, lean_box(0), x_2, x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_box(x_1);
lean_inc(x_3);
x_8 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_4, x_9);
x_11 = lean_box(x_1);
lean_inc(x_4);
x_12 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_4);
x_13 = lean_alloc_closure((void*)(l_List_get___rarg___boxed), 2, 1);
lean_closure_set(x_13, 0, x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_15, 2, x_8);
return x_15;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_6 = l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg(x_1, lean_box(0), x_3, x_4);
x_7 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg(x_1, lean_box(0), x_3, x_6, lean_box(0), lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_internal_panic_unreachable();
}
}
static lean_object* _init_l_List_pfunFinEnum___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_pfunFinEnum___rarg___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_List_pfunFinEnum___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_pfunFinEnum___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_pfunFinEnum___rarg___closed__2;
x_5 = l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg(x_1, lean_box(0), x_3, x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
x_6 = lean_apply_1(x_3, lean_box(0));
x_7 = l_FinEnum_toList___rarg(x_6);
x_8 = lean_box(0);
x_9 = l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg(x_7, x_8);
x_10 = l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg(x_1, lean_box(0), x_3, x_9, lean_box(0));
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_List_pfunFinEnum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_pfunFinEnum___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___lambda__1(x_1, x_5, x_3, x_4);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__5___rarg(x_8, x_2, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__6___rarg(x_8, x_2, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_List_foldrTR___at_List_pfunFinEnum___spec__4___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_pwFilter___at_List_pfunFinEnum___spec__3___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_dedup___at_List_pfunFinEnum___spec__2___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_List_findIdx_go___at_List_pfunFinEnum___spec__9___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_List_idxOf___at_List_pfunFinEnum___spec__8___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__1(x_1, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___lambda__2(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__7___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_FinEnum_ofList___at_List_pfunFinEnum___spec__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_mapTR_loop___at_List_pfunFinEnum___spec__10___rarg___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__15___rarg(x_8, x_2, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_foldrMUnsafe_fold___at_List_pfunFinEnum___spec__16___rarg(x_8, x_2, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_List_foldrTR___at_List_pfunFinEnum___spec__14___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_pwFilter___at_List_pfunFinEnum___spec__13___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_dedup___at_List_pfunFinEnum___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_List_dedup___at_List_pfunFinEnum___spec__12___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_List_findIdx_go___at_List_pfunFinEnum___spec__19___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_List_idxOf___at_List_pfunFinEnum___spec__18___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___lambda__1(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_FinEnum_ofNodupList___at_List_pfunFinEnum___spec__17___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_FinEnum_ofList___at_List_pfunFinEnum___spec__11___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_pfunFinEnum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_List_pfunFinEnum___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_EquivFin(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_ProdSigma(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_List_Pi(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_FinEnum(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_EquivFin(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_ProdSigma(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_FinEnum_ofEquiv___rarg___closed__1 = _init_l_FinEnum_ofEquiv___rarg___closed__1();
lean_mark_persistent(l_FinEnum_ofEquiv___rarg___closed__1);
l_FinEnum_toList___rarg___closed__1 = _init_l_FinEnum_toList___rarg___closed__1();
lean_mark_persistent(l_FinEnum_toList___rarg___closed__1);
l_ULift_instFinEnum___rarg___closed__1 = _init_l_ULift_instFinEnum___rarg___closed__1();
lean_mark_persistent(l_ULift_instFinEnum___rarg___closed__1);
l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1 = _init_l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1();
lean_mark_persistent(l_FinEnum_ofNodupList___at_FinEnum_pempty___spec__7___closed__1);
l_FinEnum_pempty = _init_l_FinEnum_pempty();
lean_mark_persistent(l_FinEnum_pempty);
l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_FinEnum_empty___spec__5___closed__1);
l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1 = _init_l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1();
lean_mark_persistent(l_FinEnum_ofNodupList___at_FinEnum_empty___spec__6___closed__1);
l_FinEnum_empty = _init_l_FinEnum_empty();
lean_mark_persistent(l_FinEnum_empty);
l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___lambda__1___closed__1();
l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_FinEnum_punit___spec__5___closed__1);
l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1 = _init_l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1();
lean_mark_persistent(l_FinEnum_ofNodupList___at_FinEnum_punit___spec__7___closed__1);
l_FinEnum_punit___closed__1 = _init_l_FinEnum_punit___closed__1();
lean_mark_persistent(l_FinEnum_punit___closed__1);
l_FinEnum_punit = _init_l_FinEnum_punit();
lean_mark_persistent(l_FinEnum_punit);
l_FinEnum_Finset_enum___rarg___closed__1 = _init_l_FinEnum_Finset_enum___rarg___closed__1();
lean_mark_persistent(l_FinEnum_Finset_enum___rarg___closed__1);
l_FinEnum_Finset_enum___rarg___closed__2 = _init_l_FinEnum_Finset_enum___rarg___closed__2();
lean_mark_persistent(l_FinEnum_Finset_enum___rarg___closed__2);
l_FinEnum_PSigma_finEnum___rarg___closed__1 = _init_l_FinEnum_PSigma_finEnum___rarg___closed__1();
lean_mark_persistent(l_FinEnum_PSigma_finEnum___rarg___closed__1);
l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropLeft___spec__5___rarg___lambda__2___closed__1);
l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1 = _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1();
lean_mark_persistent(l_FinEnum_PSigma_finEnumPropRight___rarg___closed__1);
l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2 = _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2();
lean_mark_persistent(l_FinEnum_PSigma_finEnumPropRight___rarg___closed__2);
l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3 = _init_l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3();
lean_mark_persistent(l_FinEnum_PSigma_finEnumPropRight___rarg___closed__3);
l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_FinEnum_PSigma_finEnumPropProp___spec__5___rarg___lambda__2___closed__1);
l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1 = _init_l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1();
lean_mark_persistent(l_FinEnum_ofNodupList___at_FinEnum_PSigma_finEnumPropProp___spec__7___rarg___closed__1);
l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1 = _init_l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1();
lean_mark_persistent(l_FinEnum_PSigma_finEnumPropProp___rarg___closed__1);
l_FinEnum_instUniqueOfIsEmpty___closed__1 = _init_l_FinEnum_instUniqueOfIsEmpty___closed__1();
lean_mark_persistent(l_FinEnum_instUniqueOfIsEmpty___closed__1);
l_FinEnum_instUniqueOfIsEmpty___closed__2 = _init_l_FinEnum_instUniqueOfIsEmpty___closed__2();
lean_mark_persistent(l_FinEnum_instUniqueOfIsEmpty___closed__2);
l_FinEnum_ofIsEmpty___closed__1 = _init_l_FinEnum_ofIsEmpty___closed__1();
lean_mark_persistent(l_FinEnum_ofIsEmpty___closed__1);
l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1 = _init_l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1();
lean_mark_persistent(l_Equiv_ofUnique___at_FinEnum_instUnique___spec__1___rarg___closed__1);
l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1 = _init_l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1();
lean_mark_persistent(l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__1);
l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2 = _init_l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2();
lean_mark_persistent(l_List_pi___at_List_Pi_enum___spec__1___rarg___closed__2);
l_List_pfunFinEnum___rarg___closed__1 = _init_l_List_pfunFinEnum___rarg___closed__1();
lean_mark_persistent(l_List_pfunFinEnum___rarg___closed__1);
l_List_pfunFinEnum___rarg___closed__2 = _init_l_List_pfunFinEnum___rarg___closed__2();
lean_mark_persistent(l_List_pfunFinEnum___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
