// Lean compiler output
// Module: Mathlib.Analysis.Normed.Operator.Banach
// Imports: Init Mathlib.Topology.Baire.Lemmas Mathlib.Topology.Baire.CompleteMetrizable Mathlib.Analysis.NormedSpace.OperatorNorm.NormedSpace Mathlib.Analysis.Normed.Affine.Isometry Mathlib.Analysis.Normed.Group.InfiniteSum
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
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1;
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___boxed(lean_object**);
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofSeqClosedGraph___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg___boxed(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofSeqClosedGraph___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = lean_alloc_closure((void*)(l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall___rarg), 2, 0);
return x_13;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_ContinuousLinearMap_instCoeFunNonlinearRightInverseForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
x_19 = lean_alloc_closure((void*)(l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg___boxed), 2, 0);
return x_19;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearEquiv_toContinuousLinearEquivOfContinuous___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_LinearEquiv_toContinuousLinearEquivOfContinuous___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
lean_object* x_19; 
x_19 = l_LinearEquiv_toContinuousLinearEquivOfContinuous(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_19;
}
}
static lean_object* _init_l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_ContinuousLinearMap_ofIsClosedGraph___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousLinearMap_ofIsClosedGraph___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofIsClosedGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_ContinuousLinearMap_ofIsClosedGraph(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofSeqClosedGraph___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_closure((void*)(l_ContinuousLinearMap_ofSeqClosedGraph___rarg___boxed), 2, 0);
return x_11;
}
}
LEAN_EXPORT lean_object* l_RingHom_id___at_ContinuousLinearMap_ofSeqClosedGraph___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingHom_id___at_ContinuousLinearMap_ofSeqClosedGraph___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ContinuousLinearMap_ofSeqClosedGraph___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ContinuousLinearMap_ofSeqClosedGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_ContinuousLinearMap_ofSeqClosedGraph(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Baire_Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Baire_CompleteMetrizable(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_NormedSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Affine_Isometry(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_InfiniteSum(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Operator_Banach(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Baire_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Baire_CompleteMetrizable(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_NormedSpace_OperatorNorm_NormedSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Affine_Isometry(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_InfiniteSum(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1 = _init_l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1();
lean_mark_persistent(l_RingHom_id___at_ContinuousLinearMap_ofIsClosedGraph___spec__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
