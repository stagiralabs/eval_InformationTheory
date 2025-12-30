// Lean compiler output
// Module: Mathlib.Data.Real.EReal
// Imports: Init Mathlib.Data.Real.Basic Mathlib.Data.ENNReal.Inv Mathlib.Data.Sign
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
static lean_object* l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2;
LEAN_EXPORT lean_object* l_instAddCommMonoidWithOneEReal;
lean_object* l_WithBot_preorder(lean_object*, lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_zero;
LEAN_EXPORT lean_object* l_EReal_abs(lean_object*);
extern lean_object* l_Real_partialOrder;
LEAN_EXPORT lean_object* l_Equiv_neg___at_EReal_negOrderIso___spec__1;
extern lean_object* l_Real_instZero;
lean_object* l_ENNReal_ofReal(lean_object*);
extern lean_object* l_Real_instAddMonoid;
static lean_object* l_instERealZero___closed__1;
static lean_object* l_instERealAddMonoid___closed__1;
static lean_object* l_instERealPartialOrder___closed__2;
static lean_object* l_EReal_hasCoeENNReal___closed__1;
LEAN_EXPORT lean_object* l_instERealAddMonoid;
LEAN_EXPORT lean_object* l_EReal_instNeg;
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal;
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
static lean_object* l_instAddCommMonoidWithOneEReal___closed__4;
static lean_object* l_instERealPartialOrder___closed__1;
extern lean_object* l_Real_semiring;
static lean_object* l_instERealOne___closed__2;
LEAN_EXPORT lean_object* l_EReal_toReal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instERealPartialOrder;
static lean_object* l_EReal_instNeg___closed__1;
LEAN_EXPORT lean_object* l_EReal_hasCoeENNReal;
static lean_object* l_EReal_instInhabited___closed__2;
static lean_object* l_EReal_neTopBotEquivReal___closed__3;
static lean_object* l_instERealZero___closed__2;
LEAN_EXPORT lean_object* l_EReal_instInhabited;
lean_object* l_WithTop_addMonoid___rarg(lean_object*);
static lean_object* l_EReal_instInhabited___closed__1;
lean_object* l_abs___at_Real_nnabs___spec__1(lean_object*);
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instERealBot;
static lean_object* l_EReal_neTopBotEquivReal___closed__1;
extern lean_object* l_Real_instOne;
LEAN_EXPORT lean_object* l_EReal_instTop;
static lean_object* l_EReal_neTopBotEquivReal___closed__2;
static lean_object* l_EReal_instTop___closed__1;
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_EReal_rec___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instERealOne___closed__1;
LEAN_EXPORT lean_object* l_EReal_neg(lean_object*);
static lean_object* l_instAddCommMonoidWithOneEReal___closed__1;
LEAN_EXPORT lean_object* l_ENNReal_toEReal(lean_object*);
static lean_object* l_instERealAddMonoid___closed__2;
static lean_object* l_instAddCommMonoidWithOneEReal___closed__2;
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_EReal_instCoeReal;
LEAN_EXPORT lean_object* l_EReal_toReal(lean_object*);
static lean_object* l_EReal_negOrderIso___closed__1;
lean_object* l_Equiv_neg___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
LEAN_EXPORT lean_object* l_EReal_rec___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WithTop_addMonoidWithOne___rarg(lean_object*);
static lean_object* l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1;
static lean_object* l_instAddCommMonoidWithOneEReal___closed__3;
LEAN_EXPORT lean_object* l_EReal_rec(lean_object*);
LEAN_EXPORT lean_object* l_EReal_instHasDistribNeg;
LEAN_EXPORT lean_object* l_instERealOne;
static lean_object* l_EReal_instCoeReal___closed__1;
lean_object* l_WithTop_preorder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EReal_negOrderIso;
LEAN_EXPORT lean_object* l_EReal_instInvolutiveNeg;
LEAN_EXPORT lean_object* l_Real_toEReal(lean_object*);
LEAN_EXPORT lean_object* l_instERealZero;
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__1(lean_object*);
static lean_object* _init_l_instERealBot() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instERealZero___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_instZero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instERealZero___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instERealZero___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instERealZero() {
_start:
{
lean_object* x_1; 
x_1 = l_instERealZero___closed__2;
return x_1;
}
}
static lean_object* _init_l_instERealOne___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_instOne;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instERealOne___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instERealOne___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instERealOne() {
_start:
{
lean_object* x_1; 
x_1 = l_instERealOne___closed__2;
return x_1;
}
}
static lean_object* _init_l_instERealAddMonoid___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_instAddMonoid;
x_2 = l_WithTop_addMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instERealAddMonoid___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instERealAddMonoid___closed__1;
x_2 = l_WithTop_addMonoid___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instERealAddMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_instERealAddMonoid___closed__2;
return x_1;
}
}
static lean_object* _init_l_instERealPartialOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_partialOrder;
x_2 = l_WithTop_preorder(lean_box(0), x_1);
return x_2;
}
}
static lean_object* _init_l_instERealPartialOrder___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instERealPartialOrder___closed__1;
x_2 = l_WithBot_preorder(lean_box(0), x_1);
return x_2;
}
}
static lean_object* _init_l_instERealPartialOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_instERealPartialOrder___closed__2;
return x_1;
}
}
static lean_object* _init_l_instAddCommMonoidWithOneEReal___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_semiring;
x_2 = l_Semiring_toNonAssocSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instAddCommMonoidWithOneEReal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instAddCommMonoidWithOneEReal___closed__1;
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instAddCommMonoidWithOneEReal___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instAddCommMonoidWithOneEReal___closed__2;
x_2 = l_WithTop_addMonoidWithOne___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instAddCommMonoidWithOneEReal___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instAddCommMonoidWithOneEReal___closed__3;
x_2 = l_WithTop_addMonoidWithOne___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instAddCommMonoidWithOneEReal() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddCommMonoidWithOneEReal___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Real_toEReal(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_EReal_instTop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_EReal_instTop() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instTop___closed__1;
return x_1;
}
}
static lean_object* _init_l_EReal_instCoeReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Real_toEReal), 1, 0);
return x_1;
}
}
static lean_object* _init_l_EReal_instCoeReal() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instCoeReal___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_ENNReal_toEReal(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_EReal_instTop___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Real_toEReal(x_3);
return x_4;
}
}
}
static lean_object* _init_l_EReal_hasCoeENNReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ENNReal_toEReal), 1, 0);
return x_1;
}
}
static lean_object* _init_l_EReal_hasCoeENNReal() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_hasCoeENNReal___closed__1;
return x_1;
}
}
static lean_object* _init_l_EReal_instInhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_EReal_instInhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_EReal_instInhabited___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_EReal_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instInhabited___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_EReal_rec___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_2);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_EReal_rec(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EReal_rec___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EReal_rec___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_EReal_rec___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_EReal_toReal(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Data_Real_Basic_0__Real_zero;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_EReal_toReal___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_EReal_toReal(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Real_toEReal(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_EReal_toReal(x_1);
return x_2;
}
}
static lean_object* _init_l_EReal_neTopBotEquivReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EReal_neTopBotEquivReal___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_EReal_neTopBotEquivReal___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EReal_neTopBotEquivReal___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_EReal_neTopBotEquivReal___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_EReal_neTopBotEquivReal___closed__1;
x_2 = l_EReal_neTopBotEquivReal___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_EReal_neTopBotEquivReal() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_neTopBotEquivReal___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_EReal_neTopBotEquivReal___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_EReal_neTopBotEquivReal___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_EReal_neg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_EReal_instTop___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_5);
x_7 = l_Real_toEReal(x_6);
return x_7;
}
}
}
}
static lean_object* _init_l_EReal_instNeg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_EReal_neg), 1, 0);
return x_1;
}
}
static lean_object* _init_l_EReal_instNeg() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instNeg___closed__1;
return x_1;
}
}
static lean_object* _init_l_EReal_instInvolutiveNeg() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instNeg;
return x_1;
}
}
static lean_object* _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_EReal_instNeg;
x_2 = lean_alloc_closure((void*)(l_Equiv_neg___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2;
return x_1;
}
}
static lean_object* _init_l_EReal_negOrderIso___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_EReal_instNeg___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_EReal_negOrderIso() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_negOrderIso___closed__1;
return x_1;
}
}
static lean_object* _init_l_EReal_instHasDistribNeg() {
_start:
{
lean_object* x_1; 
x_1 = l_EReal_instInvolutiveNeg;
return x_1;
}
}
LEAN_EXPORT lean_object* l_EReal_abs(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_abs___at_Real_nnabs___spec__1(x_5);
x_7 = l_ENNReal_ofReal(x_6);
return x_7;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENNReal_Inv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sign(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Real_EReal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENNReal_Inv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sign(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instERealBot = _init_l_instERealBot();
lean_mark_persistent(l_instERealBot);
l_instERealZero___closed__1 = _init_l_instERealZero___closed__1();
lean_mark_persistent(l_instERealZero___closed__1);
l_instERealZero___closed__2 = _init_l_instERealZero___closed__2();
lean_mark_persistent(l_instERealZero___closed__2);
l_instERealZero = _init_l_instERealZero();
lean_mark_persistent(l_instERealZero);
l_instERealOne___closed__1 = _init_l_instERealOne___closed__1();
lean_mark_persistent(l_instERealOne___closed__1);
l_instERealOne___closed__2 = _init_l_instERealOne___closed__2();
lean_mark_persistent(l_instERealOne___closed__2);
l_instERealOne = _init_l_instERealOne();
lean_mark_persistent(l_instERealOne);
l_instERealAddMonoid___closed__1 = _init_l_instERealAddMonoid___closed__1();
lean_mark_persistent(l_instERealAddMonoid___closed__1);
l_instERealAddMonoid___closed__2 = _init_l_instERealAddMonoid___closed__2();
lean_mark_persistent(l_instERealAddMonoid___closed__2);
l_instERealAddMonoid = _init_l_instERealAddMonoid();
lean_mark_persistent(l_instERealAddMonoid);
l_instERealPartialOrder___closed__1 = _init_l_instERealPartialOrder___closed__1();
lean_mark_persistent(l_instERealPartialOrder___closed__1);
l_instERealPartialOrder___closed__2 = _init_l_instERealPartialOrder___closed__2();
lean_mark_persistent(l_instERealPartialOrder___closed__2);
l_instERealPartialOrder = _init_l_instERealPartialOrder();
lean_mark_persistent(l_instERealPartialOrder);
l_instAddCommMonoidWithOneEReal___closed__1 = _init_l_instAddCommMonoidWithOneEReal___closed__1();
lean_mark_persistent(l_instAddCommMonoidWithOneEReal___closed__1);
l_instAddCommMonoidWithOneEReal___closed__2 = _init_l_instAddCommMonoidWithOneEReal___closed__2();
lean_mark_persistent(l_instAddCommMonoidWithOneEReal___closed__2);
l_instAddCommMonoidWithOneEReal___closed__3 = _init_l_instAddCommMonoidWithOneEReal___closed__3();
lean_mark_persistent(l_instAddCommMonoidWithOneEReal___closed__3);
l_instAddCommMonoidWithOneEReal___closed__4 = _init_l_instAddCommMonoidWithOneEReal___closed__4();
lean_mark_persistent(l_instAddCommMonoidWithOneEReal___closed__4);
l_instAddCommMonoidWithOneEReal = _init_l_instAddCommMonoidWithOneEReal();
lean_mark_persistent(l_instAddCommMonoidWithOneEReal);
l_EReal_instTop___closed__1 = _init_l_EReal_instTop___closed__1();
lean_mark_persistent(l_EReal_instTop___closed__1);
l_EReal_instTop = _init_l_EReal_instTop();
lean_mark_persistent(l_EReal_instTop);
l_EReal_instCoeReal___closed__1 = _init_l_EReal_instCoeReal___closed__1();
lean_mark_persistent(l_EReal_instCoeReal___closed__1);
l_EReal_instCoeReal = _init_l_EReal_instCoeReal();
lean_mark_persistent(l_EReal_instCoeReal);
l_EReal_hasCoeENNReal___closed__1 = _init_l_EReal_hasCoeENNReal___closed__1();
lean_mark_persistent(l_EReal_hasCoeENNReal___closed__1);
l_EReal_hasCoeENNReal = _init_l_EReal_hasCoeENNReal();
lean_mark_persistent(l_EReal_hasCoeENNReal);
l_EReal_instInhabited___closed__1 = _init_l_EReal_instInhabited___closed__1();
lean_mark_persistent(l_EReal_instInhabited___closed__1);
l_EReal_instInhabited___closed__2 = _init_l_EReal_instInhabited___closed__2();
lean_mark_persistent(l_EReal_instInhabited___closed__2);
l_EReal_instInhabited = _init_l_EReal_instInhabited();
lean_mark_persistent(l_EReal_instInhabited);
l_EReal_neTopBotEquivReal___closed__1 = _init_l_EReal_neTopBotEquivReal___closed__1();
lean_mark_persistent(l_EReal_neTopBotEquivReal___closed__1);
l_EReal_neTopBotEquivReal___closed__2 = _init_l_EReal_neTopBotEquivReal___closed__2();
lean_mark_persistent(l_EReal_neTopBotEquivReal___closed__2);
l_EReal_neTopBotEquivReal___closed__3 = _init_l_EReal_neTopBotEquivReal___closed__3();
lean_mark_persistent(l_EReal_neTopBotEquivReal___closed__3);
l_EReal_neTopBotEquivReal = _init_l_EReal_neTopBotEquivReal();
lean_mark_persistent(l_EReal_neTopBotEquivReal);
l_EReal_instNeg___closed__1 = _init_l_EReal_instNeg___closed__1();
lean_mark_persistent(l_EReal_instNeg___closed__1);
l_EReal_instNeg = _init_l_EReal_instNeg();
lean_mark_persistent(l_EReal_instNeg);
l_EReal_instInvolutiveNeg = _init_l_EReal_instInvolutiveNeg();
lean_mark_persistent(l_EReal_instInvolutiveNeg);
l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1 = _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1();
lean_mark_persistent(l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__1);
l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2 = _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2();
lean_mark_persistent(l_Equiv_neg___at_EReal_negOrderIso___spec__1___closed__2);
l_Equiv_neg___at_EReal_negOrderIso___spec__1 = _init_l_Equiv_neg___at_EReal_negOrderIso___spec__1();
lean_mark_persistent(l_Equiv_neg___at_EReal_negOrderIso___spec__1);
l_EReal_negOrderIso___closed__1 = _init_l_EReal_negOrderIso___closed__1();
lean_mark_persistent(l_EReal_negOrderIso___closed__1);
l_EReal_negOrderIso = _init_l_EReal_negOrderIso();
lean_mark_persistent(l_EReal_negOrderIso);
l_EReal_instHasDistribNeg = _init_l_EReal_instHasDistribNeg();
lean_mark_persistent(l_EReal_instHasDistribNeg);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
