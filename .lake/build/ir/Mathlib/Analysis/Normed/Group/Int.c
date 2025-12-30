// Lean compiler output
// Module: Mathlib.Analysis.Normed.Group.Int
// Imports: Init Mathlib.Analysis.Normed.Group.Basic Mathlib.Topology.Instances.Int
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
extern lean_object* l_Int_instAddCommGroup;
lean_object* l_Int_cast___at_Real_instIntCast___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Int_instNormedAddCommGroup___lambda__1(lean_object*);
static lean_object* l_Int_instNormedAddCommGroup___closed__2;
lean_object* l_abs___at_Real_nnabs___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_instNormedAddCommGroup;
static lean_object* l_Int_instNormedAddCommGroup___closed__1;
extern lean_object* l_Int_instMetricSpace;
LEAN_EXPORT lean_object* l_Int_instNormedAddCommGroup___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Int_cast___at_Real_instIntCast___spec__2(x_1);
x_3 = l_abs___at_Real_nnabs___spec__1(x_2);
return x_3;
}
}
static lean_object* _init_l_Int_instNormedAddCommGroup___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instNormedAddCommGroup___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instNormedAddCommGroup___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Int_instNormedAddCommGroup___closed__1;
x_2 = l_Int_instAddCommGroup;
x_3 = l_Int_instMetricSpace;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instNormedAddCommGroup() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instNormedAddCommGroup___closed__2;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Group_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Instances_Int(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_Normed_Group_Int(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Group_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Instances_Int(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Int_instNormedAddCommGroup___closed__1 = _init_l_Int_instNormedAddCommGroup___closed__1();
lean_mark_persistent(l_Int_instNormedAddCommGroup___closed__1);
l_Int_instNormedAddCommGroup___closed__2 = _init_l_Int_instNormedAddCommGroup___closed__2();
lean_mark_persistent(l_Int_instNormedAddCommGroup___closed__2);
l_Int_instNormedAddCommGroup = _init_l_Int_instNormedAddCommGroup();
lean_mark_persistent(l_Int_instNormedAddCommGroup);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
