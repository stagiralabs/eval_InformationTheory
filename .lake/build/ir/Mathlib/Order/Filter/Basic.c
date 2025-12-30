// Lean compiler output
// Module: Mathlib.Order.Filter.Basic
// Imports: Init Mathlib.Algebra.Group.Basic Mathlib.Algebra.Group.Pi.Basic Mathlib.Data.Set.Lattice Mathlib.Order.Filter.Defs
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
static lean_object* l_Filter_instCompleteLatticeFilter___closed__6;
lean_object* l_Filter_instSupSet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEqEventuallyLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLEEventuallyEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instCompleteLatticeFilter___closed__3;
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_inhabitedMem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransSetMemSubset(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instDistribLattice(lean_object*);
LEAN_EXPORT lean_object* l_Filter_giGenerate___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_giGenerate(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransSetSupersetMem(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEqEventuallyLE(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instCompleteLatticeFilter___closed__5;
LEAN_EXPORT lean_object* l_Filter_inhabitedMem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_giGenerate___elambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instCompleteLatticeFilter___closed__7;
LEAN_EXPORT lean_object* l_Filter_unique(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLE(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Filter_instCompleteLatticeFilter___closed__4;
static lean_object* l_Filter_instCompleteLatticeFilter___closed__2;
lean_object* l_Filter_sInf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_generate(lean_object*, lean_object*);
static lean_object* l_Filter_instCompleteLatticeFilter___closed__1;
LEAN_EXPORT lean_object* l_Filter_mkOfClosure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLEEventuallyEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter___lambda__1(lean_object*, lean_object*);
static lean_object* l_Filter_instDistribLattice___closed__1;
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Filter_instPartialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Filter_inhabitedMem(lean_object* x_1, lean_object* x_2) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_inhabitedMem___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_inhabitedMem(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instTransSetSupersetMem(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_instTransSetMemSubset(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_generate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_mkOfClosure(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_giGenerate___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_giGenerate___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_giGenerate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Filter_giGenerate___elambda__1), 3, 1);
lean_closure_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_instPartialOrder(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instCompleteLatticeFilter___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_instCompleteLatticeFilter___closed__1;
x_2 = l_Filter_instCompleteLatticeFilter___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Filter_instCompleteLatticeFilter___closed__3;
x_2 = l_Filter_instCompleteLatticeFilter___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_instSupSet), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Filter_sInf), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Filter_instCompleteLatticeFilter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
x_2 = l_Filter_instCompleteLatticeFilter___closed__4;
x_3 = l_Filter_instCompleteLatticeFilter___closed__5;
x_4 = l_Filter_instCompleteLatticeFilter___closed__6;
lean_inc(x_1);
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set(x_5, 4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Filter_instCompleteLatticeFilter___closed__7;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_instCompleteLatticeFilter___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Filter_instCompleteLatticeFilter___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_Filter_unique(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Filter_instDistribLattice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Filter_instCompleteLatticeFilter(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Filter_instDistribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Filter_instDistribLattice___closed__1;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Filter_instTransForallEventuallyEq(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instTransForallEventuallyLE(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEqEventuallyLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyEqEventuallyLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instTransForallEventuallyEqEventuallyLE(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLEEventuallyEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Filter_instTransForallEventuallyLEEventuallyEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Filter_instTransForallEventuallyLEEventuallyEq(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pi_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Filter_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Filter_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pi_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Filter_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Filter_instCompleteLatticeFilter___closed__1 = _init_l_Filter_instCompleteLatticeFilter___closed__1();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__1);
l_Filter_instCompleteLatticeFilter___closed__2 = _init_l_Filter_instCompleteLatticeFilter___closed__2();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__2);
l_Filter_instCompleteLatticeFilter___closed__3 = _init_l_Filter_instCompleteLatticeFilter___closed__3();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__3);
l_Filter_instCompleteLatticeFilter___closed__4 = _init_l_Filter_instCompleteLatticeFilter___closed__4();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__4);
l_Filter_instCompleteLatticeFilter___closed__5 = _init_l_Filter_instCompleteLatticeFilter___closed__5();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__5);
l_Filter_instCompleteLatticeFilter___closed__6 = _init_l_Filter_instCompleteLatticeFilter___closed__6();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__6);
l_Filter_instCompleteLatticeFilter___closed__7 = _init_l_Filter_instCompleteLatticeFilter___closed__7();
lean_mark_persistent(l_Filter_instCompleteLatticeFilter___closed__7);
l_Filter_instDistribLattice___closed__1 = _init_l_Filter_instDistribLattice___closed__1();
lean_mark_persistent(l_Filter_instDistribLattice___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
