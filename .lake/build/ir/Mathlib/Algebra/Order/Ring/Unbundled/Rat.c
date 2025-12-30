// Lean compiler output
// Module: Mathlib.Algebra.Order.Ring.Unbundled.Rat
// Imports: Init Mathlib.Algebra.Order.Group.Unbundled.Abs Mathlib.Algebra.Order.Group.Unbundled.Basic Mathlib.Algebra.Ring.Rat Mathlib.Data.Int.Order.Basic
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
lean_object* l_SemilatticeInf_toMin___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
lean_object* l_instDecidableEqRat___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instSemilatticeInf___closed__1;
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific(lean_object*);
static lean_object* l_Rat_linearOrder___closed__1;
LEAN_EXPORT lean_object* l_Rat_instInf;
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__1(lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___rarg(lean_object*);
lean_object* l_Rat_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instDistribLattice;
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_ofScientific(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instSemilatticeSup;
LEAN_EXPORT lean_object* l_Rat_linearOrder;
lean_object* l_Rat_instDecidableLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instSemilatticeInf;
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__3___boxed(lean_object*, lean_object*);
static lean_object* l_Rat_instSup___closed__1;
static lean_object* l_Rat_linearOrder___closed__6;
LEAN_EXPORT lean_object* l_Rat_instLattice;
uint8_t l_Rat_blt(lean_object*, lean_object*);
static lean_object* l_Rat_linearOrder___closed__8;
extern lean_object* l_Rat_instLE;
lean_object* l_SemilatticeSup_toMax___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_toLattice___rarg(lean_object*);
static lean_object* l_Rat_linearOrder___closed__3;
static lean_object* l_Rat_instDistribLattice___closed__1;
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_Rat_linearOrder___closed__7;
LEAN_EXPORT lean_object* l_Rat_instPreorder;
static lean_object* l_Rat_linearOrder___closed__4;
LEAN_EXPORT lean_object* l_Rat_instPartialOrder;
uint8_t l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(lean_object*, lean_object*);
extern lean_object* l_Rat_instLT;
static lean_object* l_Rat_linearOrder___closed__2;
static lean_object* l_Rat_instInf___closed__1;
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__2(lean_object*, lean_object*);
static lean_object* l_Rat_linearOrder___closed__5;
LEAN_EXPORT uint8_t l_Rat_linearOrder___lambda__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_instSup;
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Rat_ofScientific(x_2, x_3, x_4);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRatCast_toOfScientific___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRatCast_toOfScientific___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_NNRatCast_toOfScientific___rarg(x_1, x_2, x_5, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Rat_instDecidableLe(x_1, x_2);
if (x_3 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Rat_instDecidableLe(x_1, x_2);
if (x_3 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT uint8_t l_Rat_linearOrder___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Rat_blt(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = l___private_Batteries_Data_Rat_Basic_0__decEqRat____x40_Batteries_Data_Rat_Basic___hyg_41_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
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
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
return x_7;
}
}
}
static lean_object* _init_l_Rat_linearOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instLE;
x_2 = l_Rat_instLT;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_linearOrder___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_linearOrder___lambda__2), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_linearOrder___lambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instDecidableLe___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqRat___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_instDecidableLt___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Rat_linearOrder___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = l_Rat_linearOrder___closed__1;
x_2 = l_Rat_linearOrder___closed__2;
x_3 = l_Rat_linearOrder___closed__3;
x_4 = l_Rat_linearOrder___closed__4;
x_5 = l_Rat_linearOrder___closed__5;
x_6 = l_Rat_linearOrder___closed__6;
x_7 = l_Rat_linearOrder___closed__7;
x_8 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_3);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_6);
lean_ctor_set(x_8, 6, x_7);
return x_8;
}
}
static lean_object* _init_l_Rat_linearOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_linearOrder___closed__8;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_linearOrder___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Rat_linearOrder___lambda__3(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Rat_instDistribLattice___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_linearOrder;
x_2 = l_LinearOrder_toLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instDistribLattice() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instDistribLattice___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instLattice() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instDistribLattice;
return x_1;
}
}
static lean_object* _init_l_Rat_instSemilatticeInf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLattice;
x_2 = l_Lattice_toSemilatticeInf___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instSemilatticeInf() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instSemilatticeInf___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instSemilatticeSup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instLattice;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_instInf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instSemilatticeInf;
x_2 = lean_alloc_closure((void*)(l_SemilatticeInf_toMin___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instInf() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instInf___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instSup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instSemilatticeSup;
x_2 = lean_alloc_closure((void*)(l_SemilatticeSup_toMax___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Rat_instSup() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instSup___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_instPartialOrder() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_instSemilatticeInf;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Rat_instPreorder() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_instPartialOrder;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Abs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Int_Order_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Ring_Unbundled_Rat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Abs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Order_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Rat_linearOrder___closed__1 = _init_l_Rat_linearOrder___closed__1();
lean_mark_persistent(l_Rat_linearOrder___closed__1);
l_Rat_linearOrder___closed__2 = _init_l_Rat_linearOrder___closed__2();
lean_mark_persistent(l_Rat_linearOrder___closed__2);
l_Rat_linearOrder___closed__3 = _init_l_Rat_linearOrder___closed__3();
lean_mark_persistent(l_Rat_linearOrder___closed__3);
l_Rat_linearOrder___closed__4 = _init_l_Rat_linearOrder___closed__4();
lean_mark_persistent(l_Rat_linearOrder___closed__4);
l_Rat_linearOrder___closed__5 = _init_l_Rat_linearOrder___closed__5();
lean_mark_persistent(l_Rat_linearOrder___closed__5);
l_Rat_linearOrder___closed__6 = _init_l_Rat_linearOrder___closed__6();
lean_mark_persistent(l_Rat_linearOrder___closed__6);
l_Rat_linearOrder___closed__7 = _init_l_Rat_linearOrder___closed__7();
lean_mark_persistent(l_Rat_linearOrder___closed__7);
l_Rat_linearOrder___closed__8 = _init_l_Rat_linearOrder___closed__8();
lean_mark_persistent(l_Rat_linearOrder___closed__8);
l_Rat_linearOrder = _init_l_Rat_linearOrder();
lean_mark_persistent(l_Rat_linearOrder);
l_Rat_instDistribLattice___closed__1 = _init_l_Rat_instDistribLattice___closed__1();
lean_mark_persistent(l_Rat_instDistribLattice___closed__1);
l_Rat_instDistribLattice = _init_l_Rat_instDistribLattice();
lean_mark_persistent(l_Rat_instDistribLattice);
l_Rat_instLattice = _init_l_Rat_instLattice();
lean_mark_persistent(l_Rat_instLattice);
l_Rat_instSemilatticeInf___closed__1 = _init_l_Rat_instSemilatticeInf___closed__1();
lean_mark_persistent(l_Rat_instSemilatticeInf___closed__1);
l_Rat_instSemilatticeInf = _init_l_Rat_instSemilatticeInf();
lean_mark_persistent(l_Rat_instSemilatticeInf);
l_Rat_instSemilatticeSup = _init_l_Rat_instSemilatticeSup();
lean_mark_persistent(l_Rat_instSemilatticeSup);
l_Rat_instInf___closed__1 = _init_l_Rat_instInf___closed__1();
lean_mark_persistent(l_Rat_instInf___closed__1);
l_Rat_instInf = _init_l_Rat_instInf();
lean_mark_persistent(l_Rat_instInf);
l_Rat_instSup___closed__1 = _init_l_Rat_instSup___closed__1();
lean_mark_persistent(l_Rat_instSup___closed__1);
l_Rat_instSup = _init_l_Rat_instSup();
lean_mark_persistent(l_Rat_instSup);
l_Rat_instPartialOrder = _init_l_Rat_instPartialOrder();
lean_mark_persistent(l_Rat_instPartialOrder);
l_Rat_instPreorder = _init_l_Rat_instPreorder();
lean_mark_persistent(l_Rat_instPreorder);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
