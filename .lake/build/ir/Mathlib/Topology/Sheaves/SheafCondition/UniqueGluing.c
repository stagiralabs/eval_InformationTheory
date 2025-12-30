// Lean compiler output
// Module: Mathlib.Topology.Sheaves.SheafCondition.UniqueGluing
// Imports: Init Mathlib.Topology.Sheaves.Forget Mathlib.Topology.Sheaves.SheafCondition.PairwiseIntersections Mathlib.CategoryTheory.Limits.Shapes.Types
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
lean_object* l_Lattice_toSemilatticeInf___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_IsCompatible_sectionPairwise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_TopologicalSpace_Opens_instCompleteLattice___rarg(lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_IsCompatible_sectionPairwise___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_objPairwiseOfFamily(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_TopCat_Presheaf_objPairwiseOfFamily(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_4);
lean_inc(x_9);
x_12 = lean_apply_1(x_4, x_9);
x_13 = l_TopologicalSpace_Opens_instCompleteLattice___rarg(x_1);
x_14 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_1(x_4, x_10);
lean_inc(x_12);
x_17 = l_Lattice_toSemilatticeInf___elambda__1___rarg(x_15, x_12, x_16);
x_18 = lean_apply_1(x_5, x_9);
x_19 = lean_apply_4(x_11, x_12, x_17, lean_box(0), x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_IsCompatible_sectionPairwise___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_TopCat_Presheaf_objPairwiseOfFamily(x_1, x_2, lean_box(0), x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_TopCat_Presheaf_IsCompatible_sectionPairwise(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_TopCat_Presheaf_IsCompatible_sectionPairwise___elambda__1), 6, 5);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_Forget(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sheaves_SheafCondition_PairwiseIntersections(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Sheaves_SheafCondition_UniqueGluing(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_Forget(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sheaves_SheafCondition_PairwiseIntersections(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Limits_Shapes_Types(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
