// Lean compiler output
// Module: Mathlib.Algebra.GroupWithZero.Action.Basic
// Imports: Init Mathlib.Algebra.Group.Action.End Mathlib.Algebra.Group.Action.Prod Mathlib.Algebra.GroupWithZero.Prod Mathlib.Algebra.SMulWithZero
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
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_mulAutArrow___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_AddEquiv_instEquivLike___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_mulAutArrow___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_MulDistribMulAction_toMulEquiv___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_DivInvOneMonoid_toInvOneClass___rarg(lean_object*);
lean_object* l_MulAction_toPerm___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulAutArrow(lean_object*, lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAut_applyDistribMulAction(lean_object*, lean_object*);
lean_object* l_DistribSMul_toAddMonoidHom___at_DistribMulAction_toAddMonoidHom___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_AddAut_applyDistribMulAction___closed__1;
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_arrowAction___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_mulAutArrow___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_smulMulHom___elambda__1___rarg(lean_object*, lean_object*);
lean_object* l_MulAction_toPerm___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddAut_applyDistribMulAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_mulAutArrow___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mulAutArrow___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_DistribSMul_toAddMonoidHom___at_DistribMulAction_toAddMonoidHom___spec__1___rarg), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = l_MulAction_toPerm___rarg(x_1, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddEquiv___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DistribMulAction_toAddEquiv___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_DistribMulAction_toAddEquiv___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DistribMulAction_toAddAut(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DistribMulAction_toAddAut___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_smulMulHom___elambda__1___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_smulMonoidWithZeroHom___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_smulMonoidWithZeroHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_smulMonoidWithZeroHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulAut___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MulAut_applyMulDistribMulAction___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MulAut_applyMulDistribMulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MulAut_applyMulDistribMulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_AddAut_applyDistribMulAction___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_AddEquiv_instEquivLike___elambda__2___rarg), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_AddAut_applyDistribMulAction(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddAut_applyDistribMulAction___closed__1;
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddAut_applyDistribMulAction___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddAut_applyDistribMulAction(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_arrowAction___rarg___boxed), 5, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_arrowMulDistribMulAction___rarg___boxed), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_arrowMulDistribMulAction___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_arrowMulDistribMulAction___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = l_DivInvOneMonoid_toInvOneClass___rarg(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_8, x_4);
x_10 = lean_apply_2(x_2, x_9, x_6);
x_11 = lean_apply_1(x_5, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_arrowAction___rarg___boxed), 5, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_inc(x_4);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__2___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_closure((void*)(l_MulAction_toPerm___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_mulAutArrow___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPermHom___at_mulAutArrow___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulAction_toPermHom___at_mulAutArrow___spec__4___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg___boxed), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_mulAutArrow___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMulAut___at_mulAutArrow___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulAut___at_mulAutArrow___spec__1___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulAutArrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MulDistribMulAction_toMulEquiv___at_mulAutArrow___spec__2___rarg), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mulAutArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_mulAutArrow___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MulDistribMulAction_toMonoidHom___at_mulAutArrow___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MulAction_toPerm___at_mulAutArrow___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_End(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Action_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Prod(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_SMulWithZero(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_GroupWithZero_Action_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_End(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Action_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Prod(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_SMulWithZero(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_AddAut_applyDistribMulAction___closed__1 = _init_l_AddAut_applyDistribMulAction___closed__1();
lean_mark_persistent(l_AddAut_applyDistribMulAction___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
