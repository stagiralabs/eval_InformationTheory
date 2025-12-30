// Lean compiler output
// Module: Mathlib.RingTheory.Localization.Defs
// Imports: Init Mathlib.Data.Fintype.Prod Mathlib.GroupTheory.MonoidLocalization.MonoidWithZero Mathlib.RingTheory.OreLocalization.Ring Mathlib.Tactic.ApplyFun Mathlib.Tactic.Ring Mathlib.Algebra.BigOperators.Group.Finset.Defs
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
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_NonAssocSemiring_toMulZeroOneClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___rarg___boxed(lean_object*, lean_object*);
lean_object* l_OreLocalization_oreSetBot___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization(lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Localization_instUniqueLocalization___rarg___closed__2;
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1(lean_object*);
lean_object* l_CommSemiring_toCommMonoid___rarg(lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom(lean_object*);
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OreLocalization_one___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Localization_instUniqueLocalization___rarg___closed__1;
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IsLocalization_toLocalizationWithZeroMap___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLocalization_toLocalizationWithZeroMap___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationWithZeroMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsLocalization_toLocalizationWithZeroMap(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IsLocalization_toLocalizationMap___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsLocalization_toLocalizationMap___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_toLocalizationMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsLocalization_toLocalizationMap(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = l_NonAssocSemiring_toMulZeroOneClass___rarg(x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg(x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_IsLocalization_uniqueOfZeroMem___rarg___boxed), 4, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_uniqueOfZeroEqOne___at_IsLocalization_uniqueOfZeroMem___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsLocalization_uniqueOfZeroMem___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_uniqueOfZeroMem___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsLocalization_uniqueOfZeroMem(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_IsLocalization_invertible__mk_x27__one___rarg), 3, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_IsLocalization_invertible__mk_x27__one___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IsLocalization_invertible__mk_x27__one(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_Localization_instUniqueLocalization___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Localization_instUniqueLocalization___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_OreLocalization_oreSetBot___rarg___lambda__2___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_CommSemiring_toCommMonoid___rarg(x_1);
x_5 = l_Localization_instUniqueLocalization___rarg___closed__1;
x_6 = l_Localization_instUniqueLocalization___rarg___closed__2;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_OreLocalization_one___rarg(x_4, x_2, x_7);
lean_dec(x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_instUniqueLocalization___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Localization_instUniqueLocalization___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Localization_instUniqueLocalization___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2___rarg), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Localization_mkAddMonoidHom___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_OreLocalization_oreDiv___at_Localization_mkAddMonoidHom___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Localization_mk___at_Localization_mkAddMonoidHom___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Localization_mkAddMonoidHom___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Localization_mkAddMonoidHom___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fintype_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_MonoidLocalization_MonoidWithZero(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_RingTheory_OreLocalization_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_ApplyFun(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Finset_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_RingTheory_Localization_Defs(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fintype_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_MonoidLocalization_MonoidWithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_RingTheory_OreLocalization_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_ApplyFun(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Finset_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Localization_instUniqueLocalization___rarg___closed__1 = _init_l_Localization_instUniqueLocalization___rarg___closed__1();
lean_mark_persistent(l_Localization_instUniqueLocalization___rarg___closed__1);
l_Localization_instUniqueLocalization___rarg___closed__2 = _init_l_Localization_instUniqueLocalization___rarg___closed__2();
lean_mark_persistent(l_Localization_instUniqueLocalization___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
