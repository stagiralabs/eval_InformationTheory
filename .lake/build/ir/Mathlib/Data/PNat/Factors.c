// Lean compiler output
// Module: Mathlib.Data.PNat.Factors
// Imports: Init Mathlib.Algebra.BigOperators.Group.Multiset.Basic Mathlib.Data.PNat.Prime Mathlib.Data.Nat.Factors Mathlib.Data.Multiset.OrderedMonoid Mathlib.Data.Multiset.Sort
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
static lean_object* l_PrimeMultiset_coeMultisetPNatNat___closed__1;
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset___lambda__1(lean_object*);
lean_object* l_Nat_Primes_instRepr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset___lambda__1___boxed(lean_object*);
static lean_object* l_PrimeMultiset_coeMultisetPNatNat___closed__2;
LEAN_EXPORT lean_object* l_PrimeMultiset_coeMultisetPNatNat;
static lean_object* l_PrimeMultiset_toPNatMultiset___closed__1;
lean_object* l_Nat_Primes_toPNat___boxed(lean_object*);
static lean_object* l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1;
static lean_object* l_PrimeMultiset_instRepr___closed__1;
lean_object* l_Multiset_sub___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_toPNatMultiset(lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_coePNatMonoidHom;
LEAN_EXPORT lean_object* l_PrimeMultiset_coeNat;
LEAN_EXPORT lean_object* l_PNat_factorMultiset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_prod(lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset(lean_object*, lean_object*);
static lean_object* l_PrimeMultiset_coeNat___closed__1;
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPNatList(lean_object*, lean_object*);
lean_object* l_Multiset_map___rarg(lean_object*, lean_object*);
lean_object* l_PNat_val___boxed(lean_object*);
lean_object* l_Multiset_instOrderedCancelAddCommMonoid(lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_coePNat;
static lean_object* l_PNat_factorMultisetEquiv___closed__2;
lean_object* l_Multiset_instLattice___rarg(lean_object*);
lean_object* l_Multiset_instRepr___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPrimeMultisetInhabited;
static lean_object* l_PrimeMultiset_instRepr___closed__2;
lean_object* l_Multiset_pmap___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_PrimeMultiset_coePNat___closed__1;
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPrimeMultisetOrderedCancelAddCommMonoid;
static lean_object* l_PrimeMultiset_ofNatMultiset___closed__1;
static lean_object* l_instPrimeMultisetSub___closed__1;
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_factorMultisetEquiv;
static lean_object* l_instPrimeMultisetDistribLattice___closed__2;
static lean_object* l_instPrimeMultisetDistribLattice___closed__1;
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPrime(lean_object*);
LEAN_EXPORT lean_object* l_PNat_factorMultiset(lean_object*);
static lean_object* l_PrimeMultiset_toNatMultiset___closed__1;
LEAN_EXPORT lean_object* l_PrimeMultiset_coeNatMonoidHom;
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPNatMultiset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instPrimeMultisetSemilatticeSup;
static lean_object* l_PNat_factorMultisetEquiv___closed__3;
lean_object* l_List_foldrTR___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1;
LEAN_EXPORT lean_object* l_instPrimeMultisetDistribLattice;
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOrderBotPrimeMultiset;
LEAN_EXPORT lean_object* l_Multiset_prod___at_PrimeMultiset_prod___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PrimeMultiset_instRepr;
lean_object* l_Nat_primeFactorsList(lean_object*);
LEAN_EXPORT lean_object* l_instPrimeMultisetSub;
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset(lean_object*);
static lean_object* l_PNat_factorMultisetEquiv___closed__1;
lean_object* l_Nat_instPrimesDecidableEq___boxed(lean_object*, lean_object*);
static lean_object* _init_l_instPrimeMultisetInhabited() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Multiset_instOrderedCancelAddCommMonoid(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_instPrimeMultisetOrderedCancelAddCommMonoid() {
_start:
{
lean_object* x_1; 
x_1 = l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1;
return x_1;
}
}
static lean_object* _init_l_instPrimeMultisetDistribLattice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instPrimesDecidableEq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instPrimeMultisetDistribLattice___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instPrimeMultisetDistribLattice___closed__1;
x_2 = l_Multiset_instLattice___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_instPrimeMultisetDistribLattice() {
_start:
{
lean_object* x_1; 
x_1 = l_instPrimeMultisetDistribLattice___closed__2;
return x_1;
}
}
static lean_object* _init_l_instPrimeMultisetSemilatticeSup() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instPrimeMultisetDistribLattice___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_instPrimeMultisetSub___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_instPrimeMultisetDistribLattice___closed__1;
x_2 = lean_alloc_closure((void*)(l_Multiset_sub___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_instPrimeMultisetSub() {
_start:
{
lean_object* x_1; 
x_1 = l_instPrimeMultisetSub___closed__1;
return x_1;
}
}
static lean_object* _init_l_instOrderBotPrimeMultiset() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_instRepr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Primes_instRepr___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_instRepr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PrimeMultiset_instRepr___closed__1;
x_2 = lean_alloc_closure((void*)(l_Multiset_instRepr___rarg___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_PrimeMultiset_instRepr() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_instRepr___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPrime(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset___lambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_toNatMultiset___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PrimeMultiset_toNatMultiset___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_PrimeMultiset_toNatMultiset___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_toNatMultiset___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PrimeMultiset_toNatMultiset___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_PrimeMultiset_coeNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PrimeMultiset_toNatMultiset), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coeNat() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_coeNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coeNatMonoidHom() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_coeNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_toPNatMultiset___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_Primes_toPNat___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_toPNatMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_PrimeMultiset_toPNatMultiset___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_PrimeMultiset_coePNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PrimeMultiset_toPNatMultiset), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coePNat() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_coePNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coePNatMonoidHom() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_coePNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coeMultisetPNatNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PNat_val___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_coeMultisetPNatNat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PrimeMultiset_coeMultisetPNatNat___closed__1;
x_2 = lean_alloc_closure((void*)(l_Multiset_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_PrimeMultiset_coeMultisetPNatNat() {
_start:
{
lean_object* x_1; 
x_1 = l_PrimeMultiset_coeMultisetPNatNat___closed__2;
return x_1;
}
}
static lean_object* _init_l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Multiset_prod___at_PrimeMultiset_prod___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1;
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_List_foldrTR___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_prod(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_PrimeMultiset_toPNatMultiset___closed__1;
x_3 = l_Multiset_map___rarg(x_2, x_1);
x_4 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_List_foldrTR___rarg(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_PrimeMultiset_ofNatMultiset___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PrimeMultiset_ofNatMultiset___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PrimeMultiset_ofNatMultiset___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatMultiset___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PrimeMultiset_ofNatMultiset___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPNatMultiset(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PrimeMultiset_ofNatMultiset___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofNatList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PrimeMultiset_ofNatMultiset___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PrimeMultiset_ofPNatList(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_PrimeMultiset_ofNatMultiset___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_1, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_factorMultiset(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Nat_primeFactorsList(x_1);
x_3 = l_PrimeMultiset_ofNatMultiset___closed__1;
x_4 = l_Multiset_pmap___rarg(x_3, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_PNat_factorMultiset___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PNat_factorMultiset(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_PNat_factorMultisetEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PNat_factorMultiset___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PNat_factorMultisetEquiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PrimeMultiset_prod), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PNat_factorMultisetEquiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PNat_factorMultisetEquiv___closed__1;
x_2 = l_PNat_factorMultisetEquiv___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_PNat_factorMultisetEquiv() {
_start:
{
lean_object* x_1; 
x_1 = l_PNat_factorMultisetEquiv___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Group_Multiset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Prime(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Factors(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_OrderedMonoid(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Multiset_Sort(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_PNat_Factors(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Group_Multiset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Prime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Factors(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_OrderedMonoid(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Multiset_Sort(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instPrimeMultisetInhabited = _init_l_instPrimeMultisetInhabited();
lean_mark_persistent(l_instPrimeMultisetInhabited);
l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1 = _init_l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1();
lean_mark_persistent(l_instPrimeMultisetOrderedCancelAddCommMonoid___closed__1);
l_instPrimeMultisetOrderedCancelAddCommMonoid = _init_l_instPrimeMultisetOrderedCancelAddCommMonoid();
lean_mark_persistent(l_instPrimeMultisetOrderedCancelAddCommMonoid);
l_instPrimeMultisetDistribLattice___closed__1 = _init_l_instPrimeMultisetDistribLattice___closed__1();
lean_mark_persistent(l_instPrimeMultisetDistribLattice___closed__1);
l_instPrimeMultisetDistribLattice___closed__2 = _init_l_instPrimeMultisetDistribLattice___closed__2();
lean_mark_persistent(l_instPrimeMultisetDistribLattice___closed__2);
l_instPrimeMultisetDistribLattice = _init_l_instPrimeMultisetDistribLattice();
lean_mark_persistent(l_instPrimeMultisetDistribLattice);
l_instPrimeMultisetSemilatticeSup = _init_l_instPrimeMultisetSemilatticeSup();
lean_mark_persistent(l_instPrimeMultisetSemilatticeSup);
l_instPrimeMultisetSub___closed__1 = _init_l_instPrimeMultisetSub___closed__1();
lean_mark_persistent(l_instPrimeMultisetSub___closed__1);
l_instPrimeMultisetSub = _init_l_instPrimeMultisetSub();
lean_mark_persistent(l_instPrimeMultisetSub);
l_instOrderBotPrimeMultiset = _init_l_instOrderBotPrimeMultiset();
lean_mark_persistent(l_instOrderBotPrimeMultiset);
l_PrimeMultiset_instRepr___closed__1 = _init_l_PrimeMultiset_instRepr___closed__1();
lean_mark_persistent(l_PrimeMultiset_instRepr___closed__1);
l_PrimeMultiset_instRepr___closed__2 = _init_l_PrimeMultiset_instRepr___closed__2();
lean_mark_persistent(l_PrimeMultiset_instRepr___closed__2);
l_PrimeMultiset_instRepr = _init_l_PrimeMultiset_instRepr();
lean_mark_persistent(l_PrimeMultiset_instRepr);
l_PrimeMultiset_toNatMultiset___closed__1 = _init_l_PrimeMultiset_toNatMultiset___closed__1();
lean_mark_persistent(l_PrimeMultiset_toNatMultiset___closed__1);
l_PrimeMultiset_coeNat___closed__1 = _init_l_PrimeMultiset_coeNat___closed__1();
lean_mark_persistent(l_PrimeMultiset_coeNat___closed__1);
l_PrimeMultiset_coeNat = _init_l_PrimeMultiset_coeNat();
lean_mark_persistent(l_PrimeMultiset_coeNat);
l_PrimeMultiset_coeNatMonoidHom = _init_l_PrimeMultiset_coeNatMonoidHom();
lean_mark_persistent(l_PrimeMultiset_coeNatMonoidHom);
l_PrimeMultiset_toPNatMultiset___closed__1 = _init_l_PrimeMultiset_toPNatMultiset___closed__1();
lean_mark_persistent(l_PrimeMultiset_toPNatMultiset___closed__1);
l_PrimeMultiset_coePNat___closed__1 = _init_l_PrimeMultiset_coePNat___closed__1();
lean_mark_persistent(l_PrimeMultiset_coePNat___closed__1);
l_PrimeMultiset_coePNat = _init_l_PrimeMultiset_coePNat();
lean_mark_persistent(l_PrimeMultiset_coePNat);
l_PrimeMultiset_coePNatMonoidHom = _init_l_PrimeMultiset_coePNatMonoidHom();
lean_mark_persistent(l_PrimeMultiset_coePNatMonoidHom);
l_PrimeMultiset_coeMultisetPNatNat___closed__1 = _init_l_PrimeMultiset_coeMultisetPNatNat___closed__1();
lean_mark_persistent(l_PrimeMultiset_coeMultisetPNatNat___closed__1);
l_PrimeMultiset_coeMultisetPNatNat___closed__2 = _init_l_PrimeMultiset_coeMultisetPNatNat___closed__2();
lean_mark_persistent(l_PrimeMultiset_coeMultisetPNatNat___closed__2);
l_PrimeMultiset_coeMultisetPNatNat = _init_l_PrimeMultiset_coeMultisetPNatNat();
lean_mark_persistent(l_PrimeMultiset_coeMultisetPNatNat);
l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1 = _init_l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1();
lean_mark_persistent(l_Multiset_prod___at_PrimeMultiset_prod___spec__1___closed__1);
l_PrimeMultiset_ofNatMultiset___closed__1 = _init_l_PrimeMultiset_ofNatMultiset___closed__1();
lean_mark_persistent(l_PrimeMultiset_ofNatMultiset___closed__1);
l_PNat_factorMultisetEquiv___closed__1 = _init_l_PNat_factorMultisetEquiv___closed__1();
lean_mark_persistent(l_PNat_factorMultisetEquiv___closed__1);
l_PNat_factorMultisetEquiv___closed__2 = _init_l_PNat_factorMultisetEquiv___closed__2();
lean_mark_persistent(l_PNat_factorMultisetEquiv___closed__2);
l_PNat_factorMultisetEquiv___closed__3 = _init_l_PNat_factorMultisetEquiv___closed__3();
lean_mark_persistent(l_PNat_factorMultisetEquiv___closed__3);
l_PNat_factorMultisetEquiv = _init_l_PNat_factorMultisetEquiv();
lean_mark_persistent(l_PNat_factorMultisetEquiv);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
