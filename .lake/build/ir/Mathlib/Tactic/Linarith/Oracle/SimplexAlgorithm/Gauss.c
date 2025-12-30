// Lean compiler output
// Module: Mathlib.Tactic.Linarith.Oracle.SimplexAlgorithm.Gauss
// Imports: Init Mathlib.Tactic.Linarith.Oracle.SimplexAlgorithm.Datatypes
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
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1;
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4;
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3;
extern lean_object* l_instInhabitedNat;
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at_String_toNat_x21___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1(lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1___boxed(lean_object*);
static lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5;
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2;
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2;
static lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1;
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5;
LEAN_EXPORT uint8_t l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableau(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedRat;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadCoreM;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
static lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_nat_dec_lt(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_38; lean_object* x_39; 
lean_dec(x_9);
x_38 = lean_nat_dec_lt(x_10, x_1);
if (x_38 == 0)
{
lean_object* x_53; 
x_53 = lean_box(0);
x_39 = x_53;
goto block_52;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_lt(x_5, x_2);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_box(0);
x_39 = x_55;
goto block_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_ctor_get(x_4, 0);
lean_inc(x_56);
lean_inc(x_5);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_57 = lean_apply_5(x_56, x_1, x_2, x_13, x_10, x_5);
x_58 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1;
x_59 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_57, x_58);
lean_dec(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_inc(x_10);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_10);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_13);
x_21 = x_65;
x_22 = x_16;
goto block_37;
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_inc(x_7);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_7);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_13);
x_21 = x_67;
x_22 = x_16;
goto block_37;
}
}
}
block_37:
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_ctor_get(x_23, 0);
lean_inc(x_29);
lean_dec(x_23);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_21, 1);
lean_inc(x_32);
lean_dec(x_21);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = lean_ctor_get(x_8, 2);
x_35 = lean_nat_add(x_10, x_34);
lean_dec(x_10);
x_3 = lean_box(0);
x_9 = x_33;
x_10 = x_35;
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = x_32;
x_16 = x_22;
goto _start;
}
}
block_52:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_39);
x_40 = l_instInhabitedRat;
x_41 = l_outOfBounds___rarg(x_40);
x_42 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1;
x_43 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_41, x_42);
lean_dec(x_41);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_inc(x_10);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_10);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_13);
x_21 = x_49;
x_22 = x_16;
goto block_37;
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_inc(x_7);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_7);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_13);
x_21 = x_51;
x_22 = x_16;
goto block_37;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1() {
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
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_unsigned_to_nat(1u);
lean_inc(x_1);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_1);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_box(0);
x_14 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1;
x_15 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1(x_1, x_2, lean_box(0), x_4, x_6, x_12, x_14, x_12, x_14, x_5, lean_box(0), lean_box(0), x_7, x_8, x_9, x_10);
lean_dec(x_12);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1(x_13, x_21, x_20, x_8, x_9, x_19);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_15, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_16);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_16, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_18, 0);
lean_inc(x_27);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_27);
return x_15;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_dec(x_16);
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_15, 0, x_30);
return x_15;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_dec(x_15);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_33 = x_16;
} else {
 lean_dec_ref(x_16);
 x_33 = lean_box(0);
}
x_34 = lean_ctor_get(x_18, 0);
lean_inc(x_34);
lean_dec(x_18);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_31);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_6);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_11;
}
}
static lean_object* _init_l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_nat_dec_lt(x_1, x_2);
if (x_12 == 0)
{
lean_object* x_27; 
lean_dec(x_6);
x_27 = lean_box(0);
x_13 = x_27;
goto block_26;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_lt(x_6, x_4);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_6);
x_29 = lean_box(0);
x_13 = x_29;
goto block_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_3, 0);
lean_inc(x_30);
lean_inc(x_1);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_2);
x_31 = lean_apply_5(x_30, x_2, x_4, x_8, x_1, x_6);
x_32 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1;
x_33 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_31, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_3, 5);
lean_inc(x_34);
lean_dec(x_3);
x_35 = lean_apply_6(x_34, x_2, x_4, x_8, x_5, x_1, x_31);
x_36 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1;
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_11);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_31);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1;
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_8);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_11);
return x_41;
}
}
}
block_26:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_13);
x_14 = l_instInhabitedRat;
x_15 = l_outOfBounds___rarg(x_14);
x_16 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1;
x_17 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_apply_6(x_18, x_2, x_4, x_8, x_5, x_1, x_15);
x_20 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_11);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1;
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_8);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_nat_dec_lt(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_9);
x_21 = lean_nat_dec_eq(x_10, x_6);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_box(0);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_10);
x_23 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1(x_10, x_1, x_4, x_2, x_6, x_5, x_22, x_13, x_14, x_15, x_16);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_ctor_get(x_8, 2);
x_30 = lean_nat_add(x_10, x_29);
lean_dec(x_10);
x_3 = lean_box(0);
x_9 = x_28;
x_10 = x_30;
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = x_27;
x_16 = x_26;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 2);
x_33 = lean_nat_add(x_10, x_32);
lean_dec(x_10);
x_34 = lean_box(0);
x_3 = lean_box(0);
x_9 = x_34;
x_10 = x_33;
x_11 = lean_box(0);
x_12 = lean_box(0);
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_nat_dec_lt(x_10, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_9);
x_21 = lean_nat_dec_eq(x_10, x_6);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_box(0);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_10);
x_23 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1(x_10, x_1, x_4, x_2, x_6, x_5, x_22, x_13, x_14, x_15, x_16);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_ctor_get(x_8, 2);
x_30 = lean_nat_add(x_10, x_29);
lean_dec(x_10);
x_3 = lean_box(0);
x_9 = x_28;
x_10 = x_30;
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = x_27;
x_16 = x_26;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_8, 2);
x_33 = lean_nat_add(x_10, x_32);
lean_dec(x_10);
x_34 = lean_box(0);
x_3 = lean_box(0);
x_9 = x_34;
x_10 = x_33;
x_11 = lean_box(0);
x_12 = lean_box(0);
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_1, 6);
lean_inc(x_13);
x_14 = lean_nat_dec_lt(x_7, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_16);
if (x_14 == 0)
{
lean_object* x_58; 
x_58 = lean_box(0);
x_18 = x_58;
goto block_57;
}
else
{
uint8_t x_59; 
x_59 = lean_nat_dec_lt(x_5, x_3);
if (x_59 == 0)
{
lean_object* x_60; 
x_60 = lean_box(0);
x_18 = x_60;
goto block_57;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_61 = lean_ctor_get(x_1, 0);
lean_inc(x_61);
lean_inc(x_5);
lean_inc(x_7);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_2);
x_62 = lean_apply_5(x_61, x_2, x_3, x_9, x_7, x_5);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_63 = lean_apply_5(x_13, x_2, x_3, x_9, x_7, x_62);
x_64 = lean_box(0);
lean_inc(x_7);
lean_inc(x_5);
x_65 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2(x_2, x_3, lean_box(0), x_1, x_5, x_7, x_17, x_17, x_64, x_15, lean_box(0), lean_box(0), x_63, x_10, x_11, x_12);
lean_dec(x_17);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_65, 0);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
lean_inc(x_5);
x_70 = lean_array_push(x_4, x_5);
x_71 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_72 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_6);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_70);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_67, 0, x_76);
return x_65;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_77 = lean_ctor_get(x_67, 1);
lean_inc(x_77);
lean_dec(x_67);
lean_inc(x_5);
x_78 = lean_array_push(x_4, x_5);
x_79 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_80 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_6);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_78);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_77);
lean_ctor_set(x_65, 0, x_85);
return x_65;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_86 = lean_ctor_get(x_65, 0);
x_87 = lean_ctor_get(x_65, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_65);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
 x_89 = lean_box(0);
}
lean_inc(x_5);
x_90 = lean_array_push(x_4, x_5);
x_91 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_92 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_6);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_90);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
if (lean_is_scalar(x_89)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_89;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_88);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_87);
return x_98;
}
}
}
block_57:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_18);
x_19 = l_instInhabitedRat;
x_20 = l_outOfBounds___rarg(x_19);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
x_21 = lean_apply_5(x_13, x_2, x_3, x_9, x_7, x_20);
x_22 = lean_box(0);
lean_inc(x_7);
lean_inc(x_5);
x_23 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1(x_2, x_3, lean_box(0), x_1, x_5, x_7, x_17, x_17, x_22, x_15, lean_box(0), lean_box(0), x_21, x_10, x_11, x_12);
lean_dec(x_17);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_inc(x_5);
x_28 = lean_array_push(x_4, x_5);
x_29 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_30 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_6);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_25, 0, x_34);
return x_23;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_dec(x_25);
lean_inc(x_5);
x_36 = lean_array_push(x_4, x_5);
x_37 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_38 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_6);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_35);
lean_ctor_set(x_23, 0, x_43);
return x_23;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_44 = lean_ctor_get(x_23, 0);
x_45 = lean_ctor_get(x_23, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_23);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
lean_inc(x_5);
x_48 = lean_array_push(x_4, x_5);
x_49 = lean_nat_add(x_7, x_16);
lean_dec(x_7);
x_50 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_6);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
if (lean_is_scalar(x_47)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_47;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_46);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_45);
return x_56;
}
}
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Linarith", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("SimplexAlgorithm", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Gauss", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("getTableauImp", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1;
x_2 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2;
x_3 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3;
x_4 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5;
x_2 = 1;
x_3 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
x_20 = lean_nat_dec_lt(x_19, x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_8);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_lt(x_15, x_3);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_5);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_8);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7;
x_29 = l_Lean_Core_checkSystem(x_28, x_6, x_7, x_8);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
lean_inc(x_15);
lean_inc(x_19);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(x_2, x_3, lean_box(0), x_4, x_19, x_15, x_5, x_6, x_7, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_32);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_32, 0);
lean_dec(x_37);
lean_inc(x_15);
x_38 = lean_array_push(x_18, x_15);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_15, x_39);
lean_dec(x_15);
lean_ctor_set(x_10, 0, x_38);
lean_ctor_set(x_9, 0, x_40);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_32, 0, x_41);
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_dec(x_32);
lean_inc(x_15);
x_43 = lean_array_push(x_18, x_15);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_add(x_15, x_44);
lean_dec(x_15);
lean_ctor_set(x_10, 0, x_43);
lean_ctor_set(x_9, 0, x_45);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_1);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_42);
lean_ctor_set(x_31, 0, x_47);
return x_31;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_31, 1);
lean_inc(x_48);
lean_dec(x_31);
x_49 = lean_ctor_get(x_32, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_50 = x_32;
} else {
 lean_dec_ref(x_32);
 x_50 = lean_box(0);
}
lean_inc(x_15);
x_51 = lean_array_push(x_18, x_15);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_15, x_52);
lean_dec(x_15);
lean_ctor_set(x_10, 0, x_51);
lean_ctor_set(x_9, 0, x_53);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_1);
if (lean_is_scalar(x_50)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_50;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_49);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_48);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_free_object(x_10);
lean_free_object(x_9);
lean_free_object(x_1);
x_57 = lean_ctor_get(x_31, 1);
lean_inc(x_57);
lean_dec(x_31);
x_58 = lean_ctor_get(x_32, 1);
lean_inc(x_58);
lean_dec(x_32);
x_59 = lean_ctor_get(x_33, 0);
lean_inc(x_59);
lean_dec(x_33);
x_60 = lean_ctor_get(x_4, 4);
lean_inc(x_60);
lean_inc(x_19);
lean_inc(x_3);
lean_inc(x_2);
x_61 = lean_apply_5(x_60, x_2, x_3, x_58, x_19, x_59);
x_62 = lean_box(0);
x_63 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(x_4, x_2, x_3, x_12, x_15, x_18, x_19, x_62, x_61, x_6, x_7, x_57);
return x_63;
}
}
else
{
uint8_t x_64; 
lean_free_object(x_10);
lean_dec(x_19);
lean_dec(x_18);
lean_free_object(x_9);
lean_dec(x_15);
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_29);
if (x_64 == 0)
{
return x_29;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_29, 0);
x_66 = lean_ctor_get(x_29, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_29);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
else
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_10, 0);
x_69 = lean_ctor_get(x_10, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_10);
x_70 = lean_nat_dec_lt(x_69, x_2);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
lean_ctor_set(x_9, 1, x_71);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_1);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_5);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_8);
return x_74;
}
else
{
uint8_t x_75; 
x_75 = lean_nat_dec_lt(x_15, x_3);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_68);
lean_ctor_set(x_76, 1, x_69);
lean_ctor_set(x_9, 1, x_76);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_1);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_5);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_8);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; 
x_80 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7;
x_81 = l_Lean_Core_checkSystem(x_80, x_6, x_7, x_8);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
lean_inc(x_15);
lean_inc(x_69);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_83 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(x_2, x_3, lean_box(0), x_4, x_69, x_15, x_5, x_6, x_7, x_82);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_87 = x_83;
} else {
 lean_dec_ref(x_83);
 x_87 = lean_box(0);
}
x_88 = lean_ctor_get(x_84, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_89 = x_84;
} else {
 lean_dec_ref(x_84);
 x_89 = lean_box(0);
}
lean_inc(x_15);
x_90 = lean_array_push(x_68, x_15);
x_91 = lean_unsigned_to_nat(1u);
x_92 = lean_nat_add(x_15, x_91);
lean_dec(x_15);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_69);
lean_ctor_set(x_9, 1, x_93);
lean_ctor_set(x_9, 0, x_92);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_1);
if (lean_is_scalar(x_89)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_89;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_88);
if (lean_is_scalar(x_87)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_87;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_86);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_free_object(x_9);
lean_free_object(x_1);
x_97 = lean_ctor_get(x_83, 1);
lean_inc(x_97);
lean_dec(x_83);
x_98 = lean_ctor_get(x_84, 1);
lean_inc(x_98);
lean_dec(x_84);
x_99 = lean_ctor_get(x_85, 0);
lean_inc(x_99);
lean_dec(x_85);
x_100 = lean_ctor_get(x_4, 4);
lean_inc(x_100);
lean_inc(x_69);
lean_inc(x_3);
lean_inc(x_2);
x_101 = lean_apply_5(x_100, x_2, x_3, x_98, x_69, x_99);
x_102 = lean_box(0);
x_103 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(x_4, x_2, x_3, x_12, x_15, x_68, x_69, x_102, x_101, x_6, x_7, x_97);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_69);
lean_dec(x_68);
lean_free_object(x_9);
lean_dec(x_15);
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = lean_ctor_get(x_81, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_81, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_106 = x_81;
} else {
 lean_dec_ref(x_81);
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
}
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_9, 0);
lean_inc(x_108);
lean_dec(x_9);
x_109 = lean_ctor_get(x_10, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_10, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_111 = x_10;
} else {
 lean_dec_ref(x_10);
 x_111 = lean_box(0);
}
x_112 = lean_nat_dec_lt(x_110, x_2);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_111)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_111;
}
lean_ctor_set(x_113, 0, x_109);
lean_ctor_set(x_113, 1, x_110);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_108);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_1, 1, x_114);
x_115 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_115, 0, x_1);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_5);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_8);
return x_117;
}
else
{
uint8_t x_118; 
x_118 = lean_nat_dec_lt(x_108, x_3);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_111)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_111;
}
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_110);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_108);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_1, 1, x_120);
x_121 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_121, 0, x_1);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_5);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_8);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7;
x_125 = l_Lean_Core_checkSystem(x_124, x_6, x_7, x_8);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
lean_dec(x_125);
lean_inc(x_108);
lean_inc(x_110);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_127 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(x_2, x_3, lean_box(0), x_4, x_110, x_108, x_5, x_6, x_7, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_131 = x_127;
} else {
 lean_dec_ref(x_127);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_128, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_133 = x_128;
} else {
 lean_dec_ref(x_128);
 x_133 = lean_box(0);
}
lean_inc(x_108);
x_134 = lean_array_push(x_109, x_108);
x_135 = lean_unsigned_to_nat(1u);
x_136 = lean_nat_add(x_108, x_135);
lean_dec(x_108);
if (lean_is_scalar(x_111)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_111;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_110);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set(x_1, 1, x_138);
x_139 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_139, 0, x_1);
if (lean_is_scalar(x_133)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_133;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_132);
if (lean_is_scalar(x_131)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_131;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_130);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_111);
lean_free_object(x_1);
x_142 = lean_ctor_get(x_127, 1);
lean_inc(x_142);
lean_dec(x_127);
x_143 = lean_ctor_get(x_128, 1);
lean_inc(x_143);
lean_dec(x_128);
x_144 = lean_ctor_get(x_129, 0);
lean_inc(x_144);
lean_dec(x_129);
x_145 = lean_ctor_get(x_4, 4);
lean_inc(x_145);
lean_inc(x_110);
lean_inc(x_3);
lean_inc(x_2);
x_146 = lean_apply_5(x_145, x_2, x_3, x_143, x_110, x_144);
x_147 = lean_box(0);
x_148 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(x_4, x_2, x_3, x_12, x_108, x_109, x_110, x_147, x_146, x_6, x_7, x_142);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_108);
lean_free_object(x_1);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_149 = lean_ctor_get(x_125, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_125, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_151 = x_125;
} else {
 lean_dec_ref(x_125);
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
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_153 = lean_ctor_get(x_1, 0);
lean_inc(x_153);
lean_dec(x_1);
x_154 = lean_ctor_get(x_9, 0);
lean_inc(x_154);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_155 = x_9;
} else {
 lean_dec_ref(x_9);
 x_155 = lean_box(0);
}
x_156 = lean_ctor_get(x_10, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_10, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_158 = x_10;
} else {
 lean_dec_ref(x_10);
 x_158 = lean_box(0);
}
x_159 = lean_nat_dec_lt(x_157, x_2);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_158)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_158;
}
lean_ctor_set(x_160, 0, x_156);
lean_ctor_set(x_160, 1, x_157);
if (lean_is_scalar(x_155)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_155;
}
lean_ctor_set(x_161, 0, x_154);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_153);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_163, 0, x_162);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_5);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_8);
return x_165;
}
else
{
uint8_t x_166; 
x_166 = lean_nat_dec_lt(x_154, x_3);
if (x_166 == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_158)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_158;
}
lean_ctor_set(x_167, 0, x_156);
lean_ctor_set(x_167, 1, x_157);
if (lean_is_scalar(x_155)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_155;
}
lean_ctor_set(x_168, 0, x_154);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_153);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_5);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_8);
return x_172;
}
else
{
lean_object* x_173; lean_object* x_174; 
x_173 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7;
x_174 = l_Lean_Core_checkSystem(x_173, x_6, x_7, x_8);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_175 = lean_ctor_get(x_174, 1);
lean_inc(x_175);
lean_dec(x_174);
lean_inc(x_154);
lean_inc(x_157);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_176 = l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow(x_2, x_3, lean_box(0), x_4, x_157, x_154, x_5, x_6, x_7, x_175);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_179 = lean_ctor_get(x_176, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_180 = x_176;
} else {
 lean_dec_ref(x_176);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_177, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_182 = x_177;
} else {
 lean_dec_ref(x_177);
 x_182 = lean_box(0);
}
lean_inc(x_154);
x_183 = lean_array_push(x_156, x_154);
x_184 = lean_unsigned_to_nat(1u);
x_185 = lean_nat_add(x_154, x_184);
lean_dec(x_154);
if (lean_is_scalar(x_158)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_158;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_157);
if (lean_is_scalar(x_155)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_155;
}
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_153);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_189, 0, x_188);
if (lean_is_scalar(x_182)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_182;
}
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_181);
if (lean_is_scalar(x_180)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_180;
}
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_179);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_158);
lean_dec(x_155);
x_192 = lean_ctor_get(x_176, 1);
lean_inc(x_192);
lean_dec(x_176);
x_193 = lean_ctor_get(x_177, 1);
lean_inc(x_193);
lean_dec(x_177);
x_194 = lean_ctor_get(x_178, 0);
lean_inc(x_194);
lean_dec(x_178);
x_195 = lean_ctor_get(x_4, 4);
lean_inc(x_195);
lean_inc(x_157);
lean_inc(x_3);
lean_inc(x_2);
x_196 = lean_apply_5(x_195, x_2, x_3, x_193, x_157, x_194);
x_197 = lean_box(0);
x_198 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(x_4, x_2, x_3, x_153, x_154, x_156, x_157, x_197, x_196, x_6, x_7, x_192);
return x_198;
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_158);
lean_dec(x_157);
lean_dec(x_156);
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_199 = lean_ctor_get(x_174, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_174, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_201 = x_174;
} else {
 lean_dec_ref(x_174);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_6(x_12, lean_box(0), x_10, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3(x_2, x_3, lean_box(0), x_4, x_1, x_14, x_6, x_7, x_8, x_9);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___boxed), 8, 4);
