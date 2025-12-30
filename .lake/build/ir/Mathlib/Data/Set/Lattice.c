// Lean compiler output
// Module: Mathlib.Data.Set.Lattice
// Imports: Init Mathlib.Logic.Pairwise Mathlib.Order.CompleteBooleanAlgebra Mathlib.Order.Directed Mathlib.Order.GaloisConnection.Basic Mathlib.Tactic.Cases
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
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_Set_sUnionPowersetGI___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_sUnion__powerset__gi(lean_object*);
LEAN_EXPORT lean_object* l_gi__sSup__Iic___at_Set_sUnionPowersetGI___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Set_instOrderTop(lean_object*);
LEAN_EXPORT lean_object* l_Set_sUnionPowersetGI(lean_object*);
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___rarg___boxed(lean_object*);
lean_object* l_Set_instBooleanAlgebra(lean_object*);
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion(lean_object*, lean_object*, lean_object*);
static lean_object* l_Set_instCompleteAtomicBooleanAlgebra___closed__1;
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_Set_sUnionPowersetGI___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Set_instCompleteAtomicBooleanAlgebra(lean_object*);
static lean_object* l_Set_instCompleteAtomicBooleanAlgebra___closed__2;
static lean_object* _init_l_Set_instCompleteAtomicBooleanAlgebra___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Set_instBooleanAlgebra(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Set_instCompleteAtomicBooleanAlgebra___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Set_instCompleteAtomicBooleanAlgebra___closed__1;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, lean_box(0));
lean_ctor_set(x_4, 2, lean_box(0));
lean_ctor_set(x_4, 3, lean_box(0));
lean_ctor_set(x_4, 4, lean_box(0));
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, lean_box(0));
lean_ctor_set(x_5, 2, lean_box(0));
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Set_instCompleteAtomicBooleanAlgebra(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_instCompleteAtomicBooleanAlgebra___closed__2;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_instOrderTop(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_Set_sUnionPowersetGI___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_gi__sSup__Iic___at_Set_sUnionPowersetGI___spec__1(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_sUnionPowersetGI(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_GaloisConnection_toGaloisInsertion___at_Set_sUnionPowersetGI___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_GaloisConnection_toGaloisInsertion___at_Set_sUnionPowersetGI___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Set_sUnion__powerset__gi(lean_object* x_1) {
_start:
{
return lean_box(0);
}
}
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Set_sigmaToiUnion___rarg___boxed), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Set_sigmaToiUnion___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Set_sigmaToiUnion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Set_sigmaToiUnion(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Pairwise(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_CompleteBooleanAlgebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Directed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_GaloisConnection_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Cases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Pairwise(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_CompleteBooleanAlgebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Directed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_GaloisConnection_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Cases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Set_instCompleteAtomicBooleanAlgebra___closed__1 = _init_l_Set_instCompleteAtomicBooleanAlgebra___closed__1();
lean_mark_persistent(l_Set_instCompleteAtomicBooleanAlgebra___closed__1);
l_Set_instCompleteAtomicBooleanAlgebra___closed__2 = _init_l_Set_instCompleteAtomicBooleanAlgebra___closed__2();
lean_mark_persistent(l_Set_instCompleteAtomicBooleanAlgebra___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
