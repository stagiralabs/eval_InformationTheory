// Lean compiler output
// Module: Mathlib.Algebra.Lie.Semisimple.Basic
// Imports: Init Mathlib.Algebra.Lie.Semisimple.Defs Mathlib.Order.BooleanGenerators
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
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_lieRingSelfModule___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice(lean_object*, lean_object*);
lean_object* l_LieSubmodule_instCompleteLattice___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_CompleteLattice_toConditionallyCompleteLattice___rarg(lean_object*);
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_lieRingSelfModule___rarg(x_1);
lean_dec(x_1);
x_9 = l_LieSubmodule_instCompleteLattice___rarg(x_7, x_2, x_8);
x_10 = l_CompleteLattice_toConditionallyCompleteLattice___rarg(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___rarg), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___rarg(x_2, x_3, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LieAlgebra_IsSemisimple_instDistribLattice___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IsCompactlyGenerated_BooleanGenerators_distribLattice__of__sSup__eq__top___at_LieAlgebra_IsSemisimple_instDistribLattice___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_LieAlgebra_IsSemisimple_instDistribLattice___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_LieAlgebra_IsSemisimple_instDistribLattice___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Lie_Semisimple_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_BooleanGenerators(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Lie_Semisimple_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Lie_Semisimple_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_BooleanGenerators(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
