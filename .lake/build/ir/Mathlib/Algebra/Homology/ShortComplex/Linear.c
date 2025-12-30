// Lean compiler output
// Module: Mathlib.Algebra.Homology.ShortComplex.Linear
// Imports: Init Mathlib.Algebra.Homology.ShortComplex.Preadditive Mathlib.CategoryTheory.Linear.LinearFunctor
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
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_6);
x_11 = lean_apply_4(x_3, x_8, x_9, x_6, x_10);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_6);
x_15 = lean_apply_4(x_3, x_12, x_13, x_6, x_14);
x_16 = lean_ctor_get(x_4, 2);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_ctor_get(x_5, 2);
lean_inc(x_17);
lean_dec(x_5);
x_18 = lean_ctor_get(x_7, 2);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_apply_4(x_3, x_16, x_17, x_6, x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_19);
return x_20;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_instSMulHom___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_CategoryTheory_ShortComplex_instSMulHom___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instSMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_instSMulHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_instSMulHom___rarg___boxed), 7, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
lean_closure_set(x_6, 3, x_4);
lean_closure_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_instModuleHom___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instModuleHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_instModuleHom(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_instModuleHom___rarg), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_instLinear___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_instLinear___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_instLinear(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_inc(x_3);
lean_inc(x_10);
x_14 = lean_apply_4(x_3, x_11, x_12, x_10, x_13);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_apply_4(x_3, x_15, x_16, x_10, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_inc(x_3);
lean_inc(x_10);
x_14 = lean_apply_4(x_3, x_11, x_12, x_10, x_13);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_apply_4(x_3, x_15, x_16, x_10, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_RightHomologyMapData_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_inc(x_10);
lean_inc(x_3);
x_14 = l_CategoryTheory_ShortComplex_LeftHomologyMapData_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_12, x_13, x_10);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l_CategoryTheory_ShortComplex_RightHomologyMapData_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_15, x_16, x_17, x_10);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_CategoryTheory_ShortComplex_HomologyMapData_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_HomologyMapData_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_HomologyMapData_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 2);
lean_inc(x_14);
lean_dec(x_4);
x_15 = lean_ctor_get(x_5, 2);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_11);
x_17 = lean_apply_4(x_3, x_10, x_11, x_9, x_16);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_3);
lean_inc(x_9);
x_19 = lean_apply_4(x_3, x_12, x_11, x_9, x_18);
x_20 = lean_ctor_get(x_8, 2);
lean_inc(x_20);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_14);
x_21 = lean_apply_4(x_3, x_14, x_13, x_9, x_20);
x_22 = lean_ctor_get(x_8, 3);
lean_inc(x_22);
lean_dec(x_8);
x_23 = lean_apply_4(x_3, x_14, x_15, x_9, x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
return x_24;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_CategoryTheory_ShortComplex_Homotopy_smul___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_CategoryTheory_ShortComplex_Homotopy_smul___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_ShortComplex_Homotopy_smul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_ShortComplex_Homotopy_smul(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Preadditive(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Linear_LinearFunctor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Homology_ShortComplex_Linear(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Homology_ShortComplex_Preadditive(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Linear_LinearFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
