// Lean compiler output
// Module: Mathlib.Analysis.Normed.Group.SemiNormedGrp.Completion
// Imports: Init Mathlib.Analysis.Normed.Group.SemiNormedGrp Mathlib.CategoryTheory.Preadditive.AdditiveFunctor Mathlib.Analysis.Normed.Group.HomCompletion
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
LEAN_EXPORT lean_object* l_SemiNormedGrp_completion_incl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiNormedGrp_instPreadditive;
lean_object* l_UniformSpace_Completion_coe_x27___rarg(lean_object*, lean_object*);
lean_object* l_SemiNormedGrp_Hom_addCommGroup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_SemiNormedGrp_completion_incl___boxed(lean_object*, lean_object*);
static lean_object* l_SemiNormedGrp_instPreadditive___closed__1;
LEAN_EXPORT lean_object* l_SemiNormedGrp_completion_incl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_3, 2);
x_5 = l_UniformSpace_Completion_coe_x27___rarg(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_SemiNormedGrp_completion_incl___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_SemiNormedGrp_completion_incl(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_SemiNormedGrp_instPreadditive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_SemiNormedGrp_Hom_addCommGroup), 2, 0);
return x_1;
}
}
static lean_object* _init_l_SemiNormedGrp_instPreadditive() {
_start:
{
lean_object* x_1; 
x_1 = l_SemiNormedGrp_instPreadditive___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_SemiNormedGrp(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_HomCompletion(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Group_SemiNormedGrp_Completion(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_SemiNormedGrp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_CategoryTheory_Preadditive_AdditiveFunctor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_HomCompletion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_SemiNormedGrp_instPreadditive___closed__1 = _init_l_SemiNormedGrp_instPreadditive___closed__1();
lean_mark_persistent(l_SemiNormedGrp_instPreadditive___closed__1);
l_SemiNormedGrp_instPreadditive = _init_l_SemiNormedGrp_instPreadditive();
lean_mark_persistent(l_SemiNormedGrp_instPreadditive);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
