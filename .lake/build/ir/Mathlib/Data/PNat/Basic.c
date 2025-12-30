// Lean compiler output
// Module: Mathlib.Data.PNat.Basic
// Imports: Init Mathlib.Algebra.GroupWithZero.Divisibility Mathlib.Algebra.Order.Positive.Ring Mathlib.Algebra.Order.Ring.Nat Mathlib.Algebra.Order.Sub.Basic Mathlib.Data.PNat.Equiv
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
static lean_object* l_instPNatDistrib___closed__1;
static lean_object* l_instPNatMul___closed__1;
lean_object* l_Positive_linearOrderedCancelCommMonoid___rarg(lean_object*);
extern lean_object* l_Nat_instLinearOrderedCommSemiring;
LEAN_EXPORT lean_object* l_instPNatLinearOrderedCancelCommMonoid;
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PNat_strongInductionOn___rarg(lean_object*, lean_object*);
static lean_object* l_instPNatAddLeftCancelSemigroup___closed__1;
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPNatAdd;
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instAddMonoid;
LEAN_EXPORT lean_object* l_PNat_coeMonoidHom;
lean_object* l_Nat_toPNat_x27(lean_object*);
LEAN_EXPORT lean_object* l_instPNatAddLeftCancelSemigroup;
extern lean_object* l_Nat_instAddCancelCommMonoid;
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PNat_val___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instPNatDistrib;
LEAN_EXPORT lean_object* l_PNat_recOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_recOn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPNatMul;
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instPNatLinearOrderedCancelCommMonoid___closed__1;
LEAN_EXPORT lean_object* l_PNat_instSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_instOrderBot;
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__1(lean_object*);
extern lean_object* l_Nat_instPreorder;
extern lean_object* l_Equiv_pnatEquivNat;
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_instStrictOrderedSemiring;
static lean_object* l_instPNatAddCommSemigroup___closed__1;
LEAN_EXPORT lean_object* l_instPNatAddRightCancelSemigroup;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_coeAddHom;
lean_object* l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instPNatAdd___closed__1;
LEAN_EXPORT lean_object* l_PNat_instSub___boxed(lean_object*, lean_object*);
extern lean_object* l_Nat_instAddCommMonoid;
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn(lean_object*);
lean_object* l_Positive_instDistribSubtypeLtOfNat___rarg(lean_object*);
LEAN_EXPORT lean_object* l_OrderIso_pnatIsoNat;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_PNat_recOn___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_PNat_coeAddHom___closed__1;
LEAN_EXPORT lean_object* l_instPNatAddCommSemigroup;
static lean_object* _init_l_instPNatAddLeftCancelSemigroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_instAddCancelCommMonoid;
x_2 = l_Nat_instPreorder;
x_3 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_closure_set(x_3, 2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_instPNatAddLeftCancelSemigroup() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatAddLeftCancelSemigroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatAddRightCancelSemigroup() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatAddLeftCancelSemigroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatAddCommSemigroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_instAddCommMonoid;
x_2 = l_Nat_instPreorder;
x_3 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_closure_set(x_3, 2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_instPNatAddCommSemigroup() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatAddCommSemigroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatLinearOrderedCancelCommMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instLinearOrderedCommSemiring;
x_2 = l_Positive_linearOrderedCancelCommMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instPNatLinearOrderedCancelCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatLinearOrderedCancelCommMonoid___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatAdd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_instAddMonoid;
x_2 = l_Nat_instPreorder;
x_3 = lean_alloc_closure((void*)(l_Positive_instAddSubtypeLtOfNat__mathlib___rarg___boxed), 5, 3);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
lean_closure_set(x_3, 2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_instPNatAdd() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatAdd___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatMul___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instStrictOrderedSemiring;
x_2 = lean_alloc_closure((void*)(l_Positive_instMulSubtypeLtOfNat__mathlib___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instPNatMul() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatMul___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPNatDistrib___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_instStrictOrderedSemiring;
x_2 = l_Positive_instDistribSubtypeLtOfNat___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instPNatDistrib() {
_start:
{
lean_object* x_1; 
x_1 = l_instPNatDistrib___closed__1;
return x_1;
}
}
static lean_object* _init_l_PNat_coeAddHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PNat_val___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PNat_coeAddHom() {
_start:
{
lean_object* x_1; 
x_1 = l_PNat_coeAddHom___closed__1;
return x_1;
}
}
static lean_object* _init_l_OrderIso_pnatIsoNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_pnatEquivNat;
return x_1;
}
}
static lean_object* _init_l_PNat_instOrderBot() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_nat_dec_eq(x_7, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_nat_sub(x_7, x_6);
lean_dec(x_7);
x_10 = lean_nat_add(x_9, x_6);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_PNat_caseStrongInductionOn___rarg___lambda__1), 3, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = lean_apply_2(x_1, x_10, x_11);
return x_12;
}
else
{
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_PNat_caseStrongInductionOn___rarg___lambda__2___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
x_5 = l_PNat_strongInductionOn___rarg(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PNat_caseStrongInductionOn___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PNat_caseStrongInductionOn___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PNat_caseStrongInductionOn___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__1(lean_object* x_1) {
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
x_10 = lean_nat_add(x_9, x_8);
lean_dec(x_9);
x_11 = lean_apply_1(x_4, lean_box(0));
x_12 = lean_apply_2(x_1, x_10, x_11);
return x_12;
}
else
{
lean_dec(x_4);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
static lean_object* _init_l_PNat_recOn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PNat_recOn___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PNat_recOn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_alloc_closure((void*)(l_PNat_recOn___lambda__2___boxed), 5, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_3);
x_6 = l_PNat_recOn___closed__1;
x_7 = l___private_Init_Data_Nat_Basic_0__Nat_recCompiled___rarg(x_6, x_5, x_1);
x_8 = lean_apply_1(x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_PNat_recOn___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PNat_recOn___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_PNat_recOn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_PNat_recOn(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_PNat_coeMonoidHom() {
_start:
{
lean_object* x_1; 
x_1 = l_PNat_coeAddHom___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PNat_instSub(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_nat_sub(x_1, x_2);
x_4 = l_Nat_toPNat_x27(x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_instSub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PNat_instSub(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Divisibility(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Positive_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Equiv(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_PNat_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Divisibility(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Positive_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instPNatAddLeftCancelSemigroup___closed__1 = _init_l_instPNatAddLeftCancelSemigroup___closed__1();
lean_mark_persistent(l_instPNatAddLeftCancelSemigroup___closed__1);
l_instPNatAddLeftCancelSemigroup = _init_l_instPNatAddLeftCancelSemigroup();
lean_mark_persistent(l_instPNatAddLeftCancelSemigroup);
l_instPNatAddRightCancelSemigroup = _init_l_instPNatAddRightCancelSemigroup();
lean_mark_persistent(l_instPNatAddRightCancelSemigroup);
l_instPNatAddCommSemigroup___closed__1 = _init_l_instPNatAddCommSemigroup___closed__1();
lean_mark_persistent(l_instPNatAddCommSemigroup___closed__1);
l_instPNatAddCommSemigroup = _init_l_instPNatAddCommSemigroup();
lean_mark_persistent(l_instPNatAddCommSemigroup);
l_instPNatLinearOrderedCancelCommMonoid___closed__1 = _init_l_instPNatLinearOrderedCancelCommMonoid___closed__1();
lean_mark_persistent(l_instPNatLinearOrderedCancelCommMonoid___closed__1);
l_instPNatLinearOrderedCancelCommMonoid = _init_l_instPNatLinearOrderedCancelCommMonoid();
lean_mark_persistent(l_instPNatLinearOrderedCancelCommMonoid);
l_instPNatAdd___closed__1 = _init_l_instPNatAdd___closed__1();
lean_mark_persistent(l_instPNatAdd___closed__1);
l_instPNatAdd = _init_l_instPNatAdd();
lean_mark_persistent(l_instPNatAdd);
l_instPNatMul___closed__1 = _init_l_instPNatMul___closed__1();
lean_mark_persistent(l_instPNatMul___closed__1);
l_instPNatMul = _init_l_instPNatMul();
lean_mark_persistent(l_instPNatMul);
l_instPNatDistrib___closed__1 = _init_l_instPNatDistrib___closed__1();
lean_mark_persistent(l_instPNatDistrib___closed__1);
l_instPNatDistrib = _init_l_instPNatDistrib();
lean_mark_persistent(l_instPNatDistrib);
l_PNat_coeAddHom___closed__1 = _init_l_PNat_coeAddHom___closed__1();
lean_mark_persistent(l_PNat_coeAddHom___closed__1);
l_PNat_coeAddHom = _init_l_PNat_coeAddHom();
lean_mark_persistent(l_PNat_coeAddHom);
l_OrderIso_pnatIsoNat = _init_l_OrderIso_pnatIsoNat();
lean_mark_persistent(l_OrderIso_pnatIsoNat);
l_PNat_instOrderBot = _init_l_PNat_instOrderBot();
lean_mark_persistent(l_PNat_instOrderBot);
l_PNat_recOn___closed__1 = _init_l_PNat_recOn___closed__1();
lean_mark_persistent(l_PNat_recOn___closed__1);
l_PNat_coeMonoidHom = _init_l_PNat_coeMonoidHom();
lean_mark_persistent(l_PNat_coeMonoidHom);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
