// Lean compiler output
// Module: Mathlib.RingTheory.TwoSidedIdeal.Lattice
// Imports: Init Mathlib.RingTheory.TwoSidedIdeal.Basic
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
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeInf___rarg(lean_object*);
lean_object* l_Setoid_completeLattice(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instBot(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toDistrib___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteLattice(lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf___rarg(lean_object*);
lean_object* l_RingCon_instCompleteLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSupSet___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSupSet(lean_object*);
lean_object* l_SetLike_instPartialOrder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instInfSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instTop___boxed(lean_object*, lean_object*);
static lean_object* l_TwoSidedIdeal_instTop___closed__1;
lean_object* l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instInfSet___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1;
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_1);
x_4 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_5 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_RingCon_instCompleteLattice___rarg(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_11, x_2, x_3);
return x_12;
}
}
static lean_object* _init_l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_SetLike_instPartialOrder(lean_box(0), lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeSup___rarg___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_4 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_5 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_RingCon_instCompleteLattice___rarg(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_9, x_2, x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
lean_inc(x_1);
x_2 = l_TwoSidedIdeal_instSemilatticeSup___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_dec(x_4);
x_5 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSemilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeInf___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSupSet___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_3 = l_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___rarg(x_1);
x_4 = l_NonUnitalNonAssocSemiring_toDistrib___rarg(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_RingCon_instCompleteLattice___rarg(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, lean_box(0));
return x_9;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instSupSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSupSet___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeSup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
lean_inc(x_1);
x_2 = l_TwoSidedIdeal_instSemilatticeInf___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_dec(x_4);
x_5 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSupSet___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSupSet___rarg), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instCompleteSemilatticeSup___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instInfSet(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instInfSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_TwoSidedIdeal_instInfSet(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeInf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
lean_inc(x_1);
x_2 = l_TwoSidedIdeal_instCompleteSemilatticeSup___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
lean_dec(x_4);
x_5 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instInfSet___boxed), 3, 2);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, x_1);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instInfSet___boxed), 3, 2);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteSemilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instCompleteSemilatticeInf___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_TwoSidedIdeal_instTop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Setoid_completeLattice(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_TwoSidedIdeal_instTop___closed__1;
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instTop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TwoSidedIdeal_instTop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_TwoSidedIdeal_instTop___closed__1;
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_TwoSidedIdeal_instBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteLattice___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = l_TwoSidedIdeal_instSemilatticeSup___rarg(x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSemilatticeInf___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instSupSet___rarg), 2, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instInfSet___boxed), 3, 2);
lean_closure_set(x_6, 0, lean_box(0));
lean_closure_set(x_6, 1, x_1);
x_7 = l_TwoSidedIdeal_instTop(lean_box(0), x_1);
x_8 = l_TwoSidedIdeal_instBot(lean_box(0), x_1);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set(x_9, 4, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_TwoSidedIdeal_instCompleteLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_TwoSidedIdeal_instCompleteLattice___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_TwoSidedIdeal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_TwoSidedIdeal_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_TwoSidedIdeal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1 = _init_l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1();
lean_mark_persistent(l_TwoSidedIdeal_instSemilatticeSup___rarg___closed__1);
l_TwoSidedIdeal_instTop___closed__1 = _init_l_TwoSidedIdeal_instTop___closed__1();
lean_mark_persistent(l_TwoSidedIdeal_instTop___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
