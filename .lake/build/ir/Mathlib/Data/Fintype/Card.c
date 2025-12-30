// Lean compiler output
// Module: Mathlib.Data.Fintype.Card
// Imports: Init Mathlib.Data.Finset.Card Mathlib.Data.Fintype.Basic
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
LEAN_EXPORT lean_object* l_Fintype_cardEqZeroEquivEquivEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_truncOfCardPos(lean_object*);
LEAN_EXPORT lean_object* l_truncOfCardPos___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_equivEmptyEquiv(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_card(lean_object*);
lean_object* l_truncOfMultisetExistsMem___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fintype_card___rarg___boxed(lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
static lean_object* l_Fintype_cardEqZeroEquivEquivEmpty___closed__1;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Fintype_card___rarg(lean_object*);
LEAN_EXPORT lean_object* l_truncOfCardPos___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Fintype_cardEqZeroEquivEquivEmpty___closed__2;
LEAN_EXPORT lean_object* l_Fintype_cardEqZeroEquivEquivEmpty___boxed(lean_object*, lean_object*);
static lean_object* l_Fintype_cardEqZeroEquivEquivEmpty___closed__3;
LEAN_EXPORT lean_object* l_Fintype_card___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_lengthTRAux___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_card(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Fintype_card___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Fintype_card___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Fintype_card___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_equivEmptyEquiv(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Fintype_cardEqZeroEquivEquivEmpty___closed__1;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1, 0, lean_box(0));
lean_ctor_set(x_1, 1, lean_box(0));
x_2 = l_Fintype_cardEqZeroEquivEquivEmpty___closed__2;
x_3 = l_Equiv_trans___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_cardEqZeroEquivEquivEmpty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fintype_cardEqZeroEquivEquivEmpty___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_Fintype_cardEqZeroEquivEquivEmpty___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Fintype_cardEqZeroEquivEquivEmpty(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_truncOfCardPos___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_truncOfMultisetExistsMem___rarg(x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_truncOfCardPos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_truncOfCardPos___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_truncOfCardPos___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_truncOfCardPos___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Card(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Fintype_Card(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Card(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Fintype_cardEqZeroEquivEquivEmpty___closed__1 = _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__1();
lean_mark_persistent(l_Fintype_cardEqZeroEquivEquivEmpty___closed__1);
l_Fintype_cardEqZeroEquivEquivEmpty___closed__2 = _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__2();
lean_mark_persistent(l_Fintype_cardEqZeroEquivEquivEmpty___closed__2);
l_Fintype_cardEqZeroEquivEquivEmpty___closed__3 = _init_l_Fintype_cardEqZeroEquivEquivEmpty___closed__3();
lean_mark_persistent(l_Fintype_cardEqZeroEquivEquivEmpty___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
