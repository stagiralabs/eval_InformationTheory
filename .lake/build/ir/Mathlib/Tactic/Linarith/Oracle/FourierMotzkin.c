// Lean compiler output
// Module: Mathlib.Tactic.Linarith.Oracle.FourierMotzkin
// Imports: Init Mathlib.Std.Data.HashMap Batteries.Lean.HashMap Mathlib.Tactic.Linarith.Datatypes
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
lean_object* l_Nat_lcm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_mapStep_mapIdent___spec__1(lean_object*, lean_object*);
static lean_object* l_Linarith_instInhabitedCompSource___closed__1;
static lean_object* l_Linarith_CompSource_flatten___closed__1;
static size_t l_Linarith_CompSource_flatten___closed__3;
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_elimVarM___closed__2;
static lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_assump___spec__1___at_Linarith_PComp_assump___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_splitSetByVarSign___boxed(lean_object*, lean_object*);
static lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2;
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_instToStringPComp(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Linarith_elimWithSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_PComp_isContr___boxed(lean_object*);
lean_object* l_List_find_x3f___rarg(lean_object*, lean_object*);
static lean_object* l_Linarith_elimVarM___closed__1;
lean_object* l_Batteries_RBSet_sdiff___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Linarith_elimVarM___closed__3;
static lean_object* l_Linarith_CompSource_toString___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Batteries_RBSet_filter___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5;
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_getMaxVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_format___at_Linarith_Comp_ToFormat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimAllVarsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_instToFormatPComp___closed__2;
LEAN_EXPORT lean_object* l_Linarith_validate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_CompSource_toString___closed__2;
LEAN_EXPORT lean_object* l_Linarith_PComp_cmp___boxed(lean_object*, lean_object*);
lean_object* l_Batteries_RBNode_insert___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_instToFormatPComp(lean_object*);
lean_object* l_Linarith_Comp_coeffOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_mkLinarithData(lean_object*, lean_object*);
lean_object* l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_getPCompSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
LEAN_EXPORT lean_object* l_Linarith_elimVarM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_update___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_PComp_cmp(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
static lean_object* l_Linarith_splitSetByVarSign___closed__2;
LEAN_EXPORT lean_object* l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Linarith_elimVarM___closed__4;
LEAN_EXPORT lean_object* l_Linarith_PComp_assump(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_PComp_maybeMinimal___lambda__1(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
static lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2;
static lean_object* l_Linarith_mkLinarithData___closed__1;
LEAN_EXPORT lean_object* l_Linarith_getPCompSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_elimVarM___lambda__1(lean_object*);
static lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5;
static lean_object* l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1;
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_instToFormatPComp___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_CertificateOracle_fourierMotzkin___closed__1;
LEAN_EXPORT lean_object* l_Linarith_getMaxVar(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Linarith_Comp_cmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_PComp_maybeMinimal___boxed(lean_object*, lean_object*);
static lean_object* l_Linarith_PComp_maybeMinimal___closed__1;
static lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2;
lean_object* l_Batteries_RBNode_size___rarg(lean_object*);
lean_object* l_Linarith_Comp_vars(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_splitSetByVarSign___closed__1;
LEAN_EXPORT lean_object* l_List_toString___at_Linarith_instToStringPComp___spec__1(lean_object*);
uint8_t l_Linarith_Comp_isContr(lean_object*);
lean_object* l_Linarith_Comp_add(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Nat_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimVar(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_elimWithSet___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1;
static lean_object* l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten(lean_object*);
LEAN_EXPORT lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
static lean_object* l_Linarith_elimVarM___closed__5;
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_assump___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CertificateOracle_fourierMotzkin;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_validate(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Linarith_CompSource_toString(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_splitSetByVarSign(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at_Linarith_mkLinarithData___spec__1(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimVarM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_instInhabitedCompSource;
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Linarith_PComp_maybeMinimal(lean_object*, lean_object*);
static lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Linarith_PComp_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Linarith_Comp_scale(lean_object*, lean_object*);
lean_object* l_Batteries_RBNode_setBlack___rarg(lean_object*);
static lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
static lean_object* l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_PComp_maybeMinimal___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_mkLinarithData___spec__2(lean_object*, lean_object*);
lean_object* l_Mathlib_Ineq_toString(uint8_t);
static lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Batteries_RBNode_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_PComp_scale(lean_object*, lean_object*);
static size_t l_Linarith_CompSource_flatten___closed__2;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_add___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_pelimVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimAllVarsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_elimVarM___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_add___spec__3___at_Linarith_PComp_add___spec__4(lean_object*, lean_object*);
static lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
LEAN_EXPORT uint8_t l_Linarith_PComp_isContr(lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Linarith_instToFormatCompSource(lean_object*);
static lean_object* l_Linarith_validate___closed__1;
static lean_object* _init_l_Linarith_instInhabitedCompSource___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_instInhabitedCompSource() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_instInhabitedCompSource___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; size_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_uint64_of_nat(x_6);
x_13 = 32;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = 16;
x_17 = lean_uint64_shift_right(x_15, x_16);
x_18 = lean_uint64_xor(x_15, x_17);
x_19 = lean_uint64_to_usize(x_18);
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = 1;
x_22 = lean_usize_sub(x_20, x_21);
x_23 = lean_usize_land(x_19, x_22);
x_24 = lean_array_uget(x_10, x_23);
x_25 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_mapStep_mapIdent___spec__1(x_6, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_6, x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_9, x_27);
lean_dec(x_9);
lean_ctor_set(x_3, 2, x_24);
x_29 = lean_array_uset(x_10, x_23, x_3);
x_30 = lean_unsigned_to_nat(4u);
x_31 = lean_nat_mul(x_28, x_30);
x_32 = lean_unsigned_to_nat(3u);
x_33 = lean_nat_div(x_31, x_32);
lean_dec(x_31);
x_34 = lean_array_get_size(x_29);
x_35 = lean_nat_dec_le(x_33, x_34);
lean_dec(x_34);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_29);
lean_ctor_set(x_2, 1, x_36);
lean_ctor_set(x_2, 0, x_28);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_29);
lean_ctor_set(x_2, 0, x_28);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_free_object(x_3);
x_39 = lean_box(0);
x_40 = lean_array_uset(x_10, x_23, x_39);
x_41 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_6, x_7, x_24);
x_42 = lean_array_uset(x_40, x_23, x_41);
lean_ctor_set(x_2, 1, x_42);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_25, 0);
lean_inc(x_44);
lean_dec(x_25);
x_45 = lean_nat_add(x_44, x_7);
lean_dec(x_7);
lean_dec(x_44);
x_46 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_6, x_24);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_9, x_47);
lean_dec(x_9);
lean_ctor_set(x_3, 2, x_24);
lean_ctor_set(x_3, 1, x_45);
x_49 = lean_array_uset(x_10, x_23, x_3);
x_50 = lean_unsigned_to_nat(4u);
x_51 = lean_nat_mul(x_48, x_50);
x_52 = lean_unsigned_to_nat(3u);
x_53 = lean_nat_div(x_51, x_52);
lean_dec(x_51);
x_54 = lean_array_get_size(x_49);
x_55 = lean_nat_dec_le(x_53, x_54);
lean_dec(x_54);
lean_dec(x_53);
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_49);
lean_ctor_set(x_2, 1, x_56);
lean_ctor_set(x_2, 0, x_48);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_49);
lean_ctor_set(x_2, 0, x_48);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_free_object(x_3);
x_59 = lean_box(0);
x_60 = lean_array_uset(x_10, x_23, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_6, x_45, x_24);
x_62 = lean_array_uset(x_60, x_23, x_61);
lean_ctor_set(x_2, 1, x_62);
x_3 = x_8;
goto _start;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; uint64_t x_74; uint64_t x_75; uint64_t x_76; size_t x_77; size_t x_78; size_t x_79; size_t x_80; size_t x_81; lean_object* x_82; lean_object* x_83; 
x_64 = lean_ctor_get(x_3, 0);
x_65 = lean_ctor_get(x_3, 1);
x_66 = lean_ctor_get(x_3, 2);
x_67 = lean_ctor_get(x_2, 0);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_2);
x_69 = lean_array_get_size(x_68);
x_70 = lean_uint64_of_nat(x_64);
x_71 = 32;
x_72 = lean_uint64_shift_right(x_70, x_71);
x_73 = lean_uint64_xor(x_70, x_72);
x_74 = 16;
x_75 = lean_uint64_shift_right(x_73, x_74);
x_76 = lean_uint64_xor(x_73, x_75);
x_77 = lean_uint64_to_usize(x_76);
x_78 = lean_usize_of_nat(x_69);
lean_dec(x_69);
x_79 = 1;
x_80 = lean_usize_sub(x_78, x_79);
x_81 = lean_usize_land(x_77, x_80);
x_82 = lean_array_uget(x_68, x_81);
x_83 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_mapStep_mapIdent___spec__1(x_64, x_82);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
x_84 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_64, x_82);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_85 = lean_unsigned_to_nat(1u);
x_86 = lean_nat_add(x_67, x_85);
lean_dec(x_67);
lean_ctor_set(x_3, 2, x_82);
x_87 = lean_array_uset(x_68, x_81, x_3);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_mul(x_86, x_88);
x_90 = lean_unsigned_to_nat(3u);
x_91 = lean_nat_div(x_89, x_90);
lean_dec(x_89);
x_92 = lean_array_get_size(x_87);
x_93 = lean_nat_dec_le(x_91, x_92);
lean_dec(x_92);
lean_dec(x_91);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_87);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_86);
lean_ctor_set(x_95, 1, x_94);
x_2 = x_95;
x_3 = x_66;
goto _start;
}
else
{
lean_object* x_97; 
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_86);
lean_ctor_set(x_97, 1, x_87);
x_2 = x_97;
x_3 = x_66;
goto _start;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_free_object(x_3);
x_99 = lean_box(0);
x_100 = lean_array_uset(x_68, x_81, x_99);
x_101 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_64, x_65, x_82);
x_102 = lean_array_uset(x_100, x_81, x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_67);
lean_ctor_set(x_103, 1, x_102);
x_2 = x_103;
x_3 = x_66;
goto _start;
}
}
else
{
lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_105 = lean_ctor_get(x_83, 0);
lean_inc(x_105);
lean_dec(x_83);
x_106 = lean_nat_add(x_105, x_65);
lean_dec(x_65);
lean_dec(x_105);
x_107 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_64, x_82);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_108 = lean_unsigned_to_nat(1u);
x_109 = lean_nat_add(x_67, x_108);
lean_dec(x_67);
lean_ctor_set(x_3, 2, x_82);
lean_ctor_set(x_3, 1, x_106);
x_110 = lean_array_uset(x_68, x_81, x_3);
x_111 = lean_unsigned_to_nat(4u);
x_112 = lean_nat_mul(x_109, x_111);
x_113 = lean_unsigned_to_nat(3u);
x_114 = lean_nat_div(x_112, x_113);
lean_dec(x_112);
x_115 = lean_array_get_size(x_110);
x_116 = lean_nat_dec_le(x_114, x_115);
lean_dec(x_115);
lean_dec(x_114);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_110);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_109);
lean_ctor_set(x_118, 1, x_117);
x_2 = x_118;
x_3 = x_66;
goto _start;
}
else
{
lean_object* x_120; 
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_109);
lean_ctor_set(x_120, 1, x_110);
x_2 = x_120;
x_3 = x_66;
goto _start;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_free_object(x_3);
x_122 = lean_box(0);
x_123 = lean_array_uset(x_68, x_81, x_122);
x_124 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_64, x_106, x_82);
x_125 = lean_array_uset(x_123, x_81, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_67);
lean_ctor_set(x_126, 1, x_125);
x_2 = x_126;
x_3 = x_66;
goto _start;
}
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint64_t x_135; uint64_t x_136; uint64_t x_137; uint64_t x_138; uint64_t x_139; uint64_t x_140; uint64_t x_141; size_t x_142; size_t x_143; size_t x_144; size_t x_145; size_t x_146; lean_object* x_147; lean_object* x_148; 
x_128 = lean_ctor_get(x_3, 0);
x_129 = lean_ctor_get(x_3, 1);
x_130 = lean_ctor_get(x_3, 2);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_3);
x_131 = lean_ctor_get(x_2, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_2, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_133 = x_2;
} else {
 lean_dec_ref(x_2);
 x_133 = lean_box(0);
}
x_134 = lean_array_get_size(x_132);
x_135 = lean_uint64_of_nat(x_128);
x_136 = 32;
x_137 = lean_uint64_shift_right(x_135, x_136);
x_138 = lean_uint64_xor(x_135, x_137);
x_139 = 16;
x_140 = lean_uint64_shift_right(x_138, x_139);
x_141 = lean_uint64_xor(x_138, x_140);
x_142 = lean_uint64_to_usize(x_141);
x_143 = lean_usize_of_nat(x_134);
lean_dec(x_134);
x_144 = 1;
x_145 = lean_usize_sub(x_143, x_144);
x_146 = lean_usize_land(x_142, x_145);
x_147 = lean_array_uget(x_132, x_146);
x_148 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_mapStep_mapIdent___spec__1(x_128, x_147);
if (lean_obj_tag(x_148) == 0)
{
uint8_t x_149; 
x_149 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_128, x_147);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_150 = lean_unsigned_to_nat(1u);
x_151 = lean_nat_add(x_131, x_150);
lean_dec(x_131);
x_152 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_152, 0, x_128);
lean_ctor_set(x_152, 1, x_129);
lean_ctor_set(x_152, 2, x_147);
x_153 = lean_array_uset(x_132, x_146, x_152);
x_154 = lean_unsigned_to_nat(4u);
x_155 = lean_nat_mul(x_151, x_154);
x_156 = lean_unsigned_to_nat(3u);
x_157 = lean_nat_div(x_155, x_156);
lean_dec(x_155);
x_158 = lean_array_get_size(x_153);
x_159 = lean_nat_dec_le(x_157, x_158);
lean_dec(x_158);
lean_dec(x_157);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; 
x_160 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_153);
if (lean_is_scalar(x_133)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_133;
}
lean_ctor_set(x_161, 0, x_151);
lean_ctor_set(x_161, 1, x_160);
x_2 = x_161;
x_3 = x_130;
goto _start;
}
else
{
lean_object* x_163; 
if (lean_is_scalar(x_133)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_133;
}
lean_ctor_set(x_163, 0, x_151);
lean_ctor_set(x_163, 1, x_153);
x_2 = x_163;
x_3 = x_130;
goto _start;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_165 = lean_box(0);
x_166 = lean_array_uset(x_132, x_146, x_165);
x_167 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_128, x_129, x_147);
x_168 = lean_array_uset(x_166, x_146, x_167);
if (lean_is_scalar(x_133)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_133;
}
lean_ctor_set(x_169, 0, x_131);
lean_ctor_set(x_169, 1, x_168);
x_2 = x_169;
x_3 = x_130;
goto _start;
}
}
else
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_171 = lean_ctor_get(x_148, 0);
lean_inc(x_171);
lean_dec(x_148);
x_172 = lean_nat_add(x_171, x_129);
lean_dec(x_129);
lean_dec(x_171);
x_173 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_128, x_147);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_174 = lean_unsigned_to_nat(1u);
x_175 = lean_nat_add(x_131, x_174);
lean_dec(x_131);
x_176 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_176, 0, x_128);
lean_ctor_set(x_176, 1, x_172);
lean_ctor_set(x_176, 2, x_147);
x_177 = lean_array_uset(x_132, x_146, x_176);
x_178 = lean_unsigned_to_nat(4u);
x_179 = lean_nat_mul(x_175, x_178);
x_180 = lean_unsigned_to_nat(3u);
x_181 = lean_nat_div(x_179, x_180);
lean_dec(x_179);
x_182 = lean_array_get_size(x_177);
x_183 = lean_nat_dec_le(x_181, x_182);
lean_dec(x_182);
lean_dec(x_181);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; 
x_184 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_177);
if (lean_is_scalar(x_133)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_133;
}
lean_ctor_set(x_185, 0, x_175);
lean_ctor_set(x_185, 1, x_184);
x_2 = x_185;
x_3 = x_130;
goto _start;
}
else
{
lean_object* x_187; 
if (lean_is_scalar(x_133)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_133;
}
lean_ctor_set(x_187, 0, x_175);
lean_ctor_set(x_187, 1, x_177);
x_2 = x_187;
x_3 = x_130;
goto _start;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_189 = lean_box(0);
x_190 = lean_array_uset(x_132, x_146, x_189);
x_191 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_128, x_172, x_147);
x_192 = lean_array_uset(x_190, x_146, x_191);
if (lean_is_scalar(x_133)) {
 x_193 = lean_alloc_ctor(0, 2, 0);
} else {
 x_193 = x_133;
}
lean_ctor_set(x_193, 0, x_131);
lean_ctor_set(x_193, 1, x_192);
x_2 = x_193;
x_3 = x_130;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1(x_1, x_5, x_7);
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_1);
lean_inc(x_6);
x_9 = lean_apply_2(x_1, x_6, x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; size_t x_25; lean_object* x_26; uint8_t x_27; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_array_get_size(x_12);
x_14 = lean_uint64_of_nat(x_6);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = 1;
x_24 = lean_usize_sub(x_22, x_23);
x_25 = lean_usize_land(x_21, x_24);
x_26 = lean_array_uget(x_12, x_25);
x_27 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_6, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_11, x_28);
lean_dec(x_11);
lean_ctor_set(x_4, 2, x_26);
lean_ctor_set(x_4, 1, x_9);
x_30 = lean_array_uset(x_12, x_25, x_4);
x_31 = lean_unsigned_to_nat(4u);
x_32 = lean_nat_mul(x_29, x_31);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_nat_div(x_32, x_33);
lean_dec(x_32);
x_35 = lean_array_get_size(x_30);
x_36 = lean_nat_dec_le(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_30);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_3, 0, x_29);
x_4 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_30);
lean_ctor_set(x_3, 0, x_29);
x_4 = x_8;
goto _start;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_4);
x_40 = lean_box(0);
x_41 = lean_array_uset(x_12, x_25, x_40);
x_42 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_6, x_9, x_26);
x_43 = lean_array_uset(x_41, x_25, x_42);
lean_ctor_set(x_3, 1, x_43);
x_4 = x_8;
goto _start;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; size_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_45 = lean_ctor_get(x_3, 0);
x_46 = lean_ctor_get(x_3, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_3);
x_47 = lean_array_get_size(x_46);
x_48 = lean_uint64_of_nat(x_6);
x_49 = 32;
x_50 = lean_uint64_shift_right(x_48, x_49);
x_51 = lean_uint64_xor(x_48, x_50);
x_52 = 16;
x_53 = lean_uint64_shift_right(x_51, x_52);
x_54 = lean_uint64_xor(x_51, x_53);
x_55 = lean_uint64_to_usize(x_54);
x_56 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_57 = 1;
x_58 = lean_usize_sub(x_56, x_57);
x_59 = lean_usize_land(x_55, x_58);
x_60 = lean_array_uget(x_46, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_6, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_45, x_62);
lean_dec(x_45);
lean_ctor_set(x_4, 2, x_60);
lean_ctor_set(x_4, 1, x_9);
x_64 = lean_array_uset(x_46, x_59, x_4);
x_65 = lean_unsigned_to_nat(4u);
x_66 = lean_nat_mul(x_63, x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_nat_div(x_66, x_67);
lean_dec(x_66);
x_69 = lean_array_get_size(x_64);
x_70 = lean_nat_dec_le(x_68, x_69);
lean_dec(x_69);
lean_dec(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_64);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_63);
lean_ctor_set(x_72, 1, x_71);
x_3 = x_72;
x_4 = x_8;
goto _start;
}
else
{
lean_object* x_74; 
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_63);
lean_ctor_set(x_74, 1, x_64);
x_3 = x_74;
x_4 = x_8;
goto _start;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_free_object(x_4);
x_76 = lean_box(0);
x_77 = lean_array_uset(x_46, x_59, x_76);
x_78 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_6, x_9, x_60);
x_79 = lean_array_uset(x_77, x_59, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_45);
lean_ctor_set(x_80, 1, x_79);
x_3 = x_80;
x_4 = x_8;
goto _start;
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint64_t x_90; uint64_t x_91; uint64_t x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; uint64_t x_96; size_t x_97; size_t x_98; size_t x_99; size_t x_100; size_t x_101; lean_object* x_102; uint8_t x_103; 
x_82 = lean_ctor_get(x_4, 0);
x_83 = lean_ctor_get(x_4, 1);
x_84 = lean_ctor_get(x_4, 2);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_82);
x_85 = lean_apply_2(x_1, x_82, x_83);
x_86 = lean_ctor_get(x_3, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_3, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_88 = x_3;
} else {
 lean_dec_ref(x_3);
 x_88 = lean_box(0);
}
x_89 = lean_array_get_size(x_87);
x_90 = lean_uint64_of_nat(x_82);
x_91 = 32;
x_92 = lean_uint64_shift_right(x_90, x_91);
x_93 = lean_uint64_xor(x_90, x_92);
x_94 = 16;
x_95 = lean_uint64_shift_right(x_93, x_94);
x_96 = lean_uint64_xor(x_93, x_95);
x_97 = lean_uint64_to_usize(x_96);
x_98 = lean_usize_of_nat(x_89);
lean_dec(x_89);
x_99 = 1;
x_100 = lean_usize_sub(x_98, x_99);
x_101 = lean_usize_land(x_97, x_100);
x_102 = lean_array_uget(x_87, x_101);
x_103 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_82, x_102);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_add(x_86, x_104);
lean_dec(x_86);
x_106 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_106, 0, x_82);
lean_ctor_set(x_106, 1, x_85);
lean_ctor_set(x_106, 2, x_102);
x_107 = lean_array_uset(x_87, x_101, x_106);
x_108 = lean_unsigned_to_nat(4u);
x_109 = lean_nat_mul(x_105, x_108);
x_110 = lean_unsigned_to_nat(3u);
x_111 = lean_nat_div(x_109, x_110);
lean_dec(x_109);
x_112 = lean_array_get_size(x_107);
x_113 = lean_nat_dec_le(x_111, x_112);
lean_dec(x_112);
lean_dec(x_111);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
x_114 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_107);
if (lean_is_scalar(x_88)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_88;
}
lean_ctor_set(x_115, 0, x_105);
lean_ctor_set(x_115, 1, x_114);
x_3 = x_115;
x_4 = x_84;
goto _start;
}
else
{
lean_object* x_117; 
if (lean_is_scalar(x_88)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_88;
}
lean_ctor_set(x_117, 0, x_105);
lean_ctor_set(x_117, 1, x_107);
x_3 = x_117;
x_4 = x_84;
goto _start;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_119 = lean_box(0);
x_120 = lean_array_uset(x_87, x_101, x_119);
x_121 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_82, x_85, x_102);
x_122 = lean_array_uset(x_120, x_101, x_121);
if (lean_is_scalar(x_88)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_88;
}
lean_ctor_set(x_123, 0, x_86);
lean_ctor_set(x_123, 1, x_122);
x_3 = x_123;
x_4 = x_84;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_1);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4(x_1, x_2, x_6, x_8);
x_10 = 1;
x_11 = lean_usize_add(x_4, x_10);
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_1);
return x_6;
}
}
}
static lean_object* _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5;
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
lean_dec(x_1);
x_9 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5;
return x_9;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_12 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2;
x_13 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5;
x_14 = l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5(x_1, x_12, x_3, x_10, x_11, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_nat_mul(x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Linarith_CompSource_flatten___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static size_t _init_l_Linarith_CompSource_flatten___closed__2() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Linarith_CompSource_flatten___closed__1;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static size_t _init_l_Linarith_CompSource_flatten___closed__3() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Linarith_CompSource_flatten___closed__2;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; uint64_t x_4; uint64_t x_5; uint64_t x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; size_t x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = lean_uint64_of_nat(x_2);
x_5 = 32;
x_6 = lean_uint64_shift_right(x_4, x_5);
x_7 = lean_uint64_xor(x_4, x_6);
x_8 = 16;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = lean_uint64_to_usize(x_10);
x_12 = l_Linarith_CompSource_flatten___closed__3;
x_13 = lean_usize_land(x_11, x_12);
x_14 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4;
x_15 = lean_array_uget(x_14, x_13);
x_16 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__1(x_2, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_18, 2, x_15);
x_19 = lean_array_uset(x_14, x_13, x_18);
x_20 = lean_array_get_size(x_19);
x_21 = lean_nat_dec_le(x_17, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__2(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_array_uset(x_14, x_13, x_3);
x_26 = lean_unsigned_to_nat(1u);
x_27 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Elab_Tactic_BVDecide_LRAT_trim_M_registerIdMap___spec__6(x_2, x_26, x_15);
x_28 = lean_array_uset(x_25, x_13, x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_dec(x_1);
x_33 = l_Linarith_CompSource_flatten(x_31);
x_34 = l_Linarith_CompSource_flatten(x_32);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_array_get_size(x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_nat_dec_lt(x_37, x_36);
if (x_38 == 0)
{
lean_dec(x_36);
lean_dec(x_35);
return x_33;
}
else
{
uint8_t x_39; 
x_39 = lean_nat_dec_le(x_36, x_36);
if (x_39 == 0)
{
lean_dec(x_36);
lean_dec(x_35);
return x_33;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_40 = 0;
x_41 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_42 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2;
x_43 = l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2(x_42, x_35, x_40, x_41, x_33);
lean_dec(x_35);
return x_43;
}
}
}
default: 
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_alloc_closure((void*)(l_Linarith_CompSource_flatten___lambda__1___boxed), 3, 1);
lean_closure_set(x_46, 0, x_44);
x_47 = l_Linarith_CompSource_flatten(x_45);
x_48 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3(x_46, x_47);
lean_dec(x_47);
return x_48;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Linarith_CompSource_flatten___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Linarith_CompSource_flatten___spec__5(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_CompSource_flatten___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Linarith_CompSource_flatten___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Linarith_CompSource_toString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" + ", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Linarith_CompSource_toString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" * ", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_CompSource_toString(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l___private_Init_Data_Repr_0__Nat_reprFast(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Linarith_CompSource_toString(x_4);
x_7 = l_Linarith_CompSource_toString___closed__1;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Linarith_CompSource_toString(x_5);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l___private_Init_Data_Repr_0__Nat_reprFast(x_11);
x_14 = l_Linarith_CompSource_toString___closed__2;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_Linarith_CompSource_toString(x_12);
x_17 = lean_string_append(x_15, x_16);
lean_dec(x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_instToFormatCompSource(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Linarith_CompSource_toString(x_1);
x_3 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Linarith_PComp_maybeMinimal___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_1, x_2);
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
static lean_object* _init_l_Linarith_PComp_maybeMinimal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_PComp_maybeMinimal___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Linarith_PComp_maybeMinimal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
x_4 = l_Batteries_RBNode_size___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Nat_decLe___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Linarith_PComp_maybeMinimal___closed__1;
x_8 = l_Batteries_RBSet_filter___rarg(x_7, x_5, x_6);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_7, x_8, x_9);
x_11 = l_Batteries_RBNode_size___rarg(x_10);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_12, x_11);
lean_dec(x_11);
x_14 = lean_nat_dec_le(x_4, x_13);
lean_dec(x_13);
lean_dec(x_4);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_maybeMinimal___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Linarith_PComp_maybeMinimal___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_maybeMinimal___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Linarith_PComp_maybeMinimal(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Linarith_PComp_cmp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Linarith_Comp_cmp(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_cmp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Linarith_PComp_cmp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_scale(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_6 = l_Linarith_Comp_scale(x_4, x_2);
x_7 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = lean_ctor_get(x_1, 5);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_2);
x_14 = l_Linarith_Comp_scale(x_8, x_2);
x_15 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
x_16 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_10);
lean_ctor_set(x_16, 3, x_11);
lean_ctor_set(x_16, 4, x_12);
lean_ctor_set(x_16, 5, x_13);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = 0;
x_5 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_nat_dec_lt(x_1, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_nat_dec_eq(x_1, x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_10);
x_14 = 0;
lean_ctor_set(x_2, 2, x_13);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_14);
return x_2;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
x_15 = 0;
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_15);
return x_2;
}
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_8);
x_17 = 0;
lean_ctor_set(x_2, 0, x_16);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_17);
return x_2;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_2);
x_21 = lean_nat_dec_lt(x_1, x_19);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = lean_nat_dec_eq(x_1, x_19);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_20);
x_24 = 0;
x_25 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*3, x_24);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_19);
x_26 = 0;
x_27 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_1);
lean_ctor_set(x_27, 2, x_20);
lean_ctor_set_uint8(x_27, sizeof(void*)*3, x_26);
return x_27;
}
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_18);
x_29 = 0;
x_30 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_19);
lean_ctor_set(x_30, 2, x_20);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_2);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_ctor_get(x_2, 1);
x_34 = lean_ctor_get(x_2, 2);
x_35 = lean_nat_dec_lt(x_1, x_33);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = lean_nat_dec_eq(x_1, x_33);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_34);
x_38 = lean_ctor_get_uint8(x_37, sizeof(void*)*3);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_37, 2);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_37, 2);
lean_dec(x_42);
x_43 = lean_ctor_get(x_37, 0);
lean_dec(x_43);
lean_ctor_set(x_37, 0, x_40);
x_44 = 1;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_44);
return x_2;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_40);
lean_ctor_set_uint8(x_46, sizeof(void*)*3, x_38);
x_47 = 1;
lean_ctor_set(x_2, 2, x_46);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_47);
return x_2;
}
}
else
{
uint8_t x_48; 
x_48 = lean_ctor_get_uint8(x_40, sizeof(void*)*3);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_37);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_37, 1);
x_51 = lean_ctor_get(x_37, 2);
lean_dec(x_51);
x_52 = lean_ctor_get(x_37, 0);
lean_dec(x_52);
x_53 = !lean_is_exclusive(x_40);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
x_56 = lean_ctor_get(x_40, 2);
x_57 = 1;
lean_ctor_set(x_40, 2, x_39);
lean_ctor_set(x_40, 1, x_33);
lean_ctor_set(x_40, 0, x_32);
lean_ctor_set_uint8(x_40, sizeof(void*)*3, x_57);
lean_ctor_set(x_37, 2, x_56);
lean_ctor_set(x_37, 1, x_55);
lean_ctor_set(x_37, 0, x_54);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_57);
x_58 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_50);
lean_ctor_set(x_2, 0, x_40);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_58);
return x_2;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; uint8_t x_64; 
x_59 = lean_ctor_get(x_40, 0);
x_60 = lean_ctor_get(x_40, 1);
x_61 = lean_ctor_get(x_40, 2);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_40);
x_62 = 1;
x_63 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_63, 0, x_32);
lean_ctor_set(x_63, 1, x_33);
lean_ctor_set(x_63, 2, x_39);
lean_ctor_set_uint8(x_63, sizeof(void*)*3, x_62);
lean_ctor_set(x_37, 2, x_61);
lean_ctor_set(x_37, 1, x_60);
lean_ctor_set(x_37, 0, x_59);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_62);
x_64 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_50);
lean_ctor_set(x_2, 0, x_63);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_64);
return x_2;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_65 = lean_ctor_get(x_37, 1);
lean_inc(x_65);
lean_dec(x_37);
x_66 = lean_ctor_get(x_40, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_40, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_40, 2);
lean_inc(x_68);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 x_69 = x_40;
} else {
 lean_dec_ref(x_40);
 x_69 = lean_box(0);
}
x_70 = 1;
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(1, 3, 1);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_32);
lean_ctor_set(x_71, 1, x_33);
lean_ctor_set(x_71, 2, x_39);
lean_ctor_set_uint8(x_71, sizeof(void*)*3, x_70);
x_72 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_72, 0, x_66);
lean_ctor_set(x_72, 1, x_67);
lean_ctor_set(x_72, 2, x_68);
lean_ctor_set_uint8(x_72, sizeof(void*)*3, x_70);
x_73 = 0;
lean_ctor_set(x_2, 2, x_72);
lean_ctor_set(x_2, 1, x_65);
lean_ctor_set(x_2, 0, x_71);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_73);
return x_2;
}
}
else
{
uint8_t x_74; 
lean_free_object(x_2);
x_74 = !lean_is_exclusive(x_40);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = lean_ctor_get(x_40, 2);
lean_dec(x_75);
x_76 = lean_ctor_get(x_40, 1);
lean_dec(x_76);
x_77 = lean_ctor_get(x_40, 0);
lean_dec(x_77);
x_78 = 1;
lean_ctor_set(x_40, 2, x_37);
lean_ctor_set(x_40, 1, x_33);
lean_ctor_set(x_40, 0, x_32);
lean_ctor_set_uint8(x_40, sizeof(void*)*3, x_78);
return x_40;
}
else
{
uint8_t x_79; lean_object* x_80; 
lean_dec(x_40);
x_79 = 1;
x_80 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_80, 0, x_32);
lean_ctor_set(x_80, 1, x_33);
lean_ctor_set(x_80, 2, x_37);
lean_ctor_set_uint8(x_80, sizeof(void*)*3, x_79);
return x_80;
}
}
}
}
else
{
uint8_t x_81; 
x_81 = lean_ctor_get_uint8(x_39, sizeof(void*)*3);
if (x_81 == 0)
{
lean_object* x_82; 
x_82 = lean_ctor_get(x_37, 2);
lean_inc(x_82);
if (lean_obj_tag(x_82) == 0)
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_37);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_84 = lean_ctor_get(x_37, 2);
lean_dec(x_84);
x_85 = lean_ctor_get(x_37, 0);
lean_dec(x_85);
x_86 = !lean_is_exclusive(x_39);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; uint8_t x_91; 
x_87 = lean_ctor_get(x_39, 0);
x_88 = lean_ctor_get(x_39, 1);
x_89 = lean_ctor_get(x_39, 2);
x_90 = 1;
lean_ctor_set(x_39, 2, x_87);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_90);
lean_ctor_set(x_37, 0, x_89);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_90);
x_91 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_88);
lean_ctor_set(x_2, 0, x_39);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_91);
return x_2;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; uint8_t x_97; 
x_92 = lean_ctor_get(x_39, 0);
x_93 = lean_ctor_get(x_39, 1);
x_94 = lean_ctor_get(x_39, 2);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_39);
x_95 = 1;
x_96 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_96, 0, x_32);
lean_ctor_set(x_96, 1, x_33);
lean_ctor_set(x_96, 2, x_92);
lean_ctor_set_uint8(x_96, sizeof(void*)*3, x_95);
lean_ctor_set(x_37, 0, x_94);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_95);
x_97 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_93);
lean_ctor_set(x_2, 0, x_96);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_97);
return x_2;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_98 = lean_ctor_get(x_37, 1);
lean_inc(x_98);
lean_dec(x_37);
x_99 = lean_ctor_get(x_39, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_39, 1);
lean_inc(x_100);
x_101 = lean_ctor_get(x_39, 2);
lean_inc(x_101);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_102 = x_39;
} else {
 lean_dec_ref(x_39);
 x_102 = lean_box(0);
}
x_103 = 1;
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(1, 3, 1);
} else {
 x_104 = x_102;
}
lean_ctor_set(x_104, 0, x_32);
lean_ctor_set(x_104, 1, x_33);
lean_ctor_set(x_104, 2, x_99);
lean_ctor_set_uint8(x_104, sizeof(void*)*3, x_103);
x_105 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_105, 0, x_101);
lean_ctor_set(x_105, 1, x_98);
lean_ctor_set(x_105, 2, x_82);
lean_ctor_set_uint8(x_105, sizeof(void*)*3, x_103);
x_106 = 0;
lean_ctor_set(x_2, 2, x_105);
lean_ctor_set(x_2, 1, x_100);
lean_ctor_set(x_2, 0, x_104);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_106);
return x_2;
}
}
else
{
uint8_t x_107; 
x_107 = lean_ctor_get_uint8(x_82, sizeof(void*)*3);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_37);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = lean_ctor_get(x_37, 1);
x_110 = lean_ctor_get(x_37, 2);
lean_dec(x_110);
x_111 = lean_ctor_get(x_37, 0);
lean_dec(x_111);
x_112 = !lean_is_exclusive(x_39);
if (x_112 == 0)
{
uint8_t x_113; 
x_113 = !lean_is_exclusive(x_82);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; uint8_t x_121; 
x_114 = lean_ctor_get(x_39, 0);
x_115 = lean_ctor_get(x_39, 1);
x_116 = lean_ctor_get(x_39, 2);
x_117 = lean_ctor_get(x_82, 0);
x_118 = lean_ctor_get(x_82, 1);
x_119 = lean_ctor_get(x_82, 2);
lean_ctor_set(x_82, 2, x_116);
lean_ctor_set(x_82, 1, x_115);
lean_ctor_set(x_82, 0, x_114);
x_120 = 1;
lean_ctor_set(x_39, 2, x_82);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_120);
lean_ctor_set(x_37, 2, x_119);
lean_ctor_set(x_37, 1, x_118);
lean_ctor_set(x_37, 0, x_117);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_120);
x_121 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_109);
lean_ctor_set(x_2, 0, x_39);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_121);
return x_2;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; uint8_t x_130; 
x_122 = lean_ctor_get(x_39, 0);
x_123 = lean_ctor_get(x_39, 1);
x_124 = lean_ctor_get(x_39, 2);
x_125 = lean_ctor_get(x_82, 0);
x_126 = lean_ctor_get(x_82, 1);
x_127 = lean_ctor_get(x_82, 2);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_82);
x_128 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_128, 0, x_122);
lean_ctor_set(x_128, 1, x_123);
lean_ctor_set(x_128, 2, x_124);
lean_ctor_set_uint8(x_128, sizeof(void*)*3, x_107);
x_129 = 1;
lean_ctor_set(x_39, 2, x_128);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_129);
lean_ctor_set(x_37, 2, x_127);
lean_ctor_set(x_37, 1, x_126);
lean_ctor_set(x_37, 0, x_125);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_129);
x_130 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_109);
lean_ctor_set(x_2, 0, x_39);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_130);
return x_2;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; uint8_t x_141; 
x_131 = lean_ctor_get(x_39, 0);
x_132 = lean_ctor_get(x_39, 1);
x_133 = lean_ctor_get(x_39, 2);
lean_inc(x_133);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_39);
x_134 = lean_ctor_get(x_82, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_82, 1);
lean_inc(x_135);
x_136 = lean_ctor_get(x_82, 2);
lean_inc(x_136);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 lean_ctor_release(x_82, 2);
 x_137 = x_82;
} else {
 lean_dec_ref(x_82);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(1, 3, 1);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_131);
