// Lean compiler output
// Module: Mathlib.Tactic.Linarith.Oracle.SimplexAlgorithm.PositiveVector
// Imports: Init Lean.Meta.Basic Mathlib.Tactic.Linarith.Oracle.SimplexAlgorithm.SimplexAlgorithm Mathlib.Tactic.Linarith.Oracle.SimplexAlgorithm.Gauss
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
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__3(lean_object*, lean_object*);
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3;
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_extractSolution___rarg(lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_extractSolution(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1;
lean_object* l_outOfBounds___rarg(lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4;
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_stateLP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2;
lean_object* l_Linarith_SimplexAlgorithm_Gauss_getTableau(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedRat;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Linarith_SimplexAlgorithm_runSimplexAlgorithm___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
lean_inc(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_12);
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_add(x_14, x_16);
lean_dec(x_14);
lean_inc(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
lean_inc(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_12);
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_add(x_14, x_16);
lean_dec(x_14);
lean_inc(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_1);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_3);
x_2 = x_15;
x_3 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__3(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_nat_add(x_10, x_14);
lean_dec(x_10);
x_16 = lean_nat_add(x_13, x_14);
lean_dec(x_13);
lean_ctor_set(x_5, 0, x_16);
lean_ctor_set(x_4, 0, x_15);
lean_ctor_set(x_1, 1, x_2);
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
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
x_20 = lean_unsigned_to_nat(2u);
x_21 = lean_nat_add(x_10, x_20);
lean_dec(x_10);
x_22 = lean_nat_add(x_18, x_20);
lean_dec(x_18);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_4, 0, x_21);
lean_ctor_set(x_1, 1, x_2);
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
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_4, 0);
lean_inc(x_25);
lean_dec(x_4);
x_26 = lean_ctor_get(x_5, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_5, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_28 = x_5;
} else {
 lean_dec_ref(x_5);
 x_28 = lean_box(0);
}
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_nat_add(x_25, x_29);
lean_dec(x_25);
x_31 = lean_nat_add(x_26, x_29);
lean_dec(x_26);
if (lean_is_scalar(x_28)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_28;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_33);
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
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_37 = x_4;
} else {
 lean_dec_ref(x_4);
 x_37 = lean_box(0);
}
x_38 = lean_ctor_get(x_5, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_40 = x_5;
} else {
 lean_dec_ref(x_5);
 x_40 = lean_box(0);
}
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_nat_add(x_36, x_41);
lean_dec(x_36);
x_43 = lean_nat_add(x_38, x_41);
lean_dec(x_38);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_40;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
if (lean_is_scalar(x_37)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_37;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_2);
x_1 = x_35;
x_2 = x_46;
goto _start;
}
}
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1;
x_2 = l_Rat_neg(x_1);
return x_2;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_stateLP___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_6 = lean_box(0);
x_7 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1;
x_8 = l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__1(x_7, x_5, x_6);
x_9 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_add(x_3, x_11);
x_13 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
x_18 = l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
lean_inc(x_3);
x_20 = l_List_range(x_3);
x_21 = l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__2(x_7, x_20, x_6);
x_22 = l_List_appendTR___rarg(x_19, x_21);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
lean_inc(x_3);
lean_inc(x_2);
x_24 = lean_apply_3(x_23, x_2, x_3, x_4);
x_25 = l_List_mapTR_loop___at_Linarith_SimplexAlgorithm_stateLP___spec__3(x_24, x_6);
x_26 = lean_ctor_get(x_1, 3);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_28 = lean_unsigned_to_nat(3u);
x_29 = lean_nat_add(x_3, x_28);
lean_dec(x_3);
x_30 = l_List_appendTR___rarg(x_10, x_22);
x_31 = l_List_appendTR___rarg(x_30, x_25);
x_32 = lean_apply_3(x_26, x_27, x_29, x_31);
return x_32;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_stateLP(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Linarith_SimplexAlgorithm_stateLP___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_nat_dec_lt(x_9, x_12);
if (x_13 == 0)
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_9, x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = l_instInhabitedNat;
x_16 = l_outOfBounds___rarg(x_15);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = l_instInhabitedRat;
x_20 = l_outOfBounds___rarg(x_19);
x_21 = lean_array_set(x_8, x_18, x_20);
lean_dec(x_18);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_nat_add(x_9, x_22);
lean_dec(x_9);
x_8 = x_21;
x_9 = x_23;
x_10 = lean_box(0);
x_11 = lean_box(0);
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_2, 2);
lean_inc(x_25);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_5, x_26);
x_28 = lean_array_fget(x_3, x_9);
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_nat_sub(x_28, x_29);
lean_dec(x_28);
x_31 = lean_nat_dec_lt(x_27, x_5);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_27);
lean_dec(x_25);
x_32 = l_instInhabitedRat;
x_33 = l_outOfBounds___rarg(x_32);
x_34 = lean_array_set(x_8, x_30, x_33);
lean_dec(x_30);
x_35 = lean_ctor_get(x_7, 2);
x_36 = lean_nat_add(x_9, x_35);
lean_dec(x_9);
x_8 = x_34;
x_9 = x_36;
x_10 = lean_box(0);
x_11 = lean_box(0);
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
x_39 = lean_apply_5(x_38, x_4, x_5, x_25, x_9, x_27);
x_40 = lean_array_set(x_8, x_30, x_39);
lean_dec(x_30);
x_41 = lean_ctor_get(x_7, 2);
x_42 = lean_nat_add(x_9, x_41);
lean_dec(x_9);
x_8 = x_40;
x_9 = x_42;
x_10 = lean_box(0);
x_11 = lean_box(0);
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_extractSolution___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_nat_add(x_4, x_6);
x_8 = lean_unsigned_to_nat(3u);
x_9 = lean_nat_sub(x_7, x_8);
lean_dec(x_7);
x_10 = l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1;
x_11 = lean_mk_array(x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_4);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg(x_1, x_2, x_3, x_4, x_6, x_13, x_13, x_11, x_12, lean_box(0), lean_box(0));
lean_dec(x_13);
lean_dec(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_extractSolution(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Linarith_SimplexAlgorithm_extractSolution___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_x27_loop___at_Linarith_SimplexAlgorithm_extractSolution___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
static lean_object* _init_l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Simplex Algorithm failed", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_12 = l_Linarith_SimplexAlgorithm_stateLP___rarg(x_4, x_1, x_2, x_5, x_6);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_nat_add(x_1, x_13);
lean_dec(x_1);
x_15 = lean_unsigned_to_nat(3u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_4);
x_17 = l_Linarith_SimplexAlgorithm_Gauss_getTableau(x_14, x_16, lean_box(0), x_4, x_12, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_4);
x_20 = l_Linarith_SimplexAlgorithm_runSimplexAlgorithm___rarg(x_4, x_18, x_9, x_10, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_4);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2;
x_25 = l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1(x_24, x_7, x_8, x_9, x_10, x_23);
lean_dec(x_10);
lean_dec(x_9);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_20, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
x_29 = l_Linarith_SimplexAlgorithm_extractSolution___rarg(x_4, x_28);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_dec(x_21);
x_32 = l_Linarith_SimplexAlgorithm_extractSolution___rarg(x_4, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Linarith_SimplexAlgorithm_findPositiveVector___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Linarith_SimplexAlgorithm_findPositiveVector___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Linarith_SimplexAlgorithm_findPositiveVector(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_SimplexAlgorithm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_Gauss(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_PositiveVector(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_SimplexAlgorithm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Linarith_Oracle_SimplexAlgorithm_Gauss(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__1);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__2);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__3);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__4);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__5);
l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6 = _init_l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_stateLP___rarg___closed__6);
l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1 = _init_l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_extractSolution___rarg___closed__1);
l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1 = _init_l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_findPositiveVector___closed__1);
l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2 = _init_l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2();
lean_mark_persistent(l_Linarith_SimplexAlgorithm_findPositiveVector___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