lean_closure_set(x_12, 0, x_6);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_4);
x_13 = lean_alloc_closure((void*)(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__4), 9, 4);
lean_closure_set(x_13, 0, x_5);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_4);
x_14 = lean_apply_8(x_11, lean_box(0), lean_box(0), x_12, x_13, x_7, x_8, x_9, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_5, 1);
x_15 = lean_nat_dec_lt(x_7, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_7);
x_18 = lean_array_push(x_6, x_7);
x_19 = lean_ctor_get(x_5, 2);
x_20 = lean_nat_add(x_7, x_19);
lean_dec(x_7);
x_3 = lean_box(0);
x_6 = x_18;
x_7 = x_20;
x_8 = lean_box(0);
x_9 = lean_box(0);
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return x_1;
}
}
static lean_object* _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Option.get!", 11, 11);
return x_1;
}
}
static lean_object* _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("value is none", 13, 13);
return x_1;
}
}
static lean_object* _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1;
x_2 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2;
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
x_5 = lean_array_to_list(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
x_15 = lean_array_get_size(x_1);
x_16 = lean_nat_dec_lt(x_10, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = l_instInhabitedNat;
x_18 = l_outOfBounds___rarg(x_17);
x_19 = lean_nat_dec_eq(x_13, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_20, 0, x_13);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_findIdx_x3f_loop___rarg(x_20, x_2, x_21);
x_23 = l_Rat_neg(x_14);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_25 = l_panic___at_String_toNat_x21___spec__1(x_24);
lean_ctor_set(x_7, 1, x_23);
lean_ctor_set(x_7, 0, x_25);
x_26 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_26;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_22, 0);
lean_inc(x_28);
lean_dec(x_22);
lean_ctor_set(x_7, 1, x_23);
lean_ctor_set(x_7, 0, x_28);
x_29 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_29;
goto _start;
}
}
else
{
lean_free_object(x_7);
lean_dec(x_14);
lean_dec(x_13);
lean_free_object(x_6);
lean_dec(x_10);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_array_fget(x_1, x_10);
x_33 = lean_nat_dec_eq(x_13, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_34, 0, x_13);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Array_findIdx_x3f_loop___rarg(x_34, x_2, x_35);
x_37 = l_Rat_neg(x_14);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_39 = l_panic___at_String_toNat_x21___spec__1(x_38);
lean_ctor_set(x_7, 1, x_37);
lean_ctor_set(x_7, 0, x_39);
x_40 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_40;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_36, 0);
lean_inc(x_42);
lean_dec(x_36);
lean_ctor_set(x_7, 1, x_37);
lean_ctor_set(x_7, 0, x_42);
x_43 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_43;
goto _start;
}
}
else
{
lean_free_object(x_7);
lean_dec(x_14);
lean_dec(x_13);
lean_free_object(x_6);
lean_dec(x_10);
x_3 = x_8;
goto _start;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_7, 0);
x_47 = lean_ctor_get(x_7, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_7);
x_48 = lean_array_get_size(x_1);
x_49 = lean_nat_dec_lt(x_10, x_48);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = l_instInhabitedNat;
x_51 = l_outOfBounds___rarg(x_50);
x_52 = lean_nat_dec_eq(x_46, x_51);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_53, 0, x_46);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Array_findIdx_x3f_loop___rarg(x_53, x_2, x_54);
x_56 = l_Rat_neg(x_47);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_58 = l_panic___at_String_toNat_x21___spec__1(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
lean_ctor_set(x_6, 1, x_59);
x_60 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_60;
goto _start;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_55, 0);
lean_inc(x_62);
lean_dec(x_55);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_56);
lean_ctor_set(x_6, 1, x_63);
x_64 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_64;
goto _start;
}
}
else
{
lean_dec(x_47);
lean_dec(x_46);
lean_free_object(x_6);
lean_dec(x_10);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_array_fget(x_1, x_10);
x_68 = lean_nat_dec_eq(x_46, x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_69, 0, x_46);
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Array_findIdx_x3f_loop___rarg(x_69, x_2, x_70);
x_72 = l_Rat_neg(x_47);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_74 = l_panic___at_String_toNat_x21___spec__1(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
lean_ctor_set(x_6, 1, x_75);
x_76 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_76;
goto _start;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_71, 0);
lean_inc(x_78);
lean_dec(x_71);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_72);
lean_ctor_set(x_6, 1, x_79);
x_80 = lean_array_push(x_4, x_6);
x_3 = x_8;
x_4 = x_80;
goto _start;
}
}
else
{
lean_dec(x_47);
lean_dec(x_46);
lean_free_object(x_6);
lean_dec(x_10);
x_3 = x_8;
goto _start;
}
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_83 = lean_ctor_get(x_6, 0);
lean_inc(x_83);
lean_dec(x_6);
x_84 = lean_ctor_get(x_7, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_7, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_86 = x_7;
} else {
 lean_dec_ref(x_7);
 x_86 = lean_box(0);
}
x_87 = lean_array_get_size(x_1);
x_88 = lean_nat_dec_lt(x_83, x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_instInhabitedNat;
x_90 = l_outOfBounds___rarg(x_89);
x_91 = lean_nat_dec_eq(x_84, x_90);
lean_dec(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_92, 0, x_84);
x_93 = lean_unsigned_to_nat(0u);
x_94 = l_Array_findIdx_x3f_loop___rarg(x_92, x_2, x_93);
x_95 = l_Rat_neg(x_85);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_97 = l_panic___at_String_toNat_x21___spec__1(x_96);
if (lean_is_scalar(x_86)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_86;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_95);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_83);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_4, x_99);
x_3 = x_8;
x_4 = x_100;
goto _start;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_102 = lean_ctor_get(x_94, 0);
lean_inc(x_102);
lean_dec(x_94);
if (lean_is_scalar(x_86)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_86;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_95);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_83);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_array_push(x_4, x_104);
x_3 = x_8;
x_4 = x_105;
goto _start;
}
}
else
{
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_array_fget(x_1, x_83);
x_109 = lean_nat_dec_eq(x_84, x_108);
lean_dec(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_alloc_closure((void*)(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed), 2, 1);
lean_closure_set(x_110, 0, x_84);
x_111 = lean_unsigned_to_nat(0u);
x_112 = l_Array_findIdx_x3f_loop___rarg(x_110, x_2, x_111);
x_113 = l_Rat_neg(x_85);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4;
x_115 = l_panic___at_String_toNat_x21___spec__1(x_114);
if (lean_is_scalar(x_86)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_86;
}
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_113);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_83);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_array_push(x_4, x_117);
x_3 = x_8;
x_4 = x_118;
goto _start;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_112, 0);
lean_inc(x_120);
lean_dec(x_112);
if (lean_is_scalar(x_86)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_86;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_113);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_83);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_array_push(x_4, x_122);
x_3 = x_8;
x_4 = x_123;
goto _start;
}
}
else
{
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
x_3 = x_8;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Core_instMonadCoreM;
x_2 = l_StateT_instMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
x_2 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableauImp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2;
x_10 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3(x_1, x_2, lean_box(0), x_4, x_9, x_10, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_ctor_get(x_13, 0);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
lean_inc(x_19);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_21);
x_23 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4(x_1, x_2, lean_box(0), x_22, x_22, x_20, x_19, lean_box(0), lean_box(0), x_17, x_6, x_7, x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
x_29 = lean_ctor_get(x_4, 2);
lean_inc(x_29);
lean_inc(x_28);
x_30 = lean_apply_3(x_29, x_1, x_2, x_28);
x_31 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
x_32 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(x_18, x_27, x_30, x_31);
x_33 = lean_ctor_get(x_4, 3);
lean_inc(x_33);
lean_dec(x_4);
x_34 = lean_array_get_size(x_18);
x_35 = lean_array_get_size(x_27);
x_36 = lean_apply_3(x_33, x_34, x_35, x_32);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_18);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_36);
lean_ctor_set(x_25, 0, x_37);
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_38 = lean_ctor_get(x_25, 0);
x_39 = lean_ctor_get(x_25, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_25);
x_40 = lean_ctor_get(x_4, 2);
lean_inc(x_40);
lean_inc(x_39);
x_41 = lean_apply_3(x_40, x_1, x_2, x_39);
x_42 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
x_43 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(x_18, x_38, x_41, x_42);
x_44 = lean_ctor_get(x_4, 3);
lean_inc(x_44);
lean_dec(x_4);
x_45 = lean_array_get_size(x_18);
x_46 = lean_array_get_size(x_38);
x_47 = lean_apply_3(x_44, x_45, x_46, x_43);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_18);
lean_ctor_set(x_48, 1, x_38);
lean_ctor_set(x_48, 2, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_39);
lean_ctor_set(x_23, 0, x_49);
return x_23;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_50 = lean_ctor_get(x_23, 0);
x_51 = lean_ctor_get(x_23, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_23);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_54 = x_50;
} else {
 lean_dec_ref(x_50);
 x_54 = lean_box(0);
}
x_55 = lean_ctor_get(x_4, 2);
lean_inc(x_55);
lean_inc(x_53);
x_56 = lean_apply_3(x_55, x_1, x_2, x_53);
x_57 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1;
x_58 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(x_18, x_52, x_56, x_57);
x_59 = lean_ctor_get(x_4, 3);
lean_inc(x_59);
lean_dec(x_4);
x_60 = lean_array_get_size(x_18);
x_61 = lean_array_get_size(x_52);
x_62 = lean_apply_3(x_59, x_60, x_61, x_58);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_18);
lean_ctor_set(x_63, 1, x_52);
lean_ctor_set(x_63, 2, x_62);
if (lean_is_scalar(x_54)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_54;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_53);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_51);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_11);
if (x_66 == 0)
{
return x_11;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_11, 0);
x_68 = lean_ctor_get(x_11, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_11);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableau(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Linarith_SimplexAlgorithm_Gauss_getTableauImp(x_1, x_2, lean_box(0), x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
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
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
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
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_Datatypes(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_Gauss(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_Datatypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___spec__1___closed__1);
l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1 = _init_l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_findNonzeroRow___closed__1);
l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1 = _init_l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__1___lambda__1___closed__1);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__1);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__2);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__3);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__4);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__5);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__6);
l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7 = _init_l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7();
lean_mark_persistent(l_Lean_Loop_forIn_loop___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__3___lambda__3___closed__7);
l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1 = _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1();
lean_mark_persistent(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__1);
l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2 = _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2();
lean_mark_persistent(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__2);
l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3 = _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3();
lean_mark_persistent(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__3);
l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4 = _init_l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4();
lean_mark_persistent(l_List_filterMapTR_go___at_Linarith_SimplexAlgorithm_Gauss_getTableauImp___spec__5___closed__4);
l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1 = _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__1);
l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2 = _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__2);
l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3 = _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__3);
l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4 = _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__4);
l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5 = _init_l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_Gauss_getTableauImp___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