lean_ctor_set(x_138, 1, x_132);
lean_ctor_set(x_138, 2, x_133);
lean_ctor_set_uint8(x_138, sizeof(void*)*3, x_107);
x_139 = 1;
x_140 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_140, 0, x_32);
lean_ctor_set(x_140, 1, x_33);
lean_ctor_set(x_140, 2, x_138);
lean_ctor_set_uint8(x_140, sizeof(void*)*3, x_139);
lean_ctor_set(x_37, 2, x_136);
lean_ctor_set(x_37, 1, x_135);
lean_ctor_set(x_37, 0, x_134);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_139);
x_141 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_109);
lean_ctor_set(x_2, 0, x_140);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_141);
return x_2;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_142 = lean_ctor_get(x_37, 1);
lean_inc(x_142);
lean_dec(x_37);
x_143 = lean_ctor_get(x_39, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_39, 1);
lean_inc(x_144);
x_145 = lean_ctor_get(x_39, 2);
lean_inc(x_145);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_146 = x_39;
} else {
 lean_dec_ref(x_39);
 x_146 = lean_box(0);
}
x_147 = lean_ctor_get(x_82, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_82, 1);
lean_inc(x_148);
x_149 = lean_ctor_get(x_82, 2);
lean_inc(x_149);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 lean_ctor_release(x_82, 2);
 x_150 = x_82;
} else {
 lean_dec_ref(x_82);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 3, 1);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_143);
lean_ctor_set(x_151, 1, x_144);
lean_ctor_set(x_151, 2, x_145);
lean_ctor_set_uint8(x_151, sizeof(void*)*3, x_107);
x_152 = 1;
if (lean_is_scalar(x_146)) {
 x_153 = lean_alloc_ctor(1, 3, 1);
} else {
 x_153 = x_146;
}
lean_ctor_set(x_153, 0, x_32);
lean_ctor_set(x_153, 1, x_33);
lean_ctor_set(x_153, 2, x_151);
lean_ctor_set_uint8(x_153, sizeof(void*)*3, x_152);
x_154 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_154, 0, x_147);
lean_ctor_set(x_154, 1, x_148);
lean_ctor_set(x_154, 2, x_149);
lean_ctor_set_uint8(x_154, sizeof(void*)*3, x_152);
x_155 = 0;
lean_ctor_set(x_2, 2, x_154);
lean_ctor_set(x_2, 1, x_142);
lean_ctor_set(x_2, 0, x_153);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_155);
return x_2;
}
}
else
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_37);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_157 = lean_ctor_get(x_37, 2);
lean_dec(x_157);
x_158 = lean_ctor_get(x_37, 0);
lean_dec(x_158);
x_159 = !lean_is_exclusive(x_39);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; uint8_t x_164; 
x_160 = lean_ctor_get(x_39, 0);
x_161 = lean_ctor_get(x_39, 1);
x_162 = lean_ctor_get(x_39, 2);
x_163 = 1;
lean_ctor_set(x_39, 2, x_160);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_163);
lean_ctor_set(x_37, 0, x_162);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_163);
x_164 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_161);
lean_ctor_set(x_2, 0, x_39);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_164);
return x_2;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; uint8_t x_170; 
x_165 = lean_ctor_get(x_39, 0);
x_166 = lean_ctor_get(x_39, 1);
x_167 = lean_ctor_get(x_39, 2);
lean_inc(x_167);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_39);
x_168 = 1;
x_169 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_169, 0, x_32);
lean_ctor_set(x_169, 1, x_33);
lean_ctor_set(x_169, 2, x_165);
lean_ctor_set_uint8(x_169, sizeof(void*)*3, x_168);
lean_ctor_set(x_37, 0, x_167);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_168);
x_170 = 0;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set(x_2, 1, x_166);
lean_ctor_set(x_2, 0, x_169);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_170);
return x_2;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_171 = lean_ctor_get(x_37, 1);
lean_inc(x_171);
lean_dec(x_37);
x_172 = lean_ctor_get(x_39, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_39, 1);
lean_inc(x_173);
x_174 = lean_ctor_get(x_39, 2);
lean_inc(x_174);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_175 = x_39;
} else {
 lean_dec_ref(x_39);
 x_175 = lean_box(0);
}
x_176 = 1;
if (lean_is_scalar(x_175)) {
 x_177 = lean_alloc_ctor(1, 3, 1);
} else {
 x_177 = x_175;
}
lean_ctor_set(x_177, 0, x_32);
lean_ctor_set(x_177, 1, x_33);
lean_ctor_set(x_177, 2, x_172);
lean_ctor_set_uint8(x_177, sizeof(void*)*3, x_176);
x_178 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_171);
lean_ctor_set(x_178, 2, x_82);
lean_ctor_set_uint8(x_178, sizeof(void*)*3, x_176);
x_179 = 0;
lean_ctor_set(x_2, 2, x_178);
lean_ctor_set(x_2, 1, x_173);
lean_ctor_set(x_2, 0, x_177);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_179);
return x_2;
}
}
}
}
else
{
lean_object* x_180; 
x_180 = lean_ctor_get(x_37, 2);
lean_inc(x_180);
if (lean_obj_tag(x_180) == 0)
{
uint8_t x_181; 
lean_free_object(x_2);
x_181 = !lean_is_exclusive(x_39);
if (x_181 == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_182 = lean_ctor_get(x_39, 2);
lean_dec(x_182);
x_183 = lean_ctor_get(x_39, 1);
lean_dec(x_183);
x_184 = lean_ctor_get(x_39, 0);
lean_dec(x_184);
x_185 = 1;
lean_ctor_set(x_39, 2, x_37);
lean_ctor_set(x_39, 1, x_33);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_185);
return x_39;
}
else
{
uint8_t x_186; lean_object* x_187; 
lean_dec(x_39);
x_186 = 1;
x_187 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_187, 0, x_32);
lean_ctor_set(x_187, 1, x_33);
lean_ctor_set(x_187, 2, x_37);
lean_ctor_set_uint8(x_187, sizeof(void*)*3, x_186);
return x_187;
}
}
else
{
uint8_t x_188; 
x_188 = lean_ctor_get_uint8(x_180, sizeof(void*)*3);
if (x_188 == 0)
{
uint8_t x_189; 
lean_free_object(x_2);
x_189 = !lean_is_exclusive(x_37);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_190 = lean_ctor_get(x_37, 2);
lean_dec(x_190);
x_191 = lean_ctor_get(x_37, 0);
lean_dec(x_191);
x_192 = !lean_is_exclusive(x_180);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; uint8_t x_197; 
x_193 = lean_ctor_get(x_180, 0);
x_194 = lean_ctor_get(x_180, 1);
x_195 = lean_ctor_get(x_180, 2);
x_196 = 1;
lean_inc(x_39);
lean_ctor_set(x_180, 2, x_39);
lean_ctor_set(x_180, 1, x_33);
lean_ctor_set(x_180, 0, x_32);
x_197 = !lean_is_exclusive(x_39);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_198 = lean_ctor_get(x_39, 2);
lean_dec(x_198);
x_199 = lean_ctor_get(x_39, 1);
lean_dec(x_199);
x_200 = lean_ctor_get(x_39, 0);
lean_dec(x_200);
lean_ctor_set_uint8(x_180, sizeof(void*)*3, x_196);
lean_ctor_set(x_39, 2, x_195);
lean_ctor_set(x_39, 1, x_194);
lean_ctor_set(x_39, 0, x_193);
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_196);
x_201 = 0;
lean_ctor_set(x_37, 2, x_39);
lean_ctor_set(x_37, 0, x_180);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_201);
return x_37;
}
else
{
lean_object* x_202; uint8_t x_203; 
lean_dec(x_39);
lean_ctor_set_uint8(x_180, sizeof(void*)*3, x_196);
x_202 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_202, 0, x_193);
lean_ctor_set(x_202, 1, x_194);
lean_ctor_set(x_202, 2, x_195);
lean_ctor_set_uint8(x_202, sizeof(void*)*3, x_196);
x_203 = 0;
lean_ctor_set(x_37, 2, x_202);
lean_ctor_set(x_37, 0, x_180);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_203);
return x_37;
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_204 = lean_ctor_get(x_180, 0);
x_205 = lean_ctor_get(x_180, 1);
x_206 = lean_ctor_get(x_180, 2);
lean_inc(x_206);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_180);
x_207 = 1;
lean_inc(x_39);
x_208 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_208, 0, x_32);
lean_ctor_set(x_208, 1, x_33);
lean_ctor_set(x_208, 2, x_39);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_209 = x_39;
} else {
 lean_dec_ref(x_39);
 x_209 = lean_box(0);
}
lean_ctor_set_uint8(x_208, sizeof(void*)*3, x_207);
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 3, 1);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_204);
lean_ctor_set(x_210, 1, x_205);
lean_ctor_set(x_210, 2, x_206);
lean_ctor_set_uint8(x_210, sizeof(void*)*3, x_207);
x_211 = 0;
lean_ctor_set(x_37, 2, x_210);
lean_ctor_set(x_37, 0, x_208);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_211);
return x_37;
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; 
x_212 = lean_ctor_get(x_37, 1);
lean_inc(x_212);
lean_dec(x_37);
x_213 = lean_ctor_get(x_180, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_180, 1);
lean_inc(x_214);
x_215 = lean_ctor_get(x_180, 2);
lean_inc(x_215);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 lean_ctor_release(x_180, 2);
 x_216 = x_180;
} else {
 lean_dec_ref(x_180);
 x_216 = lean_box(0);
}
x_217 = 1;
lean_inc(x_39);
if (lean_is_scalar(x_216)) {
 x_218 = lean_alloc_ctor(1, 3, 1);
} else {
 x_218 = x_216;
}
lean_ctor_set(x_218, 0, x_32);
lean_ctor_set(x_218, 1, x_33);
lean_ctor_set(x_218, 2, x_39);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_219 = x_39;
} else {
 lean_dec_ref(x_39);
 x_219 = lean_box(0);
}
lean_ctor_set_uint8(x_218, sizeof(void*)*3, x_217);
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 3, 1);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_213);
lean_ctor_set(x_220, 1, x_214);
lean_ctor_set(x_220, 2, x_215);
lean_ctor_set_uint8(x_220, sizeof(void*)*3, x_217);
x_221 = 0;
x_222 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_222, 0, x_218);
lean_ctor_set(x_222, 1, x_212);
lean_ctor_set(x_222, 2, x_220);
lean_ctor_set_uint8(x_222, sizeof(void*)*3, x_221);
return x_222;
}
}
else
{
uint8_t x_223; 
x_223 = !lean_is_exclusive(x_37);
if (x_223 == 0)
{
lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_224 = lean_ctor_get(x_37, 2);
lean_dec(x_224);
x_225 = lean_ctor_get(x_37, 0);
lean_dec(x_225);
x_226 = !lean_is_exclusive(x_39);
if (x_226 == 0)
{
uint8_t x_227; 
lean_ctor_set_uint8(x_39, sizeof(void*)*3, x_188);
x_227 = 1;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_227);
return x_2;
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_228 = lean_ctor_get(x_39, 0);
x_229 = lean_ctor_get(x_39, 1);
x_230 = lean_ctor_get(x_39, 2);
lean_inc(x_230);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_39);
x_231 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_231, 0, x_228);
lean_ctor_set(x_231, 1, x_229);
lean_ctor_set(x_231, 2, x_230);
lean_ctor_set_uint8(x_231, sizeof(void*)*3, x_188);
lean_ctor_set(x_37, 0, x_231);
x_232 = 1;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_232);
return x_2;
}
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; 
x_233 = lean_ctor_get(x_37, 1);
lean_inc(x_233);
lean_dec(x_37);
x_234 = lean_ctor_get(x_39, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_39, 1);
lean_inc(x_235);
x_236 = lean_ctor_get(x_39, 2);
lean_inc(x_236);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 lean_ctor_release(x_39, 2);
 x_237 = x_39;
} else {
 lean_dec_ref(x_39);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(1, 3, 1);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_234);
