// Lean compiler output
// Module: Mathlib.Tactic.FunProp.ToBatteries
// Imports: Init Mathlib.Init
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
static lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_betaThroughLet(lean_object*, lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_swapBVars(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_FVarId_isLetVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_headBetaThroughLet(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_swapBVars___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_etaExpand1___closed__2;
uint8_t l_Lean_Expr_isHeadBetaTargetFn(uint8_t, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2;
lean_object* l_Array_range___lambda__1___boxed(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdElem___closed__1;
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
static lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___rarg(lean_object*, lean_object*);
static uint64_t l_Mathlib_Meta_FunProp_etaExpand1___closed__1;
lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdSplitElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate(lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1;
lean_object* l_outOfBounds___rarg(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf(lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdProj___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
LEAN_EXPORT uint8_t l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdProj___closed__5;
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_betaThroughLetAux(lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdProj___closed__4;
static lean_object* l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Mathlib_Meta_FunProp_mkProdProj___closed__2;
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Mathlib_Meta_FunProp_mkProdProj___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT uint8_t l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_7, x_9);
lean_dec(x_9);
x_11 = lean_nat_dec_lt(x_2, x_3);
if (x_10 == 0)
{
lean_object* x_12; 
lean_inc(x_4);
x_12 = l_outOfBounds___rarg(x_4);
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_outOfBounds___rarg(x_4);
x_14 = lean_apply_2(x_5, x_12, x_13);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_7, x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_4);
x_20 = lean_array_fget(x_6, x_2);
x_21 = lean_apply_2(x_5, x_12, x_20);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_7);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_7, x_24);
lean_dec(x_7);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; 
x_27 = lean_array_fget(x_1, x_7);
if (x_11 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = l_outOfBounds___rarg(x_4);
x_29 = lean_apply_2(x_5, x_27, x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_7);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_7, x_32);
lean_dec(x_7);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_4);
x_35 = lean_array_fget(x_6, x_2);
x_36 = lean_apply_2(x_5, x_27, x_35);
x_37 = lean_unbox(x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_7);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_7, x_39);
lean_dec(x_7);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_nat_dec_lt(x_9, x_12);
if (x_13 == 0)
{
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_get_size(x_3);
x_15 = lean_nat_dec_eq(x_8, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1(x_3, x_9, x_5, x_1, x_2, x_4, x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_7, 2);
x_20 = lean_nat_add(x_9, x_19);
lean_dec(x_9);
x_8 = x_18;
x_9 = x_20;
x_10 = lean_box(0);
x_11 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_unsigned_to_nat(1u);
lean_inc(x_6);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_8);
x_10 = l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg(x_2, x_3, x_4, x_1, x_6, x_9, x_9, x_7, x_7, lean_box(0), lean_box(0));
lean_dec(x_9);
lean_dec(x_6);
x_11 = lean_array_get_size(x_4);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
LEAN_EXPORT uint8_t l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_box(0);
x_9 = l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1(x_4, x_1, x_2, x_3, x_8);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = 0;
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_x27_loop___at_Mathlib_Meta_FunProp_isOrderedSubsetOf___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Mathlib_Meta_FunProp_isOrderedSubsetOf___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_6, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_33; lean_object* x_34; 
x_15 = lean_array_uget(x_4, x_6);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_17 = x_7;
} else {
 lean_dec_ref(x_7);
 x_17 = lean_box(0);
}
x_33 = l_Lean_Expr_fvarId_x21(x_15);
lean_dec(x_15);
lean_inc(x_8);
x_34 = l_Lean_FVarId_isLetVar(x_33, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = 1;
x_18 = x_38;
x_19 = x_37;
goto block_32;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = 0;
x_18 = x_40;
x_19 = x_39;
goto block_32;
}
}
else
{
uint8_t x_41; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_3);
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
block_32:
{
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_17);
x_20 = lean_box(0);
lean_inc(x_3);
x_21 = l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1(x_3, x_16, x_20, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_16);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = lean_usize_add(x_6, x_25);
x_6 = x_26;
x_7 = x_24;
x_12 = x_23;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_8);
lean_dec(x_3);
lean_inc(x_16);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_16);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
if (lean_is_scalar(x_17)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_17;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_16);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_19);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
static lean_object* _init_l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_35; lean_object* x_36; 
x_9 = lean_box(0);
x_10 = lean_box(0);
x_11 = lean_array_size(x_2);
x_12 = 0;
x_35 = l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1;
lean_inc(x_4);
x_36 = l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1(x_2, x_9, x_10, x_2, x_11, x_12, x_35, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_13 = x_10;
x_14 = x_39;
goto block_34;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
x_13 = x_41;
x_14 = x_40;
goto block_34;
}
}
else
{
uint8_t x_42; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_36);
if (x_42 == 0)
{
return x_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_36, 0);
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_36);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
block_34:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; 
x_15 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_array_get_size(x_2);
lean_inc(x_16);
lean_inc(x_2);
x_18 = l_Array_toSubarray___rarg(x_2, x_16, x_17);
x_19 = l_Array_ofSubarray___rarg(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = 1;
x_22 = 1;
x_23 = l_Lean_Meta_mkLambdaFVars(x_19, x_3, x_20, x_21, x_20, x_22, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Array_toSubarray___rarg(x_2, x_26, x_16);
x_28 = l_Array_ofSubarray___rarg(x_27);
lean_dec(x_27);
x_29 = lean_apply_7(x_1, x_28, x_24, x_4, x_5, x_6, x_7, x_25);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_23);
if (x_30 == 0)
{
return x_23;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_23, 0);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_23);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2), 8, 1);
lean_closure_set(x_8, 0, x_2);
x_9 = 0;
x_10 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_1, x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Array_forIn_x27Unsafe_loop___at___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___spec__1(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_1, x_3, x_4);
x_11 = lean_apply_7(x_2, lean_box(0), x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__1), 9, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg(x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_letTelescope___rarg___lambda__2), 8, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_1(x_9, lean_box(0));
x_11 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_letTelescope(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_letTelescope___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_nat_dec_lt(x_6, x_9);
if (x_10 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_eq(x_6, x_1);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = lean_nat_dec_eq(x_6, x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_6);
x_13 = l_Lean_Expr_bvar___override(x_6);
x_14 = lean_array_push(x_5, x_13);
x_15 = lean_ctor_get(x_4, 2);
x_16 = lean_nat_add(x_6, x_15);
lean_dec(x_6);
x_5 = x_14;
x_6 = x_16;
x_7 = lean_box(0);
x_8 = lean_box(0);
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc(x_1);
x_18 = l_Lean_Expr_bvar___override(x_1);
x_19 = lean_array_push(x_5, x_18);
x_20 = lean_ctor_get(x_4, 2);
x_21 = lean_nat_add(x_6, x_20);
lean_dec(x_6);
x_5 = x_19;
x_6 = x_21;
x_7 = lean_box(0);
x_8 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_inc(x_2);
x_23 = l_Lean_Expr_bvar___override(x_2);
x_24 = lean_array_push(x_5, x_23);
x_25 = lean_ctor_get(x_4, 2);
x_26 = lean_nat_add(x_6, x_25);
lean_dec(x_6);
x_5 = x_24;
x_6 = x_26;
x_7 = lean_box(0);
x_8 = lean_box(0);
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_swapBVars(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Lean_Expr_looseBVarRange(x_1);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1(x_2, x_3, x_8, x_8, x_5, x_6, lean_box(0), lean_box(0));
lean_dec(x_8);
x_10 = lean_expr_instantiate(x_1, x_9);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_Range_forIn_x27_loop___at_Lean_Expr_swapBVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_swapBVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Expr_swapBVars(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Prod", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mk", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1;
x_2 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_eq(x_2, x_3);
if (x_10 == 0)
{
size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = 1;
x_12 = lean_usize_sub(x_2, x_11);
x_13 = lean_array_uget(x_1, x_12);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_array_mk(x_16);
x_18 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_Meta_mkAppM(x_18, x_17, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_2 = x_12;
x_4 = x_20;
x_9 = x_21;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_object* x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_4);
lean_ctor_set(x_27, 1, x_9);
return x_27;
}
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdElem___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Expr_bvar___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdElem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_12 = lean_nat_sub(x_7, x_10);
x_13 = lean_nat_dec_lt(x_12, x_7);
lean_dec(x_7);
lean_inc(x_12);
lean_inc(x_1);
x_14 = l_Array_toSubarray___rarg(x_1, x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_array_get_size(x_15);
x_19 = lean_nat_dec_le(x_16, x_18);
if (x_13 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_1);
x_20 = l_Lean_instInhabitedExpr;
x_21 = l_outOfBounds___rarg(x_20);
if (x_19 == 0)
{
uint8_t x_22; 
lean_dec(x_16);
x_22 = lean_nat_dec_lt(x_17, x_18);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_6);
return x_23;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; 
x_24 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_25 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_26 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(x_15, x_24, x_25, x_21, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_15);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_18);
x_27 = lean_nat_dec_lt(x_17, x_16);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; 
x_29 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_30 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_31 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(x_15, x_29, x_30, x_21, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_15);
return x_31;
}
}
}
else
{
lean_object* x_32; 
x_32 = lean_array_fget(x_1, x_12);
lean_dec(x_12);
lean_dec(x_1);
if (x_19 == 0)
{
uint8_t x_33; 
lean_dec(x_16);
x_33 = lean_nat_dec_lt(x_17, x_18);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_6);
return x_34;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; 
x_35 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_36 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_37 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(x_15, x_35, x_36, x_32, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_15);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_18);
x_38 = lean_nat_dec_lt(x_17, x_16);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_6);
return x_39;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; 
x_40 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_41 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_42 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(x_15, x_40, x_41, x_32, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_15);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_nat_dec_lt(x_8, x_7);
lean_dec(x_7);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_1);
x_44 = l_Lean_instInhabitedExpr;
x_45 = l_outOfBounds___rarg(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_6);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_array_fget(x_1, x_8);
lean_dec(x_1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = l_Mathlib_Meta_FunProp_mkProdElem___closed__1;
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_6);
return x_50;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_12;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("snd", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1;
x_2 = l_Mathlib_Meta_FunProp_mkProdProj___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static uint64_t _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__3() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 0;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fst", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1;
x_2 = l_Mathlib_Meta_FunProp_mkProdProj___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_2, x_11);
lean_dec(x_2);
x_13 = lean_nat_dec_eq(x_3, x_9);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_15 = lean_nat_dec_eq(x_14, x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint64_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_array_mk(x_17);
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
x_20 = lean_ctor_get_uint64(x_4, sizeof(void*)*7);
x_21 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 8);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_4, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_4, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_4, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 5);
lean_inc(x_26);
x_27 = lean_ctor_get(x_4, 6);
lean_inc(x_27);
x_28 = !lean_is_exclusive(x_19);
if (x_28 == 0)
{
uint8_t x_29; uint8_t x_30; uint8_t x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; uint64_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_29 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_30 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_31 = 0;
lean_ctor_set_uint8(x_19, 9, x_31);
x_32 = 2;
x_33 = lean_uint64_shift_right(x_20, x_32);
x_34 = lean_uint64_shift_left(x_33, x_32);
x_35 = l_Mathlib_Meta_FunProp_mkProdProj___closed__3;
x_36 = lean_uint64_lor(x_34, x_35);
x_37 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_37, 0, x_19);
lean_ctor_set(x_37, 1, x_22);
lean_ctor_set(x_37, 2, x_23);
lean_ctor_set(x_37, 3, x_24);
lean_ctor_set(x_37, 4, x_25);
lean_ctor_set(x_37, 5, x_26);
lean_ctor_set(x_37, 6, x_27);
lean_ctor_set_uint64(x_37, sizeof(void*)*7, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*7 + 8, x_21);
lean_ctor_set_uint8(x_37, sizeof(void*)*7 + 9, x_29);
lean_ctor_set_uint8(x_37, sizeof(void*)*7 + 10, x_30);
x_38 = l_Mathlib_Meta_FunProp_mkProdProj___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_39 = l_Lean_Meta_mkAppM(x_38, x_18, x_37, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_1 = x_40;
x_2 = x_12;
x_3 = x_14;
x_8 = x_41;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
else
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; lean_object* x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_47 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 9);
x_48 = lean_ctor_get_uint8(x_4, sizeof(void*)*7 + 10);
x_49 = lean_ctor_get_uint8(x_19, 0);
x_50 = lean_ctor_get_uint8(x_19, 1);
x_51 = lean_ctor_get_uint8(x_19, 2);
x_52 = lean_ctor_get_uint8(x_19, 3);
x_53 = lean_ctor_get_uint8(x_19, 4);
x_54 = lean_ctor_get_uint8(x_19, 5);
x_55 = lean_ctor_get_uint8(x_19, 6);
x_56 = lean_ctor_get_uint8(x_19, 7);
x_57 = lean_ctor_get_uint8(x_19, 8);
x_58 = lean_ctor_get_uint8(x_19, 10);
x_59 = lean_ctor_get_uint8(x_19, 11);
x_60 = lean_ctor_get_uint8(x_19, 12);
x_61 = lean_ctor_get_uint8(x_19, 13);
x_62 = lean_ctor_get_uint8(x_19, 14);
x_63 = lean_ctor_get_uint8(x_19, 15);
x_64 = lean_ctor_get_uint8(x_19, 16);
x_65 = lean_ctor_get_uint8(x_19, 17);
lean_dec(x_19);
x_66 = 0;
x_67 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_67, 0, x_49);
lean_ctor_set_uint8(x_67, 1, x_50);
lean_ctor_set_uint8(x_67, 2, x_51);
lean_ctor_set_uint8(x_67, 3, x_52);
lean_ctor_set_uint8(x_67, 4, x_53);
lean_ctor_set_uint8(x_67, 5, x_54);
lean_ctor_set_uint8(x_67, 6, x_55);
lean_ctor_set_uint8(x_67, 7, x_56);
lean_ctor_set_uint8(x_67, 8, x_57);
lean_ctor_set_uint8(x_67, 9, x_66);
lean_ctor_set_uint8(x_67, 10, x_58);
lean_ctor_set_uint8(x_67, 11, x_59);
lean_ctor_set_uint8(x_67, 12, x_60);
lean_ctor_set_uint8(x_67, 13, x_61);
lean_ctor_set_uint8(x_67, 14, x_62);
lean_ctor_set_uint8(x_67, 15, x_63);
lean_ctor_set_uint8(x_67, 16, x_64);
lean_ctor_set_uint8(x_67, 17, x_65);
x_68 = 2;
x_69 = lean_uint64_shift_right(x_20, x_68);
x_70 = lean_uint64_shift_left(x_69, x_68);
x_71 = l_Mathlib_Meta_FunProp_mkProdProj___closed__3;
x_72 = lean_uint64_lor(x_70, x_71);
x_73 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_73, 0, x_67);
lean_ctor_set(x_73, 1, x_22);
lean_ctor_set(x_73, 2, x_23);
lean_ctor_set(x_73, 3, x_24);
lean_ctor_set(x_73, 4, x_25);
lean_ctor_set(x_73, 5, x_26);
lean_ctor_set(x_73, 6, x_27);
lean_ctor_set_uint64(x_73, sizeof(void*)*7, x_72);
lean_ctor_set_uint8(x_73, sizeof(void*)*7 + 8, x_21);
lean_ctor_set_uint8(x_73, sizeof(void*)*7 + 9, x_47);
lean_ctor_set_uint8(x_73, sizeof(void*)*7 + 10, x_48);
x_74 = l_Mathlib_Meta_FunProp_mkProdProj___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_75 = l_Lean_Meta_mkAppM(x_74, x_18, x_73, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_1 = x_76;
x_2 = x_12;
x_3 = x_14;
x_8 = x_77;
goto _start;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_79 = lean_ctor_get(x_75, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_75, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_81 = x_75;
} else {
 lean_dec_ref(x_75);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
else
{
lean_object* x_83; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_8);
return x_83;
}
}
else
{
lean_object* x_84; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_8);
return x_84;
}
}
else
{
uint8_t x_85; 
lean_dec(x_2);
x_85 = lean_nat_dec_eq(x_3, x_9);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_unsigned_to_nat(1u);
x_87 = lean_nat_dec_eq(x_3, x_86);
lean_dec(x_3);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_1);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_mk(x_89);
x_91 = l_Mathlib_Meta_FunProp_mkProdProj___closed__5;
x_92 = l_Lean_Meta_mkAppM(x_91, x_90, x_4, x_5, x_6, x_7, x_8);
return x_92;
}
else
{
lean_object* x_93; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_1);
lean_ctor_set(x_93, 1, x_8);
return x_93;
}
}
else
{
lean_object* x_94; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_1);
lean_ctor_set(x_94, 1, x_8);
return x_94;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_4, x_3);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_array_uget(x_5, x_4);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_5, x_4, x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Mathlib_Meta_FunProp_mkProdProj(x_1, x_13, x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_4, x_19);
x_21 = lean_array_uset(x_15, x_4, x_17);
x_4 = x_20;
x_5 = x_21;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_range___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkProdSplitElem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_8 = l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1;
x_9 = l_Array_ofFn___rarg(x_2, x_8);
x_10 = lean_array_size(x_9);
x_11 = 0;
x_12 = l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1(x_1, x_2, x_10, x_11, x_9, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_mapMUnsafe_map___at_Mathlib_Meta_FunProp_mkProdSplitElem___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT uint8_t l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_eq(x_2, x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_array_uget(x_1, x_2);
x_12 = l_Lean_Expr_fvarId_x21(x_11);
lean_dec(x_11);
lean_inc(x_5);
x_13 = l_Lean_FVarId_getUserName(x_12, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_erase_macro_scopes(x_14);
x_17 = 1;
x_18 = l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1;
x_19 = l_Lean_Name_toString(x_16, x_17, x_18);
x_20 = lean_string_append(x_4, x_19);
lean_dec(x_19);
x_21 = 1;
x_22 = lean_usize_add(x_2, x_21);
x_2 = x_22;
x_4 = x_20;
x_9 = x_15;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_5);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_9);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_9 = l_Mathlib_Meta_FunProp_mkProdSplitElem(x_3, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Meta_mkAppM_x27(x_2, x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_array_mk(x_16);
x_18 = l_Lean_Expr_headBeta(x_13);
x_19 = 0;
x_20 = 1;
x_21 = 1;
x_22 = l_Lean_Meta_mkLambdaFVars(x_17, x_18, x_19, x_20, x_19, x_21, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_17);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_9);
if (x_27 == 0)
{
return x_9;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_9, 0);
x_29 = lean_ctor_get(x_9, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_9);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_array_get_size(x_3);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_36; 
lean_dec(x_10);
x_36 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1;
x_13 = x_36;
x_14 = x_9;
goto block_35;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_10, x_10);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_10);
x_38 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1;
x_13 = x_38;
x_14 = x_9;
goto block_35;
}
else
{
size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_39 = 0;
x_40 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_41 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1;
lean_inc(x_5);
x_42 = l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1(x_3, x_39, x_40, x_41, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_13 = x_43;
x_14 = x_44;
goto block_35;
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
block_35:
{
lean_object* x_15; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Mathlib_Meta_FunProp_mkProdElem(x_3, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = lean_infer_type(x_16, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = l_Lean_Name_str___override(x_21, x_13);
x_23 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__1), 8, 2);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
x_24 = 0;
x_25 = 0;
x_26 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__4___rarg(x_22, x_24, x_19, x_23, x_25, x_5, x_6, x_7, x_8, x_20);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_15);
if (x_31 == 0)
{
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 0);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_9 = lean_infer_type(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_2);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_2);
x_13 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___boxed), 9, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_1);
x_14 = 0;
x_15 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_10, x_12, x_13, x_14, x_4, x_5, x_6, x_7, x_11);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_le(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3(x_2, x_1, x_10, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_9 = l_Lean_mkAppN(x_1, x_2);
x_10 = 0;
x_11 = 1;
x_12 = 1;
x_13 = l_Lean_Meta_mkLambdaFVars(x_2, x_9, x_10, x_11, x_10, x_12, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
static uint64_t _init_l_Mathlib_Meta_FunProp_etaExpand1___closed__1() {
_start:
{
uint8_t x_1; uint64_t x_2; 
x_1 = 1;
x_2 = l_Lean_Meta_TransparencyMode_toUInt64(x_1);
return x_2;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_etaExpand1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Expr_eta(x_1);
x_8 = l_Lean_Expr_isLambda(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint64_t x_12; uint8_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; lean_object* x_19; 
x_12 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_13 = 1;
lean_ctor_set_uint8(x_10, 9, x_13);
x_14 = 2;
x_15 = lean_uint64_shift_right(x_12, x_14);
x_16 = lean_uint64_shift_left(x_15, x_14);
x_17 = l_Mathlib_Meta_FunProp_etaExpand1___closed__1;
x_18 = lean_uint64_lor(x_16, x_17);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_18);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_7);
x_19 = lean_infer_type(x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_etaExpand1___lambda__1___boxed), 8, 1);
lean_closure_set(x_22, 0, x_7);
x_23 = l_Mathlib_Meta_FunProp_etaExpand1___closed__2;
x_24 = 0;
x_25 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_20, x_23, x_22, x_24, x_2, x_3, x_4, x_5, x_21);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_19);
if (x_34 == 0)
{
return x_19;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_19, 0);
x_36 = lean_ctor_get(x_19, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_19);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint64_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; lean_object* x_63; 
x_38 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_39 = lean_ctor_get_uint8(x_10, 0);
x_40 = lean_ctor_get_uint8(x_10, 1);
x_41 = lean_ctor_get_uint8(x_10, 2);
x_42 = lean_ctor_get_uint8(x_10, 3);
x_43 = lean_ctor_get_uint8(x_10, 4);
x_44 = lean_ctor_get_uint8(x_10, 5);
x_45 = lean_ctor_get_uint8(x_10, 6);
x_46 = lean_ctor_get_uint8(x_10, 7);
x_47 = lean_ctor_get_uint8(x_10, 8);
x_48 = lean_ctor_get_uint8(x_10, 10);
x_49 = lean_ctor_get_uint8(x_10, 11);
x_50 = lean_ctor_get_uint8(x_10, 12);
x_51 = lean_ctor_get_uint8(x_10, 13);
x_52 = lean_ctor_get_uint8(x_10, 14);
x_53 = lean_ctor_get_uint8(x_10, 15);
x_54 = lean_ctor_get_uint8(x_10, 16);
x_55 = lean_ctor_get_uint8(x_10, 17);
lean_dec(x_10);
x_56 = 1;
x_57 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_57, 0, x_39);
lean_ctor_set_uint8(x_57, 1, x_40);
lean_ctor_set_uint8(x_57, 2, x_41);
lean_ctor_set_uint8(x_57, 3, x_42);
lean_ctor_set_uint8(x_57, 4, x_43);
lean_ctor_set_uint8(x_57, 5, x_44);
lean_ctor_set_uint8(x_57, 6, x_45);
lean_ctor_set_uint8(x_57, 7, x_46);
lean_ctor_set_uint8(x_57, 8, x_47);
lean_ctor_set_uint8(x_57, 9, x_56);
lean_ctor_set_uint8(x_57, 10, x_48);
lean_ctor_set_uint8(x_57, 11, x_49);
lean_ctor_set_uint8(x_57, 12, x_50);
lean_ctor_set_uint8(x_57, 13, x_51);
lean_ctor_set_uint8(x_57, 14, x_52);
lean_ctor_set_uint8(x_57, 15, x_53);
lean_ctor_set_uint8(x_57, 16, x_54);
lean_ctor_set_uint8(x_57, 17, x_55);
x_58 = 2;
x_59 = lean_uint64_shift_right(x_38, x_58);
x_60 = lean_uint64_shift_left(x_59, x_58);
x_61 = l_Mathlib_Meta_FunProp_etaExpand1___closed__1;
x_62 = lean_uint64_lor(x_60, x_61);
lean_ctor_set(x_2, 0, x_57);
lean_ctor_set_uint64(x_2, sizeof(void*)*7, x_62);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_7);
x_63 = lean_infer_type(x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_etaExpand1___lambda__1___boxed), 8, 1);
lean_closure_set(x_66, 0, x_7);
x_67 = l_Mathlib_Meta_FunProp_etaExpand1___closed__2;
x_68 = 0;
x_69 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_64, x_67, x_66, x_68, x_2, x_3, x_4, x_5, x_65);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_72 = x_69;
} else {
 lean_dec_ref(x_69);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
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
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_2);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_78 = lean_ctor_get(x_63, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_63, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_80 = x_63;
} else {
 lean_dec_ref(x_63);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
else
{
lean_object* x_82; uint64_t x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; lean_object* x_110; uint8_t x_111; lean_object* x_112; uint64_t x_113; uint64_t x_114; uint64_t x_115; uint64_t x_116; uint64_t x_117; lean_object* x_118; lean_object* x_119; 
x_82 = lean_ctor_get(x_2, 0);
x_83 = lean_ctor_get_uint64(x_2, sizeof(void*)*7);
x_84 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 8);
x_85 = lean_ctor_get(x_2, 1);
x_86 = lean_ctor_get(x_2, 2);
x_87 = lean_ctor_get(x_2, 3);
x_88 = lean_ctor_get(x_2, 4);
x_89 = lean_ctor_get(x_2, 5);
x_90 = lean_ctor_get(x_2, 6);
x_91 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 9);
x_92 = lean_ctor_get_uint8(x_2, sizeof(void*)*7 + 10);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_82);
lean_dec(x_2);
x_93 = lean_ctor_get_uint8(x_82, 0);
x_94 = lean_ctor_get_uint8(x_82, 1);
x_95 = lean_ctor_get_uint8(x_82, 2);
x_96 = lean_ctor_get_uint8(x_82, 3);
x_97 = lean_ctor_get_uint8(x_82, 4);
x_98 = lean_ctor_get_uint8(x_82, 5);
x_99 = lean_ctor_get_uint8(x_82, 6);
x_100 = lean_ctor_get_uint8(x_82, 7);
x_101 = lean_ctor_get_uint8(x_82, 8);
x_102 = lean_ctor_get_uint8(x_82, 10);
x_103 = lean_ctor_get_uint8(x_82, 11);
x_104 = lean_ctor_get_uint8(x_82, 12);
x_105 = lean_ctor_get_uint8(x_82, 13);
x_106 = lean_ctor_get_uint8(x_82, 14);
x_107 = lean_ctor_get_uint8(x_82, 15);
x_108 = lean_ctor_get_uint8(x_82, 16);
x_109 = lean_ctor_get_uint8(x_82, 17);
if (lean_is_exclusive(x_82)) {
 x_110 = x_82;
} else {
 lean_dec_ref(x_82);
 x_110 = lean_box(0);
}
x_111 = 1;
if (lean_is_scalar(x_110)) {
 x_112 = lean_alloc_ctor(0, 0, 18);
} else {
 x_112 = x_110;
}
lean_ctor_set_uint8(x_112, 0, x_93);
lean_ctor_set_uint8(x_112, 1, x_94);
lean_ctor_set_uint8(x_112, 2, x_95);
lean_ctor_set_uint8(x_112, 3, x_96);
lean_ctor_set_uint8(x_112, 4, x_97);
lean_ctor_set_uint8(x_112, 5, x_98);
lean_ctor_set_uint8(x_112, 6, x_99);
lean_ctor_set_uint8(x_112, 7, x_100);
lean_ctor_set_uint8(x_112, 8, x_101);
lean_ctor_set_uint8(x_112, 9, x_111);
lean_ctor_set_uint8(x_112, 10, x_102);
lean_ctor_set_uint8(x_112, 11, x_103);
lean_ctor_set_uint8(x_112, 12, x_104);
lean_ctor_set_uint8(x_112, 13, x_105);
lean_ctor_set_uint8(x_112, 14, x_106);
lean_ctor_set_uint8(x_112, 15, x_107);
lean_ctor_set_uint8(x_112, 16, x_108);
lean_ctor_set_uint8(x_112, 17, x_109);
x_113 = 2;
x_114 = lean_uint64_shift_right(x_83, x_113);
x_115 = lean_uint64_shift_left(x_114, x_113);
x_116 = l_Mathlib_Meta_FunProp_etaExpand1___closed__1;
x_117 = lean_uint64_lor(x_115, x_116);
x_118 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_118, 0, x_112);
lean_ctor_set(x_118, 1, x_85);
lean_ctor_set(x_118, 2, x_86);
lean_ctor_set(x_118, 3, x_87);
lean_ctor_set(x_118, 4, x_88);
lean_ctor_set(x_118, 5, x_89);
lean_ctor_set(x_118, 6, x_90);
lean_ctor_set_uint64(x_118, sizeof(void*)*7, x_117);
lean_ctor_set_uint8(x_118, sizeof(void*)*7 + 8, x_84);
lean_ctor_set_uint8(x_118, sizeof(void*)*7 + 9, x_91);
lean_ctor_set_uint8(x_118, sizeof(void*)*7 + 10, x_92);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_118);
lean_inc(x_7);
x_119 = lean_infer_type(x_7, x_118, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_125; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_alloc_closure((void*)(l_Mathlib_Meta_FunProp_etaExpand1___lambda__1___boxed), 8, 1);
lean_closure_set(x_122, 0, x_7);
x_123 = l_Mathlib_Meta_FunProp_etaExpand1___closed__2;
x_124 = 0;
x_125 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Meta_arrowDomainsN___spec__6___rarg(x_120, x_123, x_122, x_124, x_118, x_3, x_4, x_5, x_121);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_125, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_132 = x_125;
} else {
 lean_dec_ref(x_125);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_118);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_134 = lean_ctor_get(x_119, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_119, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_136 = x_119;
} else {
 lean_dec_ref(x_119);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
lean_object* x_138; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_7);
lean_ctor_set(x_138, 1, x_6);
return x_138;
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_etaExpand1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Mathlib_Meta_FunProp_etaExpand1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_betaThroughLetAux(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 6:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_expr_instantiate1(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_5;
goto _start;
}
}
case 8:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_betaThroughLetAux(x_11, x_2);
x_13 = 0;
x_14 = l_Lean_Expr_letE___override(x_8, x_9, x_10, x_12, x_13);
return x_14;
}
}
case 10:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_1 = x_15;
goto _start;
}
}
default: 
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_mk(x_2);
x_18 = l_Lean_mkAppN(x_1, x_17);
lean_dec(x_17);
return x_18;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_betaThroughLet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_array_to_list(x_2);
x_4 = l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_betaThroughLetAux(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Meta_FunProp_headBetaThroughLet(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = l_Lean_Expr_getAppFn(x_1);
x_3 = 1;
x_4 = l_Lean_Expr_isHeadBetaTargetFn(x_3, x_2);
if (x_4 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_1, x_5);
x_7 = l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1;
lean_inc(x_6);
x_8 = lean_mk_array(x_6, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_6, x_9);
lean_dec(x_6);
x_11 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_1, x_8, x_10);
x_12 = l_Mathlib_Meta_FunProp_betaThroughLet(x_2, x_11);
return x_12;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_FunProp_ToBatteries(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1 = _init_l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1();
lean_mark_persistent(l___private_Mathlib_Tactic_FunProp_ToBatteries_0__Mathlib_Meta_FunProp_letTelescopeImpl___rarg___lambda__2___closed__1);
l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1 = _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__1);
l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2 = _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__2);
l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3 = _init_l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3();
lean_mark_persistent(l_Array_foldrMUnsafe_fold___at_Mathlib_Meta_FunProp_mkProdElem___spec__1___closed__3);
l_Mathlib_Meta_FunProp_mkProdElem___closed__1 = _init_l_Mathlib_Meta_FunProp_mkProdElem___closed__1();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdElem___closed__1);
l_Mathlib_Meta_FunProp_mkProdProj___closed__1 = _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__1();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdProj___closed__1);
l_Mathlib_Meta_FunProp_mkProdProj___closed__2 = _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__2();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdProj___closed__2);
l_Mathlib_Meta_FunProp_mkProdProj___closed__3 = _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__3();
l_Mathlib_Meta_FunProp_mkProdProj___closed__4 = _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__4();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdProj___closed__4);
l_Mathlib_Meta_FunProp_mkProdProj___closed__5 = _init_l_Mathlib_Meta_FunProp_mkProdProj___closed__5();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdProj___closed__5);
l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1 = _init_l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkProdSplitElem___closed__1);
l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Mathlib_Meta_FunProp_mkUncurryFun___spec__1___closed__1);
l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1 = _init_l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1();
lean_mark_persistent(l_Mathlib_Meta_FunProp_mkUncurryFun___lambda__2___closed__1);
l_Mathlib_Meta_FunProp_etaExpand1___closed__1 = _init_l_Mathlib_Meta_FunProp_etaExpand1___closed__1();
l_Mathlib_Meta_FunProp_etaExpand1___closed__2 = _init_l_Mathlib_Meta_FunProp_etaExpand1___closed__2();
lean_mark_persistent(l_Mathlib_Meta_FunProp_etaExpand1___closed__2);
l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1 = _init_l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1();
lean_mark_persistent(l_Mathlib_Meta_FunProp_headBetaThroughLet___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
