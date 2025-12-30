// Lean compiler output
// Module: Mathlib.Data.NNRat.Floor
// Imports: Init Mathlib.Data.NNRat.Order Mathlib.Data.Rat.Floor
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
lean_object* l_Int_ceil___at_Rat_evalIntCeil___elambda__1___spec__4(lean_object*);
static lean_object* l_NNRat_instFloorSemiring___closed__3;
LEAN_EXPORT lean_object* l_Nat_floor___at_NNRat_instFloorSemiring___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Nat_ceil___at_NNRat_instFloorSemiring___spec__2(lean_object*);
lean_object* l_Int_floor___at_Rat_evalIntFloor___elambda__1___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_NNRat_instFloorSemiring;
lean_object* l_Int_toNat(lean_object*);
static lean_object* l_NNRat_instFloorSemiring___closed__1;
static lean_object* l_NNRat_instFloorSemiring___closed__2;
LEAN_EXPORT lean_object* l_Nat_floor___at_NNRat_instFloorSemiring___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Int_floor___at_Rat_evalIntFloor___elambda__1___spec__4(x_1);
x_3 = l_Int_toNat(x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_ceil___at_NNRat_instFloorSemiring___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Int_ceil___at_Rat_evalIntCeil___elambda__1___spec__4(x_1);
x_3 = l_Int_toNat(x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_NNRat_instFloorSemiring___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_floor___at_NNRat_instFloorSemiring___spec__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_instFloorSemiring___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_ceil___at_NNRat_instFloorSemiring___spec__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_NNRat_instFloorSemiring___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_NNRat_instFloorSemiring___closed__1;
x_2 = l_NNRat_instFloorSemiring___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_NNRat_instFloorSemiring() {
_start:
{
lean_object* x_1; 
x_1 = l_NNRat_instFloorSemiring___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_NNRat_Order(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Rat_Floor(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_NNRat_Floor(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_NNRat_Order(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Rat_Floor(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_NNRat_instFloorSemiring___closed__1 = _init_l_NNRat_instFloorSemiring___closed__1();
lean_mark_persistent(l_NNRat_instFloorSemiring___closed__1);
l_NNRat_instFloorSemiring___closed__2 = _init_l_NNRat_instFloorSemiring___closed__2();
lean_mark_persistent(l_NNRat_instFloorSemiring___closed__2);
l_NNRat_instFloorSemiring___closed__3 = _init_l_NNRat_instFloorSemiring___closed__3();
lean_mark_persistent(l_NNRat_instFloorSemiring___closed__3);
l_NNRat_instFloorSemiring = _init_l_NNRat_instFloorSemiring();
lean_mark_persistent(l_NNRat_instFloorSemiring);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