lean_ctor_set(x_238, 1, x_235);
lean_ctor_set(x_238, 2, x_236);
lean_ctor_set_uint8(x_238, sizeof(void*)*3, x_188);
x_239 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_233);
lean_ctor_set(x_239, 2, x_180);
lean_ctor_set_uint8(x_239, sizeof(void*)*3, x_38);
x_240 = 1;
lean_ctor_set(x_2, 2, x_239);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_240);
return x_2;
}
}
}
}
}
}
else
{
uint8_t x_241; 
x_241 = 1;
lean_ctor_set(x_2, 2, x_37);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_241);
return x_2;
}
}
else
{
uint8_t x_242; 
lean_dec(x_33);
x_242 = 1;
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_242);
return x_2;
}
}
else
{
lean_object* x_243; uint8_t x_244; 
x_243 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_32);
x_244 = lean_ctor_get_uint8(x_243, sizeof(void*)*3);
if (x_244 == 0)
{
lean_object* x_245; 
x_245 = lean_ctor_get(x_243, 0);
lean_inc(x_245);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; 
x_246 = lean_ctor_get(x_243, 2);
lean_inc(x_246);
if (lean_obj_tag(x_246) == 0)
{
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_243);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_248 = lean_ctor_get(x_243, 2);
lean_dec(x_248);
x_249 = lean_ctor_get(x_243, 0);
lean_dec(x_249);
lean_ctor_set(x_243, 0, x_246);
x_250 = 1;
lean_ctor_set(x_2, 0, x_243);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_250);
return x_2;
}
else
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_251 = lean_ctor_get(x_243, 1);
lean_inc(x_251);
lean_dec(x_243);
x_252 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_252, 0, x_246);
lean_ctor_set(x_252, 1, x_251);
lean_ctor_set(x_252, 2, x_246);
lean_ctor_set_uint8(x_252, sizeof(void*)*3, x_244);
x_253 = 1;
lean_ctor_set(x_2, 0, x_252);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_253);
return x_2;
}
}
else
{
uint8_t x_254; 
x_254 = lean_ctor_get_uint8(x_246, sizeof(void*)*3);
if (x_254 == 0)
{
uint8_t x_255; 
x_255 = !lean_is_exclusive(x_243);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_256 = lean_ctor_get(x_243, 1);
x_257 = lean_ctor_get(x_243, 2);
lean_dec(x_257);
x_258 = lean_ctor_get(x_243, 0);
lean_dec(x_258);
x_259 = !lean_is_exclusive(x_246);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; uint8_t x_263; uint8_t x_264; 
x_260 = lean_ctor_get(x_246, 0);
x_261 = lean_ctor_get(x_246, 1);
x_262 = lean_ctor_get(x_246, 2);
x_263 = 1;
lean_ctor_set(x_246, 2, x_260);
lean_ctor_set(x_246, 1, x_256);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set_uint8(x_246, sizeof(void*)*3, x_263);
lean_ctor_set(x_243, 2, x_34);
lean_ctor_set(x_243, 1, x_33);
lean_ctor_set(x_243, 0, x_262);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_263);
x_264 = 0;
lean_ctor_set(x_2, 2, x_243);
lean_ctor_set(x_2, 1, x_261);
lean_ctor_set(x_2, 0, x_246);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_264);
return x_2;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_269; uint8_t x_270; 
x_265 = lean_ctor_get(x_246, 0);
x_266 = lean_ctor_get(x_246, 1);
x_267 = lean_ctor_get(x_246, 2);
lean_inc(x_267);
lean_inc(x_266);
lean_inc(x_265);
lean_dec(x_246);
x_268 = 1;
x_269 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_269, 0, x_245);
lean_ctor_set(x_269, 1, x_256);
lean_ctor_set(x_269, 2, x_265);
lean_ctor_set_uint8(x_269, sizeof(void*)*3, x_268);
lean_ctor_set(x_243, 2, x_34);
lean_ctor_set(x_243, 1, x_33);
lean_ctor_set(x_243, 0, x_267);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_268);
x_270 = 0;
lean_ctor_set(x_2, 2, x_243);
lean_ctor_set(x_2, 1, x_266);
lean_ctor_set(x_2, 0, x_269);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_270);
return x_2;
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; lean_object* x_277; lean_object* x_278; uint8_t x_279; 
x_271 = lean_ctor_get(x_243, 1);
lean_inc(x_271);
lean_dec(x_243);
x_272 = lean_ctor_get(x_246, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_246, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_246, 2);
lean_inc(x_274);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 lean_ctor_release(x_246, 2);
 x_275 = x_246;
} else {
 lean_dec_ref(x_246);
 x_275 = lean_box(0);
}
x_276 = 1;
if (lean_is_scalar(x_275)) {
 x_277 = lean_alloc_ctor(1, 3, 1);
} else {
 x_277 = x_275;
}
lean_ctor_set(x_277, 0, x_245);
lean_ctor_set(x_277, 1, x_271);
lean_ctor_set(x_277, 2, x_272);
lean_ctor_set_uint8(x_277, sizeof(void*)*3, x_276);
x_278 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_278, 0, x_274);
lean_ctor_set(x_278, 1, x_33);
lean_ctor_set(x_278, 2, x_34);
lean_ctor_set_uint8(x_278, sizeof(void*)*3, x_276);
x_279 = 0;
lean_ctor_set(x_2, 2, x_278);
lean_ctor_set(x_2, 1, x_273);
lean_ctor_set(x_2, 0, x_277);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_279);
return x_2;
}
}
else
{
uint8_t x_280; 
lean_free_object(x_2);
x_280 = !lean_is_exclusive(x_246);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
x_281 = lean_ctor_get(x_246, 2);
lean_dec(x_281);
x_282 = lean_ctor_get(x_246, 1);
lean_dec(x_282);
x_283 = lean_ctor_get(x_246, 0);
lean_dec(x_283);
x_284 = 1;
lean_ctor_set(x_246, 2, x_34);
lean_ctor_set(x_246, 1, x_33);
lean_ctor_set(x_246, 0, x_243);
lean_ctor_set_uint8(x_246, sizeof(void*)*3, x_284);
return x_246;
}
else
{
uint8_t x_285; lean_object* x_286; 
lean_dec(x_246);
x_285 = 1;
x_286 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_286, 0, x_243);
lean_ctor_set(x_286, 1, x_33);
lean_ctor_set(x_286, 2, x_34);
lean_ctor_set_uint8(x_286, sizeof(void*)*3, x_285);
return x_286;
}
}
}
}
else
{
uint8_t x_287; 
x_287 = lean_ctor_get_uint8(x_245, sizeof(void*)*3);
if (x_287 == 0)
{
uint8_t x_288; 
x_288 = !lean_is_exclusive(x_243);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; 
x_289 = lean_ctor_get(x_243, 1);
x_290 = lean_ctor_get(x_243, 2);
x_291 = lean_ctor_get(x_243, 0);
lean_dec(x_291);
x_292 = !lean_is_exclusive(x_245);
if (x_292 == 0)
{
uint8_t x_293; uint8_t x_294; 
x_293 = 1;
lean_ctor_set_uint8(x_245, sizeof(void*)*3, x_293);
lean_ctor_set(x_243, 2, x_34);
lean_ctor_set(x_243, 1, x_33);
lean_ctor_set(x_243, 0, x_290);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_293);
x_294 = 0;
lean_ctor_set(x_2, 2, x_243);
lean_ctor_set(x_2, 1, x_289);
lean_ctor_set(x_2, 0, x_245);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_294);
return x_2;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; uint8_t x_298; lean_object* x_299; uint8_t x_300; 
x_295 = lean_ctor_get(x_245, 0);
x_296 = lean_ctor_get(x_245, 1);
x_297 = lean_ctor_get(x_245, 2);
lean_inc(x_297);
lean_inc(x_296);
lean_inc(x_295);
lean_dec(x_245);
x_298 = 1;
x_299 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_299, 0, x_295);
lean_ctor_set(x_299, 1, x_296);
lean_ctor_set(x_299, 2, x_297);
lean_ctor_set_uint8(x_299, sizeof(void*)*3, x_298);
lean_ctor_set(x_243, 2, x_34);
lean_ctor_set(x_243, 1, x_33);
lean_ctor_set(x_243, 0, x_290);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_298);
x_300 = 0;
lean_ctor_set(x_2, 2, x_243);
lean_ctor_set(x_2, 1, x_289);
lean_ctor_set(x_2, 0, x_299);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_300);
return x_2;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; uint8_t x_307; lean_object* x_308; lean_object* x_309; uint8_t x_310; 
x_301 = lean_ctor_get(x_243, 1);
x_302 = lean_ctor_get(x_243, 2);
lean_inc(x_302);
lean_inc(x_301);
lean_dec(x_243);
x_303 = lean_ctor_get(x_245, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_245, 1);
lean_inc(x_304);
x_305 = lean_ctor_get(x_245, 2);
lean_inc(x_305);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 lean_ctor_release(x_245, 2);
 x_306 = x_245;
} else {
 lean_dec_ref(x_245);
 x_306 = lean_box(0);
}
x_307 = 1;
if (lean_is_scalar(x_306)) {
 x_308 = lean_alloc_ctor(1, 3, 1);
} else {
 x_308 = x_306;
}
lean_ctor_set(x_308, 0, x_303);
lean_ctor_set(x_308, 1, x_304);
lean_ctor_set(x_308, 2, x_305);
lean_ctor_set_uint8(x_308, sizeof(void*)*3, x_307);
x_309 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_309, 0, x_302);
lean_ctor_set(x_309, 1, x_33);
lean_ctor_set(x_309, 2, x_34);
lean_ctor_set_uint8(x_309, sizeof(void*)*3, x_307);
x_310 = 0;
lean_ctor_set(x_2, 2, x_309);
lean_ctor_set(x_2, 1, x_301);
lean_ctor_set(x_2, 0, x_308);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_310);
return x_2;
}
}
else
{
lean_object* x_311; 
x_311 = lean_ctor_get(x_243, 2);
lean_inc(x_311);
if (lean_obj_tag(x_311) == 0)
{
uint8_t x_312; 
lean_free_object(x_2);
x_312 = !lean_is_exclusive(x_245);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_313 = lean_ctor_get(x_245, 2);
lean_dec(x_313);
x_314 = lean_ctor_get(x_245, 1);
lean_dec(x_314);
x_315 = lean_ctor_get(x_245, 0);
lean_dec(x_315);
x_316 = 1;
lean_ctor_set(x_245, 2, x_34);
lean_ctor_set(x_245, 1, x_33);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set_uint8(x_245, sizeof(void*)*3, x_316);
return x_245;
}
else
{
uint8_t x_317; lean_object* x_318; 
lean_dec(x_245);
x_317 = 1;
x_318 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_318, 0, x_243);
lean_ctor_set(x_318, 1, x_33);
lean_ctor_set(x_318, 2, x_34);
lean_ctor_set_uint8(x_318, sizeof(void*)*3, x_317);
return x_318;
}
}
else
{
uint8_t x_319; 
x_319 = lean_ctor_get_uint8(x_311, sizeof(void*)*3);
if (x_319 == 0)
{
uint8_t x_320; 
lean_free_object(x_2);
x_320 = !lean_is_exclusive(x_243);
if (x_320 == 0)
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_321 = lean_ctor_get(x_243, 1);
x_322 = lean_ctor_get(x_243, 2);
lean_dec(x_322);
x_323 = lean_ctor_get(x_243, 0);
lean_dec(x_323);
x_324 = !lean_is_exclusive(x_311);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; uint8_t x_328; uint8_t x_329; 
x_325 = lean_ctor_get(x_311, 0);
x_326 = lean_ctor_get(x_311, 1);
x_327 = lean_ctor_get(x_311, 2);
x_328 = 1;
lean_inc(x_245);
lean_ctor_set(x_311, 2, x_325);
lean_ctor_set(x_311, 1, x_321);
lean_ctor_set(x_311, 0, x_245);
x_329 = !lean_is_exclusive(x_245);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_330 = lean_ctor_get(x_245, 2);
lean_dec(x_330);
x_331 = lean_ctor_get(x_245, 1);
lean_dec(x_331);
x_332 = lean_ctor_get(x_245, 0);
lean_dec(x_332);
lean_ctor_set_uint8(x_311, sizeof(void*)*3, x_328);
lean_ctor_set(x_245, 2, x_34);
lean_ctor_set(x_245, 1, x_33);
lean_ctor_set(x_245, 0, x_327);
lean_ctor_set_uint8(x_245, sizeof(void*)*3, x_328);
x_333 = 0;
lean_ctor_set(x_243, 2, x_245);
lean_ctor_set(x_243, 1, x_326);
lean_ctor_set(x_243, 0, x_311);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_333);
return x_243;
}
else
{
lean_object* x_334; uint8_t x_335; 
lean_dec(x_245);
lean_ctor_set_uint8(x_311, sizeof(void*)*3, x_328);
x_334 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_334, 0, x_327);
lean_ctor_set(x_334, 1, x_33);
lean_ctor_set(x_334, 2, x_34);
lean_ctor_set_uint8(x_334, sizeof(void*)*3, x_328);
x_335 = 0;
lean_ctor_set(x_243, 2, x_334);
lean_ctor_set(x_243, 1, x_326);
lean_ctor_set(x_243, 0, x_311);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_335);
return x_243;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; uint8_t x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_336 = lean_ctor_get(x_311, 0);
x_337 = lean_ctor_get(x_311, 1);
x_338 = lean_ctor_get(x_311, 2);
lean_inc(x_338);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_311);
x_339 = 1;
lean_inc(x_245);
x_340 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_340, 0, x_245);
lean_ctor_set(x_340, 1, x_321);
lean_ctor_set(x_340, 2, x_336);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 lean_ctor_release(x_245, 2);
 x_341 = x_245;
} else {
 lean_dec_ref(x_245);
 x_341 = lean_box(0);
}
lean_ctor_set_uint8(x_340, sizeof(void*)*3, x_339);
if (lean_is_scalar(x_341)) {
 x_342 = lean_alloc_ctor(1, 3, 1);
} else {
 x_342 = x_341;
}
lean_ctor_set(x_342, 0, x_338);
lean_ctor_set(x_342, 1, x_33);
lean_ctor_set(x_342, 2, x_34);
lean_ctor_set_uint8(x_342, sizeof(void*)*3, x_339);
x_343 = 0;
lean_ctor_set(x_243, 2, x_342);
lean_ctor_set(x_243, 1, x_337);
lean_ctor_set(x_243, 0, x_340);
lean_ctor_set_uint8(x_243, sizeof(void*)*3, x_343);
return x_243;
}
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; uint8_t x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; uint8_t x_353; lean_object* x_354; 
x_344 = lean_ctor_get(x_243, 1);
lean_inc(x_344);
lean_dec(x_243);
x_345 = lean_ctor_get(x_311, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_311, 1);
lean_inc(x_346);
x_347 = lean_ctor_get(x_311, 2);
lean_inc(x_347);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 lean_ctor_release(x_311, 2);
 x_348 = x_311;
} else {
 lean_dec_ref(x_311);
 x_348 = lean_box(0);
}
x_349 = 1;
lean_inc(x_245);
if (lean_is_scalar(x_348)) {
 x_350 = lean_alloc_ctor(1, 3, 1);
} else {
 x_350 = x_348;
}
lean_ctor_set(x_350, 0, x_245);
lean_ctor_set(x_350, 1, x_344);
lean_ctor_set(x_350, 2, x_345);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 lean_ctor_release(x_245, 2);
 x_351 = x_245;
} else {
 lean_dec_ref(x_245);
 x_351 = lean_box(0);
}
lean_ctor_set_uint8(x_350, sizeof(void*)*3, x_349);
if (lean_is_scalar(x_351)) {
 x_352 = lean_alloc_ctor(1, 3, 1);
} else {
 x_352 = x_351;
}
lean_ctor_set(x_352, 0, x_347);
lean_ctor_set(x_352, 1, x_33);
lean_ctor_set(x_352, 2, x_34);
lean_ctor_set_uint8(x_352, sizeof(void*)*3, x_349);
x_353 = 0;
x_354 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_354, 0, x_350);
lean_ctor_set(x_354, 1, x_346);
lean_ctor_set(x_354, 2, x_352);
lean_ctor_set_uint8(x_354, sizeof(void*)*3, x_353);
return x_354;
}
}
else
{
uint8_t x_355; 
x_355 = !lean_is_exclusive(x_243);
if (x_355 == 0)
{
lean_object* x_356; lean_object* x_357; uint8_t x_358; 
x_356 = lean_ctor_get(x_243, 2);
lean_dec(x_356);
x_357 = lean_ctor_get(x_243, 0);
lean_dec(x_357);
x_358 = !lean_is_exclusive(x_245);
if (x_358 == 0)
{
uint8_t x_359; 
lean_ctor_set_uint8(x_245, sizeof(void*)*3, x_319);
x_359 = 1;
lean_ctor_set(x_2, 0, x_243);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_359);
return x_2;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; 
x_360 = lean_ctor_get(x_245, 0);
x_361 = lean_ctor_get(x_245, 1);
x_362 = lean_ctor_get(x_245, 2);
lean_inc(x_362);
lean_inc(x_361);
lean_inc(x_360);
lean_dec(x_245);
x_363 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_363, 0, x_360);
lean_ctor_set(x_363, 1, x_361);
lean_ctor_set(x_363, 2, x_362);
lean_ctor_set_uint8(x_363, sizeof(void*)*3, x_319);
lean_ctor_set(x_243, 0, x_363);
x_364 = 1;
lean_ctor_set(x_2, 0, x_243);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_364);
return x_2;
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_365 = lean_ctor_get(x_243, 1);
lean_inc(x_365);
lean_dec(x_243);
x_366 = lean_ctor_get(x_245, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_245, 1);
lean_inc(x_367);
x_368 = lean_ctor_get(x_245, 2);
lean_inc(x_368);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 lean_ctor_release(x_245, 2);
 x_369 = x_245;
} else {
 lean_dec_ref(x_245);
 x_369 = lean_box(0);
}
if (lean_is_scalar(x_369)) {
 x_370 = lean_alloc_ctor(1, 3, 1);
} else {
 x_370 = x_369;
}
lean_ctor_set(x_370, 0, x_366);
lean_ctor_set(x_370, 1, x_367);
lean_ctor_set(x_370, 2, x_368);
lean_ctor_set_uint8(x_370, sizeof(void*)*3, x_319);
x_371 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_371, 0, x_370);
lean_ctor_set(x_371, 1, x_365);
lean_ctor_set(x_371, 2, x_311);
lean_ctor_set_uint8(x_371, sizeof(void*)*3, x_244);
x_372 = 1;
lean_ctor_set(x_2, 0, x_371);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_372);
return x_2;
}
}
}
}
}
}
else
{
uint8_t x_373; 
x_373 = 1;
lean_ctor_set(x_2, 0, x_243);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_373);
return x_2;
}
}
}
else
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; uint8_t x_377; 
x_374 = lean_ctor_get(x_2, 0);
x_375 = lean_ctor_get(x_2, 1);
x_376 = lean_ctor_get(x_2, 2);
lean_inc(x_376);
lean_inc(x_375);
lean_inc(x_374);
lean_dec(x_2);
x_377 = lean_nat_dec_lt(x_1, x_375);
if (x_377 == 0)
{
uint8_t x_378; 
x_378 = lean_nat_dec_eq(x_1, x_375);
if (x_378 == 0)
{
lean_object* x_379; uint8_t x_380; 
x_379 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_376);
x_380 = lean_ctor_get_uint8(x_379, sizeof(void*)*3);
if (x_380 == 0)
{
lean_object* x_381; 
x_381 = lean_ctor_get(x_379, 0);
lean_inc(x_381);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; 
x_382 = lean_ctor_get(x_379, 2);
lean_inc(x_382);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; uint8_t x_386; lean_object* x_387; 
x_383 = lean_ctor_get(x_379, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_384 = x_379;
} else {
 lean_dec_ref(x_379);
 x_384 = lean_box(0);
}
if (lean_is_scalar(x_384)) {
 x_385 = lean_alloc_ctor(1, 3, 1);
} else {
 x_385 = x_384;
}
lean_ctor_set(x_385, 0, x_382);
lean_ctor_set(x_385, 1, x_383);
lean_ctor_set(x_385, 2, x_382);
lean_ctor_set_uint8(x_385, sizeof(void*)*3, x_380);
x_386 = 1;
x_387 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_387, 0, x_374);
lean_ctor_set(x_387, 1, x_375);
lean_ctor_set(x_387, 2, x_385);
lean_ctor_set_uint8(x_387, sizeof(void*)*3, x_386);
return x_387;
}
else
{
uint8_t x_388; 
x_388 = lean_ctor_get_uint8(x_382, sizeof(void*)*3);
if (x_388 == 0)
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; uint8_t x_395; lean_object* x_396; lean_object* x_397; uint8_t x_398; lean_object* x_399; 
x_389 = lean_ctor_get(x_379, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_390 = x_379;
} else {
 lean_dec_ref(x_379);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_382, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_382, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_382, 2);
lean_inc(x_393);
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 lean_ctor_release(x_382, 1);
 lean_ctor_release(x_382, 2);
 x_394 = x_382;
} else {
 lean_dec_ref(x_382);
 x_394 = lean_box(0);
}
x_395 = 1;
if (lean_is_scalar(x_394)) {
 x_396 = lean_alloc_ctor(1, 3, 1);
} else {
 x_396 = x_394;
}
lean_ctor_set(x_396, 0, x_374);
lean_ctor_set(x_396, 1, x_375);
lean_ctor_set(x_396, 2, x_381);
lean_ctor_set_uint8(x_396, sizeof(void*)*3, x_395);
if (lean_is_scalar(x_390)) {
 x_397 = lean_alloc_ctor(1, 3, 1);
} else {
 x_397 = x_390;
}
lean_ctor_set(x_397, 0, x_391);
lean_ctor_set(x_397, 1, x_392);
lean_ctor_set(x_397, 2, x_393);
lean_ctor_set_uint8(x_397, sizeof(void*)*3, x_395);
x_398 = 0;
x_399 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_399, 0, x_396);
lean_ctor_set(x_399, 1, x_389);
lean_ctor_set(x_399, 2, x_397);
lean_ctor_set_uint8(x_399, sizeof(void*)*3, x_398);
return x_399;
}
else
{
lean_object* x_400; uint8_t x_401; lean_object* x_402; 
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 lean_ctor_release(x_382, 1);
 lean_ctor_release(x_382, 2);
 x_400 = x_382;
} else {
 lean_dec_ref(x_382);
 x_400 = lean_box(0);
}
x_401 = 1;
if (lean_is_scalar(x_400)) {
 x_402 = lean_alloc_ctor(1, 3, 1);
} else {
 x_402 = x_400;
}
lean_ctor_set(x_402, 0, x_374);
lean_ctor_set(x_402, 1, x_375);
lean_ctor_set(x_402, 2, x_379);
lean_ctor_set_uint8(x_402, sizeof(void*)*3, x_401);
return x_402;
}
}
}
else
{
uint8_t x_403; 
x_403 = lean_ctor_get_uint8(x_381, sizeof(void*)*3);
if (x_403 == 0)
{
lean_object* x_404; 
x_404 = lean_ctor_get(x_379, 2);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; uint8_t x_411; lean_object* x_412; lean_object* x_413; uint8_t x_414; lean_object* x_415; 
x_405 = lean_ctor_get(x_379, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_406 = x_379;
} else {
 lean_dec_ref(x_379);
 x_406 = lean_box(0);
}
x_407 = lean_ctor_get(x_381, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_381, 1);
lean_inc(x_408);
x_409 = lean_ctor_get(x_381, 2);
lean_inc(x_409);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_410 = x_381;
} else {
 lean_dec_ref(x_381);
 x_410 = lean_box(0);
}
x_411 = 1;
if (lean_is_scalar(x_410)) {
 x_412 = lean_alloc_ctor(1, 3, 1);
} else {
 x_412 = x_410;
}
lean_ctor_set(x_412, 0, x_374);
lean_ctor_set(x_412, 1, x_375);
lean_ctor_set(x_412, 2, x_407);
lean_ctor_set_uint8(x_412, sizeof(void*)*3, x_411);
if (lean_is_scalar(x_406)) {
 x_413 = lean_alloc_ctor(1, 3, 1);
} else {
 x_413 = x_406;
}
lean_ctor_set(x_413, 0, x_409);
lean_ctor_set(x_413, 1, x_405);
lean_ctor_set(x_413, 2, x_404);
lean_ctor_set_uint8(x_413, sizeof(void*)*3, x_411);
x_414 = 0;
x_415 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_415, 0, x_412);
lean_ctor_set(x_415, 1, x_408);
lean_ctor_set(x_415, 2, x_413);
lean_ctor_set_uint8(x_415, sizeof(void*)*3, x_414);
return x_415;
}
else
{
uint8_t x_416; 
x_416 = lean_ctor_get_uint8(x_404, sizeof(void*)*3);
if (x_416 == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; uint8_t x_428; lean_object* x_429; lean_object* x_430; uint8_t x_431; lean_object* x_432; 
x_417 = lean_ctor_get(x_379, 1);
lean_inc(x_417);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_418 = x_379;
} else {
 lean_dec_ref(x_379);
 x_418 = lean_box(0);
}
x_419 = lean_ctor_get(x_381, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_381, 1);
lean_inc(x_420);
x_421 = lean_ctor_get(x_381, 2);
lean_inc(x_421);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_422 = x_381;
} else {
 lean_dec_ref(x_381);
 x_422 = lean_box(0);
}
x_423 = lean_ctor_get(x_404, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_404, 1);
lean_inc(x_424);
x_425 = lean_ctor_get(x_404, 2);
lean_inc(x_425);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 x_426 = x_404;
} else {
 lean_dec_ref(x_404);
 x_426 = lean_box(0);
}
if (lean_is_scalar(x_426)) {
 x_427 = lean_alloc_ctor(1, 3, 1);
} else {
 x_427 = x_426;
}
lean_ctor_set(x_427, 0, x_419);
lean_ctor_set(x_427, 1, x_420);
lean_ctor_set(x_427, 2, x_421);
lean_ctor_set_uint8(x_427, sizeof(void*)*3, x_416);
x_428 = 1;
if (lean_is_scalar(x_422)) {
 x_429 = lean_alloc_ctor(1, 3, 1);
} else {
 x_429 = x_422;
}
lean_ctor_set(x_429, 0, x_374);
lean_ctor_set(x_429, 1, x_375);
lean_ctor_set(x_429, 2, x_427);
lean_ctor_set_uint8(x_429, sizeof(void*)*3, x_428);
if (lean_is_scalar(x_418)) {
 x_430 = lean_alloc_ctor(1, 3, 1);
} else {
 x_430 = x_418;
}
lean_ctor_set(x_430, 0, x_423);
lean_ctor_set(x_430, 1, x_424);
lean_ctor_set(x_430, 2, x_425);
lean_ctor_set_uint8(x_430, sizeof(void*)*3, x_428);
x_431 = 0;
x_432 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_432, 0, x_429);
lean_ctor_set(x_432, 1, x_417);
lean_ctor_set(x_432, 2, x_430);
lean_ctor_set_uint8(x_432, sizeof(void*)*3, x_431);
return x_432;
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; uint8_t x_439; lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_443; 
x_433 = lean_ctor_get(x_379, 1);
lean_inc(x_433);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_434 = x_379;
} else {
 lean_dec_ref(x_379);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_381, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_381, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_381, 2);
