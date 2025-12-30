// Lean compiler output
// Module: Mathlib.Analysis.CStarAlgebra.Module.Constructions
// Imports: Init Mathlib.Analysis.CStarAlgebra.Module.Defs Mathlib.Analysis.CStarAlgebra.Module.Synonym Mathlib.Topology.MetricSpace.Bilipschitz
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
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_smul___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule(lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Pi_mulAction___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_3);
x_7 = lean_apply_2(x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_WithCStarModule_instCStarModule___rarg___lambda__1), 4, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_WithCStarModule_instCStarModule___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModule___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WithCStarModule_instCStarModule___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Prod_smul___rarg), 4, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_WithCStarModule_instNormedSpaceComplexProd___rarg___boxed), 8, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_WithCStarModule_instNormedSpaceComplexProd___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexProd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_WithCStarModule_instNormedSpaceComplexProd(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Pi_mulAction___rarg), 4, 1);
lean_closure_set(x_5, 0, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_WithCStarModule_instNormedSpaceComplexForall___rarg___boxed), 4, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_WithCStarModule_instNormedSpaceComplexForall___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instNormedSpaceComplexForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_WithCStarModule_instNormedSpaceComplexForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_WithCStarModule_instCStarModuleComplex___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_WithCStarModule_instCStarModuleComplex___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_WithCStarModule_instCStarModuleComplex___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_WithCStarModule_instCStarModuleComplex(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_CStarAlgebra_Module_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_CStarAlgebra_Module_Synonym(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_MetricSpace_Bilipschitz(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Analysis_CStarAlgebra_Module_Constructions(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_CStarAlgebra_Module_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_CStarAlgebra_Module_Synonym(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_MetricSpace_Bilipschitz(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
