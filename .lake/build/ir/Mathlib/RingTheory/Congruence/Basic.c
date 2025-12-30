// Lean compiler output
// Module: Mathlib.RingTheory.Congruence.Basic
// Imports: Init Mathlib.Algebra.Ring.Action.Basic Mathlib.GroupTheory.Congruence.Basic Mathlib.RingTheory.Congruence.Defs
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
LEAN_EXPORT lean_object* l_RingCon_gi(lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instPartialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instLE___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instPartialOrder___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Setoid_completeLattice(lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Con_instSMul___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instCompleteLattice(lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instLE(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instInfSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instCompleteLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2;
static lean_object* l_RingCon_instCompleteLattice___rarg___closed__1;
LEAN_EXPORT lean_object* l_RingCon_gi___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_RingCon_instPartialOrder___closed__1;
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instInfSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RingCon_instSMulQuotient___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instSMulQuotient___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingCon_instSMulQuotient(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RingCon_instDistribMulActionQuotientOfIsScalarTower___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instDistribMulActionQuotientOfIsScalarTower___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingCon_instDistribMulActionQuotientOfIsScalarTower(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Con_instSMul___rarg___boxed), 5, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, lean_box(0));
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_RingCon_instMulSemiringActionQuotientOfIsScalarTower___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instMulSemiringActionQuotientOfIsScalarTower___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingCon_instMulSemiringActionQuotientOfIsScalarTower(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instLE(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingCon_instLE(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instInfSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_instInfSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingCon_instInfSet(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_RingCon_instPartialOrder___closed__1() {
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
LEAN_EXPORT lean_object* l_RingCon_instPartialOrder(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingCon_instPartialOrder___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_RingCon_instPartialOrder___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_RingCon_instPartialOrder(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__2), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_RingCon_instPartialOrder(lean_box(0), x_1, x_2);
x_5 = lean_alloc_closure((void*)(l_RingCon_instInfSet___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
x_6 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = lean_box(0);
x_10 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2;
x_11 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_5);
lean_ctor_set(x_11, 3, x_9);
lean_ctor_set(x_11, 4, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_RingCon_instCompleteLattice___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Setoid_completeLattice(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingCon_instCompleteLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_RingCon_instInfSet___boxed), 4, 3);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_1);
lean_closure_set(x_3, 2, x_2);
x_4 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg(x_1, x_2, lean_box(0));
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_5, 1);
lean_dec(x_8);
x_9 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1;
lean_ctor_set(x_5, 1, x_9);
x_10 = l_RingCon_instCompleteLattice___rarg___closed__1;
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 2);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
lean_ctor_set(x_10, 2, x_3);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 0, x_5);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 3);
x_16 = lean_ctor_get(x_10, 4);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_17, 0, x_5);
lean_ctor_set(x_17, 1, x_6);
lean_ctor_set(x_17, 2, x_3);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_5, 0);
lean_inc(x_18);
lean_dec(x_5);
x_19 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_RingCon_instCompleteLattice___rarg___closed__1;
x_22 = lean_ctor_get(x_21, 3);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 4);
lean_inc(x_23);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 lean_ctor_release(x_21, 2);
 lean_ctor_release(x_21, 3);
 lean_ctor_release(x_21, 4);
 x_24 = x_21;
} else {
 lean_dec_ref(x_21);
 x_24 = lean_box(0);
}
if (lean_is_scalar(x_24)) {
 x_25 = lean_alloc_ctor(0, 5, 0);
} else {
 x_25 = x_24;
}
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_6);
lean_ctor_set(x_25, 2, x_3);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_RingCon_instCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingCon_instCompleteLattice___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingCon_gi___elambda__1___boxed), 5, 3);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_1);
lean_closure_set(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingCon_gi___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_RingCon_gi___elambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RingCon_gi___elambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_RingCon_gi___elambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Action_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Congruence_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_Congruence_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Congruence_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Action_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Congruence_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_Congruence_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingCon_instPartialOrder___closed__1 = _init_l_RingCon_instPartialOrder___closed__1();
lean_mark_persistent(l_RingCon_instPartialOrder___closed__1);
l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1 = _init_l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1();
lean_mark_persistent(l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__1);
l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2 = _init_l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2();
lean_mark_persistent(l_completeLatticeOfInf___at_RingCon_instCompleteLattice___spec__1___rarg___closed__2);
l_RingCon_instCompleteLattice___rarg___closed__1 = _init_l_RingCon_instCompleteLattice___rarg___closed__1();
lean_mark_persistent(l_RingCon_instCompleteLattice___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