lean_inc(x_437);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_438 = x_381;
} else {
 lean_dec_ref(x_381);
 x_438 = lean_box(0);
}
x_439 = 1;
if (lean_is_scalar(x_438)) {
 x_440 = lean_alloc_ctor(1, 3, 1);
} else {
 x_440 = x_438;
}
lean_ctor_set(x_440, 0, x_374);
lean_ctor_set(x_440, 1, x_375);
lean_ctor_set(x_440, 2, x_435);
lean_ctor_set_uint8(x_440, sizeof(void*)*3, x_439);
if (lean_is_scalar(x_434)) {
 x_441 = lean_alloc_ctor(1, 3, 1);
} else {
 x_441 = x_434;
}
lean_ctor_set(x_441, 0, x_437);
lean_ctor_set(x_441, 1, x_433);
lean_ctor_set(x_441, 2, x_404);
lean_ctor_set_uint8(x_441, sizeof(void*)*3, x_439);
x_442 = 0;
x_443 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_443, 0, x_440);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_441);
lean_ctor_set_uint8(x_443, sizeof(void*)*3, x_442);
return x_443;
}
}
}
else
{
lean_object* x_444; 
x_444 = lean_ctor_get(x_379, 2);
lean_inc(x_444);
if (lean_obj_tag(x_444) == 0)
{
lean_object* x_445; uint8_t x_446; lean_object* x_447; 
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_445 = x_381;
} else {
 lean_dec_ref(x_381);
 x_445 = lean_box(0);
}
x_446 = 1;
if (lean_is_scalar(x_445)) {
 x_447 = lean_alloc_ctor(1, 3, 1);
} else {
 x_447 = x_445;
}
lean_ctor_set(x_447, 0, x_374);
lean_ctor_set(x_447, 1, x_375);
lean_ctor_set(x_447, 2, x_379);
lean_ctor_set_uint8(x_447, sizeof(void*)*3, x_446);
return x_447;
}
else
{
uint8_t x_448; 
x_448 = lean_ctor_get_uint8(x_444, sizeof(void*)*3);
if (x_448 == 0)
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; uint8_t x_459; lean_object* x_460; 
x_449 = lean_ctor_get(x_379, 1);
lean_inc(x_449);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_450 = x_379;
} else {
 lean_dec_ref(x_379);
 x_450 = lean_box(0);
}
x_451 = lean_ctor_get(x_444, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_444, 1);
lean_inc(x_452);
x_453 = lean_ctor_get(x_444, 2);
lean_inc(x_453);
if (lean_is_exclusive(x_444)) {
 lean_ctor_release(x_444, 0);
 lean_ctor_release(x_444, 1);
 lean_ctor_release(x_444, 2);
 x_454 = x_444;
} else {
 lean_dec_ref(x_444);
 x_454 = lean_box(0);
}
x_455 = 1;
lean_inc(x_381);
if (lean_is_scalar(x_454)) {
 x_456 = lean_alloc_ctor(1, 3, 1);
} else {
 x_456 = x_454;
}
lean_ctor_set(x_456, 0, x_374);
lean_ctor_set(x_456, 1, x_375);
lean_ctor_set(x_456, 2, x_381);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_457 = x_381;
} else {
 lean_dec_ref(x_381);
 x_457 = lean_box(0);
}
lean_ctor_set_uint8(x_456, sizeof(void*)*3, x_455);
if (lean_is_scalar(x_457)) {
 x_458 = lean_alloc_ctor(1, 3, 1);
} else {
 x_458 = x_457;
}
lean_ctor_set(x_458, 0, x_451);
lean_ctor_set(x_458, 1, x_452);
lean_ctor_set(x_458, 2, x_453);
lean_ctor_set_uint8(x_458, sizeof(void*)*3, x_455);
x_459 = 0;
if (lean_is_scalar(x_450)) {
 x_460 = lean_alloc_ctor(1, 3, 1);
} else {
 x_460 = x_450;
}
lean_ctor_set(x_460, 0, x_456);
lean_ctor_set(x_460, 1, x_449);
lean_ctor_set(x_460, 2, x_458);
lean_ctor_set_uint8(x_460, sizeof(void*)*3, x_459);
return x_460;
}
else
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; uint8_t x_469; lean_object* x_470; 
x_461 = lean_ctor_get(x_379, 1);
lean_inc(x_461);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 lean_ctor_release(x_379, 2);
 x_462 = x_379;
} else {
 lean_dec_ref(x_379);
 x_462 = lean_box(0);
}
x_463 = lean_ctor_get(x_381, 0);
lean_inc(x_463);
x_464 = lean_ctor_get(x_381, 1);
lean_inc(x_464);
x_465 = lean_ctor_get(x_381, 2);
lean_inc(x_465);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 lean_ctor_release(x_381, 2);
 x_466 = x_381;
} else {
 lean_dec_ref(x_381);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 3, 1);
} else {
 x_467 = x_466;
}
lean_ctor_set(x_467, 0, x_463);
lean_ctor_set(x_467, 1, x_464);
lean_ctor_set(x_467, 2, x_465);
lean_ctor_set_uint8(x_467, sizeof(void*)*3, x_448);
if (lean_is_scalar(x_462)) {
 x_468 = lean_alloc_ctor(1, 3, 1);
} else {
 x_468 = x_462;
}
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_461);
lean_ctor_set(x_468, 2, x_444);
lean_ctor_set_uint8(x_468, sizeof(void*)*3, x_380);
x_469 = 1;
x_470 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_470, 0, x_374);
lean_ctor_set(x_470, 1, x_375);
lean_ctor_set(x_470, 2, x_468);
lean_ctor_set_uint8(x_470, sizeof(void*)*3, x_469);
return x_470;
}
}
}
}
}
else
{
uint8_t x_471; lean_object* x_472; 
x_471 = 1;
x_472 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_472, 0, x_374);
lean_ctor_set(x_472, 1, x_375);
lean_ctor_set(x_472, 2, x_379);
lean_ctor_set_uint8(x_472, sizeof(void*)*3, x_471);
return x_472;
}
}
else
{
uint8_t x_473; lean_object* x_474; 
lean_dec(x_375);
x_473 = 1;
x_474 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_474, 0, x_374);
lean_ctor_set(x_474, 1, x_1);
lean_ctor_set(x_474, 2, x_376);
lean_ctor_set_uint8(x_474, sizeof(void*)*3, x_473);
return x_474;
}
}
else
{
lean_object* x_475; uint8_t x_476; 
x_475 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_1, x_374);
x_476 = lean_ctor_get_uint8(x_475, sizeof(void*)*3);
if (x_476 == 0)
{
lean_object* x_477; 
x_477 = lean_ctor_get(x_475, 0);
lean_inc(x_477);
if (lean_obj_tag(x_477) == 0)
{
lean_object* x_478; 
x_478 = lean_ctor_get(x_475, 2);
lean_inc(x_478);
if (lean_obj_tag(x_478) == 0)
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; uint8_t x_482; lean_object* x_483; 
x_479 = lean_ctor_get(x_475, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_475)) {
 lean_ctor_release(x_475, 0);
 lean_ctor_release(x_475, 1);
 lean_ctor_release(x_475, 2);
 x_480 = x_475;
} else {
 lean_dec_ref(x_475);
 x_480 = lean_box(0);
}
if (lean_is_scalar(x_480)) {
 x_481 = lean_alloc_ctor(1, 3, 1);
} else {
 x_481 = x_480;
}
lean_ctor_set(x_481, 0, x_478);
lean_ctor_set(x_481, 1, x_479);
lean_ctor_set(x_481, 2, x_478);
lean_ctor_set_uint8(x_481, sizeof(void*)*3, x_476);
x_482 = 1;
x_483 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_375);
lean_ctor_set(x_483, 2, x_376);
lean_ctor_set_uint8(x_483, sizeof(void*)*3, x_482);
return x_483;
}
else
{
uint8_t x_484; 
x_484 = lean_ctor_get_uint8(x_478, sizeof(void*)*3);
if (x_484 == 0)
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; uint8_t x_491; lean_object* x_492; lean_object* x_493; uint8_t x_494; lean_object* x_495; 
x_485 = lean_ctor_get(x_475, 1);
lean_inc(x_485);
if (lean_is_exclusive(x_475)) {
 lean_ctor_release(x_475, 0);
 lean_ctor_release(x_475, 1);
 lean_ctor_release(x_475, 2);
 x_486 = x_475;
} else {
 lean_dec_ref(x_475);
 x_486 = lean_box(0);
}
x_487 = lean_ctor_get(x_478, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_478, 1);
lean_inc(x_488);
x_489 = lean_ctor_get(x_478, 2);
lean_inc(x_489);
if (lean_is_exclusive(x_478)) {
 lean_ctor_release(x_478, 0);
 lean_ctor_release(x_478, 1);
 lean_ctor_release(x_478, 2);
 x_490 = x_478;
} else {
 lean_dec_ref(x_478);
 x_490 = lean_box(0);
}
x_491 = 1;
if (lean_is_scalar(x_490)) {
 x_492 = lean_alloc_ctor(1, 3, 1);
} else {
 x_492 = x_490;
}
lean_ctor_set(x_492, 0, x_477);
lean_ctor_set(x_492, 1, x_485);
lean_ctor_set(x_492, 2, x_487);
lean_ctor_set_uint8(x_492, sizeof(void*)*3, x_491);
if (lean_is_scalar(x_486)) {
 x_493 = lean_alloc_ctor(1, 3, 1);
} else {
 x_493 = x_486;
}
lean_ctor_set(x_493, 0, x_489);
lean_ctor_set(x_493, 1, x_375);
lean_ctor_set(x_493, 2, x_376);
lean_ctor_set_uint8(x_493, sizeof(void*)*3, x_491);
x_494 = 0;
x_495 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_495, 0, x_492);
lean_ctor_set(x_495, 1, x_488);
lean_ctor_set(x_495, 2, x_493);
lean_ctor_set_uint8(x_495, sizeof(void*)*3, x_494);
return x_495;
}
else
{
lean_object* x_496; uint8_t x_497; lean_object* x_498; 
if (lean_is_exclusive(x_478)) {
 lean_ctor_release(x_478, 0);
 lean_ctor_release(x_478, 1);
 lean_ctor_release(x_478, 2);
 x_496 = x_478;
} else {
 lean_dec_ref(x_478);
 x_496 = lean_box(0);
}
x_497 = 1;
if (lean_is_scalar(x_496)) {
 x_498 = lean_alloc_ctor(1, 3, 1);
} else {
 x_498 = x_496;
}
lean_ctor_set(x_498, 0, x_475);
lean_ctor_set(x_498, 1, x_375);
lean_ctor_set(x_498, 2, x_376);
lean_ctor_set_uint8(x_498, sizeof(void*)*3, x_497);
return x_498;
}
}
}
else
{
uint8_t x_499; 
x_499 = lean_ctor_get_uint8(x_477, sizeof(void*)*3);
if (x_499 == 0)
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; lean_object* x_508; lean_object* x_509; uint8_t x_510; lean_object* x_511; 
x_500 = lean_ctor_get(x_475, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_475, 2);
lean_inc(x_501);
if (lean_is_exclusive(x_475)) {
 lean_ctor_release(x_475, 0);
 lean_ctor_release(x_475, 1);
 lean_ctor_release(x_475, 2);
 x_502 = x_475;
} else {
 lean_dec_ref(x_475);
 x_502 = lean_box(0);
}
x_503 = lean_ctor_get(x_477, 0);
lean_inc(x_503);
x_504 = lean_ctor_get(x_477, 1);
lean_inc(x_504);
x_505 = lean_ctor_get(x_477, 2);
lean_inc(x_505);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 lean_ctor_release(x_477, 2);
 x_506 = x_477;
} else {
 lean_dec_ref(x_477);
 x_506 = lean_box(0);
}
x_507 = 1;
if (lean_is_scalar(x_506)) {
 x_508 = lean_alloc_ctor(1, 3, 1);
} else {
 x_508 = x_506;
}
lean_ctor_set(x_508, 0, x_503);
lean_ctor_set(x_508, 1, x_504);
lean_ctor_set(x_508, 2, x_505);
lean_ctor_set_uint8(x_508, sizeof(void*)*3, x_507);
if (lean_is_scalar(x_502)) {
 x_509 = lean_alloc_ctor(1, 3, 1);
} else {
 x_509 = x_502;
}
lean_ctor_set(x_509, 0, x_501);
lean_ctor_set(x_509, 1, x_375);
lean_ctor_set(x_509, 2, x_376);
lean_ctor_set_uint8(x_509, sizeof(void*)*3, x_507);
x_510 = 0;
x_511 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_511, 0, x_508);
lean_ctor_set(x_511, 1, x_500);
lean_ctor_set(x_511, 2, x_509);
lean_ctor_set_uint8(x_511, sizeof(void*)*3, x_510);
return x_511;
}
else
{
lean_object* x_512; 
x_512 = lean_ctor_get(x_475, 2);
lean_inc(x_512);
if (lean_obj_tag(x_512) == 0)
{
lean_object* x_513; uint8_t x_514; lean_object* x_515; 
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 lean_ctor_release(x_477, 2);
 x_513 = x_477;
} else {
 lean_dec_ref(x_477);
 x_513 = lean_box(0);
}
x_514 = 1;
if (lean_is_scalar(x_513)) {
 x_515 = lean_alloc_ctor(1, 3, 1);
} else {
 x_515 = x_513;
}
lean_ctor_set(x_515, 0, x_475);
lean_ctor_set(x_515, 1, x_375);
lean_ctor_set(x_515, 2, x_376);
lean_ctor_set_uint8(x_515, sizeof(void*)*3, x_514);
return x_515;
}
else
{
uint8_t x_516; 
x_516 = lean_ctor_get_uint8(x_512, sizeof(void*)*3);
if (x_516 == 0)
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; uint8_t x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; uint8_t x_527; lean_object* x_528; 
x_517 = lean_ctor_get(x_475, 1);
lean_inc(x_517);
if (lean_is_exclusive(x_475)) {
 lean_ctor_release(x_475, 0);
 lean_ctor_release(x_475, 1);
 lean_ctor_release(x_475, 2);
 x_518 = x_475;
} else {
 lean_dec_ref(x_475);
 x_518 = lean_box(0);
}
x_519 = lean_ctor_get(x_512, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_512, 1);
lean_inc(x_520);
x_521 = lean_ctor_get(x_512, 2);
lean_inc(x_521);
if (lean_is_exclusive(x_512)) {
 lean_ctor_release(x_512, 0);
 lean_ctor_release(x_512, 1);
 lean_ctor_release(x_512, 2);
 x_522 = x_512;
} else {
 lean_dec_ref(x_512);
 x_522 = lean_box(0);
}
x_523 = 1;
lean_inc(x_477);
if (lean_is_scalar(x_522)) {
 x_524 = lean_alloc_ctor(1, 3, 1);
} else {
 x_524 = x_522;
}
lean_ctor_set(x_524, 0, x_477);
lean_ctor_set(x_524, 1, x_517);
lean_ctor_set(x_524, 2, x_519);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 lean_ctor_release(x_477, 2);
 x_525 = x_477;
} else {
 lean_dec_ref(x_477);
 x_525 = lean_box(0);
}
lean_ctor_set_uint8(x_524, sizeof(void*)*3, x_523);
if (lean_is_scalar(x_525)) {
 x_526 = lean_alloc_ctor(1, 3, 1);
} else {
 x_526 = x_525;
}
lean_ctor_set(x_526, 0, x_521);
lean_ctor_set(x_526, 1, x_375);
lean_ctor_set(x_526, 2, x_376);
lean_ctor_set_uint8(x_526, sizeof(void*)*3, x_523);
x_527 = 0;
if (lean_is_scalar(x_518)) {
 x_528 = lean_alloc_ctor(1, 3, 1);
} else {
 x_528 = x_518;
}
lean_ctor_set(x_528, 0, x_524);
lean_ctor_set(x_528, 1, x_520);
lean_ctor_set(x_528, 2, x_526);
lean_ctor_set_uint8(x_528, sizeof(void*)*3, x_527);
return x_528;
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; uint8_t x_537; lean_object* x_538; 
x_529 = lean_ctor_get(x_475, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_475)) {
 lean_ctor_release(x_475, 0);
 lean_ctor_release(x_475, 1);
 lean_ctor_release(x_475, 2);
 x_530 = x_475;
} else {
 lean_dec_ref(x_475);
 x_530 = lean_box(0);
}
x_531 = lean_ctor_get(x_477, 0);
lean_inc(x_531);
x_532 = lean_ctor_get(x_477, 1);
lean_inc(x_532);
x_533 = lean_ctor_get(x_477, 2);
lean_inc(x_533);
if (lean_is_exclusive(x_477)) {
 lean_ctor_release(x_477, 0);
 lean_ctor_release(x_477, 1);
 lean_ctor_release(x_477, 2);
 x_534 = x_477;
} else {
 lean_dec_ref(x_477);
 x_534 = lean_box(0);
}
if (lean_is_scalar(x_534)) {
 x_535 = lean_alloc_ctor(1, 3, 1);
} else {
 x_535 = x_534;
}
lean_ctor_set(x_535, 0, x_531);
lean_ctor_set(x_535, 1, x_532);
lean_ctor_set(x_535, 2, x_533);
lean_ctor_set_uint8(x_535, sizeof(void*)*3, x_516);
if (lean_is_scalar(x_530)) {
 x_536 = lean_alloc_ctor(1, 3, 1);
} else {
 x_536 = x_530;
}
lean_ctor_set(x_536, 0, x_535);
lean_ctor_set(x_536, 1, x_529);
lean_ctor_set(x_536, 2, x_512);
lean_ctor_set_uint8(x_536, sizeof(void*)*3, x_476);
x_537 = 1;
x_538 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_538, 0, x_536);
lean_ctor_set(x_538, 1, x_375);
lean_ctor_set(x_538, 2, x_376);
lean_ctor_set_uint8(x_538, sizeof(void*)*3, x_537);
return x_538;
}
}
}
}
}
else
{
uint8_t x_539; lean_object* x_540; 
x_539 = 1;
x_540 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_540, 0, x_475);
lean_ctor_set(x_540, 1, x_375);
lean_ctor_set(x_540, 2, x_376);
lean_ctor_set_uint8(x_540, sizeof(void*)*3, x_539);
return x_540;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_2, x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_2, x_1);
x_6 = l_Batteries_RBNode_setBlack___rarg(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = l_Batteries_RBNode_ins___at_Linarith_PComp_add___spec__2(x_2, x_1);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_add___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = l_Batteries_RBNode_insert___rarg(x_1, x_2, x_4);
x_2 = x_6;
x_3 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_add___spec__3___at_Linarith_PComp_add___spec__4(lean_object* x_1, lean_object* x_2) {
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
x_5 = l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_add(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_2, 3);
x_10 = lean_ctor_get(x_2, 5);
x_11 = lean_ctor_get(x_2, 4);
lean_dec(x_11);
x_12 = l_Linarith_Comp_add(x_4, x_6);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = l_Linarith_PComp_maybeMinimal___closed__1;
x_17 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_16, x_15, x_8);
x_18 = lean_ctor_get(x_1, 5);
lean_inc(x_18);
x_19 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_16, x_18, x_10);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
lean_dec(x_1);
x_21 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_16, x_20, x_9);
x_22 = l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(x_21, x_3);
lean_inc(x_12);
x_23 = l_Linarith_Comp_vars(x_12);
x_24 = lean_box(0);
x_25 = l_List_foldl___at_Linarith_PComp_add___spec__3___at_Linarith_PComp_add___spec__4(x_24, x_23);
lean_inc(x_19);
x_26 = l_Batteries_RBSet_sdiff___rarg(x_16, x_19, x_25);
lean_inc(x_22);
x_27 = l_Batteries_RBSet_sdiff___rarg(x_16, x_26, x_22);
lean_ctor_set(x_2, 5, x_19);
lean_ctor_set(x_2, 4, x_27);
lean_ctor_set(x_2, 3, x_22);
lean_ctor_set(x_2, 2, x_17);
lean_ctor_set(x_2, 1, x_14);
lean_ctor_set(x_2, 0, x_12);
return x_2;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_28 = lean_ctor_get(x_2, 0);
x_29 = lean_ctor_get(x_2, 1);
x_30 = lean_ctor_get(x_2, 2);
x_31 = lean_ctor_get(x_2, 3);
x_32 = lean_ctor_get(x_2, 5);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_2);
x_33 = l_Linarith_Comp_add(x_4, x_28);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_29);
x_36 = lean_ctor_get(x_1, 2);
lean_inc(x_36);
x_37 = l_Linarith_PComp_maybeMinimal___closed__1;
x_38 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_37, x_36, x_30);
x_39 = lean_ctor_get(x_1, 5);
lean_inc(x_39);
x_40 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_37, x_39, x_32);
x_41 = lean_ctor_get(x_1, 3);
lean_inc(x_41);
lean_dec(x_1);
x_42 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_37, x_41, x_31);
x_43 = l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(x_42, x_3);
lean_inc(x_33);
x_44 = l_Linarith_Comp_vars(x_33);
x_45 = lean_box(0);
x_46 = l_List_foldl___at_Linarith_PComp_add___spec__3___at_Linarith_PComp_add___spec__4(x_45, x_44);
lean_inc(x_40);
x_47 = l_Batteries_RBSet_sdiff___rarg(x_37, x_40, x_46);
lean_inc(x_43);
x_48 = l_Batteries_RBSet_sdiff___rarg(x_37, x_47, x_43);
x_49 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_49, 0, x_33);
lean_ctor_set(x_49, 1, x_35);
lean_ctor_set(x_49, 2, x_38);
lean_ctor_set(x_49, 3, x_43);
lean_ctor_set(x_49, 4, x_48);
lean_ctor_set(x_49, 5, x_40);
return x_49;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_assump___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
lean_inc(x_1);
x_6 = l_Batteries_RBNode_insert___rarg(x_1, x_2, x_4);
x_2 = x_6;
x_3 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_PComp_assump___spec__1___at_Linarith_PComp_assump___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_5 = l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_assump(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_box(0);
x_5 = l_Batteries_RBNode_insert___at_Linarith_PComp_add___spec__1(x_4, x_2);
lean_inc(x_1);
x_6 = l_Linarith_Comp_vars(x_1);
x_7 = l_List_foldl___at_Linarith_PComp_assump___spec__1___at_Linarith_PComp_assump___spec__2(x_4, x_6);
x_8 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_4);
lean_ctor_set(x_8, 5, x_7);
return x_8;
}
}
static lean_object* _init_l_Linarith_instToFormatPComp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Linarith_instToFormatPComp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_instToFormatPComp___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_instToFormatPComp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_List_format___at_Linarith_Comp_ToFormat___spec__1(x_3);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_6 = l_Mathlib_Ineq_toString(x_5);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Linarith_instToFormatPComp___closed__2;
x_10 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_instToStringPComp___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1;
x_6 = lean_string_append(x_1, x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Init_Data_Repr_0__Nat_reprFast(x_7);
x_10 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_string_append(x_11, x_5);
x_13 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_14 = lean_int_dec_lt(x_8, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_nat_abs(x_8);
lean_dec(x_8);
x_16 = l___private_Init_Data_Repr_0__Nat_reprFast(x_15);
x_17 = lean_string_append(x_12, x_16);
lean_dec(x_16);
x_18 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_string_append(x_6, x_19);
lean_dec(x_19);
x_1 = x_20;
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_nat_abs(x_8);
lean_dec(x_8);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_22, x_23);
lean_dec(x_22);
x_25 = lean_nat_add(x_24, x_23);
lean_dec(x_24);
x_26 = l___private_Init_Data_Repr_0__Nat_reprFast(x_25);
x_27 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_string_append(x_12, x_28);
lean_dec(x_28);
x_30 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_31 = lean_string_append(x_29, x_30);
x_32 = lean_string_append(x_6, x_31);
lean_dec(x_31);
x_1 = x_32;
x_2 = x_4;
goto _start;
}
}
}
}
static lean_object* _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[]", 2, 2);
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_toString___at_Linarith_instToStringPComp___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l___private_Init_Data_Repr_0__Nat_reprFast(x_5);
x_8 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1;
x_11 = lean_string_append(x_9, x_10);
x_12 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_13 = lean_int_dec_lt(x_6, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_nat_abs(x_6);
lean_dec(x_6);
x_15 = l___private_Init_Data_Repr_0__Nat_reprFast(x_14);
x_16 = lean_string_append(x_11, x_15);
lean_dec(x_15);
x_17 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_18 = lean_string_append(x_16, x_17);
x_19 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3;
x_22 = lean_string_append(x_20, x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_23 = lean_nat_abs(x_6);
lean_dec(x_6);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_23, x_24);
lean_dec(x_23);
x_26 = lean_nat_add(x_25, x_24);
lean_dec(x_25);
x_27 = l___private_Init_Data_Repr_0__Nat_reprFast(x_26);
x_28 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_string_append(x_11, x_29);
lean_dec(x_29);
x_31 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_32 = lean_string_append(x_30, x_31);
x_33 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3;
x_36 = lean_string_append(x_34, x_35);
return x_36;
}
}
else
{
lean_object* x_37; uint32_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_dec(x_1);
x_38 = 93;
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = l___private_Init_Data_Repr_0__Nat_reprFast(x_39);
x_42 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2;
x_43 = lean_string_append(x_42, x_41);
lean_dec(x_41);
x_44 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1;
x_45 = lean_string_append(x_43, x_44);
x_46 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_47 = lean_int_dec_lt(x_40, x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_nat_abs(x_40);
lean_dec(x_40);
x_49 = l___private_Init_Data_Repr_0__Nat_reprFast(x_48);
x_50 = lean_string_append(x_45, x_49);
lean_dec(x_49);
x_51 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_52 = lean_string_append(x_50, x_51);
x_53 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2;
x_54 = lean_string_append(x_53, x_52);
lean_dec(x_52);
x_55 = l_List_foldl___at_Linarith_instToStringPComp___spec__2(x_54, x_3);
x_56 = lean_string_push(x_55, x_38);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_57 = lean_nat_abs(x_40);
lean_dec(x_40);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_sub(x_57, x_58);
lean_dec(x_57);
x_60 = lean_nat_add(x_59, x_58);
lean_dec(x_59);
x_61 = l___private_Init_Data_Repr_0__Nat_reprFast(x_60);
x_62 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5;
x_63 = lean_string_append(x_62, x_61);
lean_dec(x_61);
x_64 = lean_string_append(x_45, x_63);
lean_dec(x_63);
x_65 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4;
x_66 = lean_string_append(x_64, x_65);
x_67 = l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = l_List_foldl___at_Linarith_instToStringPComp___spec__2(x_68, x_3);
x_70 = lean_string_push(x_69, x_38);
return x_70;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_instToStringPComp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_List_toString___at_Linarith_instToStringPComp___spec__1(x_3);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_6 = l_Mathlib_Ineq_toString(x_5);
x_7 = lean_string_append(x_4, x_6);
lean_dec(x_6);
x_8 = l_Linarith_instToFormatPComp___closed__1;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Linarith_elimVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = l_Linarith_Comp_coeffOf(x_1, x_3);
x_5 = l_Linarith_Comp_coeffOf(x_2, x_3);
x_6 = lean_int_mul(x_4, x_5);
x_7 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_8 = lean_int_dec_lt(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_nat_abs(x_4);
lean_dec(x_4);
x_11 = lean_nat_abs(x_5);
lean_dec(x_5);
x_12 = l_Nat_lcm(x_10, x_11);
x_13 = lean_nat_div(x_12, x_10);
lean_dec(x_10);
x_14 = lean_nat_div(x_12, x_11);
lean_dec(x_11);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Linarith_elimVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Linarith_elimVar(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Linarith_pelimVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = l_Linarith_elimVar(x_4, x_5, x_3);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 0)
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
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Linarith_PComp_scale(x_1, x_10);
x_13 = l_Linarith_PComp_scale(x_2, x_11);
x_14 = l_Linarith_PComp_add(x_12, x_13, x_3);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Linarith_PComp_scale(x_1, x_16);
x_19 = l_Linarith_PComp_scale(x_2, x_17);
x_20 = l_Linarith_PComp_add(x_18, x_19, x_3);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT uint8_t l_Linarith_PComp_isContr(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Linarith_Comp_isContr(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_PComp_isContr___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Linarith_PComp_isContr(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = 0;
x_5 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = l_Linarith_PComp_cmp(x_1, x_9);
switch (x_11) {
case 0:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_8);
x_13 = 0;
lean_ctor_set(x_2, 0, x_12);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_13);
return x_2;
}
case 1:
{
uint8_t x_14; 
lean_dec(x_9);
x_14 = 0;
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_14);
return x_2;
}
default: 
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_10);
x_16 = 0;
lean_ctor_set(x_2, 2, x_15);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_16);
return x_2;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_20 = l_Linarith_PComp_cmp(x_1, x_18);
switch (x_20) {
case 0:
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_17);
x_22 = 0;
x_23 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set_uint8(x_23, sizeof(void*)*3, x_22);
return x_23;
}
case 1:
{
uint8_t x_24; lean_object* x_25; 
lean_dec(x_18);
x_24 = 0;
x_25 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_1);
lean_ctor_set(x_25, 2, x_19);
lean_ctor_set_uint8(x_25, sizeof(void*)*3, x_24);
return x_25;
}
default: 
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_19);
x_27 = 0;
x_28 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_28, 0, x_17);
lean_ctor_set(x_28, 1, x_18);
lean_ctor_set(x_28, 2, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_27);
return x_28;
}
}
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = lean_ctor_get(x_2, 1);
x_32 = lean_ctor_get(x_2, 2);
x_33 = l_Linarith_PComp_cmp(x_1, x_31);
switch (x_33) {
case 0:
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_30);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*3);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_34, 2);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_34, 2);
lean_dec(x_39);
x_40 = lean_ctor_get(x_34, 0);
lean_dec(x_40);
lean_ctor_set(x_34, 0, x_37);
x_41 = 1;
lean_ctor_set(x_2, 0, x_34);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_41);
return x_2;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_37);
lean_ctor_set_uint8(x_43, sizeof(void*)*3, x_35);
x_44 = 1;
lean_ctor_set(x_2, 0, x_43);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_44);
return x_2;
}
}
else
{
uint8_t x_45; 
x_45 = lean_ctor_get_uint8(x_37, sizeof(void*)*3);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_34);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_34, 1);
x_48 = lean_ctor_get(x_34, 2);
lean_dec(x_48);
x_49 = lean_ctor_get(x_34, 0);
lean_dec(x_49);
x_50 = !lean_is_exclusive(x_37);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_37, 0);
x_52 = lean_ctor_get(x_37, 1);
x_53 = lean_ctor_get(x_37, 2);
x_54 = 1;
lean_ctor_set(x_37, 2, x_51);
lean_ctor_set(x_37, 1, x_47);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_54);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 0, x_53);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_54);
x_55 = 0;
lean_ctor_set(x_2, 2, x_34);
lean_ctor_set(x_2, 1, x_52);
lean_ctor_set(x_2, 0, x_37);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_55);
return x_2;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; uint8_t x_61; 
x_56 = lean_ctor_get(x_37, 0);
x_57 = lean_ctor_get(x_37, 1);
x_58 = lean_ctor_get(x_37, 2);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_37);
x_59 = 1;
x_60 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_60, 0, x_36);
lean_ctor_set(x_60, 1, x_47);
lean_ctor_set(x_60, 2, x_56);
lean_ctor_set_uint8(x_60, sizeof(void*)*3, x_59);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 0, x_58);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_59);
x_61 = 0;
lean_ctor_set(x_2, 2, x_34);
lean_ctor_set(x_2, 1, x_57);
lean_ctor_set(x_2, 0, x_60);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_61);
return x_2;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_62 = lean_ctor_get(x_34, 1);
lean_inc(x_62);
lean_dec(x_34);
x_63 = lean_ctor_get(x_37, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_37, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_37, 2);
lean_inc(x_65);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 x_66 = x_37;
} else {
 lean_dec_ref(x_37);
 x_66 = lean_box(0);
}
x_67 = 1;
if (lean_is_scalar(x_66)) {
 x_68 = lean_alloc_ctor(1, 3, 1);
} else {
 x_68 = x_66;
}
lean_ctor_set(x_68, 0, x_36);
lean_ctor_set(x_68, 1, x_62);
lean_ctor_set(x_68, 2, x_63);
lean_ctor_set_uint8(x_68, sizeof(void*)*3, x_67);
x_69 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_69, 0, x_65);
lean_ctor_set(x_69, 1, x_31);
lean_ctor_set(x_69, 2, x_32);
lean_ctor_set_uint8(x_69, sizeof(void*)*3, x_67);
x_70 = 0;
lean_ctor_set(x_2, 2, x_69);
lean_ctor_set(x_2, 1, x_64);
lean_ctor_set(x_2, 0, x_68);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_70);
return x_2;
}
}
else
{
uint8_t x_71; 
lean_free_object(x_2);
x_71 = !lean_is_exclusive(x_37);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_72 = lean_ctor_get(x_37, 2);
lean_dec(x_72);
x_73 = lean_ctor_get(x_37, 1);
lean_dec(x_73);
x_74 = lean_ctor_get(x_37, 0);
lean_dec(x_74);
x_75 = 1;
lean_ctor_set(x_37, 2, x_32);
lean_ctor_set(x_37, 1, x_31);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_75);
return x_37;
}
else
{
uint8_t x_76; lean_object* x_77; 
lean_dec(x_37);
x_76 = 1;
x_77 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_77, 0, x_34);
lean_ctor_set(x_77, 1, x_31);
lean_ctor_set(x_77, 2, x_32);
lean_ctor_set_uint8(x_77, sizeof(void*)*3, x_76);
return x_77;
}
}
}
}
else
{
uint8_t x_78; 
x_78 = lean_ctor_get_uint8(x_36, sizeof(void*)*3);
if (x_78 == 0)
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_34);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_34, 1);
x_81 = lean_ctor_get(x_34, 2);
x_82 = lean_ctor_get(x_34, 0);
lean_dec(x_82);
x_83 = !lean_is_exclusive(x_36);
if (x_83 == 0)
{
uint8_t x_84; uint8_t x_85; 
x_84 = 1;
lean_ctor_set_uint8(x_36, sizeof(void*)*3, x_84);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 0, x_81);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_84);
x_85 = 0;
lean_ctor_set(x_2, 2, x_34);
lean_ctor_set(x_2, 1, x_80);
lean_ctor_set(x_2, 0, x_36);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_85);
return x_2;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; uint8_t x_91; 
x_86 = lean_ctor_get(x_36, 0);
x_87 = lean_ctor_get(x_36, 1);
x_88 = lean_ctor_get(x_36, 2);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_36);
x_89 = 1;
x_90 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_90, 0, x_86);
lean_ctor_set(x_90, 1, x_87);
lean_ctor_set(x_90, 2, x_88);
lean_ctor_set_uint8(x_90, sizeof(void*)*3, x_89);
lean_ctor_set(x_34, 2, x_32);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 0, x_81);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_89);
x_91 = 0;
lean_ctor_set(x_2, 2, x_34);
lean_ctor_set(x_2, 1, x_80);
lean_ctor_set(x_2, 0, x_90);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_91);
return x_2;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_92 = lean_ctor_get(x_34, 1);
x_93 = lean_ctor_get(x_34, 2);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_34);
x_94 = lean_ctor_get(x_36, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_36, 1);
lean_inc(x_95);
x_96 = lean_ctor_get(x_36, 2);
lean_inc(x_96);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 x_97 = x_36;
} else {
 lean_dec_ref(x_36);
 x_97 = lean_box(0);
}
x_98 = 1;
if (lean_is_scalar(x_97)) {
 x_99 = lean_alloc_ctor(1, 3, 1);
} else {
 x_99 = x_97;
}
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_99, 1, x_95);
lean_ctor_set(x_99, 2, x_96);
lean_ctor_set_uint8(x_99, sizeof(void*)*3, x_98);
x_100 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_100, 0, x_93);
lean_ctor_set(x_100, 1, x_31);
lean_ctor_set(x_100, 2, x_32);
lean_ctor_set_uint8(x_100, sizeof(void*)*3, x_98);
x_101 = 0;
lean_ctor_set(x_2, 2, x_100);
lean_ctor_set(x_2, 1, x_92);
lean_ctor_set(x_2, 0, x_99);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_101);
return x_2;
}
}
else
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_34, 2);
lean_inc(x_102);
if (lean_obj_tag(x_102) == 0)
{
uint8_t x_103; 
lean_free_object(x_2);
x_103 = !lean_is_exclusive(x_36);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_104 = lean_ctor_get(x_36, 2);
lean_dec(x_104);
x_105 = lean_ctor_get(x_36, 1);
lean_dec(x_105);
x_106 = lean_ctor_get(x_36, 0);
lean_dec(x_106);
x_107 = 1;
lean_ctor_set(x_36, 2, x_32);
lean_ctor_set(x_36, 1, x_31);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*3, x_107);
return x_36;
}
else
{
uint8_t x_108; lean_object* x_109; 
lean_dec(x_36);
x_108 = 1;
x_109 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_109, 0, x_34);
lean_ctor_set(x_109, 1, x_31);
lean_ctor_set(x_109, 2, x_32);
lean_ctor_set_uint8(x_109, sizeof(void*)*3, x_108);
return x_109;
}
}
else
{
uint8_t x_110; 
x_110 = lean_ctor_get_uint8(x_102, sizeof(void*)*3);
if (x_110 == 0)
{
uint8_t x_111; 
lean_free_object(x_2);
x_111 = !lean_is_exclusive(x_34);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_112 = lean_ctor_get(x_34, 1);
x_113 = lean_ctor_get(x_34, 2);
lean_dec(x_113);
x_114 = lean_ctor_get(x_34, 0);
lean_dec(x_114);
x_115 = !lean_is_exclusive(x_102);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; uint8_t x_120; 
x_116 = lean_ctor_get(x_102, 0);
x_117 = lean_ctor_get(x_102, 1);
x_118 = lean_ctor_get(x_102, 2);
x_119 = 1;
lean_inc(x_36);
lean_ctor_set(x_102, 2, x_116);
lean_ctor_set(x_102, 1, x_112);
lean_ctor_set(x_102, 0, x_36);
x_120 = !lean_is_exclusive(x_36);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_121 = lean_ctor_get(x_36, 2);
lean_dec(x_121);
x_122 = lean_ctor_get(x_36, 1);
lean_dec(x_122);
x_123 = lean_ctor_get(x_36, 0);
lean_dec(x_123);
lean_ctor_set_uint8(x_102, sizeof(void*)*3, x_119);
lean_ctor_set(x_36, 2, x_32);
lean_ctor_set(x_36, 1, x_31);
lean_ctor_set(x_36, 0, x_118);
lean_ctor_set_uint8(x_36, sizeof(void*)*3, x_119);
x_124 = 0;
lean_ctor_set(x_34, 2, x_36);
lean_ctor_set(x_34, 1, x_117);
lean_ctor_set(x_34, 0, x_102);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_124);
return x_34;
}
else
{
lean_object* x_125; uint8_t x_126; 
lean_dec(x_36);
lean_ctor_set_uint8(x_102, sizeof(void*)*3, x_119);
x_125 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_125, 0, x_118);
lean_ctor_set(x_125, 1, x_31);
lean_ctor_set(x_125, 2, x_32);
lean_ctor_set_uint8(x_125, sizeof(void*)*3, x_119);
x_126 = 0;
lean_ctor_set(x_34, 2, x_125);
lean_ctor_set(x_34, 1, x_117);
lean_ctor_set(x_34, 0, x_102);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_126);
return x_34;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_127 = lean_ctor_get(x_102, 0);
x_128 = lean_ctor_get(x_102, 1);
x_129 = lean_ctor_get(x_102, 2);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_102);
x_130 = 1;
lean_inc(x_36);
x_131 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_131, 0, x_36);
lean_ctor_set(x_131, 1, x_112);
lean_ctor_set(x_131, 2, x_127);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 x_132 = x_36;
} else {
 lean_dec_ref(x_36);
 x_132 = lean_box(0);
}
lean_ctor_set_uint8(x_131, sizeof(void*)*3, x_130);
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 3, 1);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_129);
lean_ctor_set(x_133, 1, x_31);
lean_ctor_set(x_133, 2, x_32);
lean_ctor_set_uint8(x_133, sizeof(void*)*3, x_130);
x_134 = 0;
lean_ctor_set(x_34, 2, x_133);
lean_ctor_set(x_34, 1, x_128);
lean_ctor_set(x_34, 0, x_131);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_134);
return x_34;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; 
x_135 = lean_ctor_get(x_34, 1);
lean_inc(x_135);
lean_dec(x_34);
x_136 = lean_ctor_get(x_102, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_102, 1);
lean_inc(x_137);
x_138 = lean_ctor_get(x_102, 2);
lean_inc(x_138);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 lean_ctor_release(x_102, 2);
 x_139 = x_102;
} else {
 lean_dec_ref(x_102);
 x_139 = lean_box(0);
}
x_140 = 1;
lean_inc(x_36);
if (lean_is_scalar(x_139)) {
 x_141 = lean_alloc_ctor(1, 3, 1);
} else {
 x_141 = x_139;
}
lean_ctor_set(x_141, 0, x_36);
lean_ctor_set(x_141, 1, x_135);
lean_ctor_set(x_141, 2, x_136);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 x_142 = x_36;
} else {
 lean_dec_ref(x_36);
 x_142 = lean_box(0);
}
lean_ctor_set_uint8(x_141, sizeof(void*)*3, x_140);
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 3, 1);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_31);
lean_ctor_set(x_143, 2, x_32);
lean_ctor_set_uint8(x_143, sizeof(void*)*3, x_140);
x_144 = 0;
x_145 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_145, 0, x_141);
lean_ctor_set(x_145, 1, x_137);
lean_ctor_set(x_145, 2, x_143);
lean_ctor_set_uint8(x_145, sizeof(void*)*3, x_144);
return x_145;
}
}
else
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_34);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_147 = lean_ctor_get(x_34, 2);
lean_dec(x_147);
x_148 = lean_ctor_get(x_34, 0);
lean_dec(x_148);
x_149 = !lean_is_exclusive(x_36);
if (x_149 == 0)
{
uint8_t x_150; 
lean_ctor_set_uint8(x_36, sizeof(void*)*3, x_110);
x_150 = 1;
lean_ctor_set(x_2, 0, x_34);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_150);
return x_2;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; 
x_151 = lean_ctor_get(x_36, 0);
x_152 = lean_ctor_get(x_36, 1);
x_153 = lean_ctor_get(x_36, 2);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_36);
x_154 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
lean_ctor_set(x_154, 2, x_153);
lean_ctor_set_uint8(x_154, sizeof(void*)*3, x_110);
lean_ctor_set(x_34, 0, x_154);
x_155 = 1;
lean_ctor_set(x_2, 0, x_34);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_155);
return x_2;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_156 = lean_ctor_get(x_34, 1);
lean_inc(x_156);
lean_dec(x_34);
x_157 = lean_ctor_get(x_36, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_36, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_36, 2);
lean_inc(x_159);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 lean_ctor_release(x_36, 2);
 x_160 = x_36;
} else {
 lean_dec_ref(x_36);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 3, 1);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_157);
