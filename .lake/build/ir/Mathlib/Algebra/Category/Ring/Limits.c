// Lean compiler output
// Module: Mathlib.Algebra.Category.Ring.Limits
// Imports: Init Mathlib.Algebra.Ring.Pi Mathlib.Algebra.Category.Ring.Basic Mathlib.Algebra.Category.Grp.Limits Mathlib.Algebra.Ring.Subring.Basic
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
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg(lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_RingCat_ringObj___rarg(lean_object*, lean_object*);
lean_object* l_Pi_semiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCat_ringObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_RingCat_ringObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj(lean_object*, lean_object*);
lean_object* l_Subsemiring_toSemiring___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SemiRingCat_semiringObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_semiringObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SemiRingCat_semiringObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SemiRingCat_sectionsSubsemiring___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SemiRingCat_sectionsSubsemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSubsemiring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SemiRingCat_sectionsSubsemiring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_SemiRingCat_sectionsSemiring___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Pi_semiring___rarg(x_2);
x_4 = l_SemiRingCat_sectionsSubsemiring___rarg(x_1);
lean_dec(x_1);
x_5 = l_Subsemiring_toSemiring___rarg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SemiRingCat_sectionsSemiring___rarg), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SemiRingCat_sectionsSemiring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SemiRingCat_sectionsSemiring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommSemiRingCat_commSemiringObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommSemiRingCat_commSemiringObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommSemiRingCat_commSemiringObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCat_ringObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_RingCat_ringObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingCat_ringObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCat_ringObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingCat_ringObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, lean_box(0));
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_RingCat_sectionsSubring___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_RingCat_sectionsSubring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_RingCat_sectionsSubring___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_RingCat_sectionsSubring(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj___rarg(lean_object* x_1, lean_object* x_2) {
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
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_CommRingCat_commRingObj___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_CommRingCat_commRingObj___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_CommRingCat_commRingObj(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Pi(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Ring_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Category_Grp_Limits(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Subring_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Category_Ring_Limits(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Pi(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Ring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Category_Grp_Limits(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Subring_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
