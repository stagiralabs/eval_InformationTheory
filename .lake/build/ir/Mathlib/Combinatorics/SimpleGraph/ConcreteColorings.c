// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.ConcreteColorings
// Imports: Init Mathlib.Combinatorics.SimpleGraph.Circulant Mathlib.Combinatorics.SimpleGraph.Coloring Mathlib.Combinatorics.SimpleGraph.Hasse Mathlib.Data.Fin.Parity
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
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___rarg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring___elambda__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_mod(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_SimpleGraph_pathGraph_bicoloring___elambda__1___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_pathGraph_bicoloring___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph_bicoloring___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_pathGraph_bicoloring(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_pathGraph__two__embedding___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_pathGraph__two__embedding___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_pathGraph__two__embedding___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_pathGraph__two__embedding(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_mod(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_cycleGraph_bicoloring__of__even___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_bicoloring__of__even___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_cycleGraph_bicoloring__of__even(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_1, x_3);
x_5 = lean_nat_dec_eq(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_mod(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_unsigned_to_nat(2u);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_SimpleGraph_cycleGraph_tricoloring___elambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph_tricoloring___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SimpleGraph_cycleGraph_tricoloring___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Circulant(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Coloring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Hasse(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Parity(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_ConcreteColorings(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Circulant(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Coloring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Hasse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