lean_ctor_set(x_161, 1, x_158);
lean_ctor_set(x_161, 2, x_159);
lean_ctor_set_uint8(x_161, sizeof(void*)*3, x_110);
x_162 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_156);
lean_ctor_set(x_162, 2, x_102);
lean_ctor_set_uint8(x_162, sizeof(void*)*3, x_35);
x_163 = 1;
lean_ctor_set(x_2, 0, x_162);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_163);
return x_2;
}
}
}
}
}
}
else
{
uint8_t x_164; 
x_164 = 1;
lean_ctor_set(x_2, 0, x_34);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_164);
return x_2;
}
}
case 1:
{
uint8_t x_165; 
lean_dec(x_31);
x_165 = 1;
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_165);
return x_2;
}
default: 
{
lean_object* x_166; uint8_t x_167; 
x_166 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_32);
x_167 = lean_ctor_get_uint8(x_166, sizeof(void*)*3);
if (x_167 == 0)
{
lean_object* x_168; 
x_168 = lean_ctor_get(x_166, 0);
lean_inc(x_168);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; 
x_169 = lean_ctor_get(x_166, 2);
lean_inc(x_169);
if (lean_obj_tag(x_169) == 0)
{
uint8_t x_170; 
x_170 = !lean_is_exclusive(x_166);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_171 = lean_ctor_get(x_166, 2);
lean_dec(x_171);
x_172 = lean_ctor_get(x_166, 0);
lean_dec(x_172);
lean_ctor_set(x_166, 0, x_169);
x_173 = 1;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_173);
return x_2;
}
else
{
lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_174 = lean_ctor_get(x_166, 1);
lean_inc(x_174);
lean_dec(x_166);
x_175 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_175, 0, x_169);
lean_ctor_set(x_175, 1, x_174);
lean_ctor_set(x_175, 2, x_169);
lean_ctor_set_uint8(x_175, sizeof(void*)*3, x_167);
x_176 = 1;
lean_ctor_set(x_2, 2, x_175);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_176);
return x_2;
}
}
else
{
uint8_t x_177; 
x_177 = lean_ctor_get_uint8(x_169, sizeof(void*)*3);
if (x_177 == 0)
{
uint8_t x_178; 
x_178 = !lean_is_exclusive(x_166);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; uint8_t x_182; 
x_179 = lean_ctor_get(x_166, 1);
x_180 = lean_ctor_get(x_166, 2);
lean_dec(x_180);
x_181 = lean_ctor_get(x_166, 0);
lean_dec(x_181);
x_182 = !lean_is_exclusive(x_169);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; uint8_t x_187; 
x_183 = lean_ctor_get(x_169, 0);
x_184 = lean_ctor_get(x_169, 1);
x_185 = lean_ctor_get(x_169, 2);
x_186 = 1;
lean_ctor_set(x_169, 2, x_168);
lean_ctor_set(x_169, 1, x_31);
lean_ctor_set(x_169, 0, x_30);
lean_ctor_set_uint8(x_169, sizeof(void*)*3, x_186);
lean_ctor_set(x_166, 2, x_185);
lean_ctor_set(x_166, 1, x_184);
lean_ctor_set(x_166, 0, x_183);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_186);
x_187 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_179);
lean_ctor_set(x_2, 0, x_169);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_187);
return x_2;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; lean_object* x_192; uint8_t x_193; 
x_188 = lean_ctor_get(x_169, 0);
x_189 = lean_ctor_get(x_169, 1);
x_190 = lean_ctor_get(x_169, 2);
lean_inc(x_190);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_169);
x_191 = 1;
x_192 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_192, 0, x_30);
lean_ctor_set(x_192, 1, x_31);
lean_ctor_set(x_192, 2, x_168);
lean_ctor_set_uint8(x_192, sizeof(void*)*3, x_191);
lean_ctor_set(x_166, 2, x_190);
lean_ctor_set(x_166, 1, x_189);
lean_ctor_set(x_166, 0, x_188);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_191);
x_193 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_179);
lean_ctor_set(x_2, 0, x_192);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_193);
return x_2;
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_194 = lean_ctor_get(x_166, 1);
lean_inc(x_194);
lean_dec(x_166);
x_195 = lean_ctor_get(x_169, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_169, 1);
lean_inc(x_196);
x_197 = lean_ctor_get(x_169, 2);
lean_inc(x_197);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 lean_ctor_release(x_169, 2);
 x_198 = x_169;
} else {
 lean_dec_ref(x_169);
 x_198 = lean_box(0);
}
x_199 = 1;
if (lean_is_scalar(x_198)) {
 x_200 = lean_alloc_ctor(1, 3, 1);
} else {
 x_200 = x_198;
}
lean_ctor_set(x_200, 0, x_30);
lean_ctor_set(x_200, 1, x_31);
lean_ctor_set(x_200, 2, x_168);
lean_ctor_set_uint8(x_200, sizeof(void*)*3, x_199);
x_201 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_201, 0, x_195);
lean_ctor_set(x_201, 1, x_196);
lean_ctor_set(x_201, 2, x_197);
lean_ctor_set_uint8(x_201, sizeof(void*)*3, x_199);
x_202 = 0;
lean_ctor_set(x_2, 2, x_201);
lean_ctor_set(x_2, 1, x_194);
lean_ctor_set(x_2, 0, x_200);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_202);
return x_2;
}
}
else
{
uint8_t x_203; 
lean_free_object(x_2);
x_203 = !lean_is_exclusive(x_169);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_204 = lean_ctor_get(x_169, 2);
lean_dec(x_204);
x_205 = lean_ctor_get(x_169, 1);
lean_dec(x_205);
x_206 = lean_ctor_get(x_169, 0);
lean_dec(x_206);
x_207 = 1;
lean_ctor_set(x_169, 2, x_166);
lean_ctor_set(x_169, 1, x_31);
lean_ctor_set(x_169, 0, x_30);
lean_ctor_set_uint8(x_169, sizeof(void*)*3, x_207);
return x_169;
}
else
{
uint8_t x_208; lean_object* x_209; 
lean_dec(x_169);
x_208 = 1;
x_209 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_209, 0, x_30);
lean_ctor_set(x_209, 1, x_31);
lean_ctor_set(x_209, 2, x_166);
lean_ctor_set_uint8(x_209, sizeof(void*)*3, x_208);
return x_209;
}
}
}
}
else
{
uint8_t x_210; 
x_210 = lean_ctor_get_uint8(x_168, sizeof(void*)*3);
if (x_210 == 0)
{
lean_object* x_211; 
x_211 = lean_ctor_get(x_166, 2);
lean_inc(x_211);
if (lean_obj_tag(x_211) == 0)
{
uint8_t x_212; 
x_212 = !lean_is_exclusive(x_166);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; uint8_t x_215; 
x_213 = lean_ctor_get(x_166, 2);
lean_dec(x_213);
x_214 = lean_ctor_get(x_166, 0);
lean_dec(x_214);
x_215 = !lean_is_exclusive(x_168);
if (x_215 == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; uint8_t x_220; 
x_216 = lean_ctor_get(x_168, 0);
x_217 = lean_ctor_get(x_168, 1);
x_218 = lean_ctor_get(x_168, 2);
x_219 = 1;
lean_ctor_set(x_168, 2, x_216);
lean_ctor_set(x_168, 1, x_31);
lean_ctor_set(x_168, 0, x_30);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_219);
lean_ctor_set(x_166, 0, x_218);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_219);
x_220 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_217);
lean_ctor_set(x_2, 0, x_168);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_220);
return x_2;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; lean_object* x_225; uint8_t x_226; 
x_221 = lean_ctor_get(x_168, 0);
x_222 = lean_ctor_get(x_168, 1);
x_223 = lean_ctor_get(x_168, 2);
lean_inc(x_223);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_168);
x_224 = 1;
x_225 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_225, 0, x_30);
lean_ctor_set(x_225, 1, x_31);
lean_ctor_set(x_225, 2, x_221);
lean_ctor_set_uint8(x_225, sizeof(void*)*3, x_224);
lean_ctor_set(x_166, 0, x_223);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_224);
x_226 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_222);
lean_ctor_set(x_2, 0, x_225);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_226);
return x_2;
}
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_227 = lean_ctor_get(x_166, 1);
lean_inc(x_227);
lean_dec(x_166);
x_228 = lean_ctor_get(x_168, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_168, 1);
lean_inc(x_229);
x_230 = lean_ctor_get(x_168, 2);
lean_inc(x_230);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_231 = x_168;
} else {
 lean_dec_ref(x_168);
 x_231 = lean_box(0);
}
x_232 = 1;
if (lean_is_scalar(x_231)) {
 x_233 = lean_alloc_ctor(1, 3, 1);
} else {
 x_233 = x_231;
}
lean_ctor_set(x_233, 0, x_30);
lean_ctor_set(x_233, 1, x_31);
lean_ctor_set(x_233, 2, x_228);
lean_ctor_set_uint8(x_233, sizeof(void*)*3, x_232);
x_234 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_234, 0, x_230);
lean_ctor_set(x_234, 1, x_227);
lean_ctor_set(x_234, 2, x_211);
lean_ctor_set_uint8(x_234, sizeof(void*)*3, x_232);
x_235 = 0;
lean_ctor_set(x_2, 2, x_234);
lean_ctor_set(x_2, 1, x_229);
lean_ctor_set(x_2, 0, x_233);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_235);
return x_2;
}
}
else
{
uint8_t x_236; 
x_236 = lean_ctor_get_uint8(x_211, sizeof(void*)*3);
if (x_236 == 0)
{
uint8_t x_237; 
x_237 = !lean_is_exclusive(x_166);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_238 = lean_ctor_get(x_166, 1);
x_239 = lean_ctor_get(x_166, 2);
lean_dec(x_239);
x_240 = lean_ctor_get(x_166, 0);
lean_dec(x_240);
x_241 = !lean_is_exclusive(x_168);
if (x_241 == 0)
{
uint8_t x_242; 
x_242 = !lean_is_exclusive(x_211);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; uint8_t x_250; 
x_243 = lean_ctor_get(x_168, 0);
x_244 = lean_ctor_get(x_168, 1);
x_245 = lean_ctor_get(x_168, 2);
x_246 = lean_ctor_get(x_211, 0);
x_247 = lean_ctor_get(x_211, 1);
x_248 = lean_ctor_get(x_211, 2);
lean_ctor_set(x_211, 2, x_245);
lean_ctor_set(x_211, 1, x_244);
lean_ctor_set(x_211, 0, x_243);
x_249 = 1;
lean_ctor_set(x_168, 2, x_211);
lean_ctor_set(x_168, 1, x_31);
lean_ctor_set(x_168, 0, x_30);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_249);
lean_ctor_set(x_166, 2, x_248);
lean_ctor_set(x_166, 1, x_247);
lean_ctor_set(x_166, 0, x_246);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_249);
x_250 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_238);
lean_ctor_set(x_2, 0, x_168);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_250);
return x_2;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; uint8_t x_258; uint8_t x_259; 
x_251 = lean_ctor_get(x_168, 0);
x_252 = lean_ctor_get(x_168, 1);
x_253 = lean_ctor_get(x_168, 2);
x_254 = lean_ctor_get(x_211, 0);
x_255 = lean_ctor_get(x_211, 1);
x_256 = lean_ctor_get(x_211, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_211);
x_257 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_257, 0, x_251);
lean_ctor_set(x_257, 1, x_252);
lean_ctor_set(x_257, 2, x_253);
lean_ctor_set_uint8(x_257, sizeof(void*)*3, x_236);
x_258 = 1;
lean_ctor_set(x_168, 2, x_257);
lean_ctor_set(x_168, 1, x_31);
lean_ctor_set(x_168, 0, x_30);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_258);
lean_ctor_set(x_166, 2, x_256);
lean_ctor_set(x_166, 1, x_255);
lean_ctor_set(x_166, 0, x_254);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_258);
x_259 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_238);
lean_ctor_set(x_2, 0, x_168);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_259);
return x_2;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_269; uint8_t x_270; 
x_260 = lean_ctor_get(x_168, 0);
x_261 = lean_ctor_get(x_168, 1);
x_262 = lean_ctor_get(x_168, 2);
lean_inc(x_262);
lean_inc(x_261);
lean_inc(x_260);
lean_dec(x_168);
x_263 = lean_ctor_get(x_211, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_211, 1);
lean_inc(x_264);
x_265 = lean_ctor_get(x_211, 2);
lean_inc(x_265);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 lean_ctor_release(x_211, 2);
 x_266 = x_211;
} else {
 lean_dec_ref(x_211);
 x_266 = lean_box(0);
}
if (lean_is_scalar(x_266)) {
 x_267 = lean_alloc_ctor(1, 3, 1);
} else {
 x_267 = x_266;
}
lean_ctor_set(x_267, 0, x_260);
lean_ctor_set(x_267, 1, x_261);
lean_ctor_set(x_267, 2, x_262);
lean_ctor_set_uint8(x_267, sizeof(void*)*3, x_236);
x_268 = 1;
x_269 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_269, 0, x_30);
lean_ctor_set(x_269, 1, x_31);
lean_ctor_set(x_269, 2, x_267);
lean_ctor_set_uint8(x_269, sizeof(void*)*3, x_268);
lean_ctor_set(x_166, 2, x_265);
lean_ctor_set(x_166, 1, x_264);
lean_ctor_set(x_166, 0, x_263);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_268);
x_270 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_238);
lean_ctor_set(x_2, 0, x_269);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_270);
return x_2;
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; uint8_t x_281; lean_object* x_282; lean_object* x_283; uint8_t x_284; 
x_271 = lean_ctor_get(x_166, 1);
lean_inc(x_271);
lean_dec(x_166);
x_272 = lean_ctor_get(x_168, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_168, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_168, 2);
lean_inc(x_274);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_275 = x_168;
} else {
 lean_dec_ref(x_168);
 x_275 = lean_box(0);
}
x_276 = lean_ctor_get(x_211, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_211, 1);
lean_inc(x_277);
x_278 = lean_ctor_get(x_211, 2);
lean_inc(x_278);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 lean_ctor_release(x_211, 2);
 x_279 = x_211;
} else {
 lean_dec_ref(x_211);
 x_279 = lean_box(0);
}
if (lean_is_scalar(x_279)) {
 x_280 = lean_alloc_ctor(1, 3, 1);
} else {
 x_280 = x_279;
}
lean_ctor_set(x_280, 0, x_272);
lean_ctor_set(x_280, 1, x_273);
lean_ctor_set(x_280, 2, x_274);
lean_ctor_set_uint8(x_280, sizeof(void*)*3, x_236);
x_281 = 1;
if (lean_is_scalar(x_275)) {
 x_282 = lean_alloc_ctor(1, 3, 1);
} else {
 x_282 = x_275;
}
lean_ctor_set(x_282, 0, x_30);
lean_ctor_set(x_282, 1, x_31);
lean_ctor_set(x_282, 2, x_280);
lean_ctor_set_uint8(x_282, sizeof(void*)*3, x_281);
x_283 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_283, 0, x_276);
lean_ctor_set(x_283, 1, x_277);
lean_ctor_set(x_283, 2, x_278);
lean_ctor_set_uint8(x_283, sizeof(void*)*3, x_281);
x_284 = 0;
lean_ctor_set(x_2, 2, x_283);
lean_ctor_set(x_2, 1, x_271);
lean_ctor_set(x_2, 0, x_282);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_284);
return x_2;
}
}
else
{
uint8_t x_285; 
x_285 = !lean_is_exclusive(x_166);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; uint8_t x_288; 
x_286 = lean_ctor_get(x_166, 2);
lean_dec(x_286);
x_287 = lean_ctor_get(x_166, 0);
lean_dec(x_287);
x_288 = !lean_is_exclusive(x_168);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_292; uint8_t x_293; 
x_289 = lean_ctor_get(x_168, 0);
x_290 = lean_ctor_get(x_168, 1);
x_291 = lean_ctor_get(x_168, 2);
x_292 = 1;
lean_ctor_set(x_168, 2, x_289);
lean_ctor_set(x_168, 1, x_31);
lean_ctor_set(x_168, 0, x_30);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_292);
lean_ctor_set(x_166, 0, x_291);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_292);
x_293 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_290);
lean_ctor_set(x_2, 0, x_168);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_293);
return x_2;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; uint8_t x_297; lean_object* x_298; uint8_t x_299; 
x_294 = lean_ctor_get(x_168, 0);
x_295 = lean_ctor_get(x_168, 1);
x_296 = lean_ctor_get(x_168, 2);
lean_inc(x_296);
lean_inc(x_295);
lean_inc(x_294);
lean_dec(x_168);
x_297 = 1;
x_298 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_298, 0, x_30);
lean_ctor_set(x_298, 1, x_31);
lean_ctor_set(x_298, 2, x_294);
lean_ctor_set_uint8(x_298, sizeof(void*)*3, x_297);
lean_ctor_set(x_166, 0, x_296);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_297);
x_299 = 0;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set(x_2, 1, x_295);
lean_ctor_set(x_2, 0, x_298);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_299);
return x_2;
}
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_300 = lean_ctor_get(x_166, 1);
lean_inc(x_300);
lean_dec(x_166);
x_301 = lean_ctor_get(x_168, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_168, 1);
lean_inc(x_302);
x_303 = lean_ctor_get(x_168, 2);
lean_inc(x_303);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_304 = x_168;
} else {
 lean_dec_ref(x_168);
 x_304 = lean_box(0);
}
x_305 = 1;
if (lean_is_scalar(x_304)) {
 x_306 = lean_alloc_ctor(1, 3, 1);
} else {
 x_306 = x_304;
}
lean_ctor_set(x_306, 0, x_30);
lean_ctor_set(x_306, 1, x_31);
lean_ctor_set(x_306, 2, x_301);
lean_ctor_set_uint8(x_306, sizeof(void*)*3, x_305);
x_307 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_307, 0, x_303);
lean_ctor_set(x_307, 1, x_300);
lean_ctor_set(x_307, 2, x_211);
lean_ctor_set_uint8(x_307, sizeof(void*)*3, x_305);
x_308 = 0;
lean_ctor_set(x_2, 2, x_307);
lean_ctor_set(x_2, 1, x_302);
lean_ctor_set(x_2, 0, x_306);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_308);
return x_2;
}
}
}
}
else
{
lean_object* x_309; 
x_309 = lean_ctor_get(x_166, 2);
lean_inc(x_309);
if (lean_obj_tag(x_309) == 0)
{
uint8_t x_310; 
lean_free_object(x_2);
x_310 = !lean_is_exclusive(x_168);
if (x_310 == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_311 = lean_ctor_get(x_168, 2);
lean_dec(x_311);
x_312 = lean_ctor_get(x_168, 1);
lean_dec(x_312);
x_313 = lean_ctor_get(x_168, 0);
lean_dec(x_313);
x_314 = 1;
lean_ctor_set(x_168, 2, x_166);
lean_ctor_set(x_168, 1, x_31);
lean_ctor_set(x_168, 0, x_30);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_314);
return x_168;
}
else
{
uint8_t x_315; lean_object* x_316; 
lean_dec(x_168);
x_315 = 1;
x_316 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_316, 0, x_30);
lean_ctor_set(x_316, 1, x_31);
lean_ctor_set(x_316, 2, x_166);
lean_ctor_set_uint8(x_316, sizeof(void*)*3, x_315);
return x_316;
}
}
else
{
uint8_t x_317; 
x_317 = lean_ctor_get_uint8(x_309, sizeof(void*)*3);
if (x_317 == 0)
{
uint8_t x_318; 
lean_free_object(x_2);
x_318 = !lean_is_exclusive(x_166);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; uint8_t x_321; 
x_319 = lean_ctor_get(x_166, 2);
lean_dec(x_319);
x_320 = lean_ctor_get(x_166, 0);
lean_dec(x_320);
x_321 = !lean_is_exclusive(x_309);
if (x_321 == 0)
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; uint8_t x_326; 
x_322 = lean_ctor_get(x_309, 0);
x_323 = lean_ctor_get(x_309, 1);
x_324 = lean_ctor_get(x_309, 2);
x_325 = 1;
lean_inc(x_168);
lean_ctor_set(x_309, 2, x_168);
lean_ctor_set(x_309, 1, x_31);
lean_ctor_set(x_309, 0, x_30);
x_326 = !lean_is_exclusive(x_168);
if (x_326 == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; 
x_327 = lean_ctor_get(x_168, 2);
lean_dec(x_327);
x_328 = lean_ctor_get(x_168, 1);
lean_dec(x_328);
x_329 = lean_ctor_get(x_168, 0);
lean_dec(x_329);
lean_ctor_set_uint8(x_309, sizeof(void*)*3, x_325);
lean_ctor_set(x_168, 2, x_324);
lean_ctor_set(x_168, 1, x_323);
lean_ctor_set(x_168, 0, x_322);
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_325);
x_330 = 0;
lean_ctor_set(x_166, 2, x_168);
lean_ctor_set(x_166, 0, x_309);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_330);
return x_166;
}
else
{
lean_object* x_331; uint8_t x_332; 
lean_dec(x_168);
lean_ctor_set_uint8(x_309, sizeof(void*)*3, x_325);
x_331 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_331, 0, x_322);
lean_ctor_set(x_331, 1, x_323);
lean_ctor_set(x_331, 2, x_324);
lean_ctor_set_uint8(x_331, sizeof(void*)*3, x_325);
x_332 = 0;
lean_ctor_set(x_166, 2, x_331);
lean_ctor_set(x_166, 0, x_309);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_332);
return x_166;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; uint8_t x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; 
x_333 = lean_ctor_get(x_309, 0);
x_334 = lean_ctor_get(x_309, 1);
x_335 = lean_ctor_get(x_309, 2);
lean_inc(x_335);
lean_inc(x_334);
lean_inc(x_333);
lean_dec(x_309);
x_336 = 1;
lean_inc(x_168);
x_337 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_337, 0, x_30);
lean_ctor_set(x_337, 1, x_31);
lean_ctor_set(x_337, 2, x_168);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_338 = x_168;
} else {
 lean_dec_ref(x_168);
 x_338 = lean_box(0);
}
lean_ctor_set_uint8(x_337, sizeof(void*)*3, x_336);
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(1, 3, 1);
} else {
 x_339 = x_338;
}
lean_ctor_set(x_339, 0, x_333);
lean_ctor_set(x_339, 1, x_334);
lean_ctor_set(x_339, 2, x_335);
lean_ctor_set_uint8(x_339, sizeof(void*)*3, x_336);
x_340 = 0;
lean_ctor_set(x_166, 2, x_339);
lean_ctor_set(x_166, 0, x_337);
lean_ctor_set_uint8(x_166, sizeof(void*)*3, x_340);
return x_166;
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; uint8_t x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; lean_object* x_351; 
x_341 = lean_ctor_get(x_166, 1);
lean_inc(x_341);
lean_dec(x_166);
x_342 = lean_ctor_get(x_309, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_309, 1);
lean_inc(x_343);
x_344 = lean_ctor_get(x_309, 2);
lean_inc(x_344);
if (lean_is_exclusive(x_309)) {
 lean_ctor_release(x_309, 0);
 lean_ctor_release(x_309, 1);
 lean_ctor_release(x_309, 2);
 x_345 = x_309;
} else {
 lean_dec_ref(x_309);
 x_345 = lean_box(0);
}
x_346 = 1;
lean_inc(x_168);
if (lean_is_scalar(x_345)) {
 x_347 = lean_alloc_ctor(1, 3, 1);
} else {
 x_347 = x_345;
}
lean_ctor_set(x_347, 0, x_30);
lean_ctor_set(x_347, 1, x_31);
lean_ctor_set(x_347, 2, x_168);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_348 = x_168;
} else {
 lean_dec_ref(x_168);
 x_348 = lean_box(0);
}
lean_ctor_set_uint8(x_347, sizeof(void*)*3, x_346);
if (lean_is_scalar(x_348)) {
 x_349 = lean_alloc_ctor(1, 3, 1);
} else {
 x_349 = x_348;
}
lean_ctor_set(x_349, 0, x_342);
lean_ctor_set(x_349, 1, x_343);
lean_ctor_set(x_349, 2, x_344);
lean_ctor_set_uint8(x_349, sizeof(void*)*3, x_346);
x_350 = 0;
x_351 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_351, 0, x_347);
lean_ctor_set(x_351, 1, x_341);
lean_ctor_set(x_351, 2, x_349);
lean_ctor_set_uint8(x_351, sizeof(void*)*3, x_350);
return x_351;
}
}
else
{
uint8_t x_352; 
x_352 = !lean_is_exclusive(x_166);
if (x_352 == 0)
{
lean_object* x_353; lean_object* x_354; uint8_t x_355; 
x_353 = lean_ctor_get(x_166, 2);
lean_dec(x_353);
x_354 = lean_ctor_get(x_166, 0);
lean_dec(x_354);
x_355 = !lean_is_exclusive(x_168);
if (x_355 == 0)
{
uint8_t x_356; 
lean_ctor_set_uint8(x_168, sizeof(void*)*3, x_317);
x_356 = 1;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_356);
return x_2;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; 
x_357 = lean_ctor_get(x_168, 0);
x_358 = lean_ctor_get(x_168, 1);
x_359 = lean_ctor_get(x_168, 2);
lean_inc(x_359);
lean_inc(x_358);
lean_inc(x_357);
lean_dec(x_168);
x_360 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_360, 0, x_357);
lean_ctor_set(x_360, 1, x_358);
lean_ctor_set(x_360, 2, x_359);
lean_ctor_set_uint8(x_360, sizeof(void*)*3, x_317);
lean_ctor_set(x_166, 0, x_360);
x_361 = 1;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_361);
return x_2;
}
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_362 = lean_ctor_get(x_166, 1);
lean_inc(x_362);
lean_dec(x_166);
x_363 = lean_ctor_get(x_168, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_168, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_168, 2);
lean_inc(x_365);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 x_366 = x_168;
} else {
 lean_dec_ref(x_168);
 x_366 = lean_box(0);
}
if (lean_is_scalar(x_366)) {
 x_367 = lean_alloc_ctor(1, 3, 1);
} else {
 x_367 = x_366;
}
lean_ctor_set(x_367, 0, x_363);
lean_ctor_set(x_367, 1, x_364);
lean_ctor_set(x_367, 2, x_365);
lean_ctor_set_uint8(x_367, sizeof(void*)*3, x_317);
x_368 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_362);
lean_ctor_set(x_368, 2, x_309);
lean_ctor_set_uint8(x_368, sizeof(void*)*3, x_167);
x_369 = 1;
lean_ctor_set(x_2, 2, x_368);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_369);
return x_2;
}
}
}
}
}
}
else
{
uint8_t x_370; 
x_370 = 1;
lean_ctor_set(x_2, 2, x_166);
lean_ctor_set_uint8(x_2, sizeof(void*)*3, x_370);
return x_2;
}
}
}
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_371 = lean_ctor_get(x_2, 0);
x_372 = lean_ctor_get(x_2, 1);
x_373 = lean_ctor_get(x_2, 2);
lean_inc(x_373);
lean_inc(x_372);
lean_inc(x_371);
lean_dec(x_2);
x_374 = l_Linarith_PComp_cmp(x_1, x_372);
switch (x_374) {
case 0:
{
lean_object* x_375; uint8_t x_376; 
x_375 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_371);
x_376 = lean_ctor_get_uint8(x_375, sizeof(void*)*3);
if (x_376 == 0)
{
lean_object* x_377; 
x_377 = lean_ctor_get(x_375, 0);
lean_inc(x_377);
if (lean_obj_tag(x_377) == 0)
{
lean_object* x_378; 
x_378 = lean_ctor_get(x_375, 2);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; uint8_t x_382; lean_object* x_383; 
x_379 = lean_ctor_get(x_375, 1);
lean_inc(x_379);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_380 = x_375;
} else {
 lean_dec_ref(x_375);
 x_380 = lean_box(0);
}
if (lean_is_scalar(x_380)) {
 x_381 = lean_alloc_ctor(1, 3, 1);
} else {
 x_381 = x_380;
}
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_379);
lean_ctor_set(x_381, 2, x_378);
lean_ctor_set_uint8(x_381, sizeof(void*)*3, x_376);
x_382 = 1;
x_383 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_383, 0, x_381);
lean_ctor_set(x_383, 1, x_372);
lean_ctor_set(x_383, 2, x_373);
lean_ctor_set_uint8(x_383, sizeof(void*)*3, x_382);
return x_383;
}
else
{
uint8_t x_384; 
x_384 = lean_ctor_get_uint8(x_378, sizeof(void*)*3);
if (x_384 == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; uint8_t x_391; lean_object* x_392; lean_object* x_393; uint8_t x_394; lean_object* x_395; 
x_385 = lean_ctor_get(x_375, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_386 = x_375;
} else {
 lean_dec_ref(x_375);
 x_386 = lean_box(0);
}
x_387 = lean_ctor_get(x_378, 0);
lean_inc(x_387);
x_388 = lean_ctor_get(x_378, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_378, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 x_390 = x_378;
} else {
 lean_dec_ref(x_378);
 x_390 = lean_box(0);
}
x_391 = 1;
if (lean_is_scalar(x_390)) {
 x_392 = lean_alloc_ctor(1, 3, 1);
} else {
 x_392 = x_390;
}
lean_ctor_set(x_392, 0, x_377);
lean_ctor_set(x_392, 1, x_385);
lean_ctor_set(x_392, 2, x_387);
lean_ctor_set_uint8(x_392, sizeof(void*)*3, x_391);
if (lean_is_scalar(x_386)) {
 x_393 = lean_alloc_ctor(1, 3, 1);
} else {
 x_393 = x_386;
}
lean_ctor_set(x_393, 0, x_389);
lean_ctor_set(x_393, 1, x_372);
lean_ctor_set(x_393, 2, x_373);
lean_ctor_set_uint8(x_393, sizeof(void*)*3, x_391);
x_394 = 0;
x_395 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_395, 0, x_392);
lean_ctor_set(x_395, 1, x_388);
lean_ctor_set(x_395, 2, x_393);
lean_ctor_set_uint8(x_395, sizeof(void*)*3, x_394);
return x_395;
}
else
{
lean_object* x_396; uint8_t x_397; lean_object* x_398; 
if (lean_is_exclusive(x_378)) {
 lean_ctor_release(x_378, 0);
 lean_ctor_release(x_378, 1);
 lean_ctor_release(x_378, 2);
 x_396 = x_378;
} else {
 lean_dec_ref(x_378);
 x_396 = lean_box(0);
}
x_397 = 1;
if (lean_is_scalar(x_396)) {
 x_398 = lean_alloc_ctor(1, 3, 1);
} else {
 x_398 = x_396;
}
lean_ctor_set(x_398, 0, x_375);
lean_ctor_set(x_398, 1, x_372);
lean_ctor_set(x_398, 2, x_373);
lean_ctor_set_uint8(x_398, sizeof(void*)*3, x_397);
return x_398;
}
}
}
else
{
uint8_t x_399; 
x_399 = lean_ctor_get_uint8(x_377, sizeof(void*)*3);
if (x_399 == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; uint8_t x_407; lean_object* x_408; lean_object* x_409; uint8_t x_410; lean_object* x_411; 
x_400 = lean_ctor_get(x_375, 1);
lean_inc(x_400);
x_401 = lean_ctor_get(x_375, 2);
lean_inc(x_401);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_402 = x_375;
} else {
 lean_dec_ref(x_375);
 x_402 = lean_box(0);
}
x_403 = lean_ctor_get(x_377, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_377, 1);
lean_inc(x_404);
x_405 = lean_ctor_get(x_377, 2);
lean_inc(x_405);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 x_406 = x_377;
} else {
 lean_dec_ref(x_377);
 x_406 = lean_box(0);
}
x_407 = 1;
if (lean_is_scalar(x_406)) {
 x_408 = lean_alloc_ctor(1, 3, 1);
} else {
 x_408 = x_406;
}
lean_ctor_set(x_408, 0, x_403);
lean_ctor_set(x_408, 1, x_404);
lean_ctor_set(x_408, 2, x_405);
lean_ctor_set_uint8(x_408, sizeof(void*)*3, x_407);
if (lean_is_scalar(x_402)) {
 x_409 = lean_alloc_ctor(1, 3, 1);
} else {
 x_409 = x_402;
}
lean_ctor_set(x_409, 0, x_401);
lean_ctor_set(x_409, 1, x_372);
lean_ctor_set(x_409, 2, x_373);
lean_ctor_set_uint8(x_409, sizeof(void*)*3, x_407);
x_410 = 0;
x_411 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_400);
lean_ctor_set(x_411, 2, x_409);
lean_ctor_set_uint8(x_411, sizeof(void*)*3, x_410);
return x_411;
}
else
{
lean_object* x_412; 
x_412 = lean_ctor_get(x_375, 2);
lean_inc(x_412);
if (lean_obj_tag(x_412) == 0)
{
lean_object* x_413; uint8_t x_414; lean_object* x_415; 
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 x_413 = x_377;
} else {
 lean_dec_ref(x_377);
 x_413 = lean_box(0);
}
x_414 = 1;
if (lean_is_scalar(x_413)) {
 x_415 = lean_alloc_ctor(1, 3, 1);
} else {
 x_415 = x_413;
}
lean_ctor_set(x_415, 0, x_375);
lean_ctor_set(x_415, 1, x_372);
lean_ctor_set(x_415, 2, x_373);
lean_ctor_set_uint8(x_415, sizeof(void*)*3, x_414);
return x_415;
}
else
{
uint8_t x_416; 
x_416 = lean_ctor_get_uint8(x_412, sizeof(void*)*3);
if (x_416 == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; uint8_t x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; uint8_t x_427; lean_object* x_428; 
x_417 = lean_ctor_get(x_375, 1);
lean_inc(x_417);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_418 = x_375;
} else {
 lean_dec_ref(x_375);
 x_418 = lean_box(0);
}
x_419 = lean_ctor_get(x_412, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_412, 1);
lean_inc(x_420);
x_421 = lean_ctor_get(x_412, 2);
lean_inc(x_421);
if (lean_is_exclusive(x_412)) {
 lean_ctor_release(x_412, 0);
 lean_ctor_release(x_412, 1);
 lean_ctor_release(x_412, 2);
 x_422 = x_412;
} else {
 lean_dec_ref(x_412);
 x_422 = lean_box(0);
}
x_423 = 1;
lean_inc(x_377);
if (lean_is_scalar(x_422)) {
 x_424 = lean_alloc_ctor(1, 3, 1);
} else {
 x_424 = x_422;
}
lean_ctor_set(x_424, 0, x_377);
lean_ctor_set(x_424, 1, x_417);
lean_ctor_set(x_424, 2, x_419);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 x_425 = x_377;
} else {
 lean_dec_ref(x_377);
 x_425 = lean_box(0);
}
lean_ctor_set_uint8(x_424, sizeof(void*)*3, x_423);
if (lean_is_scalar(x_425)) {
 x_426 = lean_alloc_ctor(1, 3, 1);
} else {
 x_426 = x_425;
}
lean_ctor_set(x_426, 0, x_421);
lean_ctor_set(x_426, 1, x_372);
lean_ctor_set(x_426, 2, x_373);
lean_ctor_set_uint8(x_426, sizeof(void*)*3, x_423);
x_427 = 0;
if (lean_is_scalar(x_418)) {
 x_428 = lean_alloc_ctor(1, 3, 1);
} else {
 x_428 = x_418;
}
lean_ctor_set(x_428, 0, x_424);
lean_ctor_set(x_428, 1, x_420);
lean_ctor_set(x_428, 2, x_426);
lean_ctor_set_uint8(x_428, sizeof(void*)*3, x_427);
return x_428;
}
else
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; uint8_t x_437; lean_object* x_438; 
x_429 = lean_ctor_get(x_375, 1);
lean_inc(x_429);
if (lean_is_exclusive(x_375)) {
 lean_ctor_release(x_375, 0);
 lean_ctor_release(x_375, 1);
 lean_ctor_release(x_375, 2);
 x_430 = x_375;
} else {
 lean_dec_ref(x_375);
 x_430 = lean_box(0);
}
x_431 = lean_ctor_get(x_377, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_377, 1);
lean_inc(x_432);
x_433 = lean_ctor_get(x_377, 2);
lean_inc(x_433);
if (lean_is_exclusive(x_377)) {
 lean_ctor_release(x_377, 0);
 lean_ctor_release(x_377, 1);
 lean_ctor_release(x_377, 2);
 x_434 = x_377;
} else {
 lean_dec_ref(x_377);
 x_434 = lean_box(0);
}
if (lean_is_scalar(x_434)) {
 x_435 = lean_alloc_ctor(1, 3, 1);
} else {
 x_435 = x_434;
}
lean_ctor_set(x_435, 0, x_431);
lean_ctor_set(x_435, 1, x_432);
lean_ctor_set(x_435, 2, x_433);
lean_ctor_set_uint8(x_435, sizeof(void*)*3, x_416);
if (lean_is_scalar(x_430)) {
 x_436 = lean_alloc_ctor(1, 3, 1);
} else {
 x_436 = x_430;
}
lean_ctor_set(x_436, 0, x_435);
lean_ctor_set(x_436, 1, x_429);
lean_ctor_set(x_436, 2, x_412);
lean_ctor_set_uint8(x_436, sizeof(void*)*3, x_376);
x_437 = 1;
x_438 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_438, 0, x_436);
lean_ctor_set(x_438, 1, x_372);
lean_ctor_set(x_438, 2, x_373);
lean_ctor_set_uint8(x_438, sizeof(void*)*3, x_437);
return x_438;
}
}
}
}
}
else
{
uint8_t x_439; lean_object* x_440; 
x_439 = 1;
x_440 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_440, 0, x_375);
lean_ctor_set(x_440, 1, x_372);
lean_ctor_set(x_440, 2, x_373);
lean_ctor_set_uint8(x_440, sizeof(void*)*3, x_439);
return x_440;
}
}
case 1:
{
uint8_t x_441; lean_object* x_442; 
lean_dec(x_372);
x_441 = 1;
x_442 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_442, 0, x_371);
lean_ctor_set(x_442, 1, x_1);
lean_ctor_set(x_442, 2, x_373);
lean_ctor_set_uint8(x_442, sizeof(void*)*3, x_441);
return x_442;
}
default: 
{
lean_object* x_443; uint8_t x_444; 
x_443 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_1, x_373);
x_444 = lean_ctor_get_uint8(x_443, sizeof(void*)*3);
if (x_444 == 0)
{
lean_object* x_445; 
x_445 = lean_ctor_get(x_443, 0);
lean_inc(x_445);
if (lean_obj_tag(x_445) == 0)
{
lean_object* x_446; 
x_446 = lean_ctor_get(x_443, 2);
lean_inc(x_446);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; 
x_447 = lean_ctor_get(x_443, 1);
lean_inc(x_447);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_448 = x_443;
} else {
 lean_dec_ref(x_443);
 x_448 = lean_box(0);
}
if (lean_is_scalar(x_448)) {
 x_449 = lean_alloc_ctor(1, 3, 1);
} else {
 x_449 = x_448;
}
lean_ctor_set(x_449, 0, x_446);
lean_ctor_set(x_449, 1, x_447);
lean_ctor_set(x_449, 2, x_446);
lean_ctor_set_uint8(x_449, sizeof(void*)*3, x_444);
x_450 = 1;
x_451 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_451, 0, x_371);
lean_ctor_set(x_451, 1, x_372);
lean_ctor_set(x_451, 2, x_449);
lean_ctor_set_uint8(x_451, sizeof(void*)*3, x_450);
return x_451;
}
else
{
uint8_t x_452; 
x_452 = lean_ctor_get_uint8(x_446, sizeof(void*)*3);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; uint8_t x_459; lean_object* x_460; lean_object* x_461; uint8_t x_462; lean_object* x_463; 
x_453 = lean_ctor_get(x_443, 1);
lean_inc(x_453);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_454 = x_443;
} else {
 lean_dec_ref(x_443);
 x_454 = lean_box(0);
}
x_455 = lean_ctor_get(x_446, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_446, 1);
lean_inc(x_456);
x_457 = lean_ctor_get(x_446, 2);
lean_inc(x_457);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 x_458 = x_446;
} else {
 lean_dec_ref(x_446);
 x_458 = lean_box(0);
}
x_459 = 1;
if (lean_is_scalar(x_458)) {
 x_460 = lean_alloc_ctor(1, 3, 1);
} else {
 x_460 = x_458;
}
lean_ctor_set(x_460, 0, x_371);
lean_ctor_set(x_460, 1, x_372);
lean_ctor_set(x_460, 2, x_445);
lean_ctor_set_uint8(x_460, sizeof(void*)*3, x_459);
if (lean_is_scalar(x_454)) {
 x_461 = lean_alloc_ctor(1, 3, 1);
} else {
 x_461 = x_454;
}
lean_ctor_set(x_461, 0, x_455);
lean_ctor_set(x_461, 1, x_456);
lean_ctor_set(x_461, 2, x_457);
lean_ctor_set_uint8(x_461, sizeof(void*)*3, x_459);
x_462 = 0;
x_463 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_463, 0, x_460);
lean_ctor_set(x_463, 1, x_453);
lean_ctor_set(x_463, 2, x_461);
lean_ctor_set_uint8(x_463, sizeof(void*)*3, x_462);
return x_463;
}
else
{
lean_object* x_464; uint8_t x_465; lean_object* x_466; 
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 x_464 = x_446;
} else {
 lean_dec_ref(x_446);
 x_464 = lean_box(0);
}
x_465 = 1;
if (lean_is_scalar(x_464)) {
 x_466 = lean_alloc_ctor(1, 3, 1);
} else {
 x_466 = x_464;
}
lean_ctor_set(x_466, 0, x_371);
lean_ctor_set(x_466, 1, x_372);
lean_ctor_set(x_466, 2, x_443);
lean_ctor_set_uint8(x_466, sizeof(void*)*3, x_465);
return x_466;
}
}
}
else
{
uint8_t x_467; 
x_467 = lean_ctor_get_uint8(x_445, sizeof(void*)*3);
if (x_467 == 0)
{
lean_object* x_468; 
x_468 = lean_ctor_get(x_443, 2);
lean_inc(x_468);
if (lean_obj_tag(x_468) == 0)
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_476; lean_object* x_477; uint8_t x_478; lean_object* x_479; 
x_469 = lean_ctor_get(x_443, 1);
lean_inc(x_469);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_470 = x_443;
} else {
 lean_dec_ref(x_443);
 x_470 = lean_box(0);
}
x_471 = lean_ctor_get(x_445, 0);
lean_inc(x_471);
x_472 = lean_ctor_get(x_445, 1);
lean_inc(x_472);
x_473 = lean_ctor_get(x_445, 2);
lean_inc(x_473);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_474 = x_445;
} else {
 lean_dec_ref(x_445);
 x_474 = lean_box(0);
}
x_475 = 1;
if (lean_is_scalar(x_474)) {
 x_476 = lean_alloc_ctor(1, 3, 1);
} else {
 x_476 = x_474;
}
lean_ctor_set(x_476, 0, x_371);
lean_ctor_set(x_476, 1, x_372);
lean_ctor_set(x_476, 2, x_471);
lean_ctor_set_uint8(x_476, sizeof(void*)*3, x_475);
if (lean_is_scalar(x_470)) {
 x_477 = lean_alloc_ctor(1, 3, 1);
} else {
 x_477 = x_470;
}
lean_ctor_set(x_477, 0, x_473);
lean_ctor_set(x_477, 1, x_469);
lean_ctor_set(x_477, 2, x_468);
lean_ctor_set_uint8(x_477, sizeof(void*)*3, x_475);
x_478 = 0;
x_479 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_479, 0, x_476);
lean_ctor_set(x_479, 1, x_472);
lean_ctor_set(x_479, 2, x_477);
lean_ctor_set_uint8(x_479, sizeof(void*)*3, x_478);
return x_479;
}
else
{
uint8_t x_480; 
x_480 = lean_ctor_get_uint8(x_468, sizeof(void*)*3);
if (x_480 == 0)
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; uint8_t x_492; lean_object* x_493; lean_object* x_494; uint8_t x_495; lean_object* x_496; 
x_481 = lean_ctor_get(x_443, 1);
lean_inc(x_481);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_482 = x_443;
} else {
 lean_dec_ref(x_443);
 x_482 = lean_box(0);
}
x_483 = lean_ctor_get(x_445, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_445, 1);
lean_inc(x_484);
x_485 = lean_ctor_get(x_445, 2);
lean_inc(x_485);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_486 = x_445;
} else {
 lean_dec_ref(x_445);
 x_486 = lean_box(0);
}
x_487 = lean_ctor_get(x_468, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_468, 1);
lean_inc(x_488);
x_489 = lean_ctor_get(x_468, 2);
lean_inc(x_489);
if (lean_is_exclusive(x_468)) {
 lean_ctor_release(x_468, 0);
 lean_ctor_release(x_468, 1);
 lean_ctor_release(x_468, 2);
 x_490 = x_468;
} else {
 lean_dec_ref(x_468);
 x_490 = lean_box(0);
}
if (lean_is_scalar(x_490)) {
 x_491 = lean_alloc_ctor(1, 3, 1);
} else {
 x_491 = x_490;
}
lean_ctor_set(x_491, 0, x_483);
lean_ctor_set(x_491, 1, x_484);
lean_ctor_set(x_491, 2, x_485);
lean_ctor_set_uint8(x_491, sizeof(void*)*3, x_480);
x_492 = 1;
if (lean_is_scalar(x_486)) {
 x_493 = lean_alloc_ctor(1, 3, 1);
} else {
 x_493 = x_486;
}
lean_ctor_set(x_493, 0, x_371);
lean_ctor_set(x_493, 1, x_372);
lean_ctor_set(x_493, 2, x_491);
lean_ctor_set_uint8(x_493, sizeof(void*)*3, x_492);
if (lean_is_scalar(x_482)) {
 x_494 = lean_alloc_ctor(1, 3, 1);
} else {
 x_494 = x_482;
}
lean_ctor_set(x_494, 0, x_487);
lean_ctor_set(x_494, 1, x_488);
lean_ctor_set(x_494, 2, x_489);
lean_ctor_set_uint8(x_494, sizeof(void*)*3, x_492);
x_495 = 0;
x_496 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_496, 0, x_493);
lean_ctor_set(x_496, 1, x_481);
lean_ctor_set(x_496, 2, x_494);
lean_ctor_set_uint8(x_496, sizeof(void*)*3, x_495);
return x_496;
}
else
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; uint8_t x_503; lean_object* x_504; lean_object* x_505; uint8_t x_506; lean_object* x_507; 
x_497 = lean_ctor_get(x_443, 1);
lean_inc(x_497);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_498 = x_443;
} else {
 lean_dec_ref(x_443);
 x_498 = lean_box(0);
}
x_499 = lean_ctor_get(x_445, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_445, 1);
lean_inc(x_500);
x_501 = lean_ctor_get(x_445, 2);
lean_inc(x_501);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_502 = x_445;
} else {
 lean_dec_ref(x_445);
 x_502 = lean_box(0);
}
x_503 = 1;
if (lean_is_scalar(x_502)) {
 x_504 = lean_alloc_ctor(1, 3, 1);
} else {
 x_504 = x_502;
}
lean_ctor_set(x_504, 0, x_371);
lean_ctor_set(x_504, 1, x_372);
lean_ctor_set(x_504, 2, x_499);
lean_ctor_set_uint8(x_504, sizeof(void*)*3, x_503);
if (lean_is_scalar(x_498)) {
 x_505 = lean_alloc_ctor(1, 3, 1);
} else {
 x_505 = x_498;
}
lean_ctor_set(x_505, 0, x_501);
lean_ctor_set(x_505, 1, x_497);
lean_ctor_set(x_505, 2, x_468);
lean_ctor_set_uint8(x_505, sizeof(void*)*3, x_503);
x_506 = 0;
x_507 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_507, 0, x_504);
lean_ctor_set(x_507, 1, x_500);
lean_ctor_set(x_507, 2, x_505);
lean_ctor_set_uint8(x_507, sizeof(void*)*3, x_506);
return x_507;
}
}
}
else
{
lean_object* x_508; 
x_508 = lean_ctor_get(x_443, 2);
lean_inc(x_508);
if (lean_obj_tag(x_508) == 0)
{
lean_object* x_509; uint8_t x_510; lean_object* x_511; 
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_509 = x_445;
} else {
 lean_dec_ref(x_445);
 x_509 = lean_box(0);
}
x_510 = 1;
if (lean_is_scalar(x_509)) {
 x_511 = lean_alloc_ctor(1, 3, 1);
} else {
 x_511 = x_509;
}
lean_ctor_set(x_511, 0, x_371);
lean_ctor_set(x_511, 1, x_372);
lean_ctor_set(x_511, 2, x_443);
lean_ctor_set_uint8(x_511, sizeof(void*)*3, x_510);
return x_511;
}
else
{
uint8_t x_512; 
x_512 = lean_ctor_get_uint8(x_508, sizeof(void*)*3);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; uint8_t x_523; lean_object* x_524; 
x_513 = lean_ctor_get(x_443, 1);
lean_inc(x_513);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_514 = x_443;
} else {
 lean_dec_ref(x_443);
 x_514 = lean_box(0);
}
x_515 = lean_ctor_get(x_508, 0);
lean_inc(x_515);
x_516 = lean_ctor_get(x_508, 1);
lean_inc(x_516);
x_517 = lean_ctor_get(x_508, 2);
lean_inc(x_517);
if (lean_is_exclusive(x_508)) {
 lean_ctor_release(x_508, 0);
 lean_ctor_release(x_508, 1);
 lean_ctor_release(x_508, 2);
 x_518 = x_508;
} else {
 lean_dec_ref(x_508);
 x_518 = lean_box(0);
}
x_519 = 1;
lean_inc(x_445);
if (lean_is_scalar(x_518)) {
 x_520 = lean_alloc_ctor(1, 3, 1);
} else {
 x_520 = x_518;
}
lean_ctor_set(x_520, 0, x_371);
lean_ctor_set(x_520, 1, x_372);
lean_ctor_set(x_520, 2, x_445);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_521 = x_445;
} else {
 lean_dec_ref(x_445);
 x_521 = lean_box(0);
}
lean_ctor_set_uint8(x_520, sizeof(void*)*3, x_519);
if (lean_is_scalar(x_521)) {
 x_522 = lean_alloc_ctor(1, 3, 1);
} else {
 x_522 = x_521;
}
lean_ctor_set(x_522, 0, x_515);
lean_ctor_set(x_522, 1, x_516);
lean_ctor_set(x_522, 2, x_517);
lean_ctor_set_uint8(x_522, sizeof(void*)*3, x_519);
x_523 = 0;
if (lean_is_scalar(x_514)) {
 x_524 = lean_alloc_ctor(1, 3, 1);
} else {
 x_524 = x_514;
}
lean_ctor_set(x_524, 0, x_520);
lean_ctor_set(x_524, 1, x_513);
lean_ctor_set(x_524, 2, x_522);
lean_ctor_set_uint8(x_524, sizeof(void*)*3, x_523);
return x_524;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; uint8_t x_533; lean_object* x_534; 
x_525 = lean_ctor_get(x_443, 1);
lean_inc(x_525);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 lean_ctor_release(x_443, 2);
 x_526 = x_443;
} else {
 lean_dec_ref(x_443);
 x_526 = lean_box(0);
}
x_527 = lean_ctor_get(x_445, 0);
lean_inc(x_527);
x_528 = lean_ctor_get(x_445, 1);
lean_inc(x_528);
x_529 = lean_ctor_get(x_445, 2);
lean_inc(x_529);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 lean_ctor_release(x_445, 2);
 x_530 = x_445;
} else {
 lean_dec_ref(x_445);
 x_530 = lean_box(0);
}
if (lean_is_scalar(x_530)) {
 x_531 = lean_alloc_ctor(1, 3, 1);
} else {
 x_531 = x_530;
}
lean_ctor_set(x_531, 0, x_527);
lean_ctor_set(x_531, 1, x_528);
lean_ctor_set(x_531, 2, x_529);
lean_ctor_set_uint8(x_531, sizeof(void*)*3, x_512);
if (lean_is_scalar(x_526)) {
 x_532 = lean_alloc_ctor(1, 3, 1);
} else {
 x_532 = x_526;
}
lean_ctor_set(x_532, 0, x_531);
lean_ctor_set(x_532, 1, x_525);
lean_ctor_set(x_532, 2, x_508);
lean_ctor_set_uint8(x_532, sizeof(void*)*3, x_444);
x_533 = 1;
x_534 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_534, 0, x_371);
lean_ctor_set(x_534, 1, x_372);
lean_ctor_set(x_534, 2, x_532);
lean_ctor_set_uint8(x_534, sizeof(void*)*3, x_533);
return x_534;
}
}
}
}
}
else
{
uint8_t x_535; lean_object* x_536; 
x_535 = 1;
x_536 = lean_alloc_ctor(1, 3, 1);
lean_ctor_set(x_536, 0, x_371);
lean_ctor_set(x_536, 1, x_372);
lean_ctor_set(x_536, 2, x_443);
lean_ctor_set_uint8(x_536, sizeof(void*)*3, x_535);
return x_536;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_2, x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_2, x_1);
x_6 = l_Batteries_RBNode_setBlack___rarg(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = l_Batteries_RBNode_ins___at_Linarith_elimWithSet___spec__2(x_2, x_1);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_elimWithSet___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 2);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Batteries_RBNode_foldl___at_Linarith_elimWithSet___spec__3(x_1, x_2, x_3, x_5);
lean_inc(x_1);
lean_inc(x_2);
x_9 = l_Linarith_pelimVar(x_2, x_6, x_1);
if (lean_obj_tag(x_9) == 0)
{
x_3 = x_8;
x_4 = x_7;
goto _start;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
lean_inc(x_11);
x_12 = l_Linarith_PComp_maybeMinimal(x_11, x_1);
if (x_12 == 0)
{
lean_dec(x_11);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_8, x_11);
x_3 = x_14;
x_4 = x_7;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_elimWithSet(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Batteries_RBNode_foldl___at_Linarith_elimWithSet___spec__3(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_getMaxVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Linarith_getMaxVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Linarith_getMaxVar(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_getPCompSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Linarith_getPCompSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Linarith_getPCompSet(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Linarith_validate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_PComp_isContr___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Linarith_validate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Linarith_getPCompSet(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_5, 0);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
x_14 = l_Batteries_RBNode_toList___rarg(x_12);
lean_dec(x_12);
x_15 = l_Linarith_validate___closed__1;
x_16 = l_List_find_x3f___rarg(x_15, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_box(0);
lean_ctor_set(x_9, 0, x_17);
return x_5;
}
else
{
lean_object* x_18; 
lean_free_object(x_9);
lean_dec(x_13);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_18);
return x_5;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = l_Batteries_RBNode_toList___rarg(x_19);
lean_dec(x_19);
x_22 = l_Linarith_validate___closed__1;
x_23 = l_List_find_x3f___rarg(x_22, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_6, 0, x_25);
return x_5;
}
else
{
lean_object* x_26; 
lean_dec(x_20);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_26);
return x_5;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_6, 0);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_dec(x_5);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_31 = x_27;
} else {
 lean_dec_ref(x_27);
 x_31 = lean_box(0);
}
x_32 = l_Batteries_RBNode_toList___rarg(x_29);
lean_dec(x_29);
x_33 = l_Linarith_validate___closed__1;
x_34 = l_List_find_x3f___rarg(x_33, x_32);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_31;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_30);
lean_ctor_set(x_6, 0, x_36);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_6);
lean_ctor_set(x_37, 1, x_28);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_31);
lean_dec(x_30);
x_38 = lean_ctor_get(x_34, 0);
lean_inc(x_38);
lean_dec(x_34);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_38);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_6);
lean_ctor_set(x_39, 1, x_28);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_40 = lean_ctor_get(x_6, 0);
lean_inc(x_40);
lean_dec(x_6);
x_41 = lean_ctor_get(x_5, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_42 = x_5;
} else {
 lean_dec_ref(x_5);
 x_42 = lean_box(0);
}
x_43 = lean_ctor_get(x_40, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_45 = x_40;
} else {
 lean_dec_ref(x_40);
 x_45 = lean_box(0);
}
x_46 = l_Batteries_RBNode_toList___rarg(x_43);
lean_dec(x_43);
x_47 = l_Linarith_validate___closed__1;
x_48 = l_List_find_x3f___rarg(x_47, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_box(0);
if (lean_is_scalar(x_45)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_45;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_44);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
if (lean_is_scalar(x_42)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_42;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_41);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_45);
lean_dec(x_44);
x_53 = lean_ctor_get(x_48, 0);
lean_inc(x_53);
lean_dec(x_48);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
if (lean_is_scalar(x_42)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_42;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_41);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_validate___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Linarith_validate(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_update(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
x_8 = l_Linarith_validate(x_7, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Linarith_update___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Linarith_update(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1(x_1, x_2, x_4);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 1);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
x_15 = l_Linarith_Comp_coeffOf(x_14, x_1);
lean_dec(x_14);
x_16 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_17 = lean_int_dec_lt(x_16, x_15);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = lean_int_dec_lt(x_15, x_16);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_13, x_5);
lean_ctor_set(x_9, 1, x_19);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_12, x_5);
lean_ctor_set(x_9, 0, x_21);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_23; 
lean_dec(x_15);
x_23 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_11, x_5);
lean_ctor_set(x_7, 0, x_23);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_9, 0);
x_27 = lean_ctor_get(x_9, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_9);
x_28 = lean_ctor_get(x_5, 0);
lean_inc(x_28);
x_29 = l_Linarith_Comp_coeffOf(x_28, x_1);
lean_dec(x_28);
x_30 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_31 = lean_int_dec_lt(x_30, x_29);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = lean_int_dec_lt(x_29, x_30);
lean_dec(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_27, x_5);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_7, 1, x_34);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_26, x_5);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_7, 1, x_37);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
x_39 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_25, x_5);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_26);
lean_ctor_set(x_40, 1, x_27);
lean_ctor_set(x_7, 1, x_40);
lean_ctor_set(x_7, 0, x_39);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_42 = lean_ctor_get(x_7, 1);
x_43 = lean_ctor_get(x_7, 0);
lean_inc(x_42);
lean_inc(x_43);
lean_dec(x_7);
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
x_47 = lean_ctor_get(x_5, 0);
lean_inc(x_47);
x_48 = l_Linarith_Comp_coeffOf(x_47, x_1);
lean_dec(x_47);
x_49 = l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3;
x_50 = lean_int_dec_lt(x_49, x_48);
if (x_50 == 0)
{
uint8_t x_51; 
x_51 = lean_int_dec_lt(x_48, x_49);
lean_dec(x_48);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_45, x_5);
if (lean_is_scalar(x_46)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_46;
}
lean_ctor_set(x_53, 0, x_44);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_53);
x_2 = x_54;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_44, x_5);
if (lean_is_scalar(x_46)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_46;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_45);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_43);
lean_ctor_set(x_58, 1, x_57);
x_2 = x_58;
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_48);
x_60 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_43, x_5);
if (lean_is_scalar(x_46)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_46;
}
lean_ctor_set(x_61, 0, x_44);
lean_ctor_set(x_61, 1, x_45);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_2 = x_62;
x_3 = x_6;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Linarith_splitSetByVarSign___closed__1() {
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
static lean_object* _init_l_Linarith_splitSetByVarSign___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Linarith_splitSetByVarSign___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_splitSetByVarSign(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Linarith_splitSetByVarSign___closed__2;
x_4 = l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Batteries_RBNode_foldl___at_Linarith_splitSetByVarSign___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Linarith_splitSetByVarSign___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Linarith_splitSetByVarSign(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_PComp_cmp___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
lean_dec(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
lean_inc(x_2);
x_22 = l_Lean_Core_checkSystem(x_2, x_7, x_8, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_3);
lean_inc(x_1);
x_24 = l_Linarith_elimWithSet(x_1, x_14, x_3);
x_25 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1;
x_26 = l_Batteries_RBNode_foldl___at_Batteries_RBSet_union___spec__1___rarg(x_25, x_20, x_24);
x_4 = x_26;
x_5 = x_15;
x_6 = x_21;
x_9 = x_23;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Linarith_elimVarM___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Linarith_elimVarM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Linarith", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_elimVarM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("elimVarM", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Linarith_elimVarM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_elimVarM___closed__1;
x_2 = l_Linarith_elimVarM___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_elimVarM___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_elimVarM___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_elimVarM___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Linarith_elimVarM___closed__3;
x_2 = 1;
x_3 = l_Linarith_elimVarM___closed__4;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Linarith_elimVarM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Linarith_getMaxVar(x_2, x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_ctor_get(x_6, 0);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
x_16 = lean_nat_dec_le(x_1, x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_1);
x_17 = lean_box(0);
lean_ctor_set(x_10, 0, x_17);
return x_6;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_10);
lean_free_object(x_6);
lean_free_object(x_7);
x_18 = l_Linarith_elimVarM___closed__5;
x_19 = l_Lean_Core_checkSystem(x_18, x_3, x_4, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Linarith_getPCompSet(x_15, x_3, x_4, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l_Linarith_splitSetByVarSign(x_1, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_18, x_30, x_31, x_29, x_26, x_3, x_4, x_24);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_sub(x_14, x_38);
lean_dec(x_14);
x_40 = l_Linarith_update(x_39, x_36, x_37, x_3, x_4, x_35);
lean_dec(x_37);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_14);
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 0);
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_32);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_19);
if (x_45 == 0)
{
return x_19;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_19, 0);
x_47 = lean_ctor_get(x_19, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_19);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_10, 0);
x_50 = lean_ctor_get(x_10, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_10);
x_51 = lean_nat_dec_le(x_1, x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_1);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
lean_ctor_set(x_7, 0, x_53);
return x_6;
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_free_object(x_6);
lean_free_object(x_7);
x_54 = l_Linarith_elimVarM___closed__5;
x_55 = l_Lean_Core_checkSystem(x_54, x_3, x_4, x_11);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Linarith_getPCompSet(x_50, x_3, x_4, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = l_Linarith_splitSetByVarSign(x_1, x_61);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_dec(x_64);
x_68 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_54, x_66, x_67, x_65, x_62, x_3, x_4, x_60);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_dec(x_68);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_sub(x_49, x_74);
lean_dec(x_49);
x_76 = l_Linarith_update(x_75, x_72, x_73, x_3, x_4, x_71);
lean_dec(x_73);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_49);
x_77 = lean_ctor_get(x_68, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_68, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_79 = x_68;
} else {
 lean_dec_ref(x_68);
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
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_1);
x_81 = lean_ctor_get(x_55, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_55, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_83 = x_55;
} else {
 lean_dec_ref(x_55);
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
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_85 = lean_ctor_get(x_7, 0);
x_86 = lean_ctor_get(x_6, 1);
lean_inc(x_86);
lean_dec(x_6);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_89 = x_85;
} else {
 lean_dec_ref(x_85);
 x_89 = lean_box(0);
}
x_90 = lean_nat_dec_le(x_1, x_87);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_87);
lean_dec(x_1);
x_91 = lean_box(0);
if (lean_is_scalar(x_89)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_89;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_88);
lean_ctor_set(x_7, 0, x_92);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_7);
lean_ctor_set(x_93, 1, x_86);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_89);
lean_free_object(x_7);
x_94 = l_Linarith_elimVarM___closed__5;
x_95 = l_Lean_Core_checkSystem(x_94, x_3, x_4, x_86);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_Linarith_getPCompSet(x_88, x_3, x_4, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_ctor_get(x_97, 1);
lean_inc(x_100);
lean_dec(x_97);
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_dec(x_99);
x_103 = l_Linarith_splitSetByVarSign(x_1, x_101);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_ctor_get(x_104, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_104, 1);
lean_inc(x_107);
lean_dec(x_104);
x_108 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_94, x_106, x_107, x_105, x_102, x_3, x_4, x_100);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
lean_dec(x_109);
x_111 = lean_ctor_get(x_108, 1);
lean_inc(x_111);
lean_dec(x_108);
x_112 = lean_ctor_get(x_110, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_110, 1);
lean_inc(x_113);
lean_dec(x_110);
x_114 = lean_unsigned_to_nat(1u);
x_115 = lean_nat_sub(x_87, x_114);
lean_dec(x_87);
x_116 = l_Linarith_update(x_115, x_112, x_113, x_3, x_4, x_111);
lean_dec(x_113);
return x_116;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_87);
x_117 = lean_ctor_get(x_108, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_108, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_119 = x_108;
} else {
 lean_dec_ref(x_108);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_1);
