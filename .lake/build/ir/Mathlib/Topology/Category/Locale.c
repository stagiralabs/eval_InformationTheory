// Lean compiler output
// Module: Mathlib.Topology.Category.Locale
// Imports: Init Mathlib.Order.Category.Frm Mathlib.Topology.Category.CompHaus.Frm
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
LEAN_EXPORT lean_object* l_Locale_of(lean_object*);
LEAN_EXPORT lean_object* l_Locale_of___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Locale_of___rarg___boxed(lean_object*);
static lean_object* l_instLocaleLargeCategory___closed__1;
LEAN_EXPORT lean_object* l_Locale_instFrameCarrierUnopFrm(lean_object*);
extern lean_object* l_topCatOpToFrm;
LEAN_EXPORT lean_object* l_topToLocale;
extern lean_object* l_PUnit_instCompleteBooleanAlgebra;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instLocaleLargeCategory;
LEAN_EXPORT lean_object* l_Locale_of___at_Locale_instInhabited___spec__1;
LEAN_EXPORT lean_object* l_Locale_instFrameCarrierUnopFrm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Locale_instInhabited;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1(lean_object*);
static lean_object* l_Locale_of___at_Locale_instInhabited___spec__1___closed__1;
lean_object* l_CategoryTheory_Category_opposite___rarg(lean_object*);
extern lean_object* l_Frm_instCategory;
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__1(lean_object*, lean_object*);
lean_object* l_CompleteBooleanAlgebra_toCompleteDistribLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Locale_instCoeSortType;
static lean_object* _init_l_instLocaleLargeCategory___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Frm_instCategory;
x_2 = l_CategoryTheory_Category_opposite___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instLocaleLargeCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_instLocaleLargeCategory___closed__1;
return x_1;
}
}
static lean_object* _init_l_Locale_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Locale_instFrameCarrierUnopFrm(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Locale_instFrameCarrierUnopFrm___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Locale_instFrameCarrierUnopFrm(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Locale_of___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Locale_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Locale_of___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Locale_of___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Locale_of___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Locale_of___at_Locale_instInhabited___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_instCompleteBooleanAlgebra;
x_2 = l_CompleteBooleanAlgebra_toCompleteDistribLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Locale_of___at_Locale_instInhabited___spec__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Locale_of___at_Locale_instInhabited___spec__1___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Locale_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Locale_of___at_Locale_instInhabited___spec__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_5, x_3, x_2, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1___lambda__2), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_topToLocale() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_topCatOpToFrm;
x_2 = l_CategoryTheory_Functor_rightOp___at_topToLocale___spec__1(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Category_Frm(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHaus_Frm(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_Locale(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Category_Frm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHaus_Frm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instLocaleLargeCategory___closed__1 = _init_l_instLocaleLargeCategory___closed__1();
lean_mark_persistent(l_instLocaleLargeCategory___closed__1);
l_instLocaleLargeCategory = _init_l_instLocaleLargeCategory();
lean_mark_persistent(l_instLocaleLargeCategory);
l_Locale_instCoeSortType = _init_l_Locale_instCoeSortType();
l_Locale_of___at_Locale_instInhabited___spec__1___closed__1 = _init_l_Locale_of___at_Locale_instInhabited___spec__1___closed__1();
lean_mark_persistent(l_Locale_of___at_Locale_instInhabited___spec__1___closed__1);
l_Locale_of___at_Locale_instInhabited___spec__1 = _init_l_Locale_of___at_Locale_instInhabited___spec__1();
lean_mark_persistent(l_Locale_of___at_Locale_instInhabited___spec__1);
l_Locale_instInhabited = _init_l_Locale_instInhabited();
lean_mark_persistent(l_Locale_instInhabited);
l_topToLocale = _init_l_topToLocale();
lean_mark_persistent(l_topToLocale);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
