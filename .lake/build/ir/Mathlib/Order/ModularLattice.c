// Lean compiler output
// Module: Mathlib.Order.ModularLattice
// Imports: Init Mathlib.Order.Cover Mathlib.Order.LatticeIntervals Mathlib.Order.GaloisConnection.Defs
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
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci(lean_object*);
LEAN_EXPORT lean_object* l_infIooOrderIsoIooSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_IsCompl_IicOrderIsoIci___rarg___closed__1;
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_trans___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_subtypeEquivProp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup(lean_object*);
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_infIooOrderIsoIooSup(lean_object*);
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_3, x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_infIccOrderIsoIccSup___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_infIccOrderIsoIccSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_infIccOrderIsoIccSup___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_infIooOrderIsoIooSup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_infIccOrderIsoIccSup___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_Lattice_toSemilatticeInf___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_infIooOrderIsoIooSup(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_infIooOrderIsoIooSup___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_IsCompl_IicOrderIsoIci___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_subtypeEquivProp(lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_infIccOrderIsoIccSup___rarg(x_1, lean_box(0), x_4, x_5);
x_8 = l_IsCompl_IicOrderIsoIci___rarg___closed__1;
x_9 = l_Equiv_trans___rarg(x_7, x_8);
x_10 = l_Equiv_trans___rarg(x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IsCompl_IicOrderIsoIci___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_IsCompl_IicOrderIsoIci___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IsCompl_IicOrderIsoIci___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Cover(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_LatticeIntervals(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_GaloisConnection_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_ModularLattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Cover(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_LatticeIntervals(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_GaloisConnection_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_IsCompl_IicOrderIsoIci___rarg___closed__1 = _init_l_IsCompl_IicOrderIsoIci___rarg___closed__1();
lean_mark_persistent(l_IsCompl_IicOrderIsoIci___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
