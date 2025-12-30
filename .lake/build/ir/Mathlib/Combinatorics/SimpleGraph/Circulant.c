// Lean compiler output
// Module: Mathlib.Combinatorics.SimpleGraph.Circulant
// Imports: Init Mathlib.Algebra.Group.Fin.Basic Mathlib.Algebra.Group.Pointwise.Set.Basic Mathlib.Combinatorics.SimpleGraph.Hasse
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
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph(lean_object*);
lean_object* l_instDecidableEqFin___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph__EulerianCircuit(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_addCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_circulantGraph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1;
extern uint8_t l_instDecidableFalse;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_circulantGraph___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph__EulerianCircuit___boxed(lean_object*);
static lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1;
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SimpleGraph_circulantGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_circulantGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_circulantGraph(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_apply_2(x_3, x_5, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_instDecidableNot___rarg(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_10 = 0;
x_11 = lean_box(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_12);
lean_inc(x_6);
lean_inc(x_5);
x_13 = lean_apply_2(x_12, x_5, x_6);
lean_inc(x_4);
x_14 = lean_apply_1(x_4, x_13);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_apply_2(x_12, x_6, x_5);
x_17 = lean_apply_1(x_4, x_16);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_18 = 1;
x_19 = lean_box(x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet___rarg), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_cycleGraph(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_mod(x_3, x_1);
x_5 = lean_nat_dec_eq(x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqFin___rarg___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_nat_add(x_7, x_6);
lean_dec(x_7);
lean_inc(x_8);
x_9 = l_Fin_addCommGroup(x_8, lean_box(0));
x_10 = lean_alloc_closure((void*)(l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_8);
x_11 = l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1;
x_12 = l_SimpleGraph_instDecidableRelAdjCirculantGraphOfDecidableEqOfDecidablePredMemSet___rarg(x_9, lean_box(0), x_11, x_10, x_2, x_3);
return x_12;
}
else
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_instDecidableFalse;
x_14 = lean_box(x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_SimpleGraph_instDecidableRelFinAdjCycleGraph___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_instDecidableRelFinAdjCycleGraph___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_SimpleGraph_instDecidableRelFinAdjCycleGraph(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_unsigned_to_nat(3u);
x_4 = lean_nat_add(x_1, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = lean_nat_add(x_8, x_7);
x_10 = lean_nat_mod(x_5, x_4);
lean_dec(x_4);
x_11 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons(x_1, x_8);
x_12 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1;
return x_13;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph__EulerianCircuit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(3u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_mod(x_4, x_3);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons(x_1, x_7);
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_5);
lean_ctor_set(x_9, 3, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_SimpleGraph_cycleGraph__EulerianCircuit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_SimpleGraph_cycleGraph__EulerianCircuit(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_2(x_3, x_7, lean_box(0));
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_1(x_2, lean_box(0));
return x_9;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0____private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons_match__1_splitter(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Fin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Set_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Hasse(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Combinatorics_SimpleGraph_Circulant(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Set_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Combinatorics_SimpleGraph_Hasse(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1 = _init_l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1();
lean_mark_persistent(l_SimpleGraph_instDecidableRelFinAdjCycleGraph___closed__1);
l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1 = _init_l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1();
lean_mark_persistent(l___private_Mathlib_Combinatorics_SimpleGraph_Circulant_0__SimpleGraph_cycleGraph__EulerianCircuit__cons___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
