// Lean compiler output
// Module: Mathlib.Algebra.MonoidAlgebra.ToDirectSum
// Imports: Init Mathlib.Algebra.DirectSum.Algebra Mathlib.Algebra.MonoidAlgebra.Basic Mathlib.Data.Finsupp.ToDFinsupp
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
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum(lean_object*, lean_object*, lean_object*);
lean_object* l_DFinsupp_toFinsupp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum(lean_object*, lean_object*);
lean_object* l_Finsupp_toDFinsupp___rarg(lean_object*, lean_object*);
lean_object* l_Semiring_toNonAssocSemiring___rarg(lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraAddEquivDirectSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraAddEquivDirectSum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Semiring_toNonAssocSemiring___rarg(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Finsupp_toDFinsupp___rarg(x_6, x_2);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_AddMonoidAlgebra_toDirectSum___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_AddMonoidAlgebra_toDirectSum___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidAlgebra_toDirectSum___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_Semiring_toNonAssocSemiring___rarg(x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_NonUnitalNonAssocSemiring_toMulZeroClass___rarg(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_DFinsupp_toFinsupp___rarg(x_1, x_8, x_3, x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_DirectSum_toAddMonoidAlgebra___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DirectSum_toAddMonoidAlgebra___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DirectSum_toAddMonoidAlgebra___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_DirectSum_toAddMonoidAlgebra___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AddMonoidAlgebra_toDirectSum___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg___boxed), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addMonoidAlgebraEquivDirectSum___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_addMonoidAlgebraEquivDirectSum___elambda__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_addMonoidAlgebraEquivDirectSum___elambda__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraAddEquivDirectSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_AddMonoidAlgebra_toDirectSum___rarg___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_closure((void*)(l_DirectSum_toAddMonoidAlgebra___rarg___boxed), 4, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraAddEquivDirectSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addMonoidAlgebraAddEquivDirectSum___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_AddMonoidAlgebra_toDirectSum___rarg___boxed), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_closure((void*)(l_DirectSum_toAddMonoidAlgebra___rarg___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_addMonoidAlgebraRingEquivDirectSum___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraRingEquivDirectSum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_addMonoidAlgebraRingEquivDirectSum___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_AddMonoidAlgebra_toDirectSum___rarg___boxed), 2, 1);
lean_closure_set(x_7, 0, x_4);
x_8 = lean_alloc_closure((void*)(l_DirectSum_toAddMonoidAlgebra___rarg___boxed), 4, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_addMonoidAlgebraAlgEquivDirectSum___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_addMonoidAlgebraAlgEquivDirectSum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_addMonoidAlgebraAlgEquivDirectSum___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_DirectSum_Algebra(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Finsupp_ToDFinsupp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Algebra_MonoidAlgebra_ToDirectSum(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_DirectSum_Algebra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_MonoidAlgebra_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Finsupp_ToDFinsupp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
