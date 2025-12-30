// Lean compiler output
// Module: Mathlib.Topology.UniformSpace.CompareReals
// Imports: Init Mathlib.Topology.UniformSpace.AbsoluteValue Mathlib.Topology.Instances.Rat Mathlib.Topology.UniformSpace.Completion Mathlib.Topology.Metrizable.Basic
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
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1;
lean_object* l_UniformSpace_Completion_uniformSpace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_rationalCauSeqPkg___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompareReals_instQInhabited;
static lean_object* l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1;
static lean_object* l_CompareReals_Bourbaki_uniformSpace___closed__1;
static lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_rationalCauSeqPkg___closed__1;
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___boxed(lean_object*);
static lean_object* l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2;
lean_object* l_Rat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompareReals_instBourbaki_u211dInhabited;
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_CompareReals_bourbakiPkg;
static lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___closed__1;
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompareReals_instQCommRing;
LEAN_EXPORT lean_object* l_abs___at_rationalCauSeqPkg___spec__2(lean_object*);
static lean_object* l_CompareReals_uniformSpace___closed__1;
LEAN_EXPORT lean_object* l_CompareReals_Bourbaki_uniformSpace;
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__6(lean_object*);
extern lean_object* l_Real_pseudoMetricSpace;
LEAN_EXPORT lean_object* l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1;
extern lean_object* l_instInhabitedRat;
LEAN_EXPORT lean_object* l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompareReals_uniformSpace;
LEAN_EXPORT lean_object* l_rationalCauSeqPkg;
lean_object* l_UniformSpace_Completion_cPkg___elambda__1___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1;
extern lean_object* l_Rat_commRing;
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Rat_neg(lean_object*);
lean_object* l_Rat_cast___at_Real_instRatCast___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_rationalCauSeqPkg___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Rat_cast___at_Real_instRatCast___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_abs___at_rationalCauSeqPkg___spec__2(lean_object* x_1) {
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
static lean_object* _init_l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_abs___at_rationalCauSeqPkg___spec__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Rat_sub(x_3, x_2);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3___lambda__1), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4(x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_rationalCauSeqPkg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_rationalCauSeqPkg___elambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_rationalCauSeqPkg() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Real_pseudoMetricSpace;
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = l_rationalCauSeqPkg___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_iInf___at_rationalCauSeqPkg___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_iInf___at_rationalCauSeqPkg___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_iInf___at_rationalCauSeqPkg___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_CompareReals_instQCommRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_commRing;
return x_1;
}
}
static lean_object* _init_l_CompareReals_instQInhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_instInhabitedRat;
return x_1;
}
}
static lean_object* _init_l_CompareReals_uniformSpace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1;
x_2 = l_AbsoluteValue_uniformSpace___at_rationalCauSeqPkg___spec__3(x_1);
return x_2;
}
}
static lean_object* _init_l_CompareReals_uniformSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_CompareReals_uniformSpace___closed__1;
return x_1;
}
}
static lean_object* _init_l_CompareReals_instBourbaki_u211dInhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_CompareReals_Bourbaki_uniformSpace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CompareReals_uniformSpace;
x_2 = l_UniformSpace_Completion_uniformSpace___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_CompareReals_Bourbaki_uniformSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_CompareReals_Bourbaki_uniformSpace___closed__1;
return x_1;
}
}
static lean_object* _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_CompareReals_uniformSpace;
x_2 = lean_alloc_closure((void*)(l_UniformSpace_Completion_cPkg___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1;
x_2 = l_CompareReals_Bourbaki_uniformSpace___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2;
return x_1;
}
}
static lean_object* _init_l_CompareReals_bourbakiPkg() {
_start:
{
lean_object* x_1; 
x_1 = l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_AbsoluteValue(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_UniformSpace_Completion(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Metrizable_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_UniformSpace_CompareReals(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_AbsoluteValue(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_UniformSpace_Completion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Metrizable_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1 = _init_l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1();
lean_mark_persistent(l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1___closed__1);
l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1 = _init_l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1();
lean_mark_persistent(l_AbsoluteValue_abs___at_rationalCauSeqPkg___spec__1);
l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___closed__1 = _init_l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___closed__1();
lean_mark_persistent(l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___lambda__2___closed__1);
l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___closed__1 = _init_l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___closed__1();
lean_mark_persistent(l_UniformSpace_ofFun___at_rationalCauSeqPkg___spec__4___closed__1);
l_rationalCauSeqPkg___closed__1 = _init_l_rationalCauSeqPkg___closed__1();
lean_mark_persistent(l_rationalCauSeqPkg___closed__1);
l_rationalCauSeqPkg = _init_l_rationalCauSeqPkg();
lean_mark_persistent(l_rationalCauSeqPkg);
l_CompareReals_instQCommRing = _init_l_CompareReals_instQCommRing();
lean_mark_persistent(l_CompareReals_instQCommRing);
l_CompareReals_instQInhabited = _init_l_CompareReals_instQInhabited();
lean_mark_persistent(l_CompareReals_instQInhabited);
l_CompareReals_uniformSpace___closed__1 = _init_l_CompareReals_uniformSpace___closed__1();
lean_mark_persistent(l_CompareReals_uniformSpace___closed__1);
l_CompareReals_uniformSpace = _init_l_CompareReals_uniformSpace();
lean_mark_persistent(l_CompareReals_uniformSpace);
l_CompareReals_instBourbaki_u211dInhabited = _init_l_CompareReals_instBourbaki_u211dInhabited();
lean_mark_persistent(l_CompareReals_instBourbaki_u211dInhabited);
l_CompareReals_Bourbaki_uniformSpace___closed__1 = _init_l_CompareReals_Bourbaki_uniformSpace___closed__1();
lean_mark_persistent(l_CompareReals_Bourbaki_uniformSpace___closed__1);
l_CompareReals_Bourbaki_uniformSpace = _init_l_CompareReals_Bourbaki_uniformSpace();
lean_mark_persistent(l_CompareReals_Bourbaki_uniformSpace);
l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1 = _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1();
lean_mark_persistent(l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__1);
l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2 = _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2();
lean_mark_persistent(l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1___closed__2);
l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1 = _init_l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1();
lean_mark_persistent(l_UniformSpace_Completion_cPkg___at_CompareReals_bourbakiPkg___spec__1);
l_CompareReals_bourbakiPkg = _init_l_CompareReals_bourbakiPkg();
lean_mark_persistent(l_CompareReals_bourbakiPkg);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
