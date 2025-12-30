// Lean compiler output
// Module: Mathlib.Topology.Algebra.PontryaginDual
// Imports: Init Mathlib.Analysis.SpecialFunctions.Complex.Circle Mathlib.Topology.Algebra.Group.CompactOpen
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
lean_object* l_ContinuousMonoidHom_instFunLike___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PontryaginDual_instFunLikeCircle(lean_object*, lean_object*, lean_object*);
static lean_object* l_PontryaginDual_instFunLikeCircle___closed__1;
LEAN_EXPORT lean_object* l_instTopologicalSpacePontryaginDual___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTopologicalSpacePontryaginDual(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PontryaginDual_instFunLikeCircle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTopologicalSpacePontryaginDual(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instTopologicalSpacePontryaginDual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_instTopologicalSpacePontryaginDual(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_PontryaginDual_instFunLikeCircle___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ContinuousMonoidHom_instFunLike___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_PontryaginDual_instFunLikeCircle(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PontryaginDual_instFunLikeCircle___closed__1;
return x_4;
}
}
LEAN_EXPORT lean_object* l_PontryaginDual_instFunLikeCircle___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_PontryaginDual_instFunLikeCircle(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_SpecialFunctions_Complex_Circle(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Algebra_Group_CompactOpen(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_Algebra_PontryaginDual(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_SpecialFunctions_Complex_Circle(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Algebra_Group_CompactOpen(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_PontryaginDual_instFunLikeCircle___closed__1 = _init_l_PontryaginDual_instFunLikeCircle___closed__1();
lean_mark_persistent(l_PontryaginDual_instFunLikeCircle___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
