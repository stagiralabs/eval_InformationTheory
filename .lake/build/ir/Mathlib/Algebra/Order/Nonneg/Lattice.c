// Lean compiler output
// Module: Mathlib.Algebra.Order.Nonneg.Lattice
// Imports: Init Mathlib.Order.CompleteLatticeIntervals Mathlib.Order.LatticeIntervals
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
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_orderBot___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_distribLattice(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup___rarg(lean_object*, lean_object*);
lean_object* l_Set_Ici_lattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_orderBot___rarg___boxed(lean_object*);
lean_object* l_Set_Ici_semilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_distribLattice___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Set_Ici_semilatticeSup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_distribLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf(lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_orderBot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_orderBot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nonneg_orderBot___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Nonneg_orderBot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nonneg_orderBot___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_orderBot___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Nonneg_orderBot___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_orderBot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nonneg_orderBot(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_Ici_semilatticeSup___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_semilatticeSup___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeSup___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nonneg_semilatticeSup___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_Ici_semilatticeInf___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_semilatticeInf___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_semilatticeInf___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nonneg_semilatticeInf___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_distribLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Set_Ici_lattice___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nonneg_distribLattice(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nonneg_distribLattice___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nonneg_distribLattice___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nonneg_distribLattice___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompleteLatticeIntervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_LatticeIntervals(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Order_Nonneg_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompleteLatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_LatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
