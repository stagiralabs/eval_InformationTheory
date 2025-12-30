// Lean compiler output
// Module: Mathlib.FieldTheory.Galois.Profinite
// Imports: Init Mathlib.FieldTheory.KrullTopology Mathlib.FieldTheory.Galois.GaloisClosure Mathlib.Topology.Algebra.Category.ProfiniteGrp.Basic
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
lean_object* l_Algebra_id___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup(lean_object*, lean_object*);
lean_object* l_Semifield_toDivisionSemiring___rarg(lean_object*);
lean_object* l_AlgEquiv_aut___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subfield_toField___rarg(lean_object*, lean_object*);
lean_object* l_IntermediateField_algebra_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Field_toSemifield___rarg(lean_object*);
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = l_Field_toSemifield___rarg(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_2);
x_9 = l_Subfield_toField___rarg(x_2, x_5);
x_10 = l_Field_toSemifield___rarg(x_9);
lean_dec(x_9);
x_11 = l_Semifield_toDivisionSemiring___rarg(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_8);
x_13 = l_Algebra_id___rarg(x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_3);
x_15 = l_IntermediateField_algebra_x27___rarg(x_1, x_2, x_3, x_5, x_8, x_14, x_3, lean_box(0));
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
x_16 = l_AlgEquiv_aut___rarg(x_8, x_12, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_4);
x_5 = l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg(x_1, x_2, x_3, x_4, x_4, lean_box(0));
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_FiniteGaloisIntermediateField_finGaloisGroup___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_FiniteGrp_of___at_FiniteGaloisIntermediateField_finGaloisGroup___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_FiniteGaloisIntermediateField_finGaloisGroup___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_FiniteGaloisIntermediateField_finGaloisGroup___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_KrullTopology(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_FieldTheory_Galois_GaloisClosure(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Category_ProfiniteGrp_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_FieldTheory_Galois_Profinite(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_KrullTopology(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_FieldTheory_Galois_GaloisClosure(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Category_ProfiniteGrp_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
