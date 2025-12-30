// Lean compiler output
// Module: Mathlib.Analysis.BoxIntegral.Partition.Basic
// Imports: Init Mathlib.Algebra.BigOperators.Option Mathlib.Analysis.BoxIntegral.Box.Basic Mathlib.Data.Set.Pairwise.Lattice
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
lean_object* l_Finset_eraseNone(lean_object*);
static lean_object* l_BoxIntegral_Prepartition_partialOrder___closed__1;
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instMembershipBox___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderTop(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderTop___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_partialOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_partialOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instInhabited___rarg(lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instMembershipBox(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instMembershipBox(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instMembershipBox___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_instMembershipBox(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoxIntegral_Prepartition_single___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_single___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_single(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instLE(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instLE___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_instLE(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_BoxIntegral_Prepartition_partialOrder___closed__1() {
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
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_partialOrder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_partialOrder___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_partialOrder___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_partialOrder(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderTop___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Prepartition_single___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderTop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_BoxIntegral_Prepartition_instOrderTop___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instOrderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_instOrderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instInhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_BoxIntegral_Prepartition_single___rarg(x_1, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_BoxIntegral_Prepartition_instInhabited___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Finset_eraseNone(lean_box(0));
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_BoxIntegral_Prepartition_ofWithBot___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_BoxIntegral_Prepartition_ofWithBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_BoxIntegral_Prepartition_ofWithBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Option(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_BoxIntegral_Box_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Pairwise_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_BoxIntegral_Partition_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Option(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_BoxIntegral_Box_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Pairwise_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_BoxIntegral_Prepartition_partialOrder___closed__1 = _init_l_BoxIntegral_Prepartition_partialOrder___closed__1();
lean_mark_persistent(l_BoxIntegral_Prepartition_partialOrder___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