x_121 = lean_ctor_get(x_95, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_95, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_123 = x_95;
} else {
 lean_dec_ref(x_95);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_125 = lean_ctor_get(x_7, 0);
lean_inc(x_125);
lean_dec(x_7);
x_126 = lean_ctor_get(x_6, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_127 = x_6;
} else {
 lean_dec_ref(x_6);
 x_127 = lean_box(0);
}
x_128 = lean_ctor_get(x_125, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_130 = x_125;
} else {
 lean_dec_ref(x_125);
 x_130 = lean_box(0);
}
x_131 = lean_nat_dec_le(x_1, x_128);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_128);
lean_dec(x_1);
x_132 = lean_box(0);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_129);
x_134 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_134, 0, x_133);
if (lean_is_scalar(x_127)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_127;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_126);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_130);
lean_dec(x_127);
x_136 = l_Linarith_elimVarM___closed__5;
x_137 = l_Lean_Core_checkSystem(x_136, x_3, x_4, x_126);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
lean_dec(x_137);
x_139 = l_Linarith_getPCompSet(x_129, x_3, x_4, x_138);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
lean_dec(x_140);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
lean_dec(x_139);
x_143 = lean_ctor_get(x_141, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_141, 1);
lean_inc(x_144);
lean_dec(x_141);
x_145 = l_Linarith_splitSetByVarSign(x_1, x_143);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 0);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_ctor_get(x_146, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_150 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_136, x_148, x_149, x_147, x_144, x_3, x_4, x_142);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
lean_dec(x_151);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
lean_dec(x_150);
x_154 = lean_ctor_get(x_152, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
lean_dec(x_152);
x_156 = lean_unsigned_to_nat(1u);
x_157 = lean_nat_sub(x_128, x_156);
lean_dec(x_128);
x_158 = l_Linarith_update(x_157, x_154, x_155, x_3, x_4, x_153);
lean_dec(x_155);
return x_158;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_128);
x_159 = lean_ctor_get(x_150, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_150, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_161 = x_150;
} else {
 lean_dec_ref(x_150);
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
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_1);
x_163 = lean_ctor_get(x_137, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_137, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_165 = x_137;
} else {
 lean_dec_ref(x_137);
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
}
}
}
LEAN_EXPORT lean_object* l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Linarith_elimVarM___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Linarith_elimVarM___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_elimVarM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Linarith_elimVarM(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = l_Linarith_elimVarM(x_14, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_16, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_16, 0, x_22);
return x_16;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_dec(x_16);
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_25 = x_17;
} else {
 lean_dec_ref(x_17);
 x_25 = lean_box(0);
}
if (lean_is_scalar(x_25)) {
 x_26 = lean_alloc_ctor(0, 1, 0);
} else {
 x_26 = x_25;
}
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_17, 0);
lean_inc(x_28);
lean_dec(x_17);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_dec(x_16);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(0);
x_4 = x_15;
x_5 = x_31;
x_6 = lean_box(0);
x_7 = x_30;
x_10 = x_29;
goto _start;
}
}
else
{
uint8_t x_33; 
lean_dec(x_15);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_elimAllVarsM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_5 = l_Linarith_getMaxVar(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
x_13 = l_List_range(x_12);
x_14 = l_List_reverse___rarg(x_13);
x_15 = lean_box(0);
x_16 = lean_box(0);
lean_inc(x_14);
x_17 = l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1(x_14, x_15, x_14, x_14, x_16, lean_box(0), x_10, x_2, x_3, x_8);
lean_dec(x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_ctor_get(x_18, 0);
lean_inc(x_25);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 x_26 = x_18;
} else {
 lean_dec_ref(x_18);
 x_26 = lean_box(0);
}
if (lean_is_scalar(x_26)) {
 x_27 = lean_alloc_ctor(0, 1, 0);
} else {
 x_27 = x_26;
}
lean_ctor_set(x_27, 0, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_18);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_17, 0);
lean_dec(x_32);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 0);
lean_dec(x_34);
lean_ctor_set(x_31, 0, x_16);
return x_17;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_16);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_18, 0, x_36);
return x_17;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_dec(x_17);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_16);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_18, 0, x_41);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_18);
lean_ctor_set(x_42, 1, x_38);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_ctor_get(x_18, 0);
lean_inc(x_43);
lean_dec(x_18);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_45 = x_17;
} else {
 lean_dec_ref(x_17);
 x_45 = lean_box(0);
}
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_47 = x_43;
} else {
 lean_dec_ref(x_43);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_16);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
