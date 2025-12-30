// Lean compiler output
// Module: Mathlib.Data.Finset.SDiff
// Imports: Init Mathlib.Data.Finset.Lattice.Lemmas
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
LEAN_EXPORT lean_object* l_Finset_instSDiff___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGeneralizedBooleanAlgebra(lean_object*);
lean_object* l_Finset_instLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instSDiff(lean_object*);
LEAN_EXPORT lean_object* l_Finset_instGeneralizedBooleanAlgebra___rarg(lean_object*);
lean_object* l_List_diff___at_Multiset_sub___spec__6___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Finset_instSDiff___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_diff___at_Multiset_sub___spec__6___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Finset_instSDiff(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instSDiff___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Finset_instGeneralizedBooleanAlgebra___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = l_Finset_instLattice___rarg(x_1);
x_3 = lean_alloc_closure((void*)(l_Finset_instSDiff___rarg), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Finset_instGeneralizedBooleanAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Finset_instGeneralizedBooleanAlgebra___rarg), 1, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finset_Lattice_Lemmas(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Finset_SDiff(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finset_Lattice_Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
