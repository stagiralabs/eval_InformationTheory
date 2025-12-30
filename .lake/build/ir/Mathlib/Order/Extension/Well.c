// Lean compiler output
// Module: Mathlib.Order.Extension.Well
// Imports: Init Mathlib.Data.Prod.Lex Mathlib.SetTheory.Ordinal.Rank
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
static lean_object* l_toWellOrderExtension___closed__1;
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension___rarg(lean_object*);
LEAN_EXPORT lean_object* l_toWellOrderExtension(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension___rarg___boxed(lean_object*);
lean_object* l_Equiv_refl(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instInhabitedWellOrderExtension___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instInhabitedWellOrderExtension___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instInhabitedWellOrderExtension___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_toWellOrderExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_refl(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_toWellOrderExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_toWellOrderExtension___closed__1;
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Prod_Lex(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_SetTheory_Ordinal_Rank(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Order_Extension_Well(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Prod_Lex(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetTheory_Ordinal_Rank(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_toWellOrderExtension___closed__1 = _init_l_toWellOrderExtension___closed__1();
lean_mark_persistent(l_toWellOrderExtension___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
