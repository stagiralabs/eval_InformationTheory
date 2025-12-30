// Lean compiler output
// Module: Mathlib.Data.NNRat.Defs
// Imports: Init Mathlib.Algebra.Order.Group.Unbundled.Int Mathlib.Algebra.Order.Nonneg.Basic Mathlib.Algebra.Order.Ring.Unbundled.Rat Mathlib.Algebra.Ring.Rat Mathlib.Data.Set.Operations Mathlib.Order.Bounds.Defs Mathlib.Order.GaloisConnection.Defs
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
LEAN_EXPORT lean_object* l_NNRat_divNat(lean_object*, lean_object*);
lean_object* l_CommRing_toNonUnitalCommRing___rarg(lean_object*);
lean_object* l_Subtype_instLinearOrder___rarg(lean_object*, lean_object*);
static lean_object* l_instNNRatSub___closed__1;
extern lean_object* l_Rat_instSub;
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
lean_object* l_NNRat_cast___at_NNRat_num___spec__1___boxed(lean_object*);
static lean_object* l_instNNRatInhabited___closed__1;
static lean_object* l_instNNRatCommSemiring___closed__1;
lean_object* l_Nat_cast___at_Rat_instOfNat___spec__1(lean_object*);
static lean_object* l_instNNRatSub___closed__2;
lean_object* l_Nonneg_commSemiring___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instNNRatCommSemiring;
lean_object* l_Nonneg_sub___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_divInt(lean_object*, lean_object*);
extern lean_object* l_Rat_instSemilatticeSup;
extern lean_object* l_Rat_linearOrder;
LEAN_EXPORT lean_object* l_NNRat_coeHom;
extern lean_object* l_Rat_commSemiring;
LEAN_EXPORT lean_object* l_abs___at_Rat_nnabs___spec__1(lean_object*);
lean_object* l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_instNNRatSub;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_numDenCasesOn(lean_object*);
lean_object* l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
lean_object* l_NNRat_num(lean_object*);
static lean_object* l_instNNRatSub___closed__4;
LEAN_EXPORT lean_object* l_instNNRatInhabited;
LEAN_EXPORT lean_object* l_NNRat_instOrderBot;
LEAN_EXPORT lean_object* l_NNRat_numDenCasesOn___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Rat_nnabs(lean_object*);
LEAN_EXPORT lean_object* l_Rat_toNNRat(lean_object*);
extern lean_object* l_Rat_instPartialOrder;
static lean_object* l_instNNRatLinearOrder___closed__1;
static lean_object* l_NNRat_gi___closed__2;
static lean_object* l_NNRat_gi___closed__1;
LEAN_EXPORT lean_object* l_NNRat_gi;
LEAN_EXPORT lean_object* l_instNNRatLinearOrder;
extern lean_object* l_Rat_commRing;
lean_object* l_Rat_neg(lean_object*);
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_NNRat_gi___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_instNNRatSub___closed__3;
static lean_object* _init_l_instNNRatCommSemiring___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_commSemiring;
x_2 = l_Rat_instPartialOrder;
x_3 = l_Nonneg_commSemiring___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0));
return x_3;
}
}
static lean_object* _init_l_instNNRatCommSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatCommSemiring___closed__1;
return x_1;
}
}
static lean_object* _init_l_instNNRatLinearOrder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_linearOrder;
x_2 = l_Subtype_instLinearOrder___rarg(x_1, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_instNNRatLinearOrder() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatLinearOrder___closed__1;
return x_1;
}
}
static lean_object* _init_l_instNNRatSub___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Rat_commRing;
x_2 = l_CommRing_toNonUnitalCommRing___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatSub___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instNNRatSub___closed__1;
x_2 = l_NonUnitalNonAssocCommRing_toNonUnitalNonAssocCommSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatSub___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instNNRatSub___closed__2;
x_2 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatSub___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_instNNRatSub___closed__3;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Rat_instSemilatticeSup;
x_4 = l_Rat_instSub;
x_5 = lean_alloc_closure((void*)(l_Nonneg_sub___rarg), 5, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_instNNRatSub() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatSub___closed__4;
return x_1;
}
}
static lean_object* _init_l_instNNRatInhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Nat_cast___at_Rat_instOfNat___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_instNNRatInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatInhabited___closed__1;
return x_1;
}
}
static lean_object* _init_l_NNRat_instOrderBot() {
_start:
{
lean_object* x_1; 
x_1 = l_instNNRatInhabited___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Rat_toNNRat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_instNNRatInhabited___closed__1;
lean_inc(x_1);
x_3 = l_Rat_instDecidableLe(x_1, x_2);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_instNNRatInhabited___closed__1;
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_GaloisInsertion_monotoneIntro___at_NNRat_gi___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
return x_7;
}
}
static lean_object* _init_l_NNRat_gi___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Rat_toNNRat), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_gi___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_NNRat_cast___at_NNRat_num___spec__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_gi() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_NNRat_gi___closed__1;
x_2 = l_NNRat_gi___closed__2;
x_3 = lean_alloc_closure((void*)(l_GaloisInsertion_monotoneIntro___elambda__1___rarg___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_NNRat_coeHom() {
_start:
{
lean_object* x_1; 
x_1 = l_NNRat_gi___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_abs___at_Rat_nnabs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
lean_inc(x_1);
x_2 = l_Rat_neg(x_1);
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
LEAN_EXPORT lean_object* l_Rat_nnabs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_abs___at_Rat_nnabs___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NNRat_divNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_nat_to_int(x_1);
x_4 = lean_nat_to_int(x_2);
x_5 = l_Rat_divInt(x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_NNRat_numDenCasesOn___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_NNRat_num(x_1);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_4(x_2, x_3, x_4, lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_NNRat_numDenCasesOn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NNRat_numDenCasesOn___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Ring_Unbundled_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Operations(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Bounds_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_GaloisConnection_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_NNRat_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Group_Unbundled_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Nonneg_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Ring_Unbundled_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Operations(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Bounds_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_GaloisConnection_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instNNRatCommSemiring___closed__1 = _init_l_instNNRatCommSemiring___closed__1();
lean_mark_persistent(l_instNNRatCommSemiring___closed__1);
l_instNNRatCommSemiring = _init_l_instNNRatCommSemiring();
lean_mark_persistent(l_instNNRatCommSemiring);
l_instNNRatLinearOrder___closed__1 = _init_l_instNNRatLinearOrder___closed__1();
lean_mark_persistent(l_instNNRatLinearOrder___closed__1);
l_instNNRatLinearOrder = _init_l_instNNRatLinearOrder();
lean_mark_persistent(l_instNNRatLinearOrder);
l_instNNRatSub___closed__1 = _init_l_instNNRatSub___closed__1();
lean_mark_persistent(l_instNNRatSub___closed__1);
l_instNNRatSub___closed__2 = _init_l_instNNRatSub___closed__2();
lean_mark_persistent(l_instNNRatSub___closed__2);
l_instNNRatSub___closed__3 = _init_l_instNNRatSub___closed__3();
lean_mark_persistent(l_instNNRatSub___closed__3);
l_instNNRatSub___closed__4 = _init_l_instNNRatSub___closed__4();
lean_mark_persistent(l_instNNRatSub___closed__4);
l_instNNRatSub = _init_l_instNNRatSub();
lean_mark_persistent(l_instNNRatSub);
l_instNNRatInhabited___closed__1 = _init_l_instNNRatInhabited___closed__1();
lean_mark_persistent(l_instNNRatInhabited___closed__1);
l_instNNRatInhabited = _init_l_instNNRatInhabited();
lean_mark_persistent(l_instNNRatInhabited);
l_NNRat_instOrderBot = _init_l_NNRat_instOrderBot();
lean_mark_persistent(l_NNRat_instOrderBot);
l_NNRat_gi___closed__1 = _init_l_NNRat_gi___closed__1();
lean_mark_persistent(l_NNRat_gi___closed__1);
l_NNRat_gi___closed__2 = _init_l_NNRat_gi___closed__2();
lean_mark_persistent(l_NNRat_gi___closed__2);
l_NNRat_gi = _init_l_NNRat_gi();
lean_mark_persistent(l_NNRat_gi);
l_NNRat_coeHom = _init_l_NNRat_coeHom();
lean_mark_persistent(l_NNRat_coeHom);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
