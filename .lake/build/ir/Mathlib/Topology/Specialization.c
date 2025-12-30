// Lean compiler output
// Module: Mathlib.Topology.Specialization
// Imports: Init Mathlib.Order.Category.Preord Mathlib.Topology.Category.TopCat.Basic Mathlib.Topology.ContinuousMap.Basic Mathlib.Topology.Order.UpperLowerSetTopology
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
LEAN_EXPORT lean_object* l_Specialization_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_map___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_map___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_homeoWithUpperSetTopologyorderIso(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_toEquiv(lean_object*);
static lean_object* l_topToPreord___closed__2;
LEAN_EXPORT lean_object* l_Specialization_instPreorder(lean_object*);
static lean_object* l_topToPreord___closed__1;
LEAN_EXPORT lean_object* l_topToPreord;
static lean_object* l_orderIsoSpecializationWithUpperSetTopology___closed__1;
LEAN_EXPORT lean_object* l_orderIsoSpecializationWithUpperSetTopology(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_homeoWithUpperSetTopologyorderIso___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_rec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_map___rarg___lambda__1___boxed(lean_object*);
lean_object* l_specializationPreorder(lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_map___rarg___lambda__1(lean_object*);
lean_object* l_specializationPreorder___boxed(lean_object*, lean_object*);
static lean_object* l_topToPreord___closed__3;
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_topToPreord___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Specialization_toEquiv___closed__1;
LEAN_EXPORT lean_object* l_Specialization_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_rec___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_map___rarg(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_orderIsoSpecializationWithUpperSetTopology___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Specialization_instPreorder___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_Specialization_instPreorder___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder(lean_object*);
LEAN_EXPORT lean_object* l_Specialization_ofEquiv(lean_object*);
LEAN_EXPORT lean_object* l_topToPreord___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Specialization_map___rarg___closed__1;
static lean_object* _init_l_Specialization_toEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Specialization_toEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Specialization_toEquiv___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_ofEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Specialization_toEquiv___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_rec___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Specialization_rec(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Specialization_rec___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPreorder___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_specializationPreorder(lean_box(0), x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPreorder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Specialization_instPreorder___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPreorder___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Specialization_instPreorder___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_specializationPreorder(lean_box(0), x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Specialization_instPartialOrder___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_instPartialOrder___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Specialization_instPartialOrder___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Specialization_map___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Specialization_map___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Specialization_map___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Specialization_map___rarg___closed__1;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Specialization_map___elambda__1___rarg), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Specialization_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Specialization_map___rarg), 1, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Specialization_map___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Specialization_map___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Specialization_map(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_orderIsoSpecializationWithUpperSetTopology___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Specialization_toEquiv___closed__1;
x_2 = l_Equiv_trans___rarg(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_orderIsoSpecializationWithUpperSetTopology(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_orderIsoSpecializationWithUpperSetTopology___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_orderIsoSpecializationWithUpperSetTopology___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_orderIsoSpecializationWithUpperSetTopology(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_homeoWithUpperSetTopologyorderIso(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_orderIsoSpecializationWithUpperSetTopology___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_homeoWithUpperSetTopologyorderIso___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_homeoWithUpperSetTopologyorderIso(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_topToPreord___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Specialization_map___rarg(x_3);
return x_4;
}
}
static lean_object* _init_l_topToPreord___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_specializationPreorder___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_topToPreord___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_topToPreord___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_topToPreord___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_topToPreord___closed__1;
x_2 = l_topToPreord___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_topToPreord() {
_start:
{
lean_object* x_1; 
x_1 = l_topToPreord___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_topToPreord___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_topToPreord___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Category_Preord(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_TopCat_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ContinuousMap_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_UpperLowerSetTopology(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Specialization(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Category_Preord(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_TopCat_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ContinuousMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_UpperLowerSetTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Specialization_toEquiv___closed__1 = _init_l_Specialization_toEquiv___closed__1();
lean_mark_persistent(l_Specialization_toEquiv___closed__1);
l_Specialization_map___rarg___closed__1 = _init_l_Specialization_map___rarg___closed__1();
lean_mark_persistent(l_Specialization_map___rarg___closed__1);
l_orderIsoSpecializationWithUpperSetTopology___closed__1 = _init_l_orderIsoSpecializationWithUpperSetTopology___closed__1();
lean_mark_persistent(l_orderIsoSpecializationWithUpperSetTopology___closed__1);
l_topToPreord___closed__1 = _init_l_topToPreord___closed__1();
lean_mark_persistent(l_topToPreord___closed__1);
l_topToPreord___closed__2 = _init_l_topToPreord___closed__2();
lean_mark_persistent(l_topToPreord___closed__2);
l_topToPreord___closed__3 = _init_l_topToPreord___closed__3();
lean_mark_persistent(l_topToPreord___closed__3);
l_topToPreord = _init_l_topToPreord();
lean_mark_persistent(l_topToPreord);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
