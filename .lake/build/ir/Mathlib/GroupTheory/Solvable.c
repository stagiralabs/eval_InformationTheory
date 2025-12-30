// Lean compiler output
// Module: Mathlib.GroupTheory.Solvable
// Imports: Init Mathlib.GroupTheory.Abelianization Mathlib.GroupTheory.Perm.ViaEmbedding Mathlib.GroupTheory.Subgroup.Simple
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
LEAN_EXPORT lean_object* l_derivedSeries(lean_object*);
LEAN_EXPORT lean_object* l_derivedSeries___rarg(lean_object*, lean_object*);
lean_object* l_Subgroup_closure___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_derivedSeries___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_derivedSeries___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Subgroup_closure___rarg(x_1, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, lean_box(0));
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_derivedSeries(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_derivedSeries___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_derivedSeries___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_derivedSeries___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Abelianization(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Perm_ViaEmbedding(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_GroupTheory_Subgroup_Simple(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_GroupTheory_Solvable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Abelianization(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Perm_ViaEmbedding(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_GroupTheory_Subgroup_Simple(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
