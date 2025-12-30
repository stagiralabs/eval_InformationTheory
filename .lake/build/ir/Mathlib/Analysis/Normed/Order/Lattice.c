// Lean compiler output
// Module: Mathlib.Analysis.Normed.Order.Lattice
// Imports: Init Mathlib.Analysis.Normed.Group.Constructions Mathlib.Analysis.Normed.Group.Rat Mathlib.Analysis.Normed.Group.Uniform Mathlib.Topology.Order.Lattice
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
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg___boxed(lean_object*);
extern lean_object* l_Real_lattice;
static lean_object* l_Rat_normedLatticeAddCommGroup___closed__1;
LEAN_EXPORT lean_object* l_Rat_normedLatticeAddCommGroup;
extern lean_object* l_Rat_instLattice;
static lean_object* l_Int_normedLatticeAddCommGroup___closed__1;
extern lean_object* l_Real_normedAddCommGroup;
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Int_instNormedAddCommGroup;
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Int_normedLatticeAddCommGroup;
lean_object* l_OrderDual_orderedAddCommGroup___rarg(lean_object*);
extern lean_object* l_instLatticeInt;
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup(lean_object*);
extern lean_object* l_Rat_instNormedAddCommGroup;
static lean_object* l_Real_normedLatticeAddCommGroup___closed__1;
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Real_normedLatticeAddCommGroup;
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup(lean_object*);
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_normedLatticeAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_instNormedAddCommGroup;
x_2 = l_instLatticeInt;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Int_normedLatticeAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_normedLatticeAddCommGroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_Rat_normedLatticeAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Rat_instNormedAddCommGroup;
x_2 = l_Rat_instLattice;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Rat_normedLatticeAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Rat_normedLatticeAddCommGroup___closed__1;
return x_1;
}
}
static lean_object* _init_l_Real_normedLatticeAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Real_normedAddCommGroup;
x_2 = l_Real_lattice;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Real_normedLatticeAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Real_normedLatticeAddCommGroup___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = l_NormedLatticeAddCommGroup_toOrderedAddCommGroup___rarg(x_1);
x_3 = l_OrderDual_orderedAddCommGroup___rarg(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_4, 1);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_ctor_set(x_4, 1, x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_5);
x_10 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_10, 0, x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_alloc_closure((void*)(l_OrderDual_instNormedLatticeAddCommGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 2);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_17);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
lean_inc(x_5);
x_21 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 1);
lean_closure_set(x_21, 0, x_5);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_5, 0);
lean_inc(x_23);
lean_dec(x_5);
x_24 = lean_alloc_closure((void*)(l_OrderDual_instNormedLatticeAddCommGroup___rarg___lambda__1), 3, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_OrderDual_instNormedLatticeAddCommGroup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OrderDual_instNormedLatticeAddCommGroup___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Constructions(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Rat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Uniform(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Order_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Order_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Constructions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Rat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Uniform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Order_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_normedLatticeAddCommGroup___closed__1 = _init_l_Int_normedLatticeAddCommGroup___closed__1();
lean_mark_persistent(l_Int_normedLatticeAddCommGroup___closed__1);
l_Int_normedLatticeAddCommGroup = _init_l_Int_normedLatticeAddCommGroup();
lean_mark_persistent(l_Int_normedLatticeAddCommGroup);
l_Rat_normedLatticeAddCommGroup___closed__1 = _init_l_Rat_normedLatticeAddCommGroup___closed__1();
lean_mark_persistent(l_Rat_normedLatticeAddCommGroup___closed__1);
l_Rat_normedLatticeAddCommGroup = _init_l_Rat_normedLatticeAddCommGroup();
lean_mark_persistent(l_Rat_normedLatticeAddCommGroup);
l_Real_normedLatticeAddCommGroup___closed__1 = _init_l_Real_normedLatticeAddCommGroup___closed__1();
lean_mark_persistent(l_Real_normedLatticeAddCommGroup___closed__1);
l_Real_normedLatticeAddCommGroup = _init_l_Real_normedLatticeAddCommGroup();
lean_mark_persistent(l_Real_normedLatticeAddCommGroup);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
