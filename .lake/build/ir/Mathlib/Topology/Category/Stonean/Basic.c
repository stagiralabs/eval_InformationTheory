// Lean compiler output
// Module: Mathlib.Topology.Category.Stonean.Basic
// Imports: Init Mathlib.Topology.ExtremallyDisconnected Mathlib.Topology.Category.CompHaus.Projective Mathlib.Topology.Category.Profinite.Basic
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
lean_object* l_CompHausLike_toCompHausLike(lean_object*, lean_object*, lean_object*);
static lean_object* l_Stonean_toCompHaus___closed__1;
LEAN_EXPORT lean_object* l_Stonean_of___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Stonean_toProfinite;
static lean_object* l_Stonean_fullyFaithfulToCompHaus___closed__1;
LEAN_EXPORT lean_object* l_Stonean_toCompHaus;
LEAN_EXPORT lean_object* l_Stonean_fullyFaithfulToCompHaus;
LEAN_EXPORT lean_object* l_CompHaus_toStonean___boxed(lean_object*, lean_object*);
lean_object* l_CompHausLike_category___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Stonean_mkFinite(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Stonean_compHaus(lean_object*);
LEAN_EXPORT lean_object* l_Stonean_mkFinite___rarg(lean_object*, lean_object*);
lean_object* l_CategoryTheory_fullyFaithfulInducedFunctor___at_CompHausLike_fullyFaithfulToCompHausLike___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Stonean_of(lean_object*);
LEAN_EXPORT lean_object* l_Stonean_of___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Stonean_mkFinite___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CompHaus_toStonean(lean_object*, lean_object*);
static lean_object* l_Stonean_fullyFaithfulToCompHaus___closed__2;
LEAN_EXPORT lean_object* l_CompHaus_toStonean(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_CompHaus_toStonean___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CompHaus_toStonean(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Stonean_toCompHaus___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_CompHausLike_toCompHausLike(lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Stonean_toCompHaus() {
_start:
{
lean_object* x_1; 
x_1 = l_Stonean_toCompHaus___closed__1;
return x_1;
}
}
static lean_object* _init_l_Stonean_fullyFaithfulToCompHaus___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_CompHausLike_category___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Stonean_fullyFaithfulToCompHaus___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Stonean_fullyFaithfulToCompHaus___closed__1;
x_2 = l_CategoryTheory_fullyFaithfulInducedFunctor___at_CompHausLike_fullyFaithfulToCompHausLike___spec__1___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Stonean_fullyFaithfulToCompHaus() {
_start:
{
lean_object* x_1; 
x_1 = l_Stonean_fullyFaithfulToCompHaus___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Stonean_of___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Stonean_of(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Stonean_of___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Stonean_of___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Stonean_of___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Stonean_toProfinite() {
_start:
{
lean_object* x_1; 
x_1 = l_Stonean_toCompHaus___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Stonean_mkFinite___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Stonean_mkFinite(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Stonean_mkFinite___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Stonean_mkFinite___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Stonean_mkFinite___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Stonean_compHaus(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Stonean_toCompHaus___closed__1;
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_ExtremallyDisconnected(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_CompHaus_Projective(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Category_Profinite_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Category_Stonean_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_ExtremallyDisconnected(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_CompHaus_Projective(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Category_Profinite_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Stonean_toCompHaus___closed__1 = _init_l_Stonean_toCompHaus___closed__1();
lean_mark_persistent(l_Stonean_toCompHaus___closed__1);
l_Stonean_toCompHaus = _init_l_Stonean_toCompHaus();
lean_mark_persistent(l_Stonean_toCompHaus);
l_Stonean_fullyFaithfulToCompHaus___closed__1 = _init_l_Stonean_fullyFaithfulToCompHaus___closed__1();
lean_mark_persistent(l_Stonean_fullyFaithfulToCompHaus___closed__1);
l_Stonean_fullyFaithfulToCompHaus___closed__2 = _init_l_Stonean_fullyFaithfulToCompHaus___closed__2();
lean_mark_persistent(l_Stonean_fullyFaithfulToCompHaus___closed__2);
l_Stonean_fullyFaithfulToCompHaus = _init_l_Stonean_fullyFaithfulToCompHaus();
lean_mark_persistent(l_Stonean_fullyFaithfulToCompHaus);
l_Stonean_toProfinite = _init_l_Stonean_toProfinite();
lean_mark_persistent(l_Stonean_toProfinite);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
