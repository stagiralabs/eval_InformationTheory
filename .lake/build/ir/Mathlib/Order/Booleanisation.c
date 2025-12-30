// Lean compiler output
// Module: Mathlib.Order.Booleanisation
// Imports: Init Mathlib.Order.Hom.Lattice
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
LEAN_EXPORT lean_object* l_Booleanisation_instInf(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_comp(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instDistribLattice(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instCompl(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_lift___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_lift(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSup___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instTop___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_comp___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSDiff___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instPreorder(lean_object*, lean_object*);
lean_object* l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instDistribLattice___rarg(lean_object*);
static lean_object* l_Booleanisation_instPreorder___closed__1;
LEAN_EXPORT lean_object* l_Booleanisation_instDecidableEq(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instLT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_liftLatticeHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSup(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instCompl___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_liftLatticeHom___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSDiff(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBot___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instPreorder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBot(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instInf___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra___rarg(lean_object*);
static lean_object* l_Booleanisation_liftLatticeHom___closed__1;
LEAN_EXPORT lean_object* l_Booleanisation_instTop(lean_object*);
static lean_object* l_Booleanisation_instBooleanAlgebra___rarg___closed__1;
LEAN_EXPORT lean_object* l_Booleanisation_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = l___private_Init_Data_Sum_Basic_0__Sum_decEqSum____x40_Init_Data_Sum_Basic___hyg_5____rarg(x_1, x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instDecidableEq___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_lift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_lift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_lift___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_comp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_comp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_comp___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instCompl___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_ctor_set_tag(x_1, 1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_ctor_set_tag(x_1, 0);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instCompl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instCompl___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_instLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instLT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instLT___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_instLT(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, x_4, x_6);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, x_4, x_12);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_3);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_apply_2(x_22, x_21, x_19);
lean_ctor_set(x_3, 0, x_23);
return x_3;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
lean_dec(x_3);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_apply_2(x_25, x_24, x_19);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_3);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_apply_2(x_31, x_28, x_30);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_32);
return x_3;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
lean_dec(x_3);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_apply_2(x_34, x_28, x_33);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_2, 0);
lean_inc(x_37);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_41, x_37, x_39);
lean_ctor_set(x_3, 0, x_42);
return x_3;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_45, x_37, x_43);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instSup___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instInf___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_8, x_4, x_6);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_12, x_4, x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_18, x_15, x_17);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_19);
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_2(x_21, x_15, x_20);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_apply_2(x_27, x_26, x_24);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
lean_dec(x_3);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_apply_2(x_30, x_29, x_24);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_apply_2(x_39, x_33, x_35);
lean_ctor_set(x_3, 0, x_40);
return x_3;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
lean_dec(x_3);
x_42 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_apply_2(x_45, x_33, x_41);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instInf___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBot___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBot(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instBot___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Booleanisation_instBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instTop___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instTop___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Booleanisation_instTop___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSDiff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_4, x_6);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_10, x_4, x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_17, x_13, x_15);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_18);
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_21, x_13, x_19);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_2(x_30, x_24, x_26);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_31);
return x_3;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_3, 0);
lean_inc(x_32);
lean_dec(x_3);
x_33 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_apply_2(x_36, x_24, x_32);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_3);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_3, 0);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_apply_2(x_42, x_41, x_39);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_43);
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_3, 0);
lean_inc(x_44);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_2(x_45, x_44, x_39);
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSDiff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instSDiff___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Booleanisation_instPreorder___closed__1() {
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
LEAN_EXPORT lean_object* l_Booleanisation_instPreorder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_instPreorder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instPreorder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_instPreorder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Booleanisation_instPreorder(lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instPartialOrder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instPartialOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Booleanisation_instPartialOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, x_4, x_6);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, x_4, x_12);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_3);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_apply_2(x_22, x_21, x_19);
lean_ctor_set(x_3, 0, x_23);
return x_3;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
lean_dec(x_3);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_apply_2(x_25, x_24, x_19);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_3);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_apply_2(x_31, x_28, x_30);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_32);
return x_3;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
lean_dec(x_3);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_apply_2(x_34, x_28, x_33);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_ctor_get(x_2, 0);
lean_inc(x_37);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_41, x_37, x_39);
lean_ctor_set(x_3, 0, x_42);
return x_3;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_45, x_37, x_43);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Booleanisation_instPreorder(lean_box(0), x_1);
x_3 = lean_alloc_closure((void*)(l_Booleanisation_instSemilatticeSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instSemilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_8, x_4, x_6);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_12, x_4, x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_18, x_15, x_17);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_19);
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_2(x_21, x_15, x_20);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_apply_2(x_27, x_26, x_24);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_3, 0);
lean_inc(x_29);
lean_dec(x_3);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_apply_2(x_30, x_29, x_24);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_apply_2(x_39, x_33, x_35);
lean_ctor_set(x_3, 0, x_40);
return x_3;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
lean_dec(x_3);
x_42 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_apply_2(x_45, x_33, x_41);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Booleanisation_instPreorder(lean_box(0), x_1);
x_3 = lean_alloc_closure((void*)(l_Booleanisation_instSemilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instSemilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instSemilatticeInf___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instDistribLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = l_Booleanisation_instSemilatticeSup___rarg(x_1);
x_3 = lean_alloc_closure((void*)(l_Booleanisation_instSemilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instDistribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instDistribLattice___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Booleanisation_instTop___rarg(x_1);
x_3 = l_Booleanisation_instBot___rarg(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instBoundedOrder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBoundedOrder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Booleanisation_instBoundedOrder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_7, x_4, x_6);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_10, x_4, x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_17, x_15, x_13);
lean_ctor_set(x_3, 0, x_18);
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_21, x_19, x_13);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_3, 0);
x_27 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_2(x_30, x_26, x_24);
lean_ctor_set(x_3, 0, x_31);
return x_3;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_3, 0);
lean_inc(x_32);
lean_dec(x_3);
x_33 = l_GeneralizedBooleanAlgebra_toGeneralizedCoheytingAlgebra___rarg(x_1);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_apply_2(x_36, x_32, x_24);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_3);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_3, 0);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_apply_2(x_42, x_41, x_39);
lean_ctor_set(x_3, 0, x_43);
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_3, 0);
lean_inc(x_44);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_2(x_45, x_44, x_39);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
}
}
}
}
static lean_object* _init_l_Booleanisation_instBooleanAlgebra___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Booleanisation_instCompl___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_2 = l_Booleanisation_instDistribLattice___rarg(x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Booleanisation_instSDiff___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Booleanisation_instBooleanAlgebra___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Booleanisation_instTop___rarg(x_1);
x_6 = l_Booleanisation_instBot___rarg(x_1);
lean_dec(x_1);
x_7 = l_Booleanisation_instBooleanAlgebra___rarg___closed__1;
x_8 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_instBooleanAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Booleanisation_instBooleanAlgebra___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Booleanisation_liftLatticeHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Booleanisation_lift___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_liftLatticeHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_liftLatticeHom___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Booleanisation_liftLatticeHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Booleanisation_liftLatticeHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Booleanisation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Booleanisation_instPreorder___closed__1 = _init_l_Booleanisation_instPreorder___closed__1();
lean_mark_persistent(l_Booleanisation_instPreorder___closed__1);
l_Booleanisation_instBooleanAlgebra___rarg___closed__1 = _init_l_Booleanisation_instBooleanAlgebra___rarg___closed__1();
lean_mark_persistent(l_Booleanisation_instBooleanAlgebra___rarg___closed__1);
l_Booleanisation_liftLatticeHom___closed__1 = _init_l_Booleanisation_liftLatticeHom___closed__1();
lean_mark_persistent(l_Booleanisation_liftLatticeHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
