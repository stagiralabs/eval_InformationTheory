// Lean compiler output
// Module: Mathlib.Algebra.Order.Group.Multiset
// Imports: Init Mathlib.Algebra.Group.Hom.Defs Mathlib.Algebra.Group.Nat.Defs Mathlib.Algebra.Order.Monoid.Unbundled.ExistsOfLE Mathlib.Algebra.Order.Sub.Defs Mathlib.Data.Multiset.Fold
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
LEAN_EXPORT lean_object* l_Multiset_countAddMonoidHom(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_replicateAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_instAddCancelCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_Multiset_instAddCancelCommMonoid___closed__1;
lean_object* l_Multiset_card___rarg___boxed(lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_countP___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_countPAddMonoidHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_mapAddMonoidHom___rarg(lean_object*);
lean_object* l_List_replicateTR___rarg(lean_object*, lean_object*);
lean_object* l_Multiset_add___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_cardHom(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Multiset_cardHom___closed__1;
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_countAddMonoidHom___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_mapAddMonoidHom(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Multiset_replicateAddMonoidHom(lean_object*);
LEAN_EXPORT lean_object* l_Multiset_countPAddMonoidHom___rarg(lean_object*);
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_inc(x_2);
x_7 = l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg(x_6, x_2);
lean_dec(x_6);
x_8 = l_List_appendTR___rarg(x_7, x_2);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_box(0);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Multiset_instAddCancelCommMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_add___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_instAddCancelCommMonoid(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Multiset_instAddCancelCommMonoid___closed__1;
x_4 = lean_alloc_closure((void*)(l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg___boxed), 2, 0);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_nsmulRec___at_Multiset_instAddCancelCommMonoid___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Multiset_cardHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Multiset_card___rarg___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_cardHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Multiset_cardHom___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_replicateAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_replicateTR___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_replicateAddMonoidHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_replicateAddMonoidHom___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_mapAddMonoidHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_mapAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_mapAddMonoidHom___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_countPAddMonoidHom___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_countP___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Multiset_countPAddMonoidHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Multiset_countPAddMonoidHom___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Multiset_countAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Multiset_countP___rarg), 2, 1);
lean_closure_set(x_4, 0, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Multiset_countAddMonoidHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Multiset_countAddMonoidHom___rarg), 2, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Hom_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Nat_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Order_Sub_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Fold(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Group_Multiset(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Hom_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Nat_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Monoid_Unbundled_ExistsOfLE(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Order_Sub_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Fold(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Multiset_instAddCancelCommMonoid___closed__1 = _init_l_Multiset_instAddCancelCommMonoid___closed__1();
lean_mark_persistent(l_Multiset_instAddCancelCommMonoid___closed__1);
l_Multiset_cardHom___closed__1 = _init_l_Multiset_cardHom___closed__1();
lean_mark_persistent(l_Multiset_cardHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
