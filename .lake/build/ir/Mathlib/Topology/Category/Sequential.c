// Lean compiler output
// Module: Mathlib.Topology.Category.Sequential
// Imports: Init Mathlib.CategoryTheory.Elementwise Mathlib.Topology.Sequences Mathlib.Topology.Instances.Discrete Mathlib.Topology.Category.TopCat.Basic
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
LEAN_EXPORT lean_object* l_Sequential_fullyFaithfulSequentialToTop;
static lean_object* l_Sequential_instCategory___closed__2;
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2(lean_object*, lean_object*);
static lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Sequential_instInhabited;
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___rarg(lean_object*);
extern lean_object* l_TopCat_instCategory;
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instCategory___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_of___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___rarg___boxed(lean_object*);
static lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1;
LEAN_EXPORT lean_object* l_Sequential_of(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instCoeSortType;
LEAN_EXPORT lean_object* l_CategoryTheory_fullyFaithfulInducedFunctor___at_Sequential_fullyFaithfulSequentialToTop___spec__1(lean_object*);
lean_object* l_CategoryTheory_fullyFaithfulInducedFunctor___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instCategory___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_sequentialToTop;
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instCategory;
static lean_object* l_Sequential_instCategory___closed__1;
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_of___rarg(lean_object*, lean_object*);
extern lean_object* l_TopCat_instConcreteCategoryContinuousMapCarrier;
lean_object* l_CategoryTheory_InducedCategory_category___rarg(lean_object*, lean_object*);
static lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2;
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop;
lean_object* l_CategoryTheory_InducedCategory_concreteCategory___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ContinuousMap_instFunLike___rarg(lean_object*, lean_object*);
static lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1;
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_fullyFaithfulSequentialToTop___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo(lean_object*, lean_object*);
static lean_object* _init_l_Sequential_instInhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Sequential_instCoeSortType() {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Sequential_instCategory___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Sequential_instCategory___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sequential_instCategory___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Sequential_instCategory___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_TopCat_instCategory;
x_2 = l_Sequential_instCategory___closed__1;
x_3 = l_CategoryTheory_InducedCategory_category___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Sequential_instCategory() {
_start:
{
lean_object* x_1; 
x_1 = l_Sequential_instCategory___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sequential_instCategory___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Sequential_instCategory___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContinuousMap_instFunLike___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1;
return x_3;
}
}
static lean_object* _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_TopCat_instCategory;
x_2 = l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1;
x_3 = l_TopCat_instConcreteCategoryContinuousMapCarrier;
x_4 = l_Sequential_instCategory___closed__1;
x_5 = l_CategoryTheory_InducedCategory_concreteCategory___rarg(x_1, lean_box(0), lean_box(0), x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop() {
_start:
{
lean_object* x_1; 
x_1 = l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sequential_of___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sequential_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Sequential_of___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sequential_of___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sequential_of___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
static lean_object* _init_l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Sequential_sequentialToTop() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Sequential_instCategory___closed__1;
x_2 = l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_inducedFunctor___at_Sequential_fullyFaithfulSequentialToTop___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CategoryTheory_fullyFaithfulInducedFunctor___at_Sequential_fullyFaithfulSequentialToTop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_TopCat_instCategory;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_fullyFaithfulInducedFunctor___elambda__1___boxed), 6, 4);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_2);
lean_closure_set(x_3, 3, x_1);
return x_3;
}
}
static lean_object* _init_l_Sequential_fullyFaithfulSequentialToTop() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_TopCat_instCategory;
x_2 = l_Sequential_instCategory___closed__1;
x_3 = lean_alloc_closure((void*)(l_CategoryTheory_fullyFaithfulInducedFunctor___elambda__1___boxed), 6, 4);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_1);
lean_closure_set(x_3, 3, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Sequential_isoOfHomeo___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Equiv_symm___rarg(x_3);
x_6 = lean_alloc_closure((void*)(l_Sequential_isoOfHomeo___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoOfHomeo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sequential_isoOfHomeo(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sequential_homeoOfIso___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Sequential_homeoOfIso___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sequential_homeoOfIso___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sequential_homeoOfIso(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sequential_isoOfHomeo(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Sequential_homeoOfIso___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sequential_isoEquivHomeo___elambda__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Sequential_isoEquivHomeo___elambda__1___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Sequential_isoEquivHomeo___elambda__2___rarg___boxed), 1, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Sequential_isoEquivHomeo___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Sequential_isoEquivHomeo___elambda__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Sequential_isoEquivHomeo___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sequential_isoEquivHomeo___elambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Elementwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sequences(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Discrete(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_TopCat_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_Sequential(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Elementwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sequences(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Discrete(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_TopCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Sequential_instInhabited = _init_l_Sequential_instInhabited();
lean_mark_persistent(l_Sequential_instInhabited);
l_Sequential_instCoeSortType = _init_l_Sequential_instCoeSortType();
l_Sequential_instCategory___closed__1 = _init_l_Sequential_instCategory___closed__1();
lean_mark_persistent(l_Sequential_instCategory___closed__1);
l_Sequential_instCategory___closed__2 = _init_l_Sequential_instCategory___closed__2();
lean_mark_persistent(l_Sequential_instCategory___closed__2);
l_Sequential_instCategory = _init_l_Sequential_instCategory();
lean_mark_persistent(l_Sequential_instCategory);
l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1 = _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1();
lean_mark_persistent(l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___lambda__1___closed__1);
l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1 = _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1();
lean_mark_persistent(l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__1);
l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2 = _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2();
lean_mark_persistent(l_Sequential_instConcreteCategoryContinuousMapCarrierToTop___closed__2);
l_Sequential_instConcreteCategoryContinuousMapCarrierToTop = _init_l_Sequential_instConcreteCategoryContinuousMapCarrierToTop();
lean_mark_persistent(l_Sequential_instConcreteCategoryContinuousMapCarrierToTop);
l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1 = _init_l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1();
lean_mark_persistent(l_CategoryTheory_inducedFunctor___at_Sequential_sequentialToTop___spec__1___closed__1);
l_Sequential_sequentialToTop = _init_l_Sequential_sequentialToTop();
lean_mark_persistent(l_Sequential_sequentialToTop);
l_Sequential_fullyFaithfulSequentialToTop = _init_l_Sequential_fullyFaithfulSequentialToTop();
lean_mark_persistent(l_Sequential_fullyFaithfulSequentialToTop);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
