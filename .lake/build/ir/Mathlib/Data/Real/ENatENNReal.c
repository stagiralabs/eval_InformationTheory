// Lean compiler output
// Module: Mathlib.Data.Real.ENatENNReal
// Imports: Init Mathlib.Data.ENat.Basic Mathlib.Data.ENNReal.Basic
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
LEAN_EXPORT lean_object* l_Nat_cast___at_ENat_toENNReal___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toMonoidWithZeroHom___at_ENat_toENNRealRingHom___spec__3(lean_object*);
lean_object* l_WithTop_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___at_ENat_toENNRealOrderEmbedding___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_toMonoidWithZeroHom___at_ENat_toENNRealRingHom___spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_castOrderEmbedding___at_ENat_toENNRealOrderEmbedding___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
extern lean_object* l_Real_semiring;
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___at_ENat_toENNRealOrderEmbedding___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_ENatMap___at_ENat_toENNRealRingHom___spec__4___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENat_toENNReal(lean_object*);
static lean_object* l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1;
lean_object* l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(lean_object*);
static lean_object* l_ENat_hasCoeENNReal___closed__1;
LEAN_EXPORT lean_object* l_ENat_toENNRealOrderEmbedding;
LEAN_EXPORT lean_object* l_ENat_hasCoeENNReal;
static lean_object* l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2;
LEAN_EXPORT lean_object* l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___at_ENat_toENNRealOrderEmbedding___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at_ENat_toENNReal___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ENat_toENNRealRingHom;
static lean_object* l_ENat_toENNReal___closed__1;
lean_object* l_ENat_map___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_ENatMap___at_ENat_toENNRealRingHom___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1;
LEAN_EXPORT lean_object* l_Nat_cast___at_ENat_toENNReal___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Real_semiring;
x_2 = l_Semiring_toNonAssocSemiring___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1;
x_2 = l_NonAssocSemiring_toAddCommMonoidWithOne___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at_ENat_toENNReal___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2;
x_3 = l_Nat_cast___at_ENat_toENNReal___spec__2(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_ENat_toENNReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_cast___at_ENat_toENNReal___spec__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ENat_toENNReal(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ENat_toENNReal___closed__1;
x_3 = l_WithTop_map___rarg(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_ENat_hasCoeENNReal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ENat_toENNReal), 1, 0);
return x_1;
}
}
static lean_object* _init_l_ENat_hasCoeENNReal() {
_start:
{
lean_object* x_1; 
x_1 = l_ENat_hasCoeENNReal___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___at_ENat_toENNRealOrderEmbedding___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nat_castOrderEmbedding___at_ENat_toENNRealOrderEmbedding___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ENat_toENNReal___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_withTopMap___at_ENat_toENNRealOrderEmbedding___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithTop_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_ENat_toENNRealOrderEmbedding() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_alloc_closure((void*)(l_Nat_cast___at_ENat_toENNReal___spec__1), 1, 0);
x_2 = lean_alloc_closure((void*)(l_WithTop_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderEmbedding_ofStrictMono___at_ENat_toENNRealOrderEmbedding___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_OrderEmbedding_ofStrictMono___at_ENat_toENNRealOrderEmbedding___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_ENat_toENNReal___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_toMonoidWithZeroHom___at_ENat_toENNRealRingHom___spec__3(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_ENatMap___at_ENat_toENNRealRingHom___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ENat_map___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MonoidWithZeroHom_ENatMap___at_ENat_toENNRealRingHom___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_MonoidWithZeroHom_ENatMap___at_ENat_toENNRealRingHom___spec__4___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ENat_map___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_ENat_toENNRealRingHom() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1;
x_2 = l_RingHom_ENatMap___at_ENat_toENNRealRingHom___spec__2___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingHom_toMonoidWithZeroHom___at_ENat_toENNRealRingHom___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingHom_toMonoidWithZeroHom___at_ENat_toENNRealRingHom___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_ENNReal_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Real_ENatENNReal(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ENNReal_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1 = _init_l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1();
lean_mark_persistent(l_Nat_cast___at_ENat_toENNReal___spec__1___closed__1);
l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2 = _init_l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2();
lean_mark_persistent(l_Nat_cast___at_ENat_toENNReal___spec__1___closed__2);
l_ENat_toENNReal___closed__1 = _init_l_ENat_toENNReal___closed__1();
lean_mark_persistent(l_ENat_toENNReal___closed__1);
l_ENat_hasCoeENNReal___closed__1 = _init_l_ENat_hasCoeENNReal___closed__1();
lean_mark_persistent(l_ENat_hasCoeENNReal___closed__1);
l_ENat_hasCoeENNReal = _init_l_ENat_hasCoeENNReal();
lean_mark_persistent(l_ENat_hasCoeENNReal);
l_ENat_toENNRealOrderEmbedding = _init_l_ENat_toENNRealOrderEmbedding();
lean_mark_persistent(l_ENat_toENNRealOrderEmbedding);
l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1 = _init_l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1();
lean_mark_persistent(l_Nat_castRingHom___at_ENat_toENNRealRingHom___spec__1);
l_ENat_toENNRealRingHom = _init_l_ENat_toENNRealRingHom();
lean_mark_persistent(l_ENat_toENNRealRingHom);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
