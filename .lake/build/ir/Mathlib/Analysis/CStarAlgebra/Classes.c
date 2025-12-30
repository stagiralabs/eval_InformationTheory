// Lean compiler output
// Module: Mathlib.Analysis.CStarAlgebra.Classes
// Imports: Init Mathlib.Analysis.Complex.Basic Mathlib.Algebra.Star.NonUnitalSubalgebra
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
LEAN_EXPORT lean_object* l_CStarAlgebra_toNonUnitalCStarAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall(lean_object*, lean_object*);
lean_object* l_Prod_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Pi_instStarForall___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CStarAlgebra_toNonUnitalCStarAlgebra___rarg(lean_object*);
lean_object* l_NormedCommRing_toNonUnitalNormedCommRing___rarg(lean_object*);
lean_object* l_NormedRing_toNonUnitalNormedRing___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toNonUnitalCommCStarAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraProd___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(lean_object*);
lean_object* l_Prod_nonUnitalNormedRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_instStar___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toNonUnitalCommCStarAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toCStarAlgebra___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraProd(lean_object*, lean_object*);
lean_object* l_Pi_nonUnitalNormedRing___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toCStarAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toCStarAlgebra___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toCStarAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommCStarAlgebra_toCStarAlgebra___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CStarAlgebra_toNonUnitalCStarAlgebra___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 2);
x_5 = l_NormedRing_toNonUnitalNormedRing___rarg(x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
lean_ctor_set(x_1, 2, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_10 = l_NormedRing_toNonUnitalNormedRing___rarg(x_7);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_CStarAlgebra_toNonUnitalCStarAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CStarAlgebra_toNonUnitalCStarAlgebra___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toNonUnitalCommCStarAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = l_NormedCommRing_toNonUnitalNormedCommRing___rarg(x_2);
x_5 = l_CommCStarAlgebra_toCStarAlgebra___rarg(x_1);
x_6 = l_CStarAlgebra_toNonUnitalCStarAlgebra___rarg(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_4);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_3);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_CommCStarAlgebra_toNonUnitalCommCStarAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_CommCStarAlgebra_toNonUnitalCommCStarAlgebra___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCStarAlgebraForall___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Pi_nonUnitalNormedRing___rarg(x_1, x_3);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_instNonUnitalCStarAlgebraForall___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_Pi_instStarForall___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_instNonUnitalCStarAlgebraForall___rarg___lambda__3), 2, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraForall(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCStarAlgebraForall___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_1);
x_4 = l_Pi_nonUnitalNormedRing___rarg(x_1, x_3);
lean_inc(x_2);
x_5 = lean_alloc_closure((void*)(l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__2), 2, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = lean_alloc_closure((void*)(l_Pi_instStarForall___rarg), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_closure((void*)(l_instNonUnitalCommCStarAlgebraForall___rarg___lambda__3), 2, 1);
lean_closure_set(x_7, 0, x_2);
x_8 = l_instNonUnitalCStarAlgebraForall___rarg(x_1, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 0, x_4);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 2, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraForall(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCommCStarAlgebraForall___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Prod_nonUnitalNormedRing___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Prod_instStar___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCStarAlgebraProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCStarAlgebraProd___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
x_3 = l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_2);
x_5 = l_NonUnitalCommCStarAlgebra_toNonUnitalCStarAlgebra___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = l_Prod_nonUnitalNormedRing___rarg(x_4, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_alloc_closure((void*)(l_Prod_instStar___rarg), 3, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = l_instNonUnitalCStarAlgebraProd___rarg(x_3, x_5);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 0, x_7);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 2);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_10);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_instNonUnitalCommCStarAlgebraProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instNonUnitalCommCStarAlgebraProd___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Complex_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Star_NonUnitalSubalgebra(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_CStarAlgebra_Classes(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Complex_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Star_NonUnitalSubalgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