if (lean_is_scalar(x_45)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_45;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_44);
return x_50;
}
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_17);
if (x_51 == 0)
{
return x_17;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_17, 0);
x_53 = lean_ctor_get(x_17, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_17);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forIn_x27_loop___at_Linarith_elimAllVarsM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Linarith_elimAllVarsM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Linarith_elimAllVarsM(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at_Linarith_mkLinarithData___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_array_get_size(x_2);
x_7 = l_Linarith_PComp_assump(x_4, x_6);
x_8 = lean_array_push(x_2, x_7);
x_1 = x_5;
x_2 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Linarith_mkLinarithData___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_5 = l_Batteries_RBNode_insert___at_Linarith_elimWithSet___spec__1(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
static lean_object* _init_l_Linarith_mkLinarithData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_mkLinarithData(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Linarith_mkLinarithData___closed__1;
x_4 = l_List_mapIdx_go___at_Linarith_mkLinarithData___spec__1(x_1, x_3);
x_5 = lean_box(0);
x_6 = l_List_foldl___at_Linarith_mkLinarithData___spec__2(x_5, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
static lean_object* _init_l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_18; lean_object* x_19; 
x_8 = l_Linarith_mkLinarithData(x_1, x_2);
x_18 = l_Linarith_validate(x_8, x_5, x_6, x_7);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
x_9 = x_19;
x_10 = x_20;
goto block_17;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_9 = x_23;
x_10 = x_20;
goto block_17;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Linarith_elimAllVarsM(x_26, x_5, x_6, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_9 = x_28;
x_10 = x_29;
goto block_17;
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
block_17:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Linarith_CompSource_flatten(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
x_15 = l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2;
x_16 = l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1(x_15, x_3, x_4, x_5, x_6, x_10);
return x_16;
}
}
}
}
static lean_object* _init_l_Linarith_CertificateOracle_fourierMotzkin___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Linarith_CertificateOracle_fourierMotzkin() {
_start:
{
lean_object* x_1; 
x_1 = l_Linarith_CertificateOracle_fourierMotzkin___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Linarith_CertificateOracle_fourierMotzkin___elambda__1___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Linarith_CertificateOracle_fourierMotzkin___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Std_Data_HashMap(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Lean_HashMap(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Datatypes(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_FourierMotzkin(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Std_Data_HashMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Lean_HashMap(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Datatypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Linarith_instInhabitedCompSource___closed__1 = _init_l_Linarith_instInhabitedCompSource___closed__1();
lean_mark_persistent(l_Linarith_instInhabitedCompSource___closed__1);
l_Linarith_instInhabitedCompSource = _init_l_Linarith_instInhabitedCompSource();
lean_mark_persistent(l_Linarith_instInhabitedCompSource);
l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1 = _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1();
lean_mark_persistent(l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__1);
l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2 = _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2();
lean_mark_persistent(l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__2);
l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3 = _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3();
lean_mark_persistent(l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__3);
l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4 = _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4();
lean_mark_persistent(l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__4);
l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5 = _init_l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5();
lean_mark_persistent(l_Std_HashMap_mapVal___at_Linarith_CompSource_flatten___spec__3___closed__5);
l_Linarith_CompSource_flatten___closed__1 = _init_l_Linarith_CompSource_flatten___closed__1();
lean_mark_persistent(l_Linarith_CompSource_flatten___closed__1);
l_Linarith_CompSource_flatten___closed__2 = _init_l_Linarith_CompSource_flatten___closed__2();
l_Linarith_CompSource_flatten___closed__3 = _init_l_Linarith_CompSource_flatten___closed__3();
l_Linarith_CompSource_toString___closed__1 = _init_l_Linarith_CompSource_toString___closed__1();
lean_mark_persistent(l_Linarith_CompSource_toString___closed__1);
l_Linarith_CompSource_toString___closed__2 = _init_l_Linarith_CompSource_toString___closed__2();
lean_mark_persistent(l_Linarith_CompSource_toString___closed__2);
l_Linarith_PComp_maybeMinimal___closed__1 = _init_l_Linarith_PComp_maybeMinimal___closed__1();
lean_mark_persistent(l_Linarith_PComp_maybeMinimal___closed__1);
l_Linarith_instToFormatPComp___closed__1 = _init_l_Linarith_instToFormatPComp___closed__1();
lean_mark_persistent(l_Linarith_instToFormatPComp___closed__1);
l_Linarith_instToFormatPComp___closed__2 = _init_l_Linarith_instToFormatPComp___closed__2();
lean_mark_persistent(l_Linarith_instToFormatPComp___closed__2);
l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1 = _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1();
lean_mark_persistent(l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__1);
l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2 = _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2();
lean_mark_persistent(l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__2);
l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3 = _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3();
lean_mark_persistent(l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__3);
l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4 = _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4();
lean_mark_persistent(l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__4);
l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5 = _init_l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5();
lean_mark_persistent(l_List_foldl___at_Linarith_instToStringPComp___spec__2___closed__5);
l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1 = _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1();
lean_mark_persistent(l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__1);
l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2 = _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2();
lean_mark_persistent(l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__2);
l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3 = _init_l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3();
lean_mark_persistent(l_List_toString___at_Linarith_instToStringPComp___spec__1___closed__3);
l_Linarith_validate___closed__1 = _init_l_Linarith_validate___closed__1();
lean_mark_persistent(l_Linarith_validate___closed__1);
l_Linarith_splitSetByVarSign___closed__1 = _init_l_Linarith_splitSetByVarSign___closed__1();
lean_mark_persistent(l_Linarith_splitSetByVarSign___closed__1);
l_Linarith_splitSetByVarSign___closed__2 = _init_l_Linarith_splitSetByVarSign___closed__2();
lean_mark_persistent(l_Linarith_splitSetByVarSign___closed__2);
l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1 = _init_l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1();
lean_mark_persistent(l_Batteries_RBNode_foldlM___at_Linarith_elimVarM___spec__1___closed__1);
l_Linarith_elimVarM___closed__1 = _init_l_Linarith_elimVarM___closed__1();
lean_mark_persistent(l_Linarith_elimVarM___closed__1);
l_Linarith_elimVarM___closed__2 = _init_l_Linarith_elimVarM___closed__2();
lean_mark_persistent(l_Linarith_elimVarM___closed__2);
l_Linarith_elimVarM___closed__3 = _init_l_Linarith_elimVarM___closed__3();
lean_mark_persistent(l_Linarith_elimVarM___closed__3);
l_Linarith_elimVarM___closed__4 = _init_l_Linarith_elimVarM___closed__4();
lean_mark_persistent(l_Linarith_elimVarM___closed__4);
l_Linarith_elimVarM___closed__5 = _init_l_Linarith_elimVarM___closed__5();
lean_mark_persistent(l_Linarith_elimVarM___closed__5);
l_Linarith_mkLinarithData___closed__1 = _init_l_Linarith_mkLinarithData___closed__1();
lean_mark_persistent(l_Linarith_mkLinarithData___closed__1);
l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1 = _init_l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1();
lean_mark_persistent(l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__1);
l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2 = _init_l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2();
lean_mark_persistent(l_Linarith_CertificateOracle_fourierMotzkin___elambda__1___closed__2);
l_Linarith_CertificateOracle_fourierMotzkin___closed__1 = _init_l_Linarith_CertificateOracle_fourierMotzkin___closed__1();
lean_mark_persistent(l_Linarith_CertificateOracle_fourierMotzkin___closed__1);
l_Linarith_CertificateOracle_fourierMotzkin = _init_l_Linarith_CertificateOracle_fourierMotzkin();
lean_mark_persistent(l_Linarith_CertificateOracle_fourierMotzkin);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
