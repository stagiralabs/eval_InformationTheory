// Lean compiler output
// Module: Mathlib.Data.Sum.Lattice
// Imports: Init Mathlib.Data.Sum.Order Mathlib.Order.Hom.Lattice
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
static lean_object* l_Sum_Lex_inlLatticeHom___closed__1;
LEAN_EXPORT lean_object* l_Sum_Lex_inlLatticeHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_inrLatticeHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instDistribLattice___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_inrLatticeHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice(lean_object*, lean_object*);
lean_object* l_Sum_inr_u2097___rarg(lean_object*);
lean_object* l_Sum_Lex_preorder(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Sum_inl_u2097___rarg(lean_object*);
static lean_object* l_Sum_Lex_inrLatticeHom___closed__1;
LEAN_EXPORT lean_object* l_Sum_Lex_instDistribLattice(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_inlLatticeHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_5, x_7);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_11, x_5, x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_17; 
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_4, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_19);
return x_4;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_apply_2(x_25, x_22, x_24);
lean_ctor_set(x_4, 0, x_26);
return x_4;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_4, 0);
lean_inc(x_27);
lean_dec(x_4);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_apply_2(x_28, x_22, x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Sum_Lex_preorder(lean_box(0), lean_box(0), x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l_Sum_Lex_instSemilatticeSup___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeSup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_Lex_instSemilatticeSup___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_8, x_5, x_7);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_11, x_5, x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_4, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
lean_ctor_set_tag(x_4, 0);
lean_ctor_set(x_4, 0, x_16);
return x_4;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
lean_dec(x_3);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_4);
if (x_19 == 0)
{
return x_4;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_4, 0);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_3, 0);
lean_inc(x_22);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_apply_2(x_25, x_22, x_24);
lean_ctor_set(x_4, 0, x_26);
return x_4;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_4, 0);
lean_inc(x_27);
lean_dec(x_4);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_apply_2(x_28, x_22, x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Sum_Lex_preorder(lean_box(0), lean_box(0), x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l_Sum_Lex_instSemilatticeInf___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instSemilatticeInf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_Lex_instSemilatticeInf___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_5, x_7);
lean_ctor_set(x_4, 0, x_8);
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_1, x_5, x_9);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_4, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
lean_ctor_set_tag(x_4, 0);
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
return x_4;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_4);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_20, x_22);
lean_ctor_set(x_4, 0, x_23);
return x_4;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_4, 0);
lean_inc(x_24);
lean_dec(x_4);
x_25 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_2, x_20, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Sum_Lex_instSemilatticeSup___rarg(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Sum_Lex_instLattice___rarg___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_Lex_instLattice___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Sum_Lex_inlLatticeHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_inl_u2097___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_inlLatticeHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_Lex_inlLatticeHom___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_inlLatticeHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_Lex_inlLatticeHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Sum_Lex_inrLatticeHom___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Sum_inr_u2097___rarg), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_inrLatticeHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_Lex_inrLatticeHom___closed__1;
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_inrLatticeHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Sum_Lex_inrLatticeHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instDistribLattice___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Sum_Lex_instLattice___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Sum_Lex_instDistribLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_Lex_instDistribLattice___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Sum_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Hom_Lattice(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Sum_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Sum_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Hom_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Sum_Lex_inlLatticeHom___closed__1 = _init_l_Sum_Lex_inlLatticeHom___closed__1();
lean_mark_persistent(l_Sum_Lex_inlLatticeHom___closed__1);
l_Sum_Lex_inrLatticeHom___closed__1 = _init_l_Sum_Lex_inrLatticeHom___closed__1();
lean_mark_persistent(l_Sum_Lex_inrLatticeHom___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
