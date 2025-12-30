// Lean compiler output
// Module: Mathlib.Algebra.Group.UniqueProds.Basic
// Imports: Init Mathlib.Algebra.FreeMonoid.Basic Mathlib.Algebra.Group.Pointwise.Finset.Basic Mathlib.Algebra.Group.ULift Mathlib.Data.DFinsupp.Defs Mathlib.Data.Finsupp.Defs
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
lean_object* l_ULift_add___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg(lean_object*);
lean_object* l_Bool_rec____x40_Mathlib_Util_CompileInductive___hyg_3332____rarg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1(lean_object*);
lean_object* l_ULift_mul___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_ULift_mul___rarg), 3, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Bool_rec____x40_Mathlib_Util_CompileInductive___hyg_3332____rarg(x_4, x_5, x_3);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instMulI___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_ULift_add___elambda__1___rarg), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_ULift_add___elambda__1___rarg), 3, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Bool_rec____x40_Mathlib_Util_CompileInductive___hyg_3332____rarg(x_4, x_5, x_3);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__instAddI___rarg(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Bool_rec____x40_Mathlib_Util_CompileInductive___hyg_3332____rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___elambda__1___rarg(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upMulHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Bool_rec____x40_Mathlib_Util_CompileInductive___hyg_3332____rarg(x_3, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg___boxed), 2, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___elambda__1___rarg(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__Prod_upAddHom(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downMulHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Algebra_Group_UniqueProds_Basic_0__downAddHom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_FreeMonoid_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_ULift(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_DFinsupp_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_Defs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_Group_UniqueProds_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_FreeMonoid_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Pointwise_Finset_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_ULift(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_DFinsupp_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
