// Lean compiler output
// Module: Mathlib.Topology.MetricSpace.Kuratowski
// Imports: Init Mathlib.Analysis.Normed.Lp.lpSpace Mathlib.Topology.Sets.Compacts
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
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___elambda__1(lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(lean_object*, lean_object*);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(lean_object*);
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset(lean_object*);
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_2);
x_6 = lean_apply_1(x_2, x_4);
lean_inc(x_5);
lean_inc(x_6);
x_7 = lean_apply_2(x_5, x_3, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_apply_2(x_5, x_9, x_6);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_827_(x_10);
x_12 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_657_(x_7, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_KuratowskiEmbedding_embeddingOfSubset___elambda__1___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_KuratowskiEmbedding_embeddingOfSubset___elambda__1___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_KuratowskiEmbedding_embeddingOfSubset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_KuratowskiEmbedding_embeddingOfSubset___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Analysis_Normed_Lp_lpSpace(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Topology_Sets_Compacts(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Topology_MetricSpace_Kuratowski(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Analysis_Normed_Lp_lpSpace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Topology_Sets_Compacts(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
